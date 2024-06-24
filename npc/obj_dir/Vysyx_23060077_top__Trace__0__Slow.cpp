// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060077_top__Syms.h"


VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_init_sub__TOP__0(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+346,"clock", false,-1);
    tracep->declBit(c+347,"rst_n", false,-1);
    tracep->pushNamePrefix("ysyx_23060077_top ");
    tracep->declBit(c+346,"clock", false,-1);
    tracep->declBit(c+347,"rst_n", false,-1);
    tracep->declBus(c+173,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+350,"ifu_inst", false,-1, 31,0);
    tracep->declBit(c+351,"idu_branch", false,-1);
    tracep->declBit(c+352,"idu_jal", false,-1);
    tracep->declBit(c+353,"idu_jalr", false,-1);
    tracep->declBus(c+1,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+2,"idu_rd_wen", false,-1);
    tracep->declBus(c+3,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+4,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+5,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+6,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+7,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+8,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+354,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+174,"src1", false,-1, 31,0);
    tracep->declBus(c+175,"src2", false,-1, 31,0);
    tracep->declBus(c+348,"rd_data", false,-1, 31,0);
    tracep->declBit(c+176,"zero_flag", false,-1);
    tracep->declBus(c+177,"exu_result", false,-1, 31,0);
    tracep->declBus(c+9,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+10,"csr_ecall", false,-1);
    tracep->declBit(c+11,"csr_mret", false,-1);
    tracep->declBus(c+178,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+349,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+179,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+180,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+181,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_csr_u0 ");
    tracep->declBit(c+346,"clk", false,-1);
    tracep->declBit(c+347,"rst_n", false,-1);
    tracep->declBus(c+12,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+178,"wr_data", false,-1, 31,0);
    tracep->declBus(c+12,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+349,"rd_data", false,-1, 31,0);
    tracep->declBit(c+10,"i_csr_ecall", false,-1);
    tracep->declBit(c+11,"i_csr_mret", false,-1);
    tracep->declBus(c+350,"i_inst", false,-1, 31,0);
    tracep->declBus(c+173,"i_pc", false,-1, 31,0);
    tracep->declBus(c+179,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+180,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+181,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+349,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+13,"wr_en", false,-1);
    tracep->declBit(c+13,"rd_en", false,-1);
    tracep->declBus(c+182,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+183,"temp", false,-1, 31,0);
    tracep->declBus(c+179,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+184,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+185,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_exu_u0 ");
    tracep->declBus(c+173,"pc", false,-1, 31,0);
    tracep->declBus(c+174,"src1", false,-1, 31,0);
    tracep->declBus(c+175,"src2", false,-1, 31,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBit(c+351,"branch", false,-1);
    tracep->declBus(c+6,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+7,"src_sel", false,-1, 1,0);
    tracep->declBus(c+354,"funct3", false,-1, 2,0);
    tracep->declBit(c+176,"zero_flag", false,-1);
    tracep->declBus(c+177,"exu_result", false,-1, 31,0);
    tracep->declBus(c+186,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+187,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+188,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+355,"carry_flag", false,-1);
    tracep->declBit(c+356,"signed_flag", false,-1);
    tracep->pushNamePrefix("riscv_ex_alu ");
    tracep->declBus(c+6,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+186,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+187,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+188,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+14,"sub_flag", false,-1);
    tracep->declQuad(c+189,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+191,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+15,"cin", false,-1, 32,0);
    tracep->declQuad(c+193,"add_out", false,-1, 32,0);
    tracep->declBit(c+195,"top_A", false,-1);
    tracep->declBit(c+196,"top_B", false,-1);
    tracep->declBit(c+197,"top_C", false,-1);
    tracep->declBit(c+198,"sign_flag", false,-1);
    tracep->declBit(c+199,"over_flag", false,-1);
    tracep->declBit(c+200,"carry_flag", false,-1);
    tracep->declBus(c+201,"sra_result", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_mux_ex_data ");
    tracep->declBus(c+357,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+359,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+188,"out", false,-1, 31,0);
    tracep->declBus(c+6,"key", false,-1, 3,0);
    tracep->declBus(c+360,"default_out", false,-1, 31,0);
    tracep->declArray(c+202,"lut", false,-1, 395,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+357,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+359,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+361,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+188,"out", false,-1, 31,0);
    tracep->declBus(c+6,"key", false,-1, 3,0);
    tracep->declBus(c+360,"default_out", false,-1, 31,0);
    tracep->declArray(c+202,"lut", false,-1, 395,0);
    tracep->declBus(c+362,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+215+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+17+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+237+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+248,"lut_out", false,-1, 31,0);
    tracep->declBit(c+249,"hit", false,-1);
    tracep->declBus(c+363,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_mux_ex_branch ");
    tracep->declBus(c+364,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+359,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 31,0);
    tracep->declBus(c+28,"key", false,-1, 3,0);
    tracep->declBus(c+188,"default_out", false,-1, 31,0);
    tracep->declArray(c+250,"lut", false,-1, 215,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+364,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+359,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+361,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 31,0);
    tracep->declBus(c+28,"key", false,-1, 3,0);
    tracep->declBus(c+188,"default_out", false,-1, 31,0);
    tracep->declArray(c+250,"lut", false,-1, 215,0);
    tracep->declBus(c+362,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+257+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+269+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+275,"lut_out", false,-1, 31,0);
    tracep->declBit(c+276,"hit", false,-1);
    tracep->declBus(c+365,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_ex_src_sel ");
    tracep->declBus(c+358,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+366,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+367,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+277,"out", false,-1, 63,0);
    tracep->declBus(c+7,"key", false,-1, 1,0);
    tracep->declQuad(c+368,"default_out", false,-1, 63,0);
    tracep->declArray(c+279,"lut", false,-1, 263,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+358,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+366,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+367,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+361,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+277,"out", false,-1, 63,0);
    tracep->declBus(c+7,"key", false,-1, 1,0);
    tracep->declQuad(c+368,"default_out", false,-1, 63,0);
    tracep->declArray(c+279,"lut", false,-1, 263,0);
    tracep->declBus(c+370,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+288+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+35+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+300+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+308,"lut_out", false,-1, 63,0);
    tracep->declBit(c+310,"hit", false,-1);
    tracep->declBus(c+371,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_idu_u0 ");
    tracep->declBus(c+350,"inst", false,-1, 31,0);
    tracep->declBit(c+351,"branch", false,-1);
    tracep->declBit(c+352,"jal", false,-1);
    tracep->declBit(c+353,"jalr", false,-1);
    tracep->declBus(c+1,"rd", false,-1, 4,0);
    tracep->declBit(c+2,"rd_wen", false,-1);
    tracep->declBus(c+3,"rs1", false,-1, 4,0);
    tracep->declBus(c+4,"rs2", false,-1, 4,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+6,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+7,"src_sel", false,-1, 1,0);
    tracep->declBus(c+8,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+354,"funct3", false,-1, 2,0);
    tracep->declBus(c+372,"opcode", false,-1, 6,0);
    tracep->declBus(c+373,"funct7", false,-1, 6,0);
    tracep->declBus(c+374,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("riscv_id_imm_idu ");
    tracep->declBus(c+350,"inst", false,-1, 31,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+5,"imm_r", false,-1, 31,0);
    tracep->declBus(c+39,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+375,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+376,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+377,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+378,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+379,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+379,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeB ");
    tracep->declBus(c+380,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+381,"imm_in", false,-1, 12,0);
    tracep->declBus(c+377,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeI ");
    tracep->declBus(c+382,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"imm_in", false,-1, 11,0);
    tracep->declBus(c+39,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeJ ");
    tracep->declBus(c+384,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+385,"imm_in", false,-1, 20,0);
    tracep->declBus(c+378,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeS ");
    tracep->declBus(c+382,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+386,"imm_in", false,-1, 11,0);
    tracep->declBus(c+376,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeU ");
    tracep->declBus(c+359,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+375,"imm_in", false,-1, 31,0);
    tracep->declBus(c+375,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_id_opt_idu ");
    tracep->declBus(c+372,"opcode", false,-1, 6,0);
    tracep->declBus(c+354,"funct3", false,-1, 2,0);
    tracep->declBus(c+373,"funct7", false,-1, 6,0);
    tracep->declBus(c+6,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+7,"src_sel", false,-1, 1,0);
    tracep->declBus(c+8,"lsu_opt", false,-1, 1,0);
    tracep->pushNamePrefix("riscv_mux_id_src_sel ");
    tracep->declBus(c+357,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+366,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+7,"out", false,-1, 1,0);
    tracep->declBus(c+372,"key", false,-1, 6,0);
    tracep->declBus(c+388,"default_out", false,-1, 1,0);
    tracep->declArray(c+389,"lut", false,-1, 98,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+357,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+366,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+361,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+7,"out", false,-1, 1,0);
    tracep->declBus(c+372,"key", false,-1, 6,0);
    tracep->declBus(c+388,"default_out", false,-1, 1,0);
    tracep->declArray(c+389,"lut", false,-1, 98,0);
    tracep->declBus(c+393,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+40+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+51+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+62+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+73,"lut_out", false,-1, 1,0);
    tracep->declBit(c+74,"hit", false,-1);
    tracep->declBus(c+363,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_23060077_riscv_mux_id_lsu_opt ");
    tracep->declBus(c+394,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+366,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+8,"out", false,-1, 1,0);
    tracep->declBus(c+372,"key", false,-1, 6,0);
    tracep->declBus(c+395,"default_out", false,-1, 1,0);
    tracep->declBus(c+396,"lut", false,-1, 26,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+394,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+366,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+361,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+8,"out", false,-1, 1,0);
    tracep->declBus(c+372,"key", false,-1, 6,0);
    tracep->declBus(c+395,"default_out", false,-1, 1,0);
    tracep->declBus(c+396,"lut", false,-1, 26,0);
    tracep->declBus(c+393,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+75+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+78+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+81+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+84,"lut_out", false,-1, 1,0);
    tracep->declBit(c+85,"hit", false,-1);
    tracep->declBus(c+397,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_mux_id_reg ");
    tracep->declBus(c+357,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+398,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+86,"out", false,-1, 15,0);
    tracep->declBus(c+372,"key", false,-1, 6,0);
    tracep->declBus(c+399,"default_out", false,-1, 15,0);
    tracep->declArray(c+87,"lut", false,-1, 252,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+357,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+398,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+361,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+86,"out", false,-1, 15,0);
    tracep->declBus(c+372,"key", false,-1, 6,0);
    tracep->declBus(c+399,"default_out", false,-1, 15,0);
    tracep->declArray(c+87,"lut", false,-1, 252,0);
    tracep->declBus(c+400,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+95+i*1,"pair_list", true,(i+0), 22,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+106+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+117+i*1,"data_list", true,(i+0), 15,0);
    }
    tracep->declBus(c+128,"lut_out", false,-1, 15,0);
    tracep->declBit(c+129,"hit", false,-1);
    tracep->declBus(c+363,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_ifu_u0 ");
    tracep->declBit(c+347,"rst_n", false,-1);
    tracep->declBus(c+173,"pc", false,-1, 31,0);
    tracep->declBus(c+350,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_lsu_u0 ");
    tracep->declBit(c+346,"clk", false,-1);
    tracep->declBit(c+347,"rst_n", false,-1);
    tracep->declBus(c+177,"exu_result", false,-1, 31,0);
    tracep->declBus(c+175,"src2", false,-1, 31,0);
    tracep->declBus(c+8,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+354,"funct3", false,-1, 2,0);
    tracep->declBus(c+9,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+130,"ren", false,-1);
    tracep->declBit(c+131,"wen", false,-1);
    tracep->declBus(c+177,"raddr", false,-1, 31,0);
    tracep->declBus(c+401,"rdata", false,-1, 31,0);
    tracep->declBus(c+177,"waddr", false,-1, 31,0);
    tracep->declBus(c+175,"wdata", false,-1, 31,0);
    tracep->declBus(c+132,"wmask", false,-1, 31,0);
    tracep->declBus(c+132,"mask", false,-1, 31,0);
    tracep->declBus(c+133,"rlen", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_mux_ls_lsu_opt ");
    tracep->declBus(c+402,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+402,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+359,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+9,"out", false,-1, 31,0);
    tracep->declBus(c+134,"key", false,-1, 4,0);
    tracep->declBus(c+360,"default_out", false,-1, 31,0);
    tracep->declArray(c+403,"lut", false,-1, 184,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+402,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+402,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+359,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+361,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+9,"out", false,-1, 31,0);
    tracep->declBus(c+134,"key", false,-1, 4,0);
    tracep->declBus(c+360,"default_out", false,-1, 31,0);
    tracep->declArray(c+403,"lut", false,-1, 184,0);
    tracep->declBus(c+409,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+135+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+145+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+150+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+155,"lut_out", false,-1, 31,0);
    tracep->declBit(c+156,"hit", false,-1);
    tracep->declBus(c+410,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_ls_wmask ");
    tracep->declBus(c+394,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+402,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+359,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+132,"out", false,-1, 31,0);
    tracep->declBus(c+134,"key", false,-1, 4,0);
    tracep->declBus(c+360,"default_out", false,-1, 31,0);
    tracep->declArray(c+411,"lut", false,-1, 110,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+394,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+402,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+359,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+361,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+132,"out", false,-1, 31,0);
    tracep->declBus(c+134,"key", false,-1, 4,0);
    tracep->declBus(c+360,"default_out", false,-1, 31,0);
    tracep->declArray(c+411,"lut", false,-1, 110,0);
    tracep->declBus(c+409,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+157+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+163+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+166+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+169,"lut_out", false,-1, 31,0);
    tracep->declBit(c+170,"hit", false,-1);
    tracep->declBus(c+397,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_regfile_u0 ");
    tracep->declBit(c+346,"clk", false,-1);
    tracep->declBit(c+347,"rst_n", false,-1);
    tracep->declBus(c+3,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+174,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+4,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+175,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+2,"rd_en", false,-1);
    tracep->declBus(c+1,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+348,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+311+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+171,"i", false,-1, 31,0);
    tracep->declBus(c+343,"rd_addr_t", false,-1, 4,0);
    tracep->declBit(c+344,"rd_en_t", false,-1);
    tracep->pushNamePrefix("riscv_dff_reg_t ");
    tracep->declBus(c+364,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+360,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+346,"clk", false,-1);
    tracep->declBit(c+347,"rst_n", false,-1);
    tracep->declBit(c+415,"wen", false,-1);
    tracep->declBus(c+172,"din", false,-1, 5,0);
    tracep->declBus(c+345,"dout", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_wbu_u0 ");
    tracep->declBus(c+8,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+177,"exu_result", false,-1, 31,0);
    tracep->declBus(c+9,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+349,"csr_result", false,-1, 31,0);
    tracep->declBus(c+348,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_init_top(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060077_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060077_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060077_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_register(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060077_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060077_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060077_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_full_sub_0(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060077_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060077_top___024root*>(voidSelf);
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060077_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_full_sub_0(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<13>/*415:0*/ __Vtemp_h853fad15__0;
    VlWide<7>/*223:0*/ __Vtemp_h86f1ea95__0;
    VlWide<9>/*287:0*/ __Vtemp_ha3c88b17__0;
    VlWide<4>/*127:0*/ __Vtemp_h8c90ec6d__0;
    VlWide<6>/*191:0*/ __Vtemp_h27a1147d__0;
    VlWide<4>/*127:0*/ __Vtemp_heb927861__0;
    // Body
    bufp->fullCData(oldp+1,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                      >> 1U))),5);
    bufp->fullBit(oldp+2,((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out))));
    bufp->fullCData(oldp+3,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                      >> 0xbU))),5);
    bufp->fullCData(oldp+4,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                      >> 6U))),5);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_23060077_top__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt),2);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060077_top__DOT__lsu_result),32);
    bufp->fullBit(oldp+10,(vlSelf->ysyx_23060077_top__DOT__csr_ecall));
    bufp->fullBit(oldp+11,(vlSelf->ysyx_23060077_top__DOT__csr_mret));
    bufp->fullSData(oldp+12,((0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en));
    bufp->fullBit(oldp+14,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+15,((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag))),33);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[0]),4);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[1]),4);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[2]),4);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[3]),4);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[4]),4);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[5]),4);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[6]),4);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[7]),4);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[8]),4);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[9]),4);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[10]),4);
    bufp->fullCData(oldp+28,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key),4);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[0]),4);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[1]),4);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[2]),4);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[3]),4);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[4]),4);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[5]),4);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[0]),2);
    bufp->fullCData(oldp+36,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[1]),2);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[2]),2);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[3]),2);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
    bufp->fullSData(oldp+40,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+41,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+42,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+43,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+44,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+45,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[5]),9);
    bufp->fullSData(oldp+46,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[6]),9);
    bufp->fullSData(oldp+47,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[7]),9);
    bufp->fullSData(oldp+48,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[8]),9);
    bufp->fullSData(oldp+49,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[9]),9);
    bufp->fullSData(oldp+50,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[10]),9);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[0]),7);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[1]),7);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[2]),7);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[3]),7);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[4]),7);
    bufp->fullCData(oldp+56,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[5]),7);
    bufp->fullCData(oldp+57,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[6]),7);
    bufp->fullCData(oldp+58,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[7]),7);
    bufp->fullCData(oldp+59,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[8]),7);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[9]),7);
    bufp->fullCData(oldp+61,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[10]),7);
    bufp->fullCData(oldp+62,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[0]),2);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[1]),2);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[2]),2);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[3]),2);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[4]),2);
    bufp->fullCData(oldp+67,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[5]),2);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[6]),2);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[7]),2);
    bufp->fullCData(oldp+70,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[8]),2);
    bufp->fullCData(oldp+71,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[9]),2);
    bufp->fullCData(oldp+72,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[10]),2);
    bufp->fullCData(oldp+73,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out),2);
    bufp->fullBit(oldp+74,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit));
    bufp->fullSData(oldp+75,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+76,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+77,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[2]),9);
    bufp->fullCData(oldp+78,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[0]),7);
    bufp->fullCData(oldp+79,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[1]),7);
    bufp->fullCData(oldp+80,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[2]),7);
    bufp->fullCData(oldp+81,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[0]),2);
    bufp->fullCData(oldp+82,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[1]),2);
    bufp->fullCData(oldp+83,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[2]),2);
    bufp->fullCData(oldp+84,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out),2);
    bufp->fullBit(oldp+85,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit));
    bufp->fullSData(oldp+86,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out),16);
    bufp->fullWData(oldp+87,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut),253);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0]),23);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[1]),23);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2]),23);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3]),23);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4]),23);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5]),23);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6]),23);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7]),23);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8]),23);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9]),23);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[10]),23);
    bufp->fullCData(oldp+106,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[0]),7);
    bufp->fullCData(oldp+107,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[1]),7);
    bufp->fullCData(oldp+108,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[2]),7);
    bufp->fullCData(oldp+109,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[3]),7);
    bufp->fullCData(oldp+110,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[4]),7);
    bufp->fullCData(oldp+111,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[5]),7);
    bufp->fullCData(oldp+112,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[6]),7);
    bufp->fullCData(oldp+113,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[7]),7);
    bufp->fullCData(oldp+114,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[8]),7);
    bufp->fullCData(oldp+115,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[9]),7);
    bufp->fullCData(oldp+116,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[10]),7);
    bufp->fullSData(oldp+117,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0]),16);
    bufp->fullSData(oldp+118,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[1]),16);
    bufp->fullSData(oldp+119,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2]),16);
    bufp->fullSData(oldp+120,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3]),16);
    bufp->fullSData(oldp+121,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4]),16);
    bufp->fullSData(oldp+122,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5]),16);
    bufp->fullSData(oldp+123,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6]),16);
    bufp->fullSData(oldp+124,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7]),16);
    bufp->fullSData(oldp+125,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8]),16);
    bufp->fullSData(oldp+126,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9]),16);
    bufp->fullSData(oldp+127,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[10]),16);
    bufp->fullSData(oldp+128,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out),16);
    bufp->fullBit(oldp+129,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit));
    bufp->fullBit(oldp+130,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))));
    bufp->fullBit(oldp+131,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))));
    bufp->fullIData(oldp+132,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rlen),32);
    bufp->fullCData(oldp+134,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key),5);
    bufp->fullQData(oldp+135,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+137,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+139,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+143,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4]),37);
    bufp->fullCData(oldp+145,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[0]),5);
    bufp->fullCData(oldp+146,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[1]),5);
    bufp->fullCData(oldp+147,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[2]),5);
    bufp->fullCData(oldp+148,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[3]),5);
    bufp->fullCData(oldp+149,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[4]),5);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+156,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit));
    bufp->fullQData(oldp+157,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+159,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+161,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[2]),37);
    bufp->fullCData(oldp+163,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[0]),5);
    bufp->fullCData(oldp+164,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[1]),5);
    bufp->fullCData(oldp+165,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[2]),5);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+170,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+171,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__i),32);
    bufp->fullCData(oldp+172,(((0x20U & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                         << 5U)) | 
                               (0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                         >> 1U)))),6);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_23060077_top__DOT__ifu_pc),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_23060077_top__DOT__src1),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata),32);
    bufp->fullBit(oldp+176,((1U & (~ (IData)((0U != vlSelf->ysyx_23060077_top__DOT__exu_result))))));
    bufp->fullIData(oldp+177,(vlSelf->ysyx_23060077_top__DOT__exu_result),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_23060077_top__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+186,((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+187,((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data),32);
    bufp->fullQData(oldp+189,((((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                            >> 0x3fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                             >> 0x20U))))),33);
    bufp->fullQData(oldp+191,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+193,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+195,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+196,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+197,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+198,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+199,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+200,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag));
    bufp->fullIData(oldp+201,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x20U)))) 
                                       >> (0x3fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))))),32);
    __Vtemp_h853fad15__0[0U] = (IData)((0xb00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out))));
    __Vtemp_h853fad15__0[1U] = ((((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                           >> 0x20U)) 
                                  & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                 << 4U) | (IData)((
                                                   (0xb00000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out))) 
                                                   >> 0x20U)));
    __Vtemp_h853fad15__0[2U] = (0xa0U | ((((IData)(
                                                   (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                    >> 0x20U)) 
                                           | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                          << 8U) | 
                                         (((IData)(
                                                   (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                    >> 0x20U)) 
                                           & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                          >> 0x1cU)));
    __Vtemp_h853fad15__0[3U] = (0x900U | (((IData)(
                                                   ((((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                        >> 0x20U)))) 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))) 
                                           << 0xcU) 
                                          | (((IData)(
                                                      (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                       >> 0x20U)) 
                                              | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                             >> 0x18U)));
    __Vtemp_h853fad15__0[4U] = (0x8000U | ((((IData)(
                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             >> (0x1fU 
                                                 & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))) 
                                            << 0x10U) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                           >> 0x20U)))) 
                                                       >> 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))) 
                                              >> 0x14U)));
    __Vtemp_h853fad15__0[5U] = (0x70000U | ((((IData)(
                                                      (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                       >> 0x20U)) 
                                              ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                             << 0x14U) 
                                            | (((IData)(
                                                        (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                         >> 0x20U)) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))) 
                                               >> 0x10U)));
    __Vtemp_h853fad15__0[6U] = (0x600000U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag) 
                                              << 0x18U) 
                                             | (((IData)(
                                                         (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                >> 0xcU)));
    __Vtemp_h853fad15__0[7U] = (0x5000000U | ((IData)(vlSelf->__VdfgTmp_h29117f5a__0) 
                                              << 0x1cU));
    __Vtemp_h853fad15__0[8U] = 0x40000000U;
    __Vtemp_h853fad15__0[9U] = ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                         >> 0x20U)) 
                                << (0x1fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)));
    __Vtemp_h853fad15__0[0xaU] = (3U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                        << 4U));
    __Vtemp_h853fad15__0[0xbU] = (0x20U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                            << 8U) 
                                           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                              >> 0x1cU)));
    __Vtemp_h853fad15__0[0xcU] = (0x100U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                            >> 0x18U));
    bufp->fullWData(oldp+202,(__Vtemp_h853fad15__0),396);
    bufp->fullQData(oldp+215,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+217,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+219,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+221,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+223,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+225,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+227,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+229,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+231,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+233,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+235,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[10]),36);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[10]),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+249,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit));
    __Vtemp_h86f1ea95__0[0U] = (IData)((0xf00000000ULL 
                                        | (QData)((IData)(
                                                          (1U 
                                                           & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))))));
    __Vtemp_h86f1ea95__0[1U] = ((0x10U & (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data 
                                          << 4U)) | (IData)(
                                                            ((0xf00000000ULL 
                                                              | (QData)((IData)(
                                                                                (1U 
                                                                                & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))))) 
                                                             >> 0x20U)));
    __Vtemp_h86f1ea95__0[2U] = (0xe0U | (0x100U & (
                                                   (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data) 
                                                   << 8U)));
    __Vtemp_h86f1ea95__0[3U] = (0xd00U | (0x1000U & 
                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data 
                                           << 0xcU)));
    __Vtemp_h86f1ea95__0[4U] = (0xc000U | ((IData)(
                                                   (0U 
                                                    != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data)) 
                                           << 0x10U));
    __Vtemp_h86f1ea95__0[5U] = (0x90000U | (0x100000U 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))) 
                                               << 0x14U)));
    __Vtemp_h86f1ea95__0[6U] = 0x800000U;
    bufp->fullWData(oldp+250,(__Vtemp_h86f1ea95__0),216);
    bufp->fullQData(oldp+257,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+259,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+261,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+263,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+265,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+267,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5]),36);
    bufp->fullIData(oldp+269,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+270,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+271,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5]),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+276,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit));
    bufp->fullQData(oldp+277,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out),64);
    __Vtemp_ha3c88b17__0[0U] = (IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__ifu_pc)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))));
    __Vtemp_ha3c88b17__0[1U] = (IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__ifu_pc)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                                        >> 0x20U));
    __Vtemp_ha3c88b17__0[2U] = 0x13U;
    __Vtemp_ha3c88b17__0[3U] = (vlSelf->ysyx_23060077_top__DOT__ifu_pc 
                                << 2U);
    __Vtemp_ha3c88b17__0[4U] = (8U | (((IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))) 
                                       << 4U) | (vlSelf->ysyx_23060077_top__DOT__ifu_pc 
                                                 >> 0x1eU)));
    __Vtemp_ha3c88b17__0[5U] = (((IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_ha3c88b17__0[6U] = (0x10U | (((IData)((
                                                   ((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata)))) 
                                          << 6U) | 
                                         ((IData)((
                                                   (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                                                   >> 0x20U)) 
                                          >> 0x1cU)));
    __Vtemp_ha3c88b17__0[7U] = (((IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata)))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_ha3c88b17__0[8U] = ((IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata))) 
                                         >> 0x20U)) 
                                >> 0x1aU);
    bufp->fullWData(oldp+279,(__Vtemp_ha3c88b17__0),264);
    bufp->fullWData(oldp+288,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+291,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+294,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+297,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+300,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0]),64);
    bufp->fullQData(oldp+302,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1]),64);
    bufp->fullQData(oldp+304,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2]),64);
    bufp->fullQData(oldp+306,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3]),64);
    bufp->fullQData(oldp+308,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out),64);
    bufp->fullBit(oldp+310,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+311,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
    bufp->fullCData(oldp+343,((0x1fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout))),5);
    bufp->fullBit(oldp+344,((1U & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout) 
                                   >> 5U))));
    bufp->fullCData(oldp+345,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout),6);
    bufp->fullBit(oldp+346,(vlSelf->clock));
    bufp->fullBit(oldp+347,(vlSelf->rst_n));
    bufp->fullIData(oldp+348,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                ? vlSelf->ysyx_23060077_top__DOT__exu_result
                                : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                    ? ((IData)(vlSelf->rst_n)
                                        ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                            ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                           [(0xfffU 
                                             & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                            : 0U) : 0U)
                                    : vlSelf->ysyx_23060077_top__DOT__lsu_result))),32);
    bufp->fullIData(oldp+349,(((IData)(vlSelf->rst_n)
                                ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                    ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                   [(0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                    : 0U) : 0U)),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyx_23060077_top__DOT__ifu_inst),32);
    bufp->fullBit(oldp+351,((0x63U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst))));
    bufp->fullBit(oldp+352,((0x6fU == (0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst))));
    bufp->fullBit(oldp+353,((0x67U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst))));
    bufp->fullCData(oldp+354,((7U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+355,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+356,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__signed_flag));
    bufp->fullIData(oldp+357,(0xbU),32);
    bufp->fullIData(oldp+358,(4U),32);
    bufp->fullIData(oldp+359,(0x20U),32);
    bufp->fullIData(oldp+360,(0U),32);
    bufp->fullIData(oldp+361,(1U),32);
    bufp->fullIData(oldp+362,(0x24U),32);
    bufp->fullIData(oldp+363,(0xbU),32);
    bufp->fullIData(oldp+364,(6U),32);
    bufp->fullIData(oldp+365,(6U),32);
    bufp->fullIData(oldp+366,(2U),32);
    bufp->fullIData(oldp+367,(0x40U),32);
    bufp->fullQData(oldp+368,(0ULL),64);
    bufp->fullIData(oldp+370,(0x42U),32);
    bufp->fullIData(oldp+371,(4U),32);
    bufp->fullCData(oldp+372,((0x7fU & vlSelf->ysyx_23060077_top__DOT__ifu_inst)),7);
    bufp->fullCData(oldp+373,((vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+374,(0U),5);
    bufp->fullIData(oldp+375,((0xfffff000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)),32);
    bufp->fullIData(oldp+376,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+377,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+378,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__ifu_inst 
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
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+379,(0U),32);
    bufp->fullIData(oldp+380,(0xdU),32);
    bufp->fullSData(oldp+381,(((0x1000U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                 >> 7U)))))),13);
    bufp->fullIData(oldp+382,(0xcU),32);
    bufp->fullSData(oldp+383,((vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+384,(0x15U),32);
    bufp->fullIData(oldp+385,(((0x100000U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyx_23060077_top__DOT__ifu_inst) 
                                  | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+386,(((0xfe0U & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_23060077_top__DOT__ifu_inst 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+387,(7U),32);
    bufp->fullCData(oldp+388,(1U),2);
    __Vtemp_h8c90ec6d__0[0U] = 0x6b307bcdU;
    __Vtemp_h8c90ec6d__0[1U] = 0x6301a8d2U;
    __Vtemp_h8c90ec6d__0[2U] = 0x74bfbecfU;
    __Vtemp_h8c90ec6d__0[3U] = 3U;
    bufp->fullWData(oldp+389,(__Vtemp_h8c90ec6d__0),99);
    bufp->fullIData(oldp+393,(9U),32);
    bufp->fullIData(oldp+394,(3U),32);
    bufp->fullCData(oldp+395,(0U),2);
    bufp->fullIData(oldp+396,(0x351dcfU),27);
    bufp->fullIData(oldp+397,(3U),32);
    bufp->fullIData(oldp+398,(0x10U),32);
    bufp->fullSData(oldp+399,(0U),16);
    bufp->fullIData(oldp+400,(0x17U),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata),32);
    bufp->fullIData(oldp+402,(5U),32);
    __Vtemp_h27a1147d__0[0U] = (IData)((0xd00000000ULL 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata))) 
                                            << 0x25U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata))))));
    __Vtemp_h27a1147d__0[1U] = (IData)(((0xd00000000ULL 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata))) 
                                             << 0x25U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata))))) 
                                        >> 0x20U));
    __Vtemp_h27a1147d__0[2U] = (0x180U | (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                          << 0xaU));
    __Vtemp_h27a1147d__0[3U] = (0x2800U | ((0xffff8000U 
                                            & (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                                               >> 0xfU)))) 
                                                << 0x1fU) 
                                               | (0x7fff8000U 
                                                  & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                                     << 0xfU)))) 
                                           | (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                              >> 0x16U)));
    __Vtemp_h27a1147d__0[4U] = (0x48000U | ((0xfff00000U 
                                             & (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                                                >> 7U)))) 
                                                 << 0x1cU) 
                                                | (0xff00000U 
                                                   & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                                      << 0x14U)))) 
                                            | (0x7fffU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                                                 >> 0xfU)))) 
                                                  >> 1U))));
    __Vtemp_h27a1147d__0[5U] = (0x800000U | (0xfffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                                               >> 7U)))) 
                                                >> 4U)));
    bufp->fullWData(oldp+403,(__Vtemp_h27a1147d__0),185);
    bufp->fullIData(oldp+409,(0x25U),32);
    bufp->fullIData(oldp+410,(5U),32);
    __Vtemp_heb927861__0[0U] = 4U;
    __Vtemp_heb927861__0[1U] = 0x52U;
    __Vtemp_heb927861__0[2U] = 0x620U;
    __Vtemp_heb927861__0[3U] = 0x4000U;
    bufp->fullWData(oldp+411,(__Vtemp_heb927861__0),111);
    bufp->fullBit(oldp+415,(1U));
}
