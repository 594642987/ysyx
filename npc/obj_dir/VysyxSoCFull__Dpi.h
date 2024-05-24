// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_ifu.v:41:30
    extern void get_riscv32_rst(svBit reset);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:4735:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_axi.v:171:30
    extern void set_axi_resp(int b_resp, int r_resp);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_csr.v:31:30
    extern void set_csr_ptr(const svOpenArrayHandle csr_reg);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_regfile.v:45:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077.v:333:30
    extern void set_pc_ptr(int pc, int inst, svBit valid);

#ifdef __cplusplus
}
#endif

#endif  // guard
