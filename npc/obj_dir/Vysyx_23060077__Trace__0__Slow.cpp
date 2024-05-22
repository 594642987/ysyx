// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060077__Syms.h"


VL_ATTR_COLD void Vysyx_23060077___024root__trace_init_sub__TOP__0(Vysyx_23060077___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+179,"clock", false,-1);
    tracep->declBit(c+180,"reset", false,-1);
    tracep->declBit(c+181,"io_interrupt", false,-1);
    tracep->declBit(c+182,"io_master_awrea", false,-1);
    tracep->declBit(c+183,"io_master_awval", false,-1);
    tracep->declBus(c+184,"io_master_awadd", false,-1, 31,0);
    tracep->declBus(c+185,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+186,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+187,"io_master_awsiz", false,-1, 2,0);
    tracep->declBus(c+188,"io_master_awbur", false,-1, 1,0);
    tracep->declBit(c+189,"io_master_wread", false,-1);
    tracep->declBit(c+190,"io_master_wvali", false,-1);
    tracep->declQuad(c+191,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+193,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+194,"io_master_wlast", false,-1);
    tracep->declBit(c+195,"io_master_bread", false,-1);
    tracep->declBit(c+196,"io_master_bvali", false,-1);
    tracep->declBus(c+197,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+198,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+199,"io_master_arrea", false,-1);
    tracep->declBit(c+200,"io_master_arval", false,-1);
    tracep->declBus(c+201,"io_master_aradd", false,-1, 31,0);
    tracep->declBus(c+202,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+203,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+204,"io_master_arsiz", false,-1, 2,0);
    tracep->declBus(c+205,"io_master_arbur", false,-1, 1,0);
    tracep->declBit(c+206,"io_master_rread", false,-1);
    tracep->declBit(c+207,"io_master_rvali", false,-1);
    tracep->declBus(c+208,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+209,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+211,"io_master_rlast", false,-1);
    tracep->declBus(c+212,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+213,"io_slave_awready", false,-1);
    tracep->declBit(c+214,"io_slave_awvalid", false,-1);
    tracep->declBus(c+215,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+216,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+217,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+218,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+219,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+220,"io_slave_wready", false,-1);
    tracep->declBit(c+221,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+222,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+224,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+225,"io_slave_wlast", false,-1);
    tracep->declBit(c+226,"io_slave_bready", false,-1);
    tracep->declBit(c+227,"io_slave_bvalid", false,-1);
    tracep->declBus(c+228,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+229,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+230,"io_slave_arready", false,-1);
    tracep->declBit(c+231,"io_slave_arvalid", false,-1);
    tracep->declBus(c+232,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+233,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+234,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+235,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+236,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+237,"io_slave_rready", false,-1);
    tracep->declBit(c+238,"io_slave_rvalid", false,-1);
    tracep->declBus(c+239,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+240,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+242,"io_slave_rlast", false,-1);
    tracep->declBus(c+243,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_23060077 ");
    tracep->declBit(c+179,"clock", false,-1);
    tracep->declBit(c+180,"reset", false,-1);
    tracep->declBit(c+181,"io_interrupt", false,-1);
    tracep->declBit(c+182,"io_master_awrea", false,-1);
    tracep->declBit(c+183,"io_master_awval", false,-1);
    tracep->declBus(c+184,"io_master_awadd", false,-1, 31,0);
    tracep->declBus(c+185,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+186,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+187,"io_master_awsiz", false,-1, 2,0);
    tracep->declBus(c+188,"io_master_awbur", false,-1, 1,0);
    tracep->declBit(c+189,"io_master_wread", false,-1);
    tracep->declBit(c+190,"io_master_wvali", false,-1);
    tracep->declQuad(c+191,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+193,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+194,"io_master_wlast", false,-1);
    tracep->declBit(c+195,"io_master_bread", false,-1);
    tracep->declBit(c+196,"io_master_bvali", false,-1);
    tracep->declBus(c+197,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+198,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+199,"io_master_arrea", false,-1);
    tracep->declBit(c+200,"io_master_arval", false,-1);
    tracep->declBus(c+201,"io_master_aradd", false,-1, 31,0);
    tracep->declBus(c+202,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+203,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+204,"io_master_arsiz", false,-1, 2,0);
    tracep->declBus(c+205,"io_master_arbur", false,-1, 1,0);
    tracep->declBit(c+206,"io_master_rread", false,-1);
    tracep->declBit(c+207,"io_master_rvali", false,-1);
    tracep->declBus(c+208,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+209,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+211,"io_master_rlast", false,-1);
    tracep->declBus(c+212,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+213,"io_slave_awready", false,-1);
    tracep->declBit(c+214,"io_slave_awvalid", false,-1);
    tracep->declBus(c+215,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+216,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+217,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+218,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+219,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+220,"io_slave_wready", false,-1);
    tracep->declBit(c+221,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+222,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+224,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+225,"io_slave_wlast", false,-1);
    tracep->declBit(c+226,"io_slave_bready", false,-1);
    tracep->declBit(c+227,"io_slave_bvalid", false,-1);
    tracep->declBus(c+228,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+229,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+230,"io_slave_arready", false,-1);
    tracep->declBit(c+231,"io_slave_arvalid", false,-1);
    tracep->declBus(c+232,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+233,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+234,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+235,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+236,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+237,"io_slave_rready", false,-1);
    tracep->declBit(c+238,"io_slave_rvalid", false,-1);
    tracep->declBus(c+239,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+240,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+242,"io_slave_rlast", false,-1);
    tracep->declBus(c+243,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+2,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+3,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+246,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+4,"ifu_stall", false,-1);
    tracep->declBus(c+5,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+6,"jump_pc_valid", false,-1);
    tracep->declBit(c+7,"stall", false,-1);
    tracep->declBit(c+4,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+8,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+9,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+10,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+11,"idu_branch", false,-1);
    tracep->declBit(c+12,"idu_jal", false,-1);
    tracep->declBit(c+13,"idu_jalr", false,-1);
    tracep->declBus(c+14,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+15,"idu_rd_wen", false,-1);
    tracep->declBus(c+16,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+17,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+18,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+19,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+20,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+21,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+22,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+23,"src1", false,-1, 31,0);
    tracep->declBus(c+24,"src2", false,-1, 31,0);
    tracep->declBus(c+244,"rd_data", false,-1, 31,0);
    tracep->declBit(c+25,"zero_flag", false,-1);
    tracep->declBus(c+26,"exu_result", false,-1, 31,0);
    tracep->declBus(c+247,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+27,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+7,"mem_stall", false,-1);
    tracep->declBit(c+28,"lsu_rd_wen", false,-1);
    tracep->declBit(c+29,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+30,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+31,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+32,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+33,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+30,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+34,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+24,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+35,"lsu_w_strb_o", false,-1, 2,0);
    tracep->declBit(c+36,"wbu_rd_wen", false,-1);
    tracep->declBit(c+37,"csr_ecall", false,-1);
    tracep->declBit(c+38,"csr_mret", false,-1);
    tracep->declBus(c+39,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+245,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+40,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+41,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+42,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("axi_arbiter_u0 ");
    tracep->declBit(c+179,"aclk", false,-1);
    tracep->declBit(c+180,"areset_n", false,-1);
    tracep->declBit(c+4,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+8,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+9,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+10,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+29,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+30,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+31,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+32,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+33,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+30,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+34,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+24,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+35,"lsu_w_strb_i", false,-1, 2,0);
    tracep->declBit(c+43,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+44,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+45,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+46,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+47,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+48,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+49,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+50,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+51,"cpu_w_strb_o", false,-1, 2,0);
    tracep->declBus(c+52,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+248,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+249,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+250,"ARB_LSU", false,-1, 1,0);
    tracep->declBit(c+53,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+54,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+251,"axi_aw_port_o", false,-1, 2,0);
    tracep->declBus(c+48,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBit(c+55,"axi_w_ready_i", false,-1);
    tracep->declBit(c+56,"axi_w_valid_o", false,-1);
    tracep->declBus(c+51,"axi_w_strb_o", false,-1, 2,0);
    tracep->declBus(c+50,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+57,"axi_b_resp_i", false,-1, 2,0);
    tracep->declBit(c+49,"axi_b_valid_i", false,-1);
    tracep->declBit(c+58,"axi_b_ready_o", false,-1);
    tracep->declBit(c+59,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+60,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+251,"axi_ar_port_o", false,-1, 2,0);
    tracep->declBus(c+44,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBit(c+61,"axi_r_ready_o", false,-1);
    tracep->declBit(c+45,"axi_r_valid_i", false,-1);
    tracep->declBus(c+62,"axi_r_resp_i", false,-1, 2,0);
    tracep->declBus(c+46,"axi_r_data_i", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_23060077_axi ");
    tracep->declBit(c+179,"aclk", false,-1);
    tracep->declBit(c+180,"areset_n", false,-1);
    tracep->declBit(c+43,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+44,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+45,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+46,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+47,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+48,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+49,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+50,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+51,"cpu_w_strb_i", false,-1, 2,0);
    tracep->declBit(c+53,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+54,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+251,"axi_aw_port_o", false,-1, 2,0);
    tracep->declBus(c+48,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBit(c+55,"axi_w_ready_i", false,-1);
    tracep->declBit(c+56,"axi_w_valid_o", false,-1);
    tracep->declBus(c+51,"axi_w_strb_o", false,-1, 2,0);
    tracep->declBus(c+50,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+57,"axi_b_resp_i", false,-1, 2,0);
    tracep->declBit(c+49,"axi_b_valid_i", false,-1);
    tracep->declBit(c+58,"axi_b_ready_o", false,-1);
    tracep->declBit(c+59,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+60,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+251,"axi_ar_port_o", false,-1, 2,0);
    tracep->declBus(c+44,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBit(c+61,"axi_r_ready_o", false,-1);
    tracep->declBit(c+45,"axi_r_valid_i", false,-1);
    tracep->declBus(c+62,"axi_r_resp_i", false,-1, 2,0);
    tracep->declBus(c+46,"axi_r_data_i", false,-1, 31,0);
    tracep->declBus(c+63,"lfsr_out", false,-1, 5,0);
    tracep->declBus(c+64,"r_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+65,"w_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+66,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+67,"axi_w_state_nxt", false,-1, 2,0);
    tracep->declBus(c+251,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+252,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+253,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+254,"AXI_W_RESP", false,-1, 2,0);
    tracep->declBus(c+255,"AXI_W_DELAY", false,-1, 2,0);
    tracep->declBus(c+68,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+69,"axi_r_state_nxt", false,-1, 1,0);
    tracep->declBus(c+248,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+249,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+250,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+256,"AXI_R_DELAY", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_23060077_axi_xbar ");
    tracep->declBit(c+179,"aclk", false,-1);
    tracep->declBit(c+180,"areset_n", false,-1);
    tracep->declBit(c+53,"axi_aw_ready_o", false,-1);
    tracep->declBit(c+54,"axi_aw_valid_i", false,-1);
    tracep->declBus(c+251,"axi_aw_port_i", false,-1, 2,0);
    tracep->declBus(c+48,"axi_aw_addr_i", false,-1, 31,0);
    tracep->declBit(c+55,"axi_w_ready_o", false,-1);
    tracep->declBit(c+56,"axi_w_valid_i", false,-1);
    tracep->declBus(c+51,"axi_w_strb_i", false,-1, 2,0);
    tracep->declBus(c+50,"axi_w_data_i", false,-1, 31,0);
    tracep->declBus(c+57,"axi_b_resp_o", false,-1, 2,0);
    tracep->declBit(c+49,"axi_b_valid_o", false,-1);
    tracep->declBit(c+58,"axi_b_ready_i", false,-1);
    tracep->declBit(c+59,"axi_ar_ready_o", false,-1);
    tracep->declBit(c+60,"axi_ar_valid_i", false,-1);
    tracep->declBus(c+251,"axi_ar_port_i", false,-1, 2,0);
    tracep->declBus(c+44,"axi_ar_addr_i", false,-1, 31,0);
    tracep->declBit(c+61,"axi_r_ready_i", false,-1);
    tracep->declBit(c+45,"axi_r_valid_o", false,-1);
    tracep->declBus(c+62,"axi_r_resp_o", false,-1, 2,0);
    tracep->declBus(c+46,"axi_r_data_o", false,-1, 31,0);
    tracep->declBit(c+70,"axi_sram_aw_ready_o", false,-1);
    tracep->declBit(c+71,"axi_sram_aw_valid_i", false,-1);
    tracep->declBus(c+251,"axi_sram_aw_port_i", false,-1, 2,0);
    tracep->declBus(c+72,"axi_sram_aw_addr_i", false,-1, 31,0);
    tracep->declBit(c+73,"axi_sram_w_ready_o", false,-1);
    tracep->declBit(c+74,"axi_sram_w_valid_i", false,-1);
    tracep->declBus(c+75,"axi_sram_w_strb_i", false,-1, 2,0);
    tracep->declBus(c+76,"axi_sram_w_data_i", false,-1, 31,0);
    tracep->declBus(c+257,"axi_sram_b_resp_o", false,-1, 2,0);
    tracep->declBit(c+77,"axi_sram_b_valid_o", false,-1);
    tracep->declBit(c+78,"axi_sram_b_ready_i", false,-1);
    tracep->declBit(c+79,"axi_sram_ar_ready_o", false,-1);
    tracep->declBit(c+80,"axi_sram_ar_valid_i", false,-1);
    tracep->declBus(c+251,"axi_sram_ar_port_i", false,-1, 2,0);
    tracep->declBus(c+81,"axi_sram_ar_addr_i", false,-1, 31,0);
    tracep->declBit(c+82,"axi_sram_r_ready_i", false,-1);
    tracep->declBit(c+83,"axi_sram_r_valid_o", false,-1);
    tracep->declBus(c+258,"axi_sram_r_resp_o", false,-1, 2,0);
    tracep->declBus(c+84,"axi_sram_r_data_o", false,-1, 31,0);
    tracep->declBit(c+85,"axi_uart_aw_ready_o", false,-1);
    tracep->declBit(c+86,"axi_uart_aw_valid_i", false,-1);
    tracep->declBus(c+251,"axi_uart_aw_port_i", false,-1, 2,0);
    tracep->declBus(c+87,"axi_uart_aw_addr_i", false,-1, 31,0);
    tracep->declBit(c+88,"axi_uart_w_ready_o", false,-1);
    tracep->declBit(c+89,"axi_uart_w_valid_i", false,-1);
    tracep->declBus(c+90,"axi_uart_w_strb_i", false,-1, 2,0);
    tracep->declBus(c+91,"axi_uart_w_data_i", false,-1, 31,0);
    tracep->declBus(c+259,"axi_uart_b_resp_o", false,-1, 2,0);
    tracep->declBit(c+92,"axi_uart_b_valid_o", false,-1);
    tracep->declBit(c+93,"axi_uart_b_ready_i", false,-1);
    tracep->pushNamePrefix("u_ysyx_23060077_axi_sram ");
    tracep->declBit(c+179,"aclk", false,-1);
    tracep->declBit(c+180,"areset_n", false,-1);
    tracep->declBit(c+70,"axi_sram_aw_ready_o", false,-1);
    tracep->declBit(c+71,"axi_sram_aw_valid_i", false,-1);
    tracep->declBus(c+251,"axi_sram_aw_port_i", false,-1, 2,0);
    tracep->declBus(c+72,"axi_sram_aw_addr_i", false,-1, 31,0);
    tracep->declBit(c+73,"axi_sram_w_ready_o", false,-1);
    tracep->declBit(c+74,"axi_sram_w_valid_i", false,-1);
    tracep->declBus(c+75,"axi_sram_w_strb_i", false,-1, 2,0);
    tracep->declBus(c+76,"axi_sram_w_data_i", false,-1, 31,0);
    tracep->declBus(c+257,"axi_sram_b_resp_o", false,-1, 2,0);
    tracep->declBit(c+77,"axi_sram_b_valid_o", false,-1);
    tracep->declBit(c+78,"axi_sram_b_ready_i", false,-1);
    tracep->declBit(c+79,"axi_sram_ar_ready_o", false,-1);
    tracep->declBit(c+80,"axi_sram_ar_valid_i", false,-1);
    tracep->declBus(c+251,"axi_sram_ar_port_i", false,-1, 2,0);
    tracep->declBus(c+81,"axi_sram_ar_addr_i", false,-1, 31,0);
    tracep->declBit(c+82,"axi_sram_r_ready_i", false,-1);
    tracep->declBit(c+83,"axi_sram_r_valid_o", false,-1);
    tracep->declBus(c+258,"axi_sram_r_resp_o", false,-1, 2,0);
    tracep->declBus(c+84,"axi_sram_r_data_o", false,-1, 31,0);
    tracep->declBus(c+94,"lfsr_out", false,-1, 5,0);
    tracep->declBus(c+95,"r_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+96,"w_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+97,"sram_w_state", false,-1, 2,0);
    tracep->declBus(c+251,"SRAM_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+252,"SRAM_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+253,"SRAM_W_DATA", false,-1, 2,0);
    tracep->declBus(c+254,"SRAM_W_RESP", false,-1, 2,0);
    tracep->declBus(c+98,"w_addr", false,-1, 31,0);
    tracep->declBus(c+99,"w_data", false,-1, 31,0);
    tracep->declBus(c+100,"w_mask", false,-1, 31,0);
    tracep->declBit(c+70,"axi_sram_aw_ready_o_r", false,-1);
    tracep->declBit(c+73,"axi_sram_w_ready_o_r", false,-1);
    tracep->declBit(c+77,"axi_sram_b_valid_o_r", false,-1);
    tracep->declBus(c+101,"sram_r_state", false,-1, 1,0);
    tracep->declBus(c+248,"SRAM_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+249,"SRAM_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+250,"SRAM_R_DATA", false,-1, 1,0);
    tracep->declBus(c+102,"r_addr", false,-1, 31,0);
    tracep->declBus(c+103,"r_data", false,-1, 31,0);
    tracep->declBit(c+79,"axi_sram_ar_ready_o_r", false,-1);
    tracep->declBit(c+83,"axi_sram_r_valid_o_r", false,-1);
    tracep->declBus(c+84,"axi_sram_r_data_o_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_23060077_axi_uart ");
    tracep->declBit(c+179,"aclk", false,-1);
    tracep->declBit(c+180,"areset_n", false,-1);
    tracep->declBit(c+85,"axi_uart_aw_ready_o", false,-1);
    tracep->declBit(c+86,"axi_uart_aw_valid_i", false,-1);
    tracep->declBus(c+251,"axi_uart_aw_port_i", false,-1, 2,0);
    tracep->declBus(c+87,"axi_uart_aw_addr_i", false,-1, 31,0);
    tracep->declBit(c+88,"axi_uart_w_ready_o", false,-1);
    tracep->declBit(c+89,"axi_uart_w_valid_i", false,-1);
    tracep->declBus(c+90,"axi_uart_w_strb_i", false,-1, 2,0);
    tracep->declBus(c+91,"axi_uart_w_data_i", false,-1, 31,0);
    tracep->declBus(c+259,"axi_uart_b_resp_o", false,-1, 2,0);
    tracep->declBit(c+92,"axi_uart_b_valid_o", false,-1);
    tracep->declBit(c+93,"axi_uart_b_ready_i", false,-1);
    tracep->declBus(c+104,"lfsr_out", false,-1, 5,0);
    tracep->declBus(c+105,"w_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+106,"uart_w_state", false,-1, 2,0);
    tracep->declBus(c+251,"UART_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+252,"UART_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+253,"UART_W_DATA", false,-1, 2,0);
    tracep->declBus(c+254,"UART_W_RESP", false,-1, 2,0);
    tracep->declBus(c+107,"w_addr", false,-1, 31,0);
    tracep->declBus(c+108,"w_data", false,-1, 31,0);
    tracep->declBit(c+85,"axi_uart_aw_ready_o_r", false,-1);
    tracep->declBit(c+88,"axi_uart_w_ready_o_r", false,-1);
    tracep->declBit(c+92,"axi_uart_b_valid_o_r", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csr_u0 ");
    tracep->declBit(c+179,"clk", false,-1);
    tracep->declBit(c+180,"rst_n", false,-1);
    tracep->declBus(c+109,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+39,"wr_data", false,-1, 31,0);
    tracep->declBus(c+109,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+245,"rd_data", false,-1, 31,0);
    tracep->declBit(c+37,"i_csr_ecall", false,-1);
    tracep->declBit(c+38,"i_csr_mret", false,-1);
    tracep->declBus(c+3,"i_inst", false,-1, 31,0);
    tracep->declBus(c+2,"i_pc", false,-1, 31,0);
    tracep->declBus(c+40,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+41,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+42,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+245,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+110,"wr_en", false,-1);
    tracep->declBit(c+110,"rd_en", false,-1);
    tracep->declBus(c+111,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+112,"temp", false,-1, 31,0);
    tracep->declBus(c+40,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+113,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+114,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_u0 ");
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+23,"src1", false,-1, 31,0);
    tracep->declBus(c+24,"src2", false,-1, 31,0);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBit(c+11,"branch", false,-1);
    tracep->declBus(c+19,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+20,"src_sel", false,-1, 1,0);
    tracep->declBus(c+22,"funct3", false,-1, 2,0);
    tracep->declBit(c+25,"zero_flag", false,-1);
    tracep->declBus(c+26,"exu_result", false,-1, 31,0);
    tracep->declBus(c+115,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+116,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+117,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+260,"carry_flag", false,-1);
    tracep->declBit(c+261,"signed_flag", false,-1);
    tracep->declBus(c+26,"exu_result_r", false,-1, 31,0);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBus(c+19,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+115,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+116,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+117,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+118,"sub_flag", false,-1);
    tracep->declQuad(c+119,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+121,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+123,"cin", false,-1, 32,0);
    tracep->declQuad(c+125,"add_out", false,-1, 32,0);
    tracep->declBit(c+127,"top_A", false,-1);
    tracep->declBit(c+128,"top_B", false,-1);
    tracep->declBit(c+129,"top_C", false,-1);
    tracep->declBit(c+130,"sign_flag", false,-1);
    tracep->declBit(c+131,"over_flag", false,-1);
    tracep->declBit(c+132,"carry_flag", false,-1);
    tracep->declBus(c+133,"sra_result", false,-1, 31,0);
    tracep->declBus(c+117,"alu_out_data_r", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_u0 ");
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->declBit(c+11,"branch", false,-1);
    tracep->declBit(c+12,"jal", false,-1);
    tracep->declBit(c+13,"jalr", false,-1);
    tracep->declBus(c+14,"rd", false,-1, 4,0);
    tracep->declBit(c+15,"rd_wen", false,-1);
    tracep->declBus(c+16,"rs1", false,-1, 4,0);
    tracep->declBus(c+17,"rs2", false,-1, 4,0);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+19,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+20,"src_sel", false,-1, 1,0);
    tracep->declBus(c+21,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+22,"funct3", false,-1, 2,0);
    tracep->declBus(c+134,"opcode", false,-1, 6,0);
    tracep->declBus(c+135,"funct7", false,-1, 6,0);
    tracep->declBus(c+262,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("id_imm_idu ");
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+18,"imm_r", false,-1, 31,0);
    tracep->declBus(c+136,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+137,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+138,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+139,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+140,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+263,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+263,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("id_imm_ext_typeB ");
    tracep->declBus(c+264,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+141,"imm_in", false,-1, 12,0);
    tracep->declBus(c+139,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeI ");
    tracep->declBus(c+265,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"imm_in", false,-1, 11,0);
    tracep->declBus(c+136,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeJ ");
    tracep->declBus(c+266,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+143,"imm_in", false,-1, 20,0);
    tracep->declBus(c+140,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeS ");
    tracep->declBus(c+265,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+144,"imm_in", false,-1, 11,0);
    tracep->declBus(c+138,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeU ");
    tracep->declBus(c+267,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+137,"imm_in", false,-1, 31,0);
    tracep->declBus(c+137,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_opt_idu ");
    tracep->declBus(c+134,"opcode", false,-1, 6,0);
    tracep->declBus(c+22,"funct3", false,-1, 2,0);
    tracep->declBus(c+135,"funct7", false,-1, 6,0);
    tracep->declBus(c+19,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+20,"src_sel", false,-1, 1,0);
    tracep->declBus(c+21,"lsu_opt", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_u0 ");
    tracep->declBit(c+179,"clk", false,-1);
    tracep->declBit(c+180,"rst_n", false,-1);
    tracep->declBus(c+5,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+6,"jump_pc_valid", false,-1);
    tracep->declBit(c+7,"stall", false,-1);
    tracep->declBit(c+28,"wbu_stall", false,-1);
    tracep->declBit(c+4,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+8,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+9,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+10,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+4,"ifu_stall", false,-1);
    tracep->declBus(c+2,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+3,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+2,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+3,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->declBus(c+10,"inst", false,-1, 31,0);
    tracep->declBit(c+4,"cpu_r_valid_i", false,-1);
    tracep->declBit(c+9,"cpu_r_ready_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_u0 ");
    tracep->declBit(c+179,"clk", false,-1);
    tracep->declBit(c+180,"rst_n", false,-1);
    tracep->declBus(c+23,"src1", false,-1, 31,0);
    tracep->declBus(c+24,"src2", false,-1, 31,0);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+21,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+22,"funct3", false,-1, 2,0);
    tracep->declBit(c+4,"ifu_stall", false,-1);
    tracep->declBit(c+29,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+30,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+31,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+32,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+33,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+30,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+34,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+24,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+35,"lsu_w_strb_o", false,-1, 2,0);
    tracep->declBit(c+7,"mem_stall", false,-1);
    tracep->declBit(c+28,"lsu_rd_wen", false,-1);
    tracep->declBus(c+27,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+30,"raddr", false,-1, 31,0);
    tracep->declBus(c+32,"rdata", false,-1, 31,0);
    tracep->declBus(c+30,"waddr", false,-1, 31,0);
    tracep->declBus(c+24,"wdata", false,-1, 31,0);
    tracep->declBus(c+145,"wmask", false,-1, 31,0);
    tracep->declBus(c+145,"mask", false,-1, 31,0);
    tracep->declBus(c+27,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+29,"ren", false,-1);
    tracep->declBit(c+33,"wen", false,-1);
    tracep->declBit(c+31,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+34,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_u0 ");
    tracep->declBit(c+179,"clk", false,-1);
    tracep->declBit(c+180,"rst_n", false,-1);
    tracep->declBus(c+16,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+23,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+17,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+24,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+36,"rd_en", false,-1);
    tracep->declBus(c+14,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+244,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+146+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_u0 ");
    tracep->declBus(c+21,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+26,"exu_result", false,-1, 31,0);
    tracep->declBus(c+27,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+245,"csr_result", false,-1, 31,0);
    tracep->declBit(c+28,"lsu_rd_wen", false,-1);
    tracep->declBit(c+178,"idu_rd_wen", false,-1);
    tracep->declBit(c+36,"wbu_rd_wen", false,-1);
    tracep->declBus(c+244,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060077___024root__trace_init_top(Vysyx_23060077___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060077___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060077___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060077___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060077___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060077___024root__trace_register(Vysyx_23060077___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060077___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060077___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060077___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060077___024root__trace_full_sub_0(Vysyx_23060077___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060077___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060077___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060077___024root*>(voidSelf);
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060077___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060077___024root__trace_full_sub_0(Vysyx_23060077___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+4,(vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__cpu_r_valid_i));
    bufp->fullIData(oldp+5,(((IData)(vlSelf->ysyx_23060077__DOT__csr_mret)
                              ? vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg
                             [0x341U] : ((IData)(vlSelf->ysyx_23060077__DOT__csr_ecall)
                                          ? vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg
                                         [0x305U] : 
                                         ((IData)(vlSelf->ysyx_23060077__DOT____VdfgTmp_h15124160__0)
                                           ? (vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                                              + vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_pc_o_r)
                                           : ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r))
                                               ? vlSelf->ysyx_23060077__DOT__lsu_r_addr_o
                                               : 0U))))),32);
    bufp->fullBit(oldp+6,(((IData)(vlSelf->ysyx_23060077__DOT__csr_mret) 
                           | ((IData)(vlSelf->ysyx_23060077__DOT__csr_ecall) 
                              | ((IData)(vlSelf->ysyx_23060077__DOT____VdfgTmp_h15124160__0) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullBit(oldp+7,(vlSelf->ysyx_23060077__DOT__stall));
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+9,(vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__cpu_r_ready_o));
    bufp->fullIData(oldp+10,(((1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state))
                               ? vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i
                               : 0U)),32);
    bufp->fullBit(oldp+11,((0x63U == (0x7fU & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+12,((0x6fU == (0x7fU & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+13,((0x67U == (0x7fU & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+14,(vlSelf->ysyx_23060077__DOT__idu_rd),5);
    bufp->fullBit(oldp+15,(vlSelf->ysyx_23060077__DOT__idu_rd_wen));
    bufp->fullCData(oldp+16,(vlSelf->ysyx_23060077__DOT__idu_rs1),5);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_23060077__DOT__idu_rs2),5);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_23060077__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_23060077__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_23060077__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+22,((7U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                    >> 0xcU))),3);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060077__DOT__src1),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060077__DOT__src2),32);
    bufp->fullBit(oldp+25,((1U & (~ (IData)((0U != vlSelf->ysyx_23060077__DOT__exu_u0__DOT__exu_result_r))))));
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__exu_result_r),32);
    bufp->fullIData(oldp+27,(((2U & (IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt))
                               ? 0U : ((1U & (IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt))
                                        ? ((0x4000U 
                                            & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                            ? ((0x2000U 
                                                & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                ? 0U
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? (IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0)
                                                    : (IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))
                                            : ((0x2000U 
                                                & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                                     ? vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i
                                                     : 0U))
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   (((- (IData)(
                                                                ((2U 
                                                                  == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                 & (vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                    : 
                                                   (((- (IData)(
                                                                ((2U 
                                                                  == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                 & (vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                        : 0U))),32);
    bufp->fullBit(oldp+28,(vlSelf->ysyx_23060077__DOT__lsu_rd_wen));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT__ren));
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060077__DOT__lsu_r_addr_o),32);
    bufp->fullBit(oldp+31,(vlSelf->ysyx_23060077__DOT__lsu_r_ready_i));
    bufp->fullIData(oldp+32,(((2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state))
                               ? vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i
                               : 0U)),32);
    bufp->fullBit(oldp+33,(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT__wen));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_23060077__DOT__lsu_w_ready_i));
    bufp->fullCData(oldp+35,(((0x10U == (((IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt) 
                                          << 3U) | 
                                         (7U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0xcU))))
                               ? 1U : ((0x11U == (((IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt) 
                                                   << 3U) 
                                                  | (7U 
                                                     & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                        >> 0xcU))))
                                        ? 2U : ((0x12U 
                                                 == 
                                                 (((IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt) 
                                                   << 3U) 
                                                  | (7U 
                                                     & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                        >> 0xcU))))
                                                 ? 4U
                                                 : 0U)))),3);
    bufp->fullBit(oldp+36,(((0U == (IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt))
                             ? (IData)(vlSelf->ysyx_23060077__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                             : ((3U == (IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt))
                                 ? (IData)(vlSelf->ysyx_23060077__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                                 : (IData)(vlSelf->ysyx_23060077__DOT__lsu_rd_wen)))));
    bufp->fullBit(oldp+37,(vlSelf->ysyx_23060077__DOT__csr_ecall));
    bufp->fullBit(oldp+38,(vlSelf->ysyx_23060077__DOT__csr_mret));
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060077__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg
                             [0x300U]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg
                             [0x305U]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg
                             [0x341U]),32);
    bufp->fullBit(oldp+43,((1U & ((1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                   ? (IData)(vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__cpu_r_valid_i)
                                   : ((2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                       ? (IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT__ren)
                                       : 0U)))));
    bufp->fullIData(oldp+44,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o),32);
    bufp->fullBit(oldp+45,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_valid_i));
    bufp->fullIData(oldp+46,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i),32);
    bufp->fullBit(oldp+47,(((2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                            & (IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT__wen))));
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o),32);
    bufp->fullBit(oldp+49,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_b_valid_i));
    bufp->fullIData(oldp+50,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_data_o),32);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_strb_o),3);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullBit(oldp+53,(((0xa00003f8U == vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o)
                             ? (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__axi_uart_aw_ready_o_r)
                             : (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_aw_ready_o_r))));
    bufp->fullBit(oldp+54,((1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state))));
    bufp->fullBit(oldp+55,(((0xa00003f8U == vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_w_addr_o)
                             ? (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__axi_uart_w_ready_o_r)
                             : (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_w_ready_o_r))));
    bufp->fullBit(oldp+56,((2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state))));
    bufp->fullCData(oldp+57,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_b_resp_i),3);
    bufp->fullBit(oldp+58,((3U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state))));
    bufp->fullBit(oldp+59,(((0xa00003f8U != vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o) 
                            & (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_ar_ready_o_r))));
    bufp->fullBit(oldp+60,((1U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state))));
    bufp->fullBit(oldp+61,((2U == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state))));
    bufp->fullCData(oldp+62,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_resp_i),3);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__lfsr_out),6);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__r_delay_cnt),6);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__w_delay_cnt),6);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state),3);
    bufp->fullCData(oldp+67,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_w_state_nxt),3);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state),2);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi__DOT__axi_r_state_nxt),2);
    bufp->fullBit(oldp+70,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_aw_ready_o_r));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_aw_valid_i));
    bufp->fullIData(oldp+72,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_aw_addr_i),32);
    bufp->fullBit(oldp+73,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_w_ready_o_r));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_w_valid_i));
    bufp->fullCData(oldp+75,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_w_strb_i),3);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_w_data_i),32);
    bufp->fullBit(oldp+77,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_b_valid_o_r));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_b_ready_i));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_ar_ready_o_r));
    bufp->fullBit(oldp+80,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_ar_valid_i));
    bufp->fullIData(oldp+81,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_ar_addr_i),32);
    bufp->fullBit(oldp+82,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_r_ready_i));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_r_valid_o_r));
    bufp->fullIData(oldp+84,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__axi_sram_r_data_o_r),32);
    bufp->fullBit(oldp+85,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__axi_uart_aw_ready_o_r));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_aw_valid_i));
    bufp->fullIData(oldp+87,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_aw_addr_i),32);
    bufp->fullBit(oldp+88,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__axi_uart_w_ready_o_r));
    bufp->fullBit(oldp+89,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_valid_i));
    bufp->fullCData(oldp+90,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_strb_i),3);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_w_data_i),32);
    bufp->fullBit(oldp+92,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__axi_uart_b_valid_o_r));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_b_ready_i));
    bufp->fullCData(oldp+94,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__lfsr_out),6);
    bufp->fullCData(oldp+95,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__r_delay_cnt),6);
    bufp->fullCData(oldp+96,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_delay_cnt),6);
    bufp->fullCData(oldp+97,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__sram_w_state),3);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_addr),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_data),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__w_mask),32);
    bufp->fullCData(oldp+101,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__sram_r_state),2);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__r_addr),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__r_data),32);
    bufp->fullCData(oldp+104,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__lfsr_out),6);
    bufp->fullCData(oldp+105,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__w_delay_cnt),6);
    bufp->fullCData(oldp+106,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__uart_w_state),3);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__w_addr),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__w_data),32);
    bufp->fullSData(oldp+109,((0xfffU & vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+110,(vlSelf->ysyx_23060077__DOT__csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+111,(vlSelf->ysyx_23060077__DOT__csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_23060077__DOT__csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_23060077__DOT__csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r),32);
    bufp->fullBit(oldp+118,(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+119,((((QData)((IData)((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data)))),33);
    bufp->fullQData(oldp+121,(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+123,((QData)((IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+125,(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+127,((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+128,((1U & (IData)((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+129,((1U & (IData)((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+130,((1U & (IData)((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+131,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+132,((1U & ((((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                      >> 0x1fU) | ((IData)(
                                                           (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                            >> 0x20U)) 
                                                   | (IData)(
                                                             (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                              >> 0x20U)))) 
                                    & (((vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                         >> 0x1fU) 
                                        | ((~ (IData)(
                                                      (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
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
                                   ^ (IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag)))));
    bufp->fullIData(oldp+133,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_a_data))) 
                                       >> (0x3fU & vlSelf->ysyx_23060077__DOT__exu_u0__DOT__alu_b_data)))),32);
    bufp->fullCData(oldp+134,((0x7fU & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+135,((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+137,((0xfffff000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+138,((((- (IData)((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+139,((((- (IData)((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+140,((((- (IData)((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
                                                         >> 0x14U))))))),32);
    bufp->fullSData(oldp+141,(((0x1000U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+142,((vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+143,(((0x100000U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+144,(((0xfe0U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+145,(((0x10U == (((IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt) 
                                           << 3U) | 
                                          (7U & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 0xcU))))
                                ? 1U : ((0x11U == (
                                                   ((IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt) 
                                                    << 3U) 
                                                   | (7U 
                                                      & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                         >> 0xcU))))
                                         ? 2U : ((0x12U 
                                                  == 
                                                  (((IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt) 
                                                    << 3U) 
                                                   | (7U 
                                                      & (vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                         >> 0xcU))))
                                                  ? 4U
                                                  : 0U)))),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_23060077__DOT__regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+178,(vlSelf->ysyx_23060077__DOT____Vcellinp__wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+179,(vlSelf->clock));
    bufp->fullBit(oldp+180,(vlSelf->reset));
    bufp->fullBit(oldp+181,(vlSelf->io_interrupt));
    bufp->fullBit(oldp+182,(vlSelf->io_master_awrea));
    bufp->fullBit(oldp+183,(vlSelf->io_master_awval));
    bufp->fullIData(oldp+184,(vlSelf->io_master_awadd),32);
    bufp->fullCData(oldp+185,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+186,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+187,(vlSelf->io_master_awsiz),3);
    bufp->fullCData(oldp+188,(vlSelf->io_master_awbur),2);
    bufp->fullBit(oldp+189,(vlSelf->io_master_wread));
    bufp->fullBit(oldp+190,(vlSelf->io_master_wvali));
    bufp->fullQData(oldp+191,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+193,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+194,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+195,(vlSelf->io_master_bread));
    bufp->fullBit(oldp+196,(vlSelf->io_master_bvali));
    bufp->fullCData(oldp+197,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+198,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+199,(vlSelf->io_master_arrea));
    bufp->fullBit(oldp+200,(vlSelf->io_master_arval));
    bufp->fullIData(oldp+201,(vlSelf->io_master_aradd),32);
    bufp->fullCData(oldp+202,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+203,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+204,(vlSelf->io_master_arsiz),3);
    bufp->fullCData(oldp+205,(vlSelf->io_master_arbur),2);
    bufp->fullBit(oldp+206,(vlSelf->io_master_rread));
    bufp->fullBit(oldp+207,(vlSelf->io_master_rvali));
    bufp->fullCData(oldp+208,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+209,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+211,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+212,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+213,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+214,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+215,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+216,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+217,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+218,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+219,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+220,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+221,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+222,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+224,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+225,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+226,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+227,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+228,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+229,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+230,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+231,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+232,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+233,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+234,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+235,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+236,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+237,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+238,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+239,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+240,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+242,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+243,(vlSelf->io_slave_rid),4);
    bufp->fullIData(oldp+244,(((0U == (IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt))
                                ? vlSelf->ysyx_23060077__DOT__exu_u0__DOT__exu_result_r
                                : ((3U == (IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt))
                                    ? ((IData)(vlSelf->reset)
                                        ? ((IData)(vlSelf->ysyx_23060077__DOT__csr_u0__DOT__wr_en)
                                            ? vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg
                                           [(0xfffU 
                                             & vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                            : 0U) : 0U)
                                    : ((2U & (IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->ysyx_23060077__DOT__idu_lsu_opt))
                                                 ? 
                                                ((0x4000U 
                                                  & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 0U
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? (IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0)
                                                    : (IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                                     ? vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i
                                                     : 0U))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   (((- (IData)(
                                                                ((2U 
                                                                  == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                 & (vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                    : 
                                                   (((- (IData)(
                                                                ((2U 
                                                                  == (IData)(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                 & (vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__axi_r_data_i 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyx_23060077__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                                 : 0U))))),32);
    bufp->fullIData(oldp+245,(((IData)(vlSelf->reset)
                                ? ((IData)(vlSelf->ysyx_23060077__DOT__csr_u0__DOT__wr_en)
                                    ? vlSelf->ysyx_23060077__DOT__csr_u0__DOT__csr_reg
                                   [(0xfffU & vlSelf->ysyx_23060077__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                    : 0U) : 0U)),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_23060077__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_23060077__DOT__exu_result_t),32);
    bufp->fullCData(oldp+248,(0U),2);
    bufp->fullCData(oldp+249,(1U),2);
    bufp->fullCData(oldp+250,(2U),2);
    bufp->fullCData(oldp+251,(0U),3);
    bufp->fullCData(oldp+252,(1U),3);
    bufp->fullCData(oldp+253,(2U),3);
    bufp->fullCData(oldp+254,(3U),3);
    bufp->fullCData(oldp+255,(4U),3);
    bufp->fullCData(oldp+256,(3U),2);
    bufp->fullCData(oldp+257,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_b_resp_o),3);
    bufp->fullCData(oldp+258,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_sram_r_resp_o),3);
    bufp->fullCData(oldp+259,(vlSelf->ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_uart_b_resp_o),3);
    bufp->fullBit(oldp+260,(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+261,(vlSelf->ysyx_23060077__DOT__exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+262,(0U),5);
    bufp->fullIData(oldp+263,(0U),32);
    bufp->fullIData(oldp+264,(0xdU),32);
    bufp->fullIData(oldp+265,(0xcU),32);
    bufp->fullIData(oldp+266,(0x15U),32);
    bufp->fullIData(oldp+267,(0x20U),32);
}
