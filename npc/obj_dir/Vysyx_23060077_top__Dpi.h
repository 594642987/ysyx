// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_23060077_TOP__DPI_H_
#define VERILATED_VYSYX_23060077_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_riscv_ifu.v:12:30
    extern void get_riscv32_rst(svBit rst_n);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_riscv_ifu.v:10:30
    extern void riscv_pmem_read(int raddr, int* rdata, int len, svLogic ren);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_riscv_lsu.v:76:30
    extern void riscv_pmem_write(int waddr, int wdata, int wmask, svLogic wen);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_riscv_csr.v:31:30
    extern void set_csr_ptr(const svOpenArrayHandle csr_reg);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_riscv_regfile.v:71:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_riscv_ifu.v:11:30
    extern void set_pc_ptr(int pc);

#ifdef __cplusplus
}
#endif

#endif  // guard
