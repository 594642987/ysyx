// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060077_top.h for the primary calling header

#ifndef VERILATED_VYSYX_23060077_TOP___024ROOT_H_
#define VERILATED_VYSYX_23060077_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_23060077_top__Syms;

class Vysyx_23060077_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        CData/*3:0*/ ysyx_23060077_top__DOT__idu_alu_opt;
        CData/*1:0*/ ysyx_23060077_top__DOT__idu_src_sel;
        CData/*1:0*/ ysyx_23060077_top__DOT__idu_lsu_opt;
        CData/*0:0*/ ysyx_23060077_top__DOT__csr_ecall;
        CData/*0:0*/ ysyx_23060077_top__DOT__csr_mret;
        CData/*0:0*/ ysyx_23060077_top__DOT____VdfgTmp_h05e9e7e0__0;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit;
        CData/*1:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit;
        CData/*1:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit;
        CData/*5:0*/ ysyx_23060077_top__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__carry_flag;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__signed_flag;
        CData/*3:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit;
        CData/*4:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en;
        CData/*0:0*/ __VdfgTmp_h29117f5a__0;
        CData/*4:0*/ __Vtableidx1;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out;
        SData/*15:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out;
        SData/*15:0*/ __VdfgTmp_h63722c78__0;
        SData/*15:0*/ __VdfgTmp_h8b1e9b8d__0;
        IData/*31:0*/ ysyx_23060077_top__DOT__ifu_pc;
        IData/*31:0*/ ysyx_23060077_top__DOT__ifu_inst;
        IData/*31:0*/ ysyx_23060077_top__DOT__src1;
        IData/*31:0*/ ysyx_23060077_top__DOT__exu_result;
        IData/*31:0*/ ysyx_23060077_top__DOT__lsu_result;
        IData/*31:0*/ ysyx_23060077_top__DOT__wr_csr_data;
        IData/*31:0*/ ysyx_23060077_top__DOT__csr_mstatus;
        VlWide<8>/*252:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__i;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rlen;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r;
        IData/*31:0*/ __Vtask_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__riscv_pmem_read__0__rdata;
        IData/*31:0*/ __Vtask_ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_pmem_read__4__rdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out;
        QData/*63:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out;
    };
    struct {
        QData/*32:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t;
        QData/*32:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out;
        VlUnpacked<IData/*22:0*/, 11> ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 11> ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*15:0*/, 11> ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 11> ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 11> ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 11> ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 3> ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 3> ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 3> ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr;
        VlUnpacked<VlWide<3>/*65:0*/, 4> ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list;
        VlUnpacked<QData/*35:0*/, 11> ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 11> ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 11> ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list;
        VlUnpacked<QData/*35:0*/, 6> ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 6> ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list;
        VlUnpacked<QData/*36:0*/, 5> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 5> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list;
        VlUnpacked<QData/*36:0*/, 3> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 3> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 4096> ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060077_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060077_top___024root(Vysyx_23060077_top__Syms* symsp, const char* v__name);
    ~Vysyx_23060077_top___024root();
    VL_UNCOPYABLE(Vysyx_23060077_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
