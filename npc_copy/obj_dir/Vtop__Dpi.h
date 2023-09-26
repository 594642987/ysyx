// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/jimple/Documents/ysyx/ysyx-workbench/npc_copy/vsrc/top.v:20:6
    extern void publicSetBool(svBit in_bool);

    // DPI IMPORTS
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc_copy/vsrc/top.v:8:29
    extern int add(int a, int b);

#ifdef __cplusplus
}
#endif

#endif  // guard
