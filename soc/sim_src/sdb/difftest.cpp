
#include "difftest.h"

#include "pmem.h"
#include "reg.h"

#include <dlfcn.h>


enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

extern uint32_t cpu_pc;
extern uint32_t *cpu_gpr;
extern uint32_t *csr_gpr;
extern CPU_state cpu;

#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);
// C++不允许将一个通用指针转换为任意类型指针，因此这里得将dlsym返回的指针转换成特定函数指针。
  ref_difftest_memcpy = (void(*)(paddr_t addr, void *buf, size_t n, bool direction))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void(*)(void *dut, bool direction))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void(*)(uint64_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

//   ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
//   assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(PMEM_LEFT, guest_to_host(PMEM_LEFT), img_size, DIFFTEST_TO_REF);
  package_cpu(PMEM_LEFT);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}
void difftest_memcpy_dut(paddr_t addr, void *buf, size_t n) {
  ref_difftest_memcpy(addr, buf, n, DIFFTEST_TO_DUT);
}

bool checkregs() {
    CPU_state ref;
    ref_difftest_regcpy(&ref, DIFFTEST_TO_DUT);
    if(!isa_difftest_checkregs(&ref)){
      printf("diff\n");
        isa_reg_display();
        return 1;
    }else{
        return 0;
    }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
    // CPU_state ref_r;

    // if (skip_dut_nr_inst > 0) {
    //   ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    //   if (ref_r.pc == npc) {
    //     skip_dut_nr_inst = 0;
    //     checkregs(&ref_r, npc);
    //     return;
    //   }
    //   skip_dut_nr_inst --;
    //   if (skip_dut_nr_inst == 0)
    //     panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    //   return;
    // }

    if (is_skip_ref) {
      // to skip the checking of an instruction, just copy the reg state to reference design
      package_cpu(pc);
      ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
      is_skip_ref = false;
      return;
    }

    ref_difftest_exec(1);
//   ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
//   // 发现ref执行完一条指令后cpu.pc直接到下一条，这里也要用npc
//   // checkregs(&ref_r, pc);
//   checkregs(&ref_r, npc);
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) {
  
}
#endif
