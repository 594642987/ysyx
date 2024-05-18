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
        CData/*0:0*/ ysyx_23060077_top__DOT__stall;
        CData/*3:0*/ ysyx_23060077_top__DOT__idu_alu_opt;
        CData/*1:0*/ ysyx_23060077_top__DOT__idu_src_sel;
        CData/*1:0*/ ysyx_23060077_top__DOT__idu_lsu_opt;
        CData/*2:0*/ ysyx_23060077_top__DOT__idu_funct3;
        CData/*0:0*/ ysyx_23060077_top__DOT__mem_stall;
        CData/*0:0*/ ysyx_23060077_top__DOT__csr_ecall;
        CData/*0:0*/ ysyx_23060077_top__DOT__csr_mret;
        CData/*0:0*/ ysyx_23060077_top__DOT__commit_valid_t;
        CData/*0:0*/ ysyx_23060077_top__DOT____VdfgTmp_hfaaa6831__0;
        CData/*0:0*/ ysyx_23060077_top__DOT____VdfgTmp_h15124160__0;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_valid_i;
        CData/*2:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_strb_i;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_aw_valid_o;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_w_valid_o;
        CData/*2:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_b_resp_i;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_b_ready_o;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_ar_valid_o;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_r_ready_o;
        CData/*2:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_r_resp_i;
        CData/*2:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state;
        CData/*1:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state;
        CData/*2:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_aw_ready_o_r;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_w_ready_o_r;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_b_valid_o_r;
        CData/*1:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_valid_o_r;
        CData/*6:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode;
        CData/*6:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7;
        CData/*4:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0;
        CData/*4:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0;
        CData/*4:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0;
        CData/*1:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit;
        CData/*1:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__carry_flag;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__signed_flag;
        CData/*3:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen_t;
        CData/*4:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit;
        CData/*0:0*/ ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en;
        CData/*1:0*/ ysyx_23060077_top__DOT__riscv_csr_u0__DOT____VdfgTmp_hdcaab2b0__0;
        CData/*0:0*/ __VdfgTmp_h29117f5a__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out;
        SData/*15:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out;
        SData/*11:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeI__imm_in;
        SData/*15:0*/ __VdfgTmp_h96487c18__0;
    };
    struct {
        SData/*15:0*/ __VdfgTmp_h7c9f55bf__0;
        IData/*31:0*/ ysyx_23060077_top__DOT__ifu_pc_lst;
        IData/*31:0*/ ysyx_23060077_top__DOT__ifu_inst;
        IData/*31:0*/ ysyx_23060077_top__DOT__src1;
        IData/*31:0*/ ysyx_23060077_top__DOT__exu_result;
        IData/*31:0*/ ysyx_23060077_top__DOT__exu_result_t;
        IData/*31:0*/ ysyx_23060077_top__DOT__lsu_result;
        IData/*31:0*/ ysyx_23060077_top__DOT__wr_csr_data;
        IData/*31:0*/ ysyx_23060077_top__DOT__csr_mstatus;
        IData/*31:0*/ ysyx_23060077_top__DOT__commit_pc_t;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_addr_i;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_data_i;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeU;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__i;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_t;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp;
        IData/*31:0*/ ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r;
        IData/*31:0*/ __Vtask_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_read__2__rdata;
        IData/*31:0*/ __Vtask_ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_pmem_read__5__rdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out;
        QData/*63:0*/ ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out;
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
    };
    struct {
        VlUnpacked<CData/*3:0*/, 6> ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list;
        VlUnpacked<QData/*36:0*/, 5> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 5> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list;
        VlUnpacked<QData/*36:0*/, 3> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 3> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 4096> ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
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
