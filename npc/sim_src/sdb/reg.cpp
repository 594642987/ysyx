#include "reg.h"

#include "Vriscv32__Dpi.h"
#include "verilated_dpi.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

uint32_t cpu_pc;
extern "C" void set_pc_ptr(int pc) {
  cpu_pc = (uint32_t) pc;
}

uint32_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

void isa_reg_display() {
  printf("---------------------------cpu reg display start ---------------------------\n");
  for(int i=0; i<8; i++){
    printf("%3s : 0x%08x  ",regs[4*i+0],cpu_gpr[4*i+0]);
    printf("%3s : 0x%08x  ",regs[4*i+1],cpu_gpr[4*i+1]);
    printf("%3s : 0x%08x  ",regs[4*i+2],cpu_gpr[4*i+2]);
    printf("%3s : 0x%08x  ",regs[4*i+3],cpu_gpr[4*i+3]);
    printf("\n");
  }
//   printf("$pc : 0x%08x\n",cpu.pc);
//   printf("------------------------------reg display end -----------------------------\n");
}

bool isa_difftest_checkregs(CPU_state *ref){
    if(ref->pc != cpu_pc){
        printf("pc ref:0x%08x dut:0x%08x  \n",ref->pc,cpu_pc);
        return false;
    }
    for(int i=0; i<32; i++){
        if(cpu_gpr[i] != ref->gpr[i]){
            printf("%s: ref:0x%08x dut:0x%08x  \n",regs[i],ref->gpr[i],cpu_gpr[i]);
            return false;
        }
    }
    return true;
}

CPU_state package_cpu(uint32_t *gpr, uint32_t pc){
    CPU_state cpu;
    cpu.pc = pc;
    for(int i=0; i<32; i++){
        cpu.gpr[i] = gpr[i];
    }
    return cpu;
}

word_t isa_reg_str2val(const char *s, bool *success) {
  if(strcmp(s,"pc") == 0){
    // printf("$pc : 0x%08x\n",cpu.pc);
    return cpu.pc;
  }
  for(int i=0; i<32; i++){
    if(strcmp(s,regs[i]) == 0){
    //printf("%3s : 0x%08x  ",regs[i],cpu.gpr[i]);
      return cpu.gpr[i];
    }
  }
  printf("no such reg:%s\n",s);
  assert(0);
  *success = false;
  return 0;
}
