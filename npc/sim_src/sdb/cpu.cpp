#include "cpu.h"

#include "reg.h"
#include "difftest.h"

#define MAX_INST_TO_PRINT 1000

#define dump_wave contextp->timeInc(1); tfp->dump(contextp->time());  

extern VerilatedContext* contextp;
extern Vriscv32* top;
extern VerilatedVcdC* tfp;

extern int stop_flag;
extern uint32_t cpu_pc;
uint32_t cpu_inst = 0;

NPCState npc_state = { .state = NPC_STOP };

CPU_state cpu = {};
static bool g_print_step = false;

int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) ||
    (npc_state.state == NPC_QUIT);
  // Log("%d",!good);
  return !good;
  // return 100;
}

static void exec_once() {
    top->clk = 1;
    top->eval();

    dump_wave;

    top->clk = 0;
    top->eval();
    
    dump_wave;

    //反汇编结果
#ifndef CONFIG_ITRACE
  char p[100];
  cpu_inst = pmem_read((uint32_t)raddr,4);
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, sizeof(p),cpu_pc, (uint8_t *)&cpu_inst, 4);
#else
  p[0] = '\0'; // the upstream llvm does not support loongarch32r
#endif
}

void reset(){
  for(int i=0; i<5; i++){
    top->rst_n = 0;
    exec_once();
  }
  top->rst_n = 1;
}



static void statistic() {
 
}

void assert_fail_msg() {
  isa_reg_display();
#ifdef CONFIG_IRINGBUF
  show_all_buffer();
#endif
  statistic();
}

static void trace_and_difftest() {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(cpu_pc)); }

#ifdef CONFIG_DIFFTEST
  difftest_step();
  if(checkregs()){
    // npc_state.state = NPC_STOP;
    return;
  }
#endif

#ifdef CONFIG_WATCHPOINT
  if(check_diff()){
    Log("Trigger the watchpoint!");
    wp_display();
    npc_state.state = NPC_STOP;
  }
#endif
}


static void execute(uint64_t n) {
  // uint64_t timer_start = get_time();

  for (;!contextp->gotFinish() && n > 0; n --) {
      exec_once();
      printf("%8x\n",cpu_pc);
      trace_and_difftest();

    if (npc_state.state != NPC_RUNNING) break;
    if (stop_flag == 1) break;
  }
}


void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  // uint64_t timer_start = get_time();

  execute(n);

  // uint64_t timer_end = get_time();
  // g_timer += timer_end - timer_start;

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: case NPC_ABORT:
      Log("NPC: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED):
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
      // fall through
    case NPC_QUIT: statistic();
  }
}