#ifndef __CONFIG_H__
#define __CONFIG_H__



#define PMEM_LEFT  0x80000000
#define PMEM_SIZE  0x10000000
#define PMEM_RIGHT PMEM_LEFT+PMEM_SIZE-1

#define CONFIG_MTRACE_START_ADDR    0x80000000
#define CONFIG_MTRACE_END_ADDR      0x8fffffff

#define CONFIG_DIFFTEST
// #define CONFIG_ITRACE
// #define CONFIG_FTRACE
// #define CONFIG_WATCHPOINT
// #define CONFIG_MTRACE
// #define CONFIG_DTRACE

// #define CONFIG_VGA

#define CONFIG_WAVE

#ifdef CONFIG_WAVE
    #define CONFIG_WAVE_PC_BEGIN    0x80004830
    #define CONFIG_WAVE_PC_END      0x8FFFFFFF
#endif

#endif
