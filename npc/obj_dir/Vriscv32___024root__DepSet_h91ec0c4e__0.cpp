// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv32__Syms.h"
#include "Vriscv32___024root.h"

extern "C" void riscv_pmem_read(int raddr, int* rdata, svLogic ren);

VL_INLINE_OPT void Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*0:0*/ ren) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    svLogic ren__Vcvt;
    for (size_t ren__Vidx = 0; ren__Vidx < 1; ++ren__Vidx) ren__Vcvt = ren;
    riscv_pmem_read(raddr__Vcvt, &rdata__Vcvt, ren__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void set_pc_ptr(int pc);

VL_INLINE_OPT void Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__set_pc_ptr_TOP(IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__set_pc_ptr_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    set_pc_ptr(pc__Vcvt);
}

extern "C" void get_riscv32_rst(svBit rst_n);

VL_INLINE_OPT void Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__get_riscv32_rst_TOP(CData/*0:0*/ rst_n) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__get_riscv32_rst_TOP\n"); );
    // Body
    svBit rst_n__Vcvt;
    for (size_t rst_n__Vidx = 0; rst_n__Vidx < 1; ++rst_n__Vidx) rst_n__Vcvt = rst_n;
    get_riscv32_rst(rst_n__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_regfile_u0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_regfile_u0__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void riscv_pmem_write(int waddr, int wdata, int wmask);

VL_INLINE_OPT void Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_lsu_u0__DOT__riscv_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_lsu_u0__DOT__riscv_pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    int wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    riscv_pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv32___024root___dump_triggers__act(Vriscv32___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv32___024root___eval_triggers__act(Vriscv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((vlSelf->riscv32__DOT__exu_result 
                                       != vlSelf->__Vtrigrprev__TOP__riscv32__DOT__exu_result) 
                                      | vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr.neq(vlSelf->__Vtrigrprev__TOP__riscv32__DOT__riscv_regfile_u0__DOT__gpr));
    vlSelf->__VactTriggered.at(1U) = (vlSelf->riscv32__DOT__exu_result 
                                      != vlSelf->__Vtrigrprev__TOP__riscv32__DOT__exu_result);
    vlSelf->__VactTriggered.at(2U) = vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr.neq(vlSelf->__Vtrigrprev__TOP__riscv32__DOT__riscv_regfile_u0__DOT__gpr);
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__riscv32__DOT__exu_result 
        = vlSelf->riscv32__DOT__exu_result;
    vlSelf->__Vtrigrprev__TOP__riscv32__DOT__riscv_regfile_u0__DOT__gpr.assign(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv32___024root___dump_triggers__act(vlSelf);
    }
#endif
}
