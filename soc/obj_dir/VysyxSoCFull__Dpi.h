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
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/soc/vsrc/ysyx_23060077_lsu.v:137:30
    extern void device_skip(svBit ren, int raddr, svBit wen, int waddr);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/soc/vsrc/ysyx_23060077_ifu.v:44:30
    extern void get_riscv32_rst(svBit reset);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:4744:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/ysyxSoC/perip/psram/psram.v:111:30
    extern void psram_read(int addr, int* data);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/ysyxSoC/perip/psram/psram.v:112:30
    extern void psram_write(int addr, int data, int mask);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/soc/vsrc/ysyx_23060077_lsu.v:141:30
    extern void sdram_check(int addr, int data, int len);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/soc/vsrc/ysyx_23060077_axi.v:175:30
    extern void set_axi_resp(int b_resp, int r_resp);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/soc/vsrc/ysyx_23060077_csr.v:31:30
    extern void set_csr_ptr(const svOpenArrayHandle csr_reg);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/soc/vsrc/ysyx_23060077_regfile.v:45:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/soc/vsrc/ysyx_23060077.v:336:30
    extern void set_pc_ptr(int pc, int inst, svBit valid);

#ifdef __cplusplus
}
#endif

#endif  // guard
