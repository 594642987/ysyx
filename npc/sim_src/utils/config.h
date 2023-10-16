#ifndef __CONFIG_H__
#define __CONFIG_H__



#define PMEM_LEFT  0x80000000
#define PMEM_RIGHT 0x8fffffff
#define PMEM_SIZE   PMEM_RIGHT-PMEM_LEFT+1

#define CONFIG_MTRACE_START_ADDR    0x80000000
#define CONFIG_MTRACE_END_ADDR      0x8fffffff

#define CONFIG_DIFFTEST
#define CONFIG_ITRACE
// #define CONFIG_FTRACE
// #define CONFIG_WATCHPOINT
// #define CONFIG_MTRACE



#endif


/*
   movsx
mul-longlong
shift
max
min3
*/