// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060077_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060077_top___024root.h"

VL_ATTR_COLD void Vysyx_23060077_top___024root___eval_static(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_23060077_top___024root___eval_initial__TOP(Vysyx_23060077_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060077_top___024root___eval_initial(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___eval_initial\n"); );
    // Body
    Vysyx_23060077_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a);
void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_csr_u0__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 4096> &csr_reg);

VL_ATTR_COLD void Vysyx_23060077_top___024root___eval_initial__TOP(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[0U] = 0x73U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[1U] = 0xfU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[2U] = 0x33U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[3U] = 0x13U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[4U] = 0x23U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[5U] = 3U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[6U] = 0x63U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[7U] = 0x67U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[8U] = 0x6fU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[9U] = 0x17U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[0xaU] = 0x37U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[1U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[1U] = 0xf0000U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[0U] = 3U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[1U] = 2U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[2U] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[3U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[0U] = 0xbU;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[1U] = 0xaU;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[2U] = 9U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[3U] = 8U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[4U] = 7U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[5U] = 6U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[6U] = 5U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[7U] = 4U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[8U] = 3U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[9U] = 2U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[0xaU] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[0U] = 0x73U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[1U] = 0xfU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[2U] = 0x33U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[3U] = 0x13U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[4U] = 0x23U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[5U] = 3U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[6U] = 0x63U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[7U] = 0x67U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[8U] = 0x6fU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[9U] = 0x17U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[0xaU] = 0x37U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[0U] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[1U] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[2U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[3U] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[4U] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[5U] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[6U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[7U] = 2U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[8U] = 2U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[9U] = 3U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[0xaU] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[0U] = 0x1cdU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[1U] = 0x3dU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[2U] = 0xccU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[3U] = 0x4dU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[4U] = 0x8dU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[5U] = 0xdU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[6U] = 0x18cU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[7U] = 0x19eU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[8U] = 0x1beU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[9U] = 0x5fU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[0xaU] = 0xddU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[0U] = 0x73U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[1U] = 0x23U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[2U] = 3U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[0U] = 3U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[1U] = 2U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[2U] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[0U] = 0x1cfU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[1U] = 0x8eU;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[2U] = 0xdU;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[0U] = 0xfU;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[1U] = 0xeU;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[2U] = 0xdU;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[3U] = 0xcU;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[4U] = 9U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[5U] = 8U;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[0U] = 0xdU;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[1U] = 0xcU;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[2U] = 0xaU;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[3U] = 9U;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[4U] = 8U;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[0U] = 0x12U;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[1U] = 0x11U;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[2U] = 0x10U;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[0U] = 4U;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[1U] = 2U;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[2U] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[0U] = 0x1200000004ULL;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[1U] = 0x1100000002ULL;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[2U] = 0x1000000001ULL;
    vlSelf->ysyx_23060077_top__DOT__ifu_pc = 0x80000000U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[1U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[2U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[3U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[4U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[5U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[6U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[7U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[8U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[9U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0xaU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0xbU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0xcU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0xdU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0xeU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0xfU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x10U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x11U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x12U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x13U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x14U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x15U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x16U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x17U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x18U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x19U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x1aU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x1bU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x1cU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x1dU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x1eU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0x1fU] = 0U;
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__i = 0x20U;
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr);
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout = 0U;
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_csr_u0__DOT__set_csr_ptr__Vdpioc2_TOP(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg);
}

VL_ATTR_COLD void Vysyx_23060077_top___024root___eval_final(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_23060077_top___024root___eval_triggers__stl(Vysyx_23060077_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077_top___024root___dump_triggers__stl(Vysyx_23060077_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077_top___024root___eval_stl(Vysyx_23060077_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060077_top___024root___eval_settle(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_23060077_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060077_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_23060077_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077_top___024root___dump_triggers__stl(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, IData/*31:0*/ len, CData/*0:0*/ ren);
void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__set_pc_ptr_TOP(IData/*31:0*/ pc);
void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__get_riscv32_rst_TOP(CData/*0:0*/ rst_n);
extern const VlUnpacked<IData/*31:0*/, 32> Vysyx_23060077_top__ConstPool__TABLE_h61302eca_0;
void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask, CData/*0:0*/ wen);

VL_ATTR_COLD void Vysyx_23060077_top___024root___stl_sequent__TOP__0(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060077_top__DOT__csr_mstatus = vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
        [0x300U];
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1U][0U] 
        = (IData)((4ULL | ((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__ifu_pc)) 
                           << 0x20U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1U][1U] 
        = (IData)(((4ULL | ((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__ifu_pc)) 
                            << 0x20U)) >> 0x20U));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1U][2U] = 2U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1U] 
        = (4ULL | ((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__ifu_pc)) 
                   << 0x20U));
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP(vlSelf->ysyx_23060077_top__DOT__ifu_pc, vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__riscv_pmem_read__0__rdata, 4U, (IData)(vlSelf->rst_n));
    vlSelf->ysyx_23060077_top__DOT__ifu_inst = vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__riscv_pmem_read__0__rdata;
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__set_pc_ptr_TOP(vlSelf->ysyx_23060077_top__DOT__ifu_pc);
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__get_riscv32_rst_TOP(vlSelf->rst_n);
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en 
        = ((0x73U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) 
           & (0U != (7U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                           >> 0xcU))));
    vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h05e9e7e0__0 
        = (IData)((0x73U == (0x707fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2U] 
        = (0x330001U | ((0xf800U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                    >> 4U)) | ((0x7c0U 
                                                & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                   >> 0xeU)) 
                                               | (0x3eU 
                                                  & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                     >> 6U)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8U] 
        = (0x6f0001U | (0x3eU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                 >> 6U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9U] 
        = (0x170001U | (0x3eU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                 >> 6U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0xaU] 
        = (0x370001U | (0x3eU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                 >> 6U)));
    vlSelf->__VdfgTmp_h8b1e9b8d__0 = ((0xf800U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                  >> 4U)) 
                                      | (0x7c0U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                   >> 0xeU)));
    vlSelf->__VdfgTmp_h63722c78__0 = (1U | ((0xf800U 
                                             & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                >> 4U)) 
                                            | (0x3eU 
                                               & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                  >> 6U))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key 
        = (((0x63U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) 
            << 3U) | (7U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                            >> 0xcU)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit)
                                                    ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out)
                                                    : 0U);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__idu_src_sel = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit)
                                                    ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out)
                                                    : 1U);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
        = (((- (IData)((vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                >> 0x14U));
    if ((0x40U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
        if ((0x20U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
            if ((0x10U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                if ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                } else if ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                } else if ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                    if ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0xaU;
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                            = vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI;
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else if ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                if ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                    if ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                        if ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 1U;
                            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                                = (((- (IData)((vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                >> 0x1fU))) 
                                    << 0x15U) | ((0x100000U 
                                                  & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                             >> 0x14U))))));
                        } else {
                            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                        }
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else if ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                if ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                    if ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 1U;
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                            = vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI;
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else if ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                if ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt 
                        = ((0x4000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                            ? ((0x2000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                ? 5U : 4U) : ((0x2000U 
                                               & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                               ? 0U
                                               : 2U));
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                        = (((- (IData)((vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                        >> 0x1fU))) 
                            << 0xdU) | ((0x1000U & 
                                         (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                    >> 7U))))));
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            }
        } else {
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
        }
    } else if ((0x20U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
        if ((0x10U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
            if ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            } else if ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                if ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                    if ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 1U;
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                            = (0xfffff000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst);
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt 
                    = ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                        ? ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                            ? ((0x4000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                ? ((0x2000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                    ? ((0x1000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                        ? 0xaU : 9U)
                                    : ((0x1000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                        ? ((0U == (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                   >> 0x19U))
                                            ? 7U : 
                                           ((0x20U 
                                             == (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                 >> 0x19U))
                                             ? 8U : 0U))
                                        : 6U)) : ((0x2000U 
                                                   & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                    ? 5U
                                                    : 4U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                    ? 3U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                      >> 0x19U))
                                                     ? 1U
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                       >> 0x19U))
                                                      ? 2U
                                                      : 0U)))))
                            : 0U) : 0U);
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            }
        } else if ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
        } else if ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
        } else if ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
            if ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 1U;
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                    = (((- (IData)((vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                      >> 7U))));
            } else {
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            }
        } else {
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
        }
    } else if ((0x10U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
        if ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
        } else if ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
            if ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                if ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 1U;
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                        = (0xfffff000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst);
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            }
        } else if ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
            if ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt 
                    = ((0x4000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                        ? ((0x2000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                            ? ((0x1000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                ? 0xaU : 9U) : ((0x1000U 
                                                 & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                   >> 0x19U))
                                                  ? 7U
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                    >> 0x19U))
                                                   ? 8U
                                                   : 0U))
                                                 : 6U))
                        : ((0x2000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                            ? ((0x1000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                ? 5U : 2U) : ((0x1000U 
                                               & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                               ? 3U
                                               : 1U)));
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                    = vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI;
            } else {
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            }
        } else {
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
        }
    } else if ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt 
            = ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                ? ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                    ? ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                        ? 0xaU : 0U) : 0U) : 0U);
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
    } else if ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
    } else if ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
        if ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)) {
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 1U;
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                = vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI;
        } else {
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
        }
    } else {
        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0U] 
        = (1U | ((0xf800U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2U] 
        = (1U | ((0xf800U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                             >> 4U)) | ((0x7c0U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                   >> 0xeU)) 
                                        | (0x3eU & 
                                           (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                            >> 6U)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3U] 
        = (1U | ((0xf800U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4U] 
        = ((0xf800U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                       >> 4U)) | (0x7c0U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                            >> 0xeU)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5U] 
        = (1U | ((0xf800U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6U] 
        = ((0xf800U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                       >> 4U)) | (0x7c0U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                            >> 0xeU)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7U] 
        = (1U | ((0xf800U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8U] 
        = (1U | (0x3eU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                          >> 6U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9U] 
        = (1U | (0x3eU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                          >> 6U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0xaU] 
        = (1U | (0x3eU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                          >> 6U)));
    vlSelf->ysyx_23060077_top__DOT__csr_mret = ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h05e9e7e0__0) 
                                                & (0x302U 
                                                   == 
                                                   (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                    >> 0x14U)));
    vlSelf->ysyx_23060077_top__DOT__csr_ecall = ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h05e9e7e0__0) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                     >> 0x14U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4U] 
        = (0x230000U | (IData)(vlSelf->__VdfgTmp_h8b1e9b8d__0));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6U] 
        = (0x630000U | (IData)(vlSelf->__VdfgTmp_h8b1e9b8d__0));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[0U] 
        = (IData)((0x478000730000ULL | (((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                             >> 0xfU)))) 
                                         << 0x39U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                                >> 0x14U)))) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                                   >> 7U)))) 
                                               << 0x2fU) 
                                              | (QData)((IData)(vlSelf->__VdfgTmp_h63722c78__0)))))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[1U] 
        = (0xc0000000U | (IData)(((0x478000730000ULL 
                                   | (((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                           >> 0xfU)))) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                            >> 0x14U)))) 
                                        << 0x34U) | 
                                       (((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                             >> 7U)))) 
                                         << 0x2fU) 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_h63722c78__0)))))) 
                                  >> 0x20U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[2U] 
        = (0x260000cU | ((0x1f0000U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                       << 1U)) | (0xffffffe0U 
                                                  & (0x20U 
                                                     | (0x7c0U 
                                                        & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                           >> 1U))))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[3U] 
        = (0x23000U | ((0xc0000000U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                       << 0xfU)) | 
                       ((0xfff80000U & (0x80000U | 
                                        (0x1f00000U 
                                         & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                            << 0xdU)))) 
                        | ((0xf80U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                      >> 8U)) | (0x7cU 
                                                 & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                    >> 0x12U))))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[4U] 
        = (0x8c000018U | ((0x3e00000U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                         << 6U)) | 
                          ((0x1f0000U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                         >> 4U)) | 
                           (7U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                  >> 0x11U)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[5U] 
        = (0x1ce0001U | ((0x3e000000U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                         << 0x12U)) 
                         | ((0x1f000U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                         >> 3U)) | 
                            (0xfffffffeU & (2U | (0x7cU 
                                                  & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                     >> 5U)))))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[6U] 
        = (0x8000ef00U | (0x1f0000U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                       << 9U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[7U] 
        = (0xdc0004bU | (0xf80U & vlSelf->ysyx_23060077_top__DOT__ifu_inst));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0U] 
        = (0x730000U | (IData)(vlSelf->__VdfgTmp_h63722c78__0));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3U] 
        = (0x130000U | (IData)(vlSelf->__VdfgTmp_h63722c78__0));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5U] 
        = (0x30000U | (IData)(vlSelf->__VdfgTmp_h63722c78__0));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7U] 
        = (0x670000U | (IData)(vlSelf->__VdfgTmp_h63722c78__0));
    vlSelf->__Vtableidx1 = ((0x1cU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                      >> 0xaU)) | (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rlen 
        = Vysyx_23060077_top__ConstPool__TABLE_h61302eca_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key 
        = (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
            << 3U) | (7U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                            >> 0xcU)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag 
        = ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt)) 
           | ((4U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt)) 
              | (5U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out
            : 0U);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__ifu_pc)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__ifu_pc)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                   >> 0x20U));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][2U] = 3U;
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp 
        = vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
        [(0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)];
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__ifu_pc)) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata 
        = vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr
        [(0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                   >> 6U))];
    vlSelf->ysyx_23060077_top__DOT__src1 = vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr
        [(0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                   >> 0xbU))];
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                   >> 0x20U));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][2U] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata))) 
                   >> 0x20U));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][2U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__wr_csr_data = (
                                                   (0x4000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                       >> 0xfU))
                                                    : vlSelf->ysyx_23060077_top__DOT__src1);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata)));
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r 
        = ((1U == (3U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                         >> 0xcU))) ? vlSelf->ysyx_23060077_top__DOT__wr_csr_data
            : ((2U == (3U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                             >> 0xcU))) ? (vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp 
                                           | vlSelf->ysyx_23060077_top__DOT__wr_csr_data)
                : ((~ vlSelf->ysyx_23060077_top__DOT__wr_csr_data) 
                   & vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
                               == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
                                  == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
                                  == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
                                  == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out
            : 0ULL);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1U] 
        = (0xa00000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2U] 
        = (0x900000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(((((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                 >> 0x20U)))) 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4U] 
        = (0x700000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             >> (0x1fU 
                                                 & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5U] 
        = (0x600000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8U] 
        = (0x300000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             << (0x1fU 
                                                 & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1U] 
        = ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2U] 
        = ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                            >> 0x3fU))))))) 
                     << 0x20U) | (QData)((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                  >> 0x20U)))) 
                   >> (0x3fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4U] 
        = ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) >> (0x1fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5U] 
        = ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8U] 
        = ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) << (0x1fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
        = (0x1ffffffffULL & ((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))) 
                             ^ (- (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
        = (0x1ffffffffULL & ((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x3fU))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                            >> 0x20U)))) 
                             + (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                + (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0U] 
        = (0xb00000000ULL | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0xaU] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0U] 
        = (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9U] 
        = (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0xaU] 
        = (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->__VdfgTmp_h29117f5a__0 = (1U & (IData)(
                                                   (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                    >> 0x20U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag 
        = (1U & ((((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                            >> 0x3fU)) | ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                   >> 0x20U)) 
                                          | (IData)(
                                                    (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                     >> 0x20U)))) 
                  & (((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                               >> 0x3fU)) | ((~ (IData)(
                                                        (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                         >> 0x20U))) 
                                             | (~ (IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                           >> 0x20U))))) 
                     & ((~ (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                    >> 0x3fU))) | (
                                                   ((~ (IData)(
                                                               (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                                >> 0x20U))) 
                                                    | (IData)(
                                                              (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                               >> 0x20U))) 
                                                   & ((~ (IData)(
                                                                 (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                                  >> 0x20U))) 
                                                      | (IData)(
                                                                (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                                 >> 0x20U))))))) 
                 ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h29117f5a__0)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7U] 
        = vlSelf->__VdfgTmp_h29117f5a__0;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6U] 
        = (0x500000000ULL | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6U] 
        = vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out
            : 0U);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0U] 
        = (0xf00000000ULL | (QData)((IData)((1U & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1U] 
        = (0xe00000000ULL | (QData)((IData)((1U & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2U] 
        = (0xd00000000ULL | (QData)((IData)((1U & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3U] 
        = (0xc00000000ULL | (QData)((IData)((1U & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4U] 
        = (0x900000000ULL | (QData)((IData)((0U != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5U] 
        = (0x800000000ULL | (QData)((IData)((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data)))))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0U] 
        = (1U & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1U] 
        = (1U & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2U] 
        = (1U & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3U] 
        = (1U & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4U] 
        = (0U != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5U] 
        = (1U & (~ (IData)((0U != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__exu_result = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit)
                                                   ? vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out
                                                   : vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data);
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP(vlSelf->ysyx_23060077_top__DOT__exu_result, vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_pmem_read__4__rdata, vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rlen, 
                                                                                (1U 
                                                                                == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt)));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
        = vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_pmem_read__4__rdata;
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_pmem_write_TOP(vlSelf->ysyx_23060077_top__DOT__exu_result, vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata, vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask, 
                                                                                (2U 
                                                                                == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt)));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0U] 
        = (0xd00000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata))));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)((0xffU 
                                             & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata))));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata)));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3U] 
        = (0x900000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4U] 
        = (0x800000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0U] 
        = (0xffffU & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2U] 
        = vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3U] 
        = (((- (IData)((1U & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4U] 
        = (((- (IData)((1U & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__lsu_result = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit)
                                                   ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out
                                                   : 0U);
}

VL_ATTR_COLD void Vysyx_23060077_top___024root___eval_stl(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_23060077_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077_top___024root___dump_triggers__ico(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vysyx_23060077_top___024root___dump_triggers__act(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077_top___024root___dump_triggers__nba(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060077_top___024root___ctor_var_reset(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077_top__DOT__ifu_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__ifu_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = VL_RAND_RESET_I(4);
    vlSelf->ysyx_23060077_top__DOT__idu_src_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060077_top__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__exu_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__lsu_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077_top__DOT__csr_mret = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077_top__DOT__wr_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__csr_mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h05e9e7e0__0 = 0;
    VL_RAND_RESET_W(253, vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(23);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(16);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout = VL_RAND_RESET_I(6);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__carry_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__signed_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(36);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(36);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rlen = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_h63722c78__0 = 0;
    vlSelf->__VdfgTmp_h8b1e9b8d__0 = 0;
    vlSelf->__VdfgTmp_h29117f5a__0 = 0;
    vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__riscv_pmem_read__0__rdata = 0;
    vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_pmem_read__4__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
