// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060077.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060077___024root.h"

VL_ATTR_COLD void Vysyx_23060077___024root___eval_static__TOP(Vysyx_23060077___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060077___024root___eval_static(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___eval_static\n"); );
    // Body
    Vysyx_23060077___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vysyx_23060077___024root___eval_static__TOP(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__r_delay_cnt = 0U;
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__w_delay_cnt = 0U;
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__r_delay_cnt = 0U;
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_delay_cnt = 0U;
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__w_delay_cnt = 0U;
}

VL_ATTR_COLD void Vysyx_23060077___024root___eval_initial__TOP(Vysyx_23060077___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060077___024root___eval_initial(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___eval_initial\n"); );
    // Body
    Vysyx_23060077___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__regfile_u0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a);
void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__csr_u0__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 4096> &csr_reg);

VL_ATTR_COLD void Vysyx_23060077___024root___eval_initial__TOP(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__pc = 0x80000000U;
    vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_pc_o_r = 0x80000000U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[1U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[2U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[3U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[4U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[5U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[6U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[7U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[8U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[9U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0xaU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0xbU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0xcU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0xdU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0xeU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0xfU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x10U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x11U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x12U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x13U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x14U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x15U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x16U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x17U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x18U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x19U] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x1aU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x1bU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x1cU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x1dU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x1eU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0x1fU] = 0U;
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__i = 0x20U;
    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__regfile_u0__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr);
    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__csr_u0__DOT__set_csr_ptr__Vdpioc2_TOP(vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg);
}

VL_ATTR_COLD void Vysyx_23060077___024root___eval_final(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_23060077___024root___eval_triggers__stl(Vysyx_23060077___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077___024root___dump_triggers__stl(Vysyx_23060077___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077___024root___eval_stl(Vysyx_23060077___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060077___024root___eval_settle(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_23060077___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060077___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_23060077___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077___024root___dump_triggers__stl(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__set_pc_ptr_TOP(IData/*31:0*/ pc, CData/*0:0*/ valid);
void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__ifu_u0__DOT__get_riscv32_rst_TOP(CData/*0:0*/ reset);
void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__riscv_uart_write_TOP(IData/*31:0*/ wdata, CData/*0:0*/ wen);
void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__riscv_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*0:0*/ ren);
void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__riscv_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask, CData/*0:0*/ wen);
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_23060077__ConstPool__TABLE_he62748b3_0;

VL_ATTR_COLD void Vysyx_23060077___024root___stl_sequent__TOP__0(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___stl_sequent__TOP__0\n"); );
    // Body
    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__set_pc_ptr_TOP(vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_pc_o_r, 1U);
    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__ifu_u0__DOT__get_riscv32_rst_TOP(vlSelf->reset);
    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__riscv_uart_write_TOP(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__w_data, (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__axi_uart_w_ready_o_r));
    vlSelf->ysyx_23060077__DOT__csr_mstatus = vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg
        [0x300U];
    vlSelf->ysyx_23060077__DOT__csr_u0__DOT__wr_en 
        = ((0x73U == (0x7fU & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) 
           & (0U != (7U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                           >> 0xcU))));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_aw_valid_o 
        = (1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_w_valid_o 
        = (2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_b_ready_o 
        = (3U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_ar_valid_o 
        = (1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_ready_o 
        = (2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state));
    if ((0x40U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
        vlSelf->ysyx_23060077__DOT__idu_rd = (0x1fU 
                                              & ((0x20U 
                                                  & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                       ? 
                                                      (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                       >> 7U)
                                                       : 0U)
                                                      : 0U)))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                       ? 
                                                      (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                       >> 7U)
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                       ? 
                                                      (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                       >> 7U)
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)))
                                                  : 0U));
        vlSelf->ysyx_23060077__DOT__idu_rd_wen = (1U 
                                                  & ((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                      >> 5U) 
                                                     & ((0x10U 
                                                         & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                         ? (IData)(
                                                                   (3U 
                                                                    == 
                                                                    (0xfU 
                                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)))
                                                         : 
                                                        ((8U 
                                                          & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                          ? (IData)(
                                                                    (7U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)))
                                                          : (IData)(
                                                                    (7U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    } else if ((0x20U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
        vlSelf->ysyx_23060077__DOT__idu_rd = (0x1fU 
                                              & ((0x10U 
                                                  & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                      ? 
                                                     (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                      >> 7U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                      ? 
                                                     (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                      >> 7U)
                                                      : 0U)
                                                     : 0U)))
                                                  : 0U));
        vlSelf->ysyx_23060077__DOT__idu_rd_wen = (1U 
                                                  & (IData)(
                                                            ((0x10U 
                                                              == 
                                                              (0x18U 
                                                               & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) 
                                                             & ((4U 
                                                                 & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                                 ? 
                                                                ((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                                  >> 1U) 
                                                                 & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                                 : 
                                                                ((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                                  >> 1U) 
                                                                 & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)))));
    } else if ((0x10U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
        vlSelf->ysyx_23060077__DOT__idu_rd = (0x1fU 
                                              & ((8U 
                                                  & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U))));
        vlSelf->ysyx_23060077__DOT__idu_rd_wen = (1U 
                                                  & ((~ 
                                                      (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                       >> 3U)) 
                                                     & ((4U 
                                                         & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                         ? 
                                                        ((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                          >> 1U) 
                                                         & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                         : 
                                                        ((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                          >> 1U) 
                                                         & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    } else {
        vlSelf->ysyx_23060077__DOT__idu_rd = (0x1fU 
                                              & ((8U 
                                                  & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U))));
        vlSelf->ysyx_23060077__DOT__idu_rd_wen = (1U 
                                                  & (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    }
    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__riscv_pmem_read_TOP(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__r_addr, vlSelf->__Vtask_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__riscv_pmem_read__4__rdata, (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_ar_ready_o_r));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__r_data 
        = vlSelf->__Vtask_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__riscv_pmem_read__4__rdata;
    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__riscv_pmem_write_TOP(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_addr, vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_data, vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_mask, (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_w_ready_o_r));
    vlSelf->ysyx_23060077__DOT____VdfgTmp_h05e9e7e0__0 
        = (IData)((0x73U == (0x707fU & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)));
    vlSelf->ysyx_23060077__DOT__idu_lsu_opt = ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r))
                                                ? 1U
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r))
                                                    ? 2U
                                                    : 
                                                   ((0x73U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r))
                                                     ? 3U
                                                     : 0U)));
    vlSelf->__Vtableidx1 = (0x7fU & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r);
    vlSelf->ysyx_23060077__DOT__idu_src_sel = Vysyx_23060077__ConstPool__TABLE_he62748b3_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI 
        = (((- (IData)((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U));
    if ((0x40U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
        if ((0x20U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
            if ((0x10U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                if ((8U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                } else if ((4U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                } else if ((2U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                    if ((1U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                        vlSelf->ysyx_23060077__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0xaU;
                        vlSelf->ysyx_23060077__DOT__idu_rs1 
                            = (0x1fU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0xfU));
                        vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                            = vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI;
                    } else {
                        vlSelf->ysyx_23060077__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077__DOT__idu_rs1 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                }
            } else if ((8U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                if ((4U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                    if ((2U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                        if ((1U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                            vlSelf->ysyx_23060077__DOT__idu_rs2 
                                = (0x1fU & 0U);
                            vlSelf->ysyx_23060077__DOT__idu_alu_opt = 1U;
                            vlSelf->ysyx_23060077__DOT__idu_rs1 
                                = (0x1fU & 0U);
                            vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                                = (((- (IData)((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x1fU))) 
                                    << 0x15U) | ((0x100000U 
                                                  & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                             >> 0x14U))))));
                        } else {
                            vlSelf->ysyx_23060077__DOT__idu_rs2 
                                = (0x1fU & 0U);
                            vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                            vlSelf->ysyx_23060077__DOT__idu_rs1 
                                = (0x1fU & 0U);
                            vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                        }
                    } else {
                        vlSelf->ysyx_23060077__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077__DOT__idu_rs1 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                }
            } else if ((4U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                if ((2U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                    if ((1U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                        vlSelf->ysyx_23060077__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_alu_opt = 1U;
                        vlSelf->ysyx_23060077__DOT__idu_rs1 
                            = (0x1fU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0xfU));
                        vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                            = vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI;
                    } else {
                        vlSelf->ysyx_23060077__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077__DOT__idu_rs1 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                }
            } else if ((2U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                if ((1U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                    >> 0x14U));
                    vlSelf->ysyx_23060077__DOT__idu_alu_opt 
                        = ((0x4000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                            ? ((0x2000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                ? 5U : 4U) : ((0x2000U 
                                               & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                               ? 0U
                                               : 2U));
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                    >> 0xfU));
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                        = (((- (IData)((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0x1fU))) 
                            << 0xdU) | ((0x1000U & 
                                         (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                    >> 7U))))));
                } else {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                vlSelf->ysyx_23060077__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
            }
        } else {
            vlSelf->ysyx_23060077__DOT__idu_rs2 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077__DOT__idu_rs1 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
        }
    } else if ((0x20U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
        if ((0x10U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
            if ((8U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                vlSelf->ysyx_23060077__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
            } else if ((4U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                if ((2U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                    if ((1U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                        vlSelf->ysyx_23060077__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_alu_opt = 1U;
                        vlSelf->ysyx_23060077__DOT__idu_rs1 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                            = (0xfffff000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r);
                    } else {
                        vlSelf->ysyx_23060077__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077__DOT__idu_rs1 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                if ((2U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                    if ((1U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                        vlSelf->ysyx_23060077__DOT__idu_rs2 
                            = (0x1fU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0x14U));
                        vlSelf->ysyx_23060077__DOT__idu_alu_opt 
                            = ((0x4000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                ? ((0x2000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                    ? ((0x1000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                        ? 0xaU : 9U)
                                    : ((0x1000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                        ? ((0U == (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x19U))
                                            ? 7U : 
                                           ((0x20U 
                                             == (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 0x19U))
                                             ? 8U : 0U))
                                        : 6U)) : ((0x2000U 
                                                   & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 5U
                                                    : 4U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 3U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                      >> 0x19U))
                                                     ? 1U
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                       >> 0x19U))
                                                      ? 2U
                                                      : 0U)))));
                        vlSelf->ysyx_23060077__DOT__idu_rs1 
                            = (0x1fU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0xfU));
                    } else {
                        vlSelf->ysyx_23060077__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077__DOT__idu_rs1 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & 0U);
                }
                vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
            }
        } else {
            if ((8U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                vlSelf->ysyx_23060077__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
            } else if ((4U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                vlSelf->ysyx_23060077__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
            } else if ((2U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                if ((1U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                    >> 0x14U));
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                    >> 0xfU));
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                        = (((- (IData)((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 7U))));
                } else {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                vlSelf->ysyx_23060077__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
            }
            vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
        }
    } else if ((0x10U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
        if ((8U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
            vlSelf->ysyx_23060077__DOT__idu_rs2 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077__DOT__idu_rs1 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
        } else if ((4U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
            if ((2U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                if ((1U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_alu_opt = 1U;
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                        = (0xfffff000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r);
                } else {
                    vlSelf->ysyx_23060077__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                vlSelf->ysyx_23060077__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
            }
        } else if ((2U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
            if ((1U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                vlSelf->ysyx_23060077__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_alu_opt 
                    = ((0x4000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                        ? ((0x2000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                            ? ((0x1000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                ? 0xaU : 9U) : ((0x1000U 
                                                 & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x19U))
                                                  ? 7U
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                    >> 0x19U))
                                                   ? 8U
                                                   : 0U))
                                                 : 6U))
                        : ((0x2000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                            ? ((0x1000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                ? 5U : 2U) : ((0x1000U 
                                               & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                               ? 3U
                                               : 1U)));
                vlSelf->ysyx_23060077__DOT__idu_rs1 
                    = (0x1fU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                >> 0xfU));
                vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                    = vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI;
            } else {
                vlSelf->ysyx_23060077__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
            }
        } else {
            vlSelf->ysyx_23060077__DOT__idu_rs2 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077__DOT__idu_rs1 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
        }
    } else if ((8U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
        vlSelf->ysyx_23060077__DOT__idu_rs2 = (0x1fU 
                                               & 0U);
        vlSelf->ysyx_23060077__DOT__idu_alu_opt = (
                                                   (4U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                      ? 0xaU
                                                      : 0U)
                                                     : 0U)
                                                    : 0U);
        vlSelf->ysyx_23060077__DOT__idu_rs1 = (0x1fU 
                                               & 0U);
        vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
    } else {
        if ((4U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
            vlSelf->ysyx_23060077__DOT__idu_rs2 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060077__DOT__idu_rs1 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
        } else if ((2U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
            if ((1U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)) {
                vlSelf->ysyx_23060077__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_rs1 
                    = (0x1fU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                >> 0xfU));
                vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                    = vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI;
            } else {
                vlSelf->ysyx_23060077__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
            }
        } else {
            vlSelf->ysyx_23060077__DOT__idu_rs2 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060077__DOT__idu_rs1 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = 0U;
        }
        vlSelf->ysyx_23060077__DOT__idu_alu_opt = 0U;
    }
    vlSelf->ysyx_23060077__DOT____Vcellinp__wbu_u0__idu_rd_wen 
        = ((~ (IData)(vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__cpu_r_valid_i)) 
           & (IData)(vlSelf->ysyx_23060077__DOT__idu_rd_wen));
    vlSelf->ysyx_23060077__DOT__csr_mret = ((IData)(vlSelf->ysyx_23060077__DOT____VdfgTmp_h05e9e7e0__0) 
                                            & (0x302U 
                                               == (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x14U)));
    vlSelf->ysyx_23060077__DOT__csr_ecall = ((IData)(vlSelf->ysyx_23060077__DOT____VdfgTmp_h05e9e7e0__0) 
                                             & (0U 
                                                == 
                                                (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 0x14U)));
    vlSelf->ysyx_23060077__DOT__src2 = vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr
        [vlSelf->ysyx_23060077__DOT__idu_rs2];
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag 
        = ((2U == (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt)) 
           | ((4U == (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt)) 
              | (5U == (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))));
    vlSelf->ysyx_23060077__DOT__src1 = vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr
        [vlSelf->ysyx_23060077__DOT__idu_rs1];
    vlSelf->ysyx_23060077__DOT__wr_csr_data = ((0x4000U 
                                                & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                ? (0x1fU 
                                                   & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                      >> 0xfU))
                                                : vlSelf->ysyx_23060077__DOT__src1);
    if ((2U & (IData)(vlSelf->ysyx_23060077__DOT__idu_src_sel))) {
        vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
            = vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_pc_o_r;
        vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data 
            = ((1U & (IData)(vlSelf->ysyx_23060077__DOT__idu_src_sel))
                ? vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r
                : 4U);
    } else {
        vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
            = vlSelf->ysyx_23060077__DOT__src1;
        vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data 
            = ((1U & (IData)(vlSelf->ysyx_23060077__DOT__idu_src_sel))
                ? vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r
                : vlSelf->ysyx_23060077__DOT__src2);
    }
    vlSelf->ysyx_23060077__DOT__csr_u0__DOT__temp = 
        vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg
        [(0xfffU & vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)];
    vlSelf->ysyx_23060077__DOT__lsu_r_addr_o = (vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                                                + vlSelf->ysyx_23060077__DOT__src1);
    vlSelf->ysyx_23060077__DOT__csr_u0__DOT__wr_data_r 
        = ((1U == (3U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                         >> 0xcU))) ? vlSelf->ysyx_23060077__DOT__wr_csr_data
            : ((2U == (3U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                             >> 0xcU))) ? (vlSelf->ysyx_23060077__DOT__csr_u0__DOT__temp 
                                           | vlSelf->ysyx_23060077__DOT__wr_csr_data)
                : ((~ vlSelf->ysyx_23060077__DOT__wr_csr_data) 
                   & vlSelf->ysyx_23060077__DOT__csr_u0__DOT__temp)));
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data))) 
                             ^ (- (QData)((IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag)))));
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data))) 
                             + (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                + (QData)((IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag)))));
    if ((2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state))) {
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_strb_o 
            = ((0x10U == (((IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt) 
                           << 3U) | (7U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0xcU))))
                ? 1U : ((0x11U == (((IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt) 
                                    << 3U) | (7U & 
                                              (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                               >> 0xcU))))
                         ? 2U : ((0x12U == (((IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt) 
                                             << 3U) 
                                            | (7U & 
                                               (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0xcU))))
                                  ? 4U : 0U)));
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_data_o 
            = vlSelf->ysyx_23060077__DOT__src2;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o 
            = vlSelf->ysyx_23060077__DOT__lsu_r_addr_o;
    } else {
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_strb_o = 0U;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_data_o = 0U;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o = 0U;
    }
    if ((0xa00003f8U == vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o)) {
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_aw_addr_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_aw_addr_i = 0U;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_data_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_data_o;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_strb_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_strb_o;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_w_strb_i = 0U;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_w_data_i = 0U;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_b_resp_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_b_resp_o;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_b_valid_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__axi_uart_b_valid_o_r;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_valid_i 
            = (2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state));
    } else {
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_aw_addr_i = 0U;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_aw_addr_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_data_i = 0U;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_strb_i = 0U;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_w_strb_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_strb_o;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_w_data_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_data_o;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_b_resp_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_b_resp_o;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_b_valid_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_b_valid_o_r;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_valid_i = 0U;
    }
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_w_valid_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o) 
           & ((0x80000000U == (0xf0000000U & vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o))
               ? (2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state))
               : (2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state))));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_aw_valid_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o) 
           & ((0x80000000U == (0xf0000000U & vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o))
               ? (1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state))
               : (1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state))));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_aw_valid_i 
        = ((0xa00003f8U == vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o) 
           & (1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state)));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_b_ready_i 
        = ((0xa00003f8U == vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o) 
           & (3U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state)));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_b_ready_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o) 
           & ((0x80000000U == (0xf0000000U & vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o))
               ? (3U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state))
               : (3U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state))));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o 
        = ((1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state))
            ? vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__pc
            : vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o);
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r 
        = ((8U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
            ? ((4U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
                ? 0U : ((2U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
                         ? ((1U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
                             ? (IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out)
                             : (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                & vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data))
                         : ((1U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
                             ? (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                | vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data)
                             : (IData)(((((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data))) 
                                        >> (0x3fU & vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data))))))
            : ((4U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
                ? ((2U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
                    ? ((1U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
                        ? ((0x1fU >= (0x3fU & vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data))
                            ? (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                               >> (0x3fU & vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data))
                            : 0U) : (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                     ^ vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data))
                    : ((1U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
                        ? (1U & ((((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                    >> 0x1fU) | ((IData)(
                                                         (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                          >> 0x20U)) 
                                                 | (IData)(
                                                           (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                            >> 0x20U)))) 
                                  & (((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                       >> 0x1fU) | 
                                      ((~ (IData)((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                   >> 0x20U))) 
                                       | (~ (IData)(
                                                    (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                     >> 0x20U))))) 
                                     & ((~ (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                            >> 0x1fU)) 
                                        | (((~ (IData)(
                                                       (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                        >> 0x20U))) 
                                            | (IData)(
                                                      (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                       >> 0x20U))) 
                                           & ((~ (IData)(
                                                         (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                          >> 0x20U))) 
                                              | (IData)(
                                                        (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                         >> 0x20U))))))) 
                                 ^ (IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag)))
                        : (1U & (IData)((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                         >> 0x20U)))))
                : ((2U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
                    ? ((1U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
                        ? ((0x1fU >= (0x3fU & vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data))
                            ? (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                               << (0x3fU & vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data))
                            : 0U) : (IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out))
                    : ((1U & (IData)(vlSelf->ysyx_23060077__DOT__idu_alu_opt))
                        ? (IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out)
                        : 0U))));
    vlSelf->ysyx_23060077__DOT__lsu_w_ready_i = ((2U 
                                                  == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                 & (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_b_valid_i));
    if ((0xa00003f8U == vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o)) {
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_ar_addr_i = 0U;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_resp_i = 0U;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i = 0U;
    } else {
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_ar_addr_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_resp_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_r_resp_o;
        vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i 
            = vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_r_data_o_r;
    }
    if ((2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state))) {
        vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0 
            = (0xffU & vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i);
        vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0 
            = (0xffffU & vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i);
    } else {
        vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0 = 0U;
        vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0 = 0U;
    }
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_ar_valid_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o) 
           & ((0x80000000U == (0xf0000000U & vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
               ? (1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state))
               : (1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state))));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_r_ready_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o) 
           & ((0x80000000U == (0xf0000000U & vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
               ? (2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state))
               : (2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state))));
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_valid_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o) 
           & (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_r_valid_o_r));
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__exu_result_r 
        = ((0x63U == (0x7fU & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r))
            ? ((0x4000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                ? ((0x2000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                    ? ((0x1000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                        ? (1U & (~ vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r))
                        : (1U & vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r))
                    : ((0x1000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                        ? (1U & (~ vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r))
                        : (1U & vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r)))
                : ((0x2000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                    ? vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r
                    : ((0x1000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                        ? (0U != vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r)
                        : (1U & (~ (IData)((0U != vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r)))))))
            : vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r);
    vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__cpu_r_ready_o 
        = ((1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
           & (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_valid_i));
    vlSelf->ysyx_23060077__DOT__lsu_r_ready_i = ((2U 
                                                  == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                 & (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_valid_i));
    vlSelf->ysyx_23060077__DOT____VdfgTmp_h15124160__0 
        = (((0U != vlSelf->ysyx_23060077__DOT__exu_u0__DOT__exu_result_r) 
            & (0x63U == (0x7fU & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r))) 
           | (0x6fU == (0x7fU & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)));
    vlSelf->ysyx_23060077__DOT__lsu_rd_wen = ((IData)(vlSelf->ysyx_23060077__DOT__lsu_r_ready_i) 
                                              | (IData)(vlSelf->ysyx_23060077__DOT__lsu_w_ready_i));
    vlSelf->ysyx_23060077__DOT__stall = ((~ (IData)(vlSelf->ysyx_23060077__DOT__lsu_rd_wen)) 
                                         & ((IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT__ren) 
                                            | (IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT__wen)));
}

VL_ATTR_COLD void Vysyx_23060077___024root___eval_stl(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_23060077___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077___024root___dump_triggers__ico(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077___024root___dump_triggers__act(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077___024root___dump_triggers__nba(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060077___024root___ctor_var_reset(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_interrupt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__ifu_inst_t = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__idu_rd = VL_RAND_RESET_I(5);
    vlSelf->ysyx_23060077__DOT__idu_rd_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__idu_rs1 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_23060077__DOT__idu_rs2 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_23060077__DOT__idu_alu_opt = VL_RAND_RESET_I(4);
    vlSelf->ysyx_23060077__DOT__idu_src_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060077__DOT__idu_lsu_opt = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060077__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__exu_result_t = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__lsu_rd_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__lsu_r_addr_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__lsu_r_ready_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__lsu_w_ready_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__csr_mret = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__wr_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__csr_mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT____Vcellinp__wbu_u0__idu_rd_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT____VdfgTmp_h05e9e7e0__0 = 0;
    vlSelf->ysyx_23060077__DOT____VdfgTmp_h15124160__0 = 0;
    vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_pc_o_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__cpu_r_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__cpu_r_ready_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__carry_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__signed_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__exu_result_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__lsu_u0__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__lsu_u0__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0 = 0;
    vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060077__DOT__csr_u0__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__csr_u0__DOT__wr_data_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__csr_u0__DOT__temp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__csr_u0__DOT__mepc_inst_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_data_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_strb_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_aw_valid_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_w_valid_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_b_resp_i = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_b_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_b_ready_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_ar_valid_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_ready_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_resp_i = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__lfsr_out = VL_RAND_RESET_I(6);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__r_delay_cnt = VL_RAND_RESET_I(6);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__w_delay_cnt = VL_RAND_RESET_I(6);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state_nxt = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state_nxt = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_aw_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_aw_addr_i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_w_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_w_strb_i = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_w_data_i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_b_resp_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_b_ready_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_ar_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_ar_addr_i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_r_ready_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_r_resp_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_aw_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_aw_addr_i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_strb_i = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_data_i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_b_resp_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_b_ready_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__lfsr_out = VL_RAND_RESET_I(6);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__r_delay_cnt = VL_RAND_RESET_I(6);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_delay_cnt = VL_RAND_RESET_I(6);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__sram_w_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_mask = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_aw_ready_o_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_w_ready_o_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_b_valid_o_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__sram_r_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__r_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__r_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_ar_ready_o_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_r_valid_o_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_r_data_o_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__lfsr_out = VL_RAND_RESET_I(6);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__w_delay_cnt = VL_RAND_RESET_I(6);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__uart_w_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__w_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__w_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__axi_uart_aw_ready_o_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__axi_uart_w_ready_o_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__axi_uart_b_valid_o_r = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__riscv_pmem_read__4__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
