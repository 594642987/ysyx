#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <inttypes.h>
#include <stdbool.h>

#include "config.h"
#include "debug.h"
#include "macro.h"

#ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS
#endif


#include "Vysyx_23060077_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


#ifdef ISA64
typedef uint64_t word_t;
typedef int64_t sword_t;
typedef uint64_t paddr_t;
#else
typedef uint32_t word_t;
typedef uint32_t paddr_t;
typedef int32_t sword_t;
#endif

typedef word_t vaddr_t;

typedef uint16_t ioaddr_t;

typedef struct{
    uint32_t gpr[32];
    uint32_t pc;
    uint32_t csr[4];
}CPU_state;
enum { MSTATUS, MTVEC, MEPC, MCAUSE};

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

extern NPCState npc_state;

#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)

#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)

#endif