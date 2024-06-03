// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBus(c+1010,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1011,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1012,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1013,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1014,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1015,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1016,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1017,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1018,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1019,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1020,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1021,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1022,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1023,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1024,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1025,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1026,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1027,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1028,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1029,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBus(c+1010,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1011,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1012,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1013,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1014,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1015,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1016,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1017,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1018,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1019,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1020,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1021,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1022,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1023,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1024,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1025,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1026,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1027,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1028,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1029,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+763,"spi_sck", false,-1);
    tracep->declBus(c+764,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_mosi", false,-1);
    tracep->declBit(c+1030,"spi_miso", false,-1);
    tracep->declBit(c+1028,"uart_rx", false,-1);
    tracep->declBit(c+1029,"uart_tx", false,-1);
    tracep->declBit(c+902,"psram_sck", false,-1);
    tracep->declBit(c+903,"psram_ce_n", false,-1);
    tracep->declBus(c+1031,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1032,"sdram_clk", false,-1);
    tracep->declBit(c+765,"sdram_cke", false,-1);
    tracep->declBit(c+766,"sdram_cs", false,-1);
    tracep->declBit(c+767,"sdram_ras", false,-1);
    tracep->declBit(c+768,"sdram_cas", false,-1);
    tracep->declBit(c+769,"sdram_we", false,-1);
    tracep->declBus(c+770,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+771,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+772,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+1033,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1010,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1011,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1012,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1013,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1014,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1015,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1016,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1017,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1018,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1019,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1020,"ps2_clk", false,-1);
    tracep->declBit(c+1021,"ps2_data", false,-1);
    tracep->declBus(c+1022,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1023,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1024,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1025,"vga_hsync", false,-1);
    tracep->declBit(c+1026,"vga_vsync", false,-1);
    tracep->declBit(c+1027,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBus(c+869,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+178,"in_psel", false,-1);
    tracep->declBit(c+179,"in_penable", false,-1);
    tracep->declBus(c+1061,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+180,"in_pwrite", false,-1);
    tracep->declBus(c+181,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+904,"in_pready", false,-1);
    tracep->declBus(c+905,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+870,"in_pslverr", false,-1);
    tracep->declBus(c+869,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+178,"out_psel", false,-1);
    tracep->declBit(c+179,"out_penable", false,-1);
    tracep->declBus(c+1061,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+180,"out_pwrite", false,-1);
    tracep->declBus(c+181,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+904,"out_pready", false,-1);
    tracep->declBus(c+905,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+870,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+178,"auto_in_psel", false,-1);
    tracep->declBit(c+179,"auto_in_penable", false,-1);
    tracep->declBit(c+180,"auto_in_pwrite", false,-1);
    tracep->declBus(c+869,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1061,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+904,"auto_in_pready", false,-1);
    tracep->declBit(c+870,"auto_in_pslverr", false,-1);
    tracep->declBus(c+905,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+703,"auto_out_6_psel", false,-1);
    tracep->declBit(c+704,"auto_out_6_penable", false,-1);
    tracep->declBit(c+180,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+869,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1061,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+773,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1062,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+12,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+705,"auto_out_5_psel", false,-1);
    tracep->declBit(c+706,"auto_out_5_penable", false,-1);
    tracep->declBit(c+180,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+871,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1061,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1063,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1064,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1065,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+707,"auto_out_4_psel", false,-1);
    tracep->declBit(c+708,"auto_out_4_penable", false,-1);
    tracep->declBit(c+180,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+872,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1061,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1066,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1067,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1068,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+709,"auto_out_3_psel", false,-1);
    tracep->declBit(c+710,"auto_out_3_penable", false,-1);
    tracep->declBit(c+180,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+872,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1061,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1070,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1071,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+873,"auto_out_2_psel", false,-1);
    tracep->declBit(c+711,"auto_out_2_penable", false,-1);
    tracep->declBit(c+180,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+869,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1061,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1034,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1062,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+183,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+874,"auto_out_1_psel", false,-1);
    tracep->declBit(c+875,"auto_out_1_penable", false,-1);
    tracep->declBit(c+180,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+872,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1061,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+876,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1062,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+1035,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+877,"auto_out_0_psel", false,-1);
    tracep->declBit(c+712,"auto_out_0_penable", false,-1);
    tracep->declBit(c+180,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+871,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1061,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1036,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1062,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+1037,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+878,"sel_0", false,-1);
    tracep->declBit(c+879,"sel_1", false,-1);
    tracep->declBit(c+880,"sel_2", false,-1);
    tracep->declBit(c+881,"sel_3", false,-1);
    tracep->declBit(c+882,"sel_4", false,-1);
    tracep->declBit(c+883,"sel_5", false,-1);
    tracep->declBit(c+884,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+184,"auto_in_awready", false,-1);
    tracep->declBit(c+185,"auto_in_awvalid", false,-1);
    tracep->declBus(c+186,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+188,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+184,"auto_in_wready", false,-1);
    tracep->declBit(c+189,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+190,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+192,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+906,"auto_in_bready", false,-1);
    tracep->declBit(c+907,"auto_in_bvalid", false,-1);
    tracep->declBus(c+193,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+713,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+194,"auto_in_arready", false,-1);
    tracep->declBit(c+195,"auto_in_arvalid", false,-1);
    tracep->declBus(c+196,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+197,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+198,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+908,"auto_in_rready", false,-1);
    tracep->declBit(c+909,"auto_in_rvalid", false,-1);
    tracep->declBus(c+199,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+714,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+713,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+178,"auto_out_psel", false,-1);
    tracep->declBit(c+179,"auto_out_penable", false,-1);
    tracep->declBit(c+180,"auto_out_pwrite", false,-1);
    tracep->declBus(c+869,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+181,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+904,"auto_out_pready", false,-1);
    tracep->declBit(c+870,"auto_out_pslverr", false,-1);
    tracep->declBus(c+905,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+179,"nodeOut_penable", false,-1);
    tracep->declBus(c+200,"state", false,-1, 1,0);
    tracep->declBit(c+194,"accept_read", false,-1);
    tracep->declBit(c+184,"accept_write", false,-1);
    tracep->declBit(c+201,"is_write_r", false,-1);
    tracep->declBit(c+180,"is_write", false,-1);
    tracep->declBus(c+199,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+193,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+202,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+203,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+204,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+205,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+207,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+209,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+210,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+885,"resp", false,-1, 1,0);
    tracep->declBus(c+211,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+713,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+909,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+212,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+907,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+213,"auto_in_awready", false,-1);
    tracep->declBit(c+214,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1072,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+215,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+216,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1074,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+217,"auto_in_wready", false,-1);
    tracep->declBit(c+218,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+219,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+221,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+222,"auto_in_wlast", false,-1);
    tracep->declBit(c+223,"auto_in_bready", false,-1);
    tracep->declBit(c+910,"auto_in_bvalid", false,-1);
    tracep->declBus(c+911,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+716,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+224,"auto_in_arready", false,-1);
    tracep->declBit(c+225,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1072,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+226,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+227,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1074,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+228,"auto_in_rready", false,-1);
    tracep->declBit(c+912,"auto_in_rvalid", false,-1);
    tracep->declBus(c+913,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+717,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1038,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+914,"auto_in_rlast", false,-1);
    tracep->declBit(c+915,"auto_out_awready", false,-1);
    tracep->declBit(c+229,"auto_out_awvalid", false,-1);
    tracep->declBus(c+186,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+188,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+230,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+916,"auto_out_wready", false,-1);
    tracep->declBit(c+231,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+190,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+192,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+232,"auto_out_wlast", false,-1);
    tracep->declBit(c+917,"auto_out_bready", false,-1);
    tracep->declBit(c+918,"auto_out_bvalid", false,-1);
    tracep->declBus(c+911,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+919,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+920,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+921,"auto_out_arready", false,-1);
    tracep->declBit(c+233,"auto_out_arvalid", false,-1);
    tracep->declBus(c+196,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+197,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+198,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+234,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+228,"auto_out_rready", false,-1);
    tracep->declBit(c+912,"auto_out_rvalid", false,-1);
    tracep->declBus(c+913,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+717,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1038,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+719,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+922,"auto_out_rlast", false,-1);
    tracep->declBit(c+231,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+235,"w_idle", false,-1);
    tracep->declBit(c+923,"in_awready", false,-1);
    tracep->declBit(c+236,"busy", false,-1);
    tracep->declBus(c+237,"r_addr", false,-1, 31,0);
    tracep->declBus(c+238,"r_len", false,-1, 7,0);
    tracep->declBus(c+239,"len", false,-1, 7,0);
    tracep->declBus(c+240,"addr", false,-1, 31,0);
    tracep->declBit(c+241,"busy_1", false,-1);
    tracep->declBus(c+242,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+243,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+244,"len_1", false,-1, 7,0);
    tracep->declBus(c+245,"addr_1", false,-1, 31,0);
    tracep->declBit(c+246,"wbeats_latched", false,-1);
    tracep->declBit(c+229,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+247,"wbeats_valid", false,-1);
    tracep->declBus(c+248,"w_counter", false,-1, 8,0);
    tracep->declBus(c+249,"w_todo", false,-1, 8,0);
    tracep->declBit(c+232,"w_last", false,-1);
    tracep->declBit(c+917,"nodeOut_bready", false,-1);
    tracep->declBus(c+250,"error_0", false,-1, 1,0);
    tracep->declBus(c+251,"error_1", false,-1, 1,0);
    tracep->declBus(c+252,"error_2", false,-1, 1,0);
    tracep->declBus(c+253,"error_3", false,-1, 1,0);
    tracep->declBus(c+254,"error_4", false,-1, 1,0);
    tracep->declBus(c+255,"error_5", false,-1, 1,0);
    tracep->declBus(c+256,"error_6", false,-1, 1,0);
    tracep->declBus(c+257,"error_7", false,-1, 1,0);
    tracep->declBus(c+258,"error_8", false,-1, 1,0);
    tracep->declBus(c+259,"error_9", false,-1, 1,0);
    tracep->declBus(c+260,"error_10", false,-1, 1,0);
    tracep->declBus(c+261,"error_11", false,-1, 1,0);
    tracep->declBus(c+262,"error_12", false,-1, 1,0);
    tracep->declBus(c+263,"error_13", false,-1, 1,0);
    tracep->declBus(c+264,"error_14", false,-1, 1,0);
    tracep->declBus(c+265,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+225,"io_enq_valid", false,-1);
    tracep->declBus(c+1072,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+226,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1073,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+227,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1074,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+924,"io_deq_ready", false,-1);
    tracep->declBit(c+233,"io_deq_valid", false,-1);
    tracep->declBus(c+196,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+266,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+267,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+198,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+268,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+269,"ram", false,-1, 48,0);
    tracep->declBit(c+271,"full", false,-1);
    tracep->declBit(c+233,"io_deq_valid_0", false,-1);
    tracep->declBit(c+925,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+214,"io_enq_valid", false,-1);
    tracep->declBus(c+1072,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+215,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1073,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+216,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1074,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+926,"io_deq_ready", false,-1);
    tracep->declBit(c+272,"io_deq_valid", false,-1);
    tracep->declBus(c+186,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+273,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+274,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+188,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+275,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+276,"ram", false,-1, 48,0);
    tracep->declBit(c+278,"full", false,-1);
    tracep->declBit(c+272,"io_deq_valid_0", false,-1);
    tracep->declBit(c+927,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+218,"io_enq_valid", false,-1);
    tracep->declQuad(c+219,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+221,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+222,"io_enq_bits_last", false,-1);
    tracep->declBit(c+928,"io_deq_ready", false,-1);
    tracep->declBit(c+279,"io_deq_valid", false,-1);
    tracep->declQuad(c+190,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+192,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+280,"io_deq_bits_last", false,-1);
    tracep->declArray(c+281,"ram", false,-1, 72,0);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+279,"io_deq_valid_0", false,-1);
    tracep->declBit(c+929,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+930,"auto_in_awready", false,-1);
    tracep->declBit(c+285,"auto_in_awvalid", false,-1);
    tracep->declBus(c+186,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+286,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+720,"auto_in_wready", false,-1);
    tracep->declBit(c+287,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+190,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+192,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+931,"auto_in_bready", false,-1);
    tracep->declBit(c+288,"auto_in_bvalid", false,-1);
    tracep->declBus(c+289,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+932,"auto_in_arready", false,-1);
    tracep->declBit(c+291,"auto_in_arvalid", false,-1);
    tracep->declBus(c+196,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+933,"auto_in_rready", false,-1);
    tracep->declBit(c+293,"auto_in_rvalid", false,-1);
    tracep->declBus(c+294,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+295,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+297,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+932,"nodeIn_arready", false,-1);
    tracep->declBit(c+930,"nodeIn_awready", false,-1);
    tracep->declBit(c+298,"w_sel0", false,-1);
    tracep->declBit(c+288,"w_full", false,-1);
    tracep->declBus(c+289,"w_id", false,-1, 3,0);
    tracep->declBit(c+299,"r_sel1", false,-1);
    tracep->declBit(c+300,"w_sel1", false,-1);
    tracep->declBit(c+293,"r_full", false,-1);
    tracep->declBus(c+294,"r_id", false,-1, 3,0);
    tracep->declBit(c+934,"ren", false,-1);
    tracep->declBit(c+301,"rdata_REG", false,-1);
    tracep->declBus(c+302,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+303,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+304,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+305,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+306,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+307,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+308,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+309,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+310,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+934,"R0_en", false,-1);
    tracep->declBit(c+1008,"R0_clk", false,-1);
    tracep->declQuad(c+311,"R0_data", false,-1, 63,0);
    tracep->declBus(c+313,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+935,"W0_en", false,-1);
    tracep->declBit(c+1008,"W0_clk", false,-1);
    tracep->declQuad(c+190,"W0_data", false,-1, 63,0);
    tracep->declBus(c+192,"W0_mask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+213,"auto_in_awready", false,-1);
    tracep->declBit(c+214,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1072,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+215,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+216,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1074,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+217,"auto_in_wready", false,-1);
    tracep->declBit(c+218,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+219,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+221,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+222,"auto_in_wlast", false,-1);
    tracep->declBit(c+223,"auto_in_bready", false,-1);
    tracep->declBit(c+910,"auto_in_bvalid", false,-1);
    tracep->declBus(c+911,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+716,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+224,"auto_in_arready", false,-1);
    tracep->declBit(c+225,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1072,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+226,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+227,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1074,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+228,"auto_in_rready", false,-1);
    tracep->declBit(c+912,"auto_in_rvalid", false,-1);
    tracep->declBus(c+913,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+717,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1038,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+914,"auto_in_rlast", false,-1);
    tracep->declBit(c+213,"auto_out_awready", false,-1);
    tracep->declBit(c+214,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1072,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+215,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+216,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1074,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+217,"auto_out_wready", false,-1);
    tracep->declBit(c+218,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+219,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+221,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+222,"auto_out_wlast", false,-1);
    tracep->declBit(c+223,"auto_out_bready", false,-1);
    tracep->declBit(c+910,"auto_out_bvalid", false,-1);
    tracep->declBus(c+911,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+716,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+224,"auto_out_arready", false,-1);
    tracep->declBit(c+225,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1072,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+226,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+227,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1074,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+228,"auto_out_rready", false,-1);
    tracep->declBit(c+912,"auto_out_rvalid", false,-1);
    tracep->declBus(c+913,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+717,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1038,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+914,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+936,"auto_in_awready", false,-1);
    tracep->declBit(c+314,"auto_in_awvalid", false,-1);
    tracep->declBus(c+186,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+188,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+916,"auto_in_wready", false,-1);
    tracep->declBit(c+231,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+190,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+192,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+232,"auto_in_wlast", false,-1);
    tracep->declBit(c+917,"auto_in_bready", false,-1);
    tracep->declBit(c+918,"auto_in_bvalid", false,-1);
    tracep->declBus(c+911,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+919,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+937,"auto_in_arready", false,-1);
    tracep->declBit(c+315,"auto_in_arvalid", false,-1);
    tracep->declBus(c+196,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+197,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+198,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+228,"auto_in_rready", false,-1);
    tracep->declBit(c+912,"auto_in_rvalid", false,-1);
    tracep->declBus(c+913,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+717,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1038,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+922,"auto_in_rlast", false,-1);
    tracep->declBit(c+930,"auto_out_2_awready", false,-1);
    tracep->declBit(c+285,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+186,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+286,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+720,"auto_out_2_wready", false,-1);
    tracep->declBit(c+287,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+190,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+192,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+931,"auto_out_2_bready", false,-1);
    tracep->declBit(c+288,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+289,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+932,"auto_out_2_arready", false,-1);
    tracep->declBit(c+291,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+196,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+933,"auto_out_2_rready", false,-1);
    tracep->declBit(c+293,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+294,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+295,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+297,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+316,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+317,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+318,"auto_out_1_arready", false,-1);
    tracep->declBit(c+319,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+196,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+320,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+198,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+721,"auto_out_1_rready", false,-1);
    tracep->declBit(c+321,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+322,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+323,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+184,"auto_out_0_awready", false,-1);
    tracep->declBit(c+185,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+186,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+188,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+184,"auto_out_0_wready", false,-1);
    tracep->declBit(c+189,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+190,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+192,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+906,"auto_out_0_bready", false,-1);
    tracep->declBit(c+907,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+193,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+713,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+194,"auto_out_0_arready", false,-1);
    tracep->declBit(c+195,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+196,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+197,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+198,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+908,"auto_out_0_rready", false,-1);
    tracep->declBit(c+909,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+199,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+714,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+713,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+918,"in_0_bvalid", false,-1);
    tracep->declBit(c+912,"in_0_rvalid", false,-1);
    tracep->declBit(c+936,"nodeIn_awready", false,-1);
    tracep->declBit(c+325,"requestARIO_0_0", false,-1);
    tracep->declBit(c+326,"requestARIO_0_1", false,-1);
    tracep->declBit(c+327,"requestARIO_0_2", false,-1);
    tracep->declBit(c+328,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+329,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+330,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+331,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+332,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+333,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+334,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+335,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+336,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+337,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+338,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+339,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+340,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+341,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+342,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+343,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+344,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+345,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+346,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+347,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+348,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+349,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+350,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+351,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+352,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+353,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+354,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+355,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+356,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+357,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+358,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+359,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+360,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+361,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+362,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+363,"latched", false,-1);
    tracep->declBit(c+364,"in_0_awvalid", false,-1);
    tracep->declBit(c+365,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+366,"in_0_wvalid", false,-1);
    tracep->declBit(c+367,"idle_3", false,-1);
    tracep->declBit(c+938,"anyValid", false,-1);
    tracep->declBus(c+939,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+368,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+940,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+941,"prefixOR_1", false,-1);
    tracep->declBit(c+942,"winner_3_1", false,-1);
    tracep->declBit(c+943,"winner_3_2", false,-1);
    tracep->declBit(c+369,"state_3_0", false,-1);
    tracep->declBit(c+370,"state_3_1", false,-1);
    tracep->declBit(c+371,"state_3_2", false,-1);
    tracep->declBit(c+944,"muxState_3_0", false,-1);
    tracep->declBit(c+945,"muxState_3_1", false,-1);
    tracep->declBit(c+946,"muxState_3_2", false,-1);
    tracep->declBit(c+372,"idle_4", false,-1);
    tracep->declBit(c+947,"anyValid_1", false,-1);
    tracep->declBus(c+948,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+373,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+949,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+950,"winner_4_0", false,-1);
    tracep->declBit(c+951,"winner_4_2", false,-1);
    tracep->declBit(c+374,"state_4_0", false,-1);
    tracep->declBit(c+375,"state_4_2", false,-1);
    tracep->declBit(c+952,"muxState_4_0", false,-1);
    tracep->declBit(c+953,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+365,"io_enq_valid", false,-1);
    tracep->declBus(c+377,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+954,"io_deq_ready", false,-1);
    tracep->declBit(c+378,"io_deq_valid", false,-1);
    tracep->declBus(c+379,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+380,"wrap", false,-1);
    tracep->declBit(c+381,"wrap_1", false,-1);
    tracep->declBit(c+382,"maybe_full", false,-1);
    tracep->declBit(c+383,"ptr_match", false,-1);
    tracep->declBit(c+384,"empty", false,-1);
    tracep->declBit(c+385,"full", false,-1);
    tracep->declBit(c+378,"io_deq_valid_0", false,-1);
    tracep->declBit(c+955,"do_deq", false,-1);
    tracep->declBit(c+956,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+381,"R0_addr", false,-1);
    tracep->declBit(c+1075,"R0_en", false,-1);
    tracep->declBit(c+1008,"R0_clk", false,-1);
    tracep->declBus(c+386,"R0_data", false,-1, 2,0);
    tracep->declBit(c+380,"W0_addr", false,-1);
    tracep->declBit(c+956,"W0_en", false,-1);
    tracep->declBit(c+1008,"W0_clk", false,-1);
    tracep->declBus(c+377,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+387+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+915,"auto_in_awready", false,-1);
    tracep->declBit(c+229,"auto_in_awvalid", false,-1);
    tracep->declBus(c+186,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+188,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+230,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+916,"auto_in_wready", false,-1);
    tracep->declBit(c+231,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+190,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+192,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+232,"auto_in_wlast", false,-1);
    tracep->declBit(c+917,"auto_in_bready", false,-1);
    tracep->declBit(c+918,"auto_in_bvalid", false,-1);
    tracep->declBus(c+911,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+919,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+920,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+921,"auto_in_arready", false,-1);
    tracep->declBit(c+233,"auto_in_arvalid", false,-1);
    tracep->declBus(c+196,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+197,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+198,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+234,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+228,"auto_in_rready", false,-1);
    tracep->declBit(c+912,"auto_in_rvalid", false,-1);
    tracep->declBus(c+913,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+717,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1038,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+719,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+922,"auto_in_rlast", false,-1);
    tracep->declBit(c+936,"auto_out_awready", false,-1);
    tracep->declBit(c+314,"auto_out_awvalid", false,-1);
    tracep->declBus(c+186,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+188,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+916,"auto_out_wready", false,-1);
    tracep->declBit(c+231,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+190,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+192,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+232,"auto_out_wlast", false,-1);
    tracep->declBit(c+917,"auto_out_bready", false,-1);
    tracep->declBit(c+918,"auto_out_bvalid", false,-1);
    tracep->declBus(c+911,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+919,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+937,"auto_out_arready", false,-1);
    tracep->declBit(c+315,"auto_out_arvalid", false,-1);
    tracep->declBus(c+196,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+197,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+198,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+228,"auto_out_rready", false,-1);
    tracep->declBit(c+912,"auto_out_rvalid", false,-1);
    tracep->declBus(c+913,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+717,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1038,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+922,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+389,"io_enq_ready", false,-1);
    tracep->declBit(c+722,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+957,"io_deq_ready", false,-1);
    tracep->declBit(c+390,"io_deq_valid", false,-1);
    tracep->declBit(c+391,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+391,"ram_real_last", false,-1);
    tracep->declBit(c+390,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+392,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+393,"io_enq_ready", false,-1);
    tracep->declBit(c+723,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+958,"io_deq_ready", false,-1);
    tracep->declBit(c+394,"io_deq_valid", false,-1);
    tracep->declBit(c+395,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+395,"ram_real_last", false,-1);
    tracep->declBit(c+394,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+396,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+397,"io_enq_ready", false,-1);
    tracep->declBit(c+724,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+959,"io_deq_ready", false,-1);
    tracep->declBit(c+398,"io_deq_valid", false,-1);
    tracep->declBit(c+399,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+399,"ram_real_last", false,-1);
    tracep->declBit(c+398,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+400,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+401,"io_enq_ready", false,-1);
    tracep->declBit(c+725,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+960,"io_deq_ready", false,-1);
    tracep->declBit(c+402,"io_deq_valid", false,-1);
    tracep->declBit(c+403,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+403,"ram_real_last", false,-1);
    tracep->declBit(c+402,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+404,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+405,"io_enq_ready", false,-1);
    tracep->declBit(c+726,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+961,"io_deq_ready", false,-1);
    tracep->declBit(c+406,"io_deq_valid", false,-1);
    tracep->declBit(c+407,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+407,"ram_real_last", false,-1);
    tracep->declBit(c+406,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+408,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+409,"io_enq_ready", false,-1);
    tracep->declBit(c+727,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+962,"io_deq_ready", false,-1);
    tracep->declBit(c+410,"io_deq_valid", false,-1);
    tracep->declBit(c+411,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+411,"ram_real_last", false,-1);
    tracep->declBit(c+410,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+412,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+413,"io_enq_ready", false,-1);
    tracep->declBit(c+728,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+963,"io_deq_ready", false,-1);
    tracep->declBit(c+414,"io_deq_valid", false,-1);
    tracep->declBit(c+415,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+415,"ram_real_last", false,-1);
    tracep->declBit(c+414,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+416,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+417,"io_enq_ready", false,-1);
    tracep->declBit(c+729,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+964,"io_deq_ready", false,-1);
    tracep->declBit(c+418,"io_deq_valid", false,-1);
    tracep->declBit(c+419,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+419,"ram_real_last", false,-1);
    tracep->declBit(c+418,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+420,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+421,"io_enq_ready", false,-1);
    tracep->declBit(c+730,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+965,"io_deq_ready", false,-1);
    tracep->declBit(c+422,"io_deq_valid", false,-1);
    tracep->declBit(c+423,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+423,"ram_real_last", false,-1);
    tracep->declBit(c+422,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+424,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+425,"io_enq_ready", false,-1);
    tracep->declBit(c+731,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+966,"io_deq_ready", false,-1);
    tracep->declBit(c+426,"io_deq_valid", false,-1);
    tracep->declBit(c+427,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+427,"ram_real_last", false,-1);
    tracep->declBit(c+426,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+428,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+429,"io_enq_ready", false,-1);
    tracep->declBit(c+732,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+967,"io_deq_ready", false,-1);
    tracep->declBit(c+430,"io_deq_valid", false,-1);
    tracep->declBit(c+431,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+431,"ram_real_last", false,-1);
    tracep->declBit(c+430,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+432,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+433,"io_enq_ready", false,-1);
    tracep->declBit(c+733,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+968,"io_deq_ready", false,-1);
    tracep->declBit(c+434,"io_deq_valid", false,-1);
    tracep->declBit(c+435,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+435,"ram_real_last", false,-1);
    tracep->declBit(c+434,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+436,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+437,"io_enq_ready", false,-1);
    tracep->declBit(c+734,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+969,"io_deq_ready", false,-1);
    tracep->declBit(c+438,"io_deq_valid", false,-1);
    tracep->declBit(c+439,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+439,"ram_real_last", false,-1);
    tracep->declBit(c+438,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+440,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+441,"io_enq_ready", false,-1);
    tracep->declBit(c+735,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+970,"io_deq_ready", false,-1);
    tracep->declBit(c+442,"io_deq_valid", false,-1);
    tracep->declBit(c+443,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+443,"ram_real_last", false,-1);
    tracep->declBit(c+442,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+444,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+445,"io_enq_ready", false,-1);
    tracep->declBit(c+736,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+971,"io_deq_ready", false,-1);
    tracep->declBit(c+446,"io_deq_valid", false,-1);
    tracep->declBit(c+447,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+447,"ram_real_last", false,-1);
    tracep->declBit(c+446,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+448,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+449,"io_enq_ready", false,-1);
    tracep->declBit(c+737,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+972,"io_deq_ready", false,-1);
    tracep->declBit(c+450,"io_deq_valid", false,-1);
    tracep->declBit(c+451,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+451,"ram_real_last", false,-1);
    tracep->declBit(c+450,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+452,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+453,"io_enq_ready", false,-1);
    tracep->declBit(c+738,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+973,"io_deq_ready", false,-1);
    tracep->declBit(c+454,"io_deq_valid", false,-1);
    tracep->declBit(c+455,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+455,"ram_real_last", false,-1);
    tracep->declBit(c+454,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+456,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+457,"io_enq_ready", false,-1);
    tracep->declBit(c+739,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+974,"io_deq_ready", false,-1);
    tracep->declBit(c+458,"io_deq_valid", false,-1);
    tracep->declBit(c+459,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+459,"ram_real_last", false,-1);
    tracep->declBit(c+458,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+460,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+461,"io_enq_ready", false,-1);
    tracep->declBit(c+740,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+975,"io_deq_ready", false,-1);
    tracep->declBit(c+462,"io_deq_valid", false,-1);
    tracep->declBit(c+463,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+463,"ram_real_last", false,-1);
    tracep->declBit(c+462,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+464,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+465,"io_enq_ready", false,-1);
    tracep->declBit(c+741,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+976,"io_deq_ready", false,-1);
    tracep->declBit(c+466,"io_deq_valid", false,-1);
    tracep->declBit(c+467,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+467,"ram_real_last", false,-1);
    tracep->declBit(c+466,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+468,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+469,"io_enq_ready", false,-1);
    tracep->declBit(c+742,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+977,"io_deq_ready", false,-1);
    tracep->declBit(c+470,"io_deq_valid", false,-1);
    tracep->declBit(c+471,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+471,"ram_real_last", false,-1);
    tracep->declBit(c+470,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+472,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+473,"io_enq_ready", false,-1);
    tracep->declBit(c+743,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+978,"io_deq_ready", false,-1);
    tracep->declBit(c+474,"io_deq_valid", false,-1);
    tracep->declBit(c+475,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+475,"ram_real_last", false,-1);
    tracep->declBit(c+474,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+476,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+477,"io_enq_ready", false,-1);
    tracep->declBit(c+744,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+979,"io_deq_ready", false,-1);
    tracep->declBit(c+478,"io_deq_valid", false,-1);
    tracep->declBit(c+479,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+479,"ram_real_last", false,-1);
    tracep->declBit(c+478,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+480,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+481,"io_enq_ready", false,-1);
    tracep->declBit(c+745,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+980,"io_deq_ready", false,-1);
    tracep->declBit(c+482,"io_deq_valid", false,-1);
    tracep->declBit(c+483,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+483,"ram_real_last", false,-1);
    tracep->declBit(c+482,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+484,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+485,"io_enq_ready", false,-1);
    tracep->declBit(c+746,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+981,"io_deq_ready", false,-1);
    tracep->declBit(c+486,"io_deq_valid", false,-1);
    tracep->declBit(c+487,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+487,"ram_real_last", false,-1);
    tracep->declBit(c+486,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+488,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+489,"io_enq_ready", false,-1);
    tracep->declBit(c+747,"io_enq_valid", false,-1);
    tracep->declBit(c+230,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+982,"io_deq_ready", false,-1);
    tracep->declBit(c+490,"io_deq_valid", false,-1);
    tracep->declBit(c+491,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+491,"ram_real_last", false,-1);
    tracep->declBit(c+490,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+492,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+493,"io_enq_ready", false,-1);
    tracep->declBit(c+748,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+983,"io_deq_ready", false,-1);
    tracep->declBit(c+494,"io_deq_valid", false,-1);
    tracep->declBit(c+495,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+495,"ram_real_last", false,-1);
    tracep->declBit(c+494,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+496,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+497,"io_enq_ready", false,-1);
    tracep->declBit(c+749,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+984,"io_deq_ready", false,-1);
    tracep->declBit(c+498,"io_deq_valid", false,-1);
    tracep->declBit(c+499,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+499,"ram_real_last", false,-1);
    tracep->declBit(c+498,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+500,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+501,"io_enq_ready", false,-1);
    tracep->declBit(c+750,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+985,"io_deq_ready", false,-1);
    tracep->declBit(c+502,"io_deq_valid", false,-1);
    tracep->declBit(c+503,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+503,"ram_real_last", false,-1);
    tracep->declBit(c+502,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+504,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+505,"io_enq_ready", false,-1);
    tracep->declBit(c+751,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+986,"io_deq_ready", false,-1);
    tracep->declBit(c+506,"io_deq_valid", false,-1);
    tracep->declBit(c+507,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+507,"ram_real_last", false,-1);
    tracep->declBit(c+506,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+508,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+509,"io_enq_ready", false,-1);
    tracep->declBit(c+752,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+987,"io_deq_ready", false,-1);
    tracep->declBit(c+510,"io_deq_valid", false,-1);
    tracep->declBit(c+511,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+511,"ram_real_last", false,-1);
    tracep->declBit(c+510,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+512,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+513,"io_enq_ready", false,-1);
    tracep->declBit(c+753,"io_enq_valid", false,-1);
    tracep->declBit(c+234,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+988,"io_deq_ready", false,-1);
    tracep->declBit(c+514,"io_deq_valid", false,-1);
    tracep->declBit(c+515,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+515,"ram_real_last", false,-1);
    tracep->declBit(c+514,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+516,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1039,"reset", false,-1);
    tracep->declBit(c+213,"auto_master_out_awready", false,-1);
    tracep->declBit(c+214,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1072,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+215,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+216,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1074,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+217,"auto_master_out_wready", false,-1);
    tracep->declBit(c+218,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+219,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+221,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+222,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+223,"auto_master_out_bready", false,-1);
    tracep->declBit(c+910,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+911,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+716,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+224,"auto_master_out_arready", false,-1);
    tracep->declBit(c+225,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1072,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+226,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+227,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1074,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+228,"auto_master_out_rready", false,-1);
    tracep->declBit(c+912,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+913,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+717,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1038,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+914,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1039,"reset", false,-1);
    tracep->declBit(c+1062,"io_interrupt", false,-1);
    tracep->declBit(c+213,"io_master_awready", false,-1);
    tracep->declBit(c+214,"io_master_awvalid", false,-1);
    tracep->declBus(c+215,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1072,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1073,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+216,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1074,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+217,"io_master_wready", false,-1);
    tracep->declBit(c+218,"io_master_wvalid", false,-1);
    tracep->declQuad(c+219,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+221,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+222,"io_master_wlast", false,-1);
    tracep->declBit(c+223,"io_master_bready", false,-1);
    tracep->declBit(c+910,"io_master_bvalid", false,-1);
    tracep->declBus(c+716,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+911,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+224,"io_master_arready", false,-1);
    tracep->declBit(c+225,"io_master_arvalid", false,-1);
    tracep->declBus(c+226,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1072,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1073,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+227,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1074,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+228,"io_master_rready", false,-1);
    tracep->declBit(c+912,"io_master_rvalid", false,-1);
    tracep->declBus(c+1038,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+717,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+914,"io_master_rlast", false,-1);
    tracep->declBus(c+913,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1076,"io_slave_awready", false,-1);
    tracep->declBit(c+1062,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1077,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1072,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1073,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1078,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1079,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1080,"io_slave_wready", false,-1);
    tracep->declBit(c+1062,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+1081,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+1073,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+1062,"io_slave_wlast", false,-1);
    tracep->declBit(c+1062,"io_slave_bready", false,-1);
    tracep->declBit(c+1083,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1084,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1085,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1086,"io_slave_arready", false,-1);
    tracep->declBit(c+1062,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1077,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1072,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1073,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1078,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1079,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1062,"io_slave_rready", false,-1);
    tracep->declBit(c+1087,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1088,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1089,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1091,"io_slave_rlast", false,-1);
    tracep->declBus(c+1092,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+517,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+518,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+1093,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+519,"ifu_stall", false,-1);
    tracep->declBus(c+520,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+521,"jump_pc_valid", false,-1);
    tracep->declBit(c+989,"stall", false,-1);
    tracep->declBit(c+522,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+523,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+990,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+991,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1073,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+992,"ifu_r_last_i", false,-1);
    tracep->declBit(c+524,"idu_branch", false,-1);
    tracep->declBit(c+525,"idu_jal", false,-1);
    tracep->declBit(c+526,"idu_jalr", false,-1);
    tracep->declBus(c+527,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+528,"idu_rd_wen", false,-1);
    tracep->declBus(c+529,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+530,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+531,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+532,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+533,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+534,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+535,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+536,"src1", false,-1, 31,0);
    tracep->declBus(c+537,"src2", false,-1, 31,0);
    tracep->declBus(c+1040,"rd_data", false,-1, 31,0);
    tracep->declBit(c+538,"zero_flag", false,-1);
    tracep->declBus(c+539,"exu_result", false,-1, 31,0);
    tracep->declBus(c+1094,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+754,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+989,"mem_stall", false,-1);
    tracep->declBit(c+993,"lsu_rd_wen", false,-1);
    tracep->declBit(c+540,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+541,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+755,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+756,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+542,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1073,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+757,"lsu_r_last_i", false,-1);
    tracep->declBit(c+543,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+215,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+217,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+537,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+216,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1073,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+910,"lsu_w_last_i", false,-1);
    tracep->declBit(c+758,"wbu_rd_wen", false,-1);
    tracep->declBit(c+544,"csr_ecall", false,-1);
    tracep->declBit(c+545,"csr_mret", false,-1);
    tracep->declBus(c+546,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+1041,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+547,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+548,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+549,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("axi_arbiter_u0 ");
    tracep->declBit(c+1008,"aclk", false,-1);
    tracep->declBit(c+1039,"areset_n", false,-1);
    tracep->declBit(c+522,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+523,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+990,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+991,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+1073,"ifu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+992,"ifu_r_last_o", false,-1);
    tracep->declBit(c+540,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+541,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+755,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+756,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+542,"lsu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1073,"lsu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+757,"lsu_r_last_o", false,-1);
    tracep->declBit(c+543,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+215,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+217,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+537,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+216,"lsu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1073,"lsu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+910,"lsu_w_last_o", false,-1);
    tracep->declBit(c+213,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+214,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+215,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1072,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1073,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+216,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1074,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+217,"axi_w_ready_i", false,-1);
    tracep->declBit(c+218,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+219,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+221,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+222,"axi_w_last_o", false,-1);
    tracep->declBit(c+223,"axi_b_ready_o", false,-1);
    tracep->declBit(c+910,"axi_b_valid_i", false,-1);
    tracep->declBus(c+716,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+911,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+224,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+225,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+226,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1072,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1073,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+227,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1074,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+228,"axi_r_ready_o", false,-1);
    tracep->declBit(c+912,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1038,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+717,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+914,"axi_r_last_i", false,-1);
    tracep->declBus(c+913,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+550,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+226,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+912,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+994,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+227,"cpu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1073,"cpu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+914,"cpu_r_last_i", false,-1);
    tracep->declBit(c+543,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+215,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+217,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+537,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+216,"cpu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1073,"cpu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+910,"cpu_w_last_i", false,-1);
    tracep->declBus(c+551,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+1079,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+1074,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+1095,"ARB_LSU", false,-1, 1,0);
    tracep->pushNamePrefix("axi_u0 ");
    tracep->declBit(c+1008,"aclk", false,-1);
    tracep->declBit(c+1039,"areset_n", false,-1);
    tracep->declBit(c+550,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+226,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+912,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+994,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+227,"cpu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1073,"cpu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+914,"cpu_r_last_o", false,-1);
    tracep->declBit(c+543,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+215,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+217,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+537,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+216,"cpu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1073,"cpu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+910,"cpu_w_last_o", false,-1);
    tracep->declBit(c+213,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+214,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+215,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1072,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1073,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+216,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1074,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+217,"axi_w_ready_i", false,-1);
    tracep->declBit(c+218,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+219,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+221,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+222,"axi_w_last_o", false,-1);
    tracep->declBit(c+223,"axi_b_ready_o", false,-1);
    tracep->declBit(c+910,"axi_b_valid_i", false,-1);
    tracep->declBus(c+716,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+911,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+224,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+225,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+226,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1072,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1073,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+227,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1074,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+228,"axi_r_ready_o", false,-1);
    tracep->declBit(c+912,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1038,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+717,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+914,"axi_r_last_i", false,-1);
    tracep->declBus(c+913,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+552,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+1078,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+1061,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+1096,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+1097,"AXI_W_RESP", false,-1, 2,0);
    tracep->declQuad(c+553,"axi_w_data_t", false,-1, 63,0);
    tracep->declBus(c+555,"axi_w_strb_t", false,-1, 7,0);
    tracep->declBus(c+556,"axi_w_cnt", false,-1, 7,0);
    tracep->declBus(c+557,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+1079,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1074,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1095,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+1098,"axi_r_cnt", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr_u0 ");
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1039,"reset", false,-1);
    tracep->declBus(c+558,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+546,"wr_data", false,-1, 31,0);
    tracep->declBus(c+558,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+1041,"rd_data", false,-1, 31,0);
    tracep->declBit(c+544,"i_csr_ecall", false,-1);
    tracep->declBit(c+545,"i_csr_mret", false,-1);
    tracep->declBus(c+518,"i_inst", false,-1, 31,0);
    tracep->declBus(c+517,"i_pc", false,-1, 31,0);
    tracep->declBus(c+547,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+548,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+549,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+1041,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+559,"wr_en", false,-1);
    tracep->declBit(c+559,"rd_en", false,-1);
    tracep->declBus(c+560,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+561,"temp", false,-1, 31,0);
    tracep->declBus(c+547,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+562,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+563,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_u0 ");
    tracep->declBus(c+517,"pc", false,-1, 31,0);
    tracep->declBus(c+536,"src1", false,-1, 31,0);
    tracep->declBus(c+537,"src2", false,-1, 31,0);
    tracep->declBus(c+531,"imm", false,-1, 31,0);
    tracep->declBit(c+524,"branch", false,-1);
    tracep->declBus(c+532,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+533,"src_sel", false,-1, 1,0);
    tracep->declBus(c+535,"funct3", false,-1, 2,0);
    tracep->declBit(c+538,"zero_flag", false,-1);
    tracep->declBus(c+539,"exu_result", false,-1, 31,0);
    tracep->declBus(c+564,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+565,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+566,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+1099,"carry_flag", false,-1);
    tracep->declBit(c+1100,"signed_flag", false,-1);
    tracep->declBus(c+539,"exu_result_r", false,-1, 31,0);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBus(c+532,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+564,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+565,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+566,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+567,"sub_flag", false,-1);
    tracep->declQuad(c+568,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+570,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+572,"cin", false,-1, 32,0);
    tracep->declQuad(c+574,"add_out", false,-1, 32,0);
    tracep->declBit(c+576,"top_A", false,-1);
    tracep->declBit(c+577,"top_B", false,-1);
    tracep->declBit(c+578,"top_C", false,-1);
    tracep->declBit(c+579,"sign_flag", false,-1);
    tracep->declBit(c+580,"over_flag", false,-1);
    tracep->declBit(c+581,"carry_flag", false,-1);
    tracep->declBus(c+582,"sra_result", false,-1, 31,0);
    tracep->declBus(c+566,"alu_out_data_r", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_u0 ");
    tracep->declBus(c+518,"inst", false,-1, 31,0);
    tracep->declBit(c+524,"branch", false,-1);
    tracep->declBit(c+525,"jal", false,-1);
    tracep->declBit(c+526,"jalr", false,-1);
    tracep->declBus(c+527,"rd", false,-1, 4,0);
    tracep->declBit(c+528,"rd_wen", false,-1);
    tracep->declBus(c+529,"rs1", false,-1, 4,0);
    tracep->declBus(c+530,"rs2", false,-1, 4,0);
    tracep->declBus(c+531,"imm", false,-1, 31,0);
    tracep->declBus(c+532,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+533,"src_sel", false,-1, 1,0);
    tracep->declBus(c+534,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+535,"funct3", false,-1, 2,0);
    tracep->declBus(c+583,"opcode", false,-1, 6,0);
    tracep->declBus(c+584,"funct7", false,-1, 6,0);
    tracep->declBus(c+1101,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("id_imm_idu ");
    tracep->declBus(c+518,"inst", false,-1, 31,0);
    tracep->declBus(c+531,"imm", false,-1, 31,0);
    tracep->declBus(c+531,"imm_r", false,-1, 31,0);
    tracep->declBus(c+585,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+586,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+587,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+588,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+589,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+1077,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+1077,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("id_imm_ext_typeB ");
    tracep->declBus(c+1102,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+590,"imm_in", false,-1, 12,0);
    tracep->declBus(c+588,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeI ");
    tracep->declBus(c+1103,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+591,"imm_in", false,-1, 11,0);
    tracep->declBus(c+585,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeJ ");
    tracep->declBus(c+1104,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+592,"imm_in", false,-1, 20,0);
    tracep->declBus(c+589,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeS ");
    tracep->declBus(c+1103,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+593,"imm_in", false,-1, 11,0);
    tracep->declBus(c+587,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeU ");
    tracep->declBus(c+1105,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+586,"imm_in", false,-1, 31,0);
    tracep->declBus(c+586,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_opt_idu ");
    tracep->declBus(c+583,"opcode", false,-1, 6,0);
    tracep->declBus(c+535,"funct3", false,-1, 2,0);
    tracep->declBus(c+584,"funct7", false,-1, 6,0);
    tracep->declBus(c+532,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+533,"src_sel", false,-1, 1,0);
    tracep->declBus(c+534,"lsu_opt", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_u0 ");
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1039,"reset", false,-1);
    tracep->declBus(c+520,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+521,"jump_pc_valid", false,-1);
    tracep->declBit(c+989,"stall", false,-1);
    tracep->declBit(c+993,"wbu_stall", false,-1);
    tracep->declBit(c+522,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+523,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+990,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+991,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1073,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+992,"ifu_r_last_i", false,-1);
    tracep->declBit(c+519,"ifu_stall", false,-1);
    tracep->declBus(c+517,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+518,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+517,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+518,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+594,"ifu_pc_o_t", false,-1, 31,0);
    tracep->declBus(c+595,"ifu_inst_o_t", false,-1, 31,0);
    tracep->declBus(c+523,"pc", false,-1, 31,0);
    tracep->declBus(c+991,"inst", false,-1, 31,0);
    tracep->declBus(c+1106,"inst_t", false,-1, 31,0);
    tracep->declBit(c+519,"ifu_stall_r", false,-1);
    tracep->declBit(c+596,"flush_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_u0 ");
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1039,"reset", false,-1);
    tracep->declBus(c+536,"src1", false,-1, 31,0);
    tracep->declBus(c+537,"src2", false,-1, 31,0);
    tracep->declBus(c+531,"imm", false,-1, 31,0);
    tracep->declBus(c+534,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+535,"funct3", false,-1, 2,0);
    tracep->declBit(c+519,"ifu_stall", false,-1);
    tracep->declBit(c+540,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+541,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+755,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+756,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+542,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1073,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+757,"lsu_r_last_i", false,-1);
    tracep->declBit(c+543,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+215,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+217,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+537,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+216,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1073,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+910,"lsu_w_last_i", false,-1);
    tracep->declBit(c+989,"mem_stall", false,-1);
    tracep->declBit(c+993,"lsu_rd_wen", false,-1);
    tracep->declBus(c+754,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+541,"raddr", false,-1, 31,0);
    tracep->declBus(c+756,"rdata", false,-1, 31,0);
    tracep->declBus(c+597,"rsize", false,-1, 31,0);
    tracep->declBus(c+215,"waddr", false,-1, 31,0);
    tracep->declBus(c+537,"wdata", false,-1, 31,0);
    tracep->declBus(c+598,"wmask", false,-1, 31,0);
    tracep->declBus(c+598,"mask", false,-1, 31,0);
    tracep->declBus(c+754,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+540,"ren", false,-1);
    tracep->declBit(c+543,"wen", false,-1);
    tracep->declBit(c+995,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+996,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_u0 ");
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1039,"reset", false,-1);
    tracep->declBus(c+529,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+536,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+530,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+537,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+758,"rd_en", false,-1);
    tracep->declBus(c+527,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1040,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+599+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_u0 ");
    tracep->declBus(c+534,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+539,"exu_result", false,-1, 31,0);
    tracep->declBus(c+754,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+1041,"csr_result", false,-1, 31,0);
    tracep->declBit(c+993,"lsu_rd_wen", false,-1);
    tracep->declBit(c+631,"idu_rd_wen", false,-1);
    tracep->declBit(c+758,"wbu_rd_wen", false,-1);
    tracep->declBus(c+1040,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"io_d", false,-1);
    tracep->declBit(c+632,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"io_d", false,-1);
    tracep->declBit(c+632,"io_q", false,-1);
    tracep->declBit(c+632,"sync_0", false,-1);
    tracep->declBit(c+633,"sync_1", false,-1);
    tracep->declBit(c+634,"sync_2", false,-1);
    tracep->declBit(c+635,"sync_3", false,-1);
    tracep->declBit(c+636,"sync_4", false,-1);
    tracep->declBit(c+637,"sync_5", false,-1);
    tracep->declBit(c+638,"sync_6", false,-1);
    tracep->declBit(c+639,"sync_7", false,-1);
    tracep->declBit(c+640,"sync_8", false,-1);
    tracep->declBit(c+641,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+709,"auto_in_psel", false,-1);
    tracep->declBit(c+710,"auto_in_penable", false,-1);
    tracep->declBit(c+180,"auto_in_pwrite", false,-1);
    tracep->declBus(c+872,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1061,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"auto_in_pready", false,-1);
    tracep->declBit(c+1070,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1071,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1010,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1011,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1012,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1013,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1014,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1015,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1016,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1017,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1018,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1019,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBus(c+886,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+709,"in_psel", false,-1);
    tracep->declBit(c+710,"in_penable", false,-1);
    tracep->declBus(c+1061,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+180,"in_pwrite", false,-1);
    tracep->declBus(c+181,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"in_pready", false,-1);
    tracep->declBus(c+1071,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1070,"in_pslverr", false,-1);
    tracep->declBus(c+1010,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1011,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1012,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1013,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1014,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1015,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1016,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1017,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1018,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1019,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+707,"auto_in_psel", false,-1);
    tracep->declBit(c+708,"auto_in_penable", false,-1);
    tracep->declBit(c+180,"auto_in_pwrite", false,-1);
    tracep->declBus(c+872,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1061,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1066,"auto_in_pready", false,-1);
    tracep->declBit(c+1067,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1068,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1020,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1021,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBus(c+886,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+707,"in_psel", false,-1);
    tracep->declBit(c+708,"in_penable", false,-1);
    tracep->declBus(c+1061,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+180,"in_pwrite", false,-1);
    tracep->declBus(c+181,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1066,"in_pready", false,-1);
    tracep->declBus(c+1068,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1067,"in_pslverr", false,-1);
    tracep->declBit(c+1020,"ps2_clk", false,-1);
    tracep->declBit(c+1021,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+316,"auto_in_awvalid", false,-1);
    tracep->declBit(c+317,"auto_in_wvalid", false,-1);
    tracep->declBit(c+318,"auto_in_arready", false,-1);
    tracep->declBit(c+319,"auto_in_arvalid", false,-1);
    tracep->declBus(c+196,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+320,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+198,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+721,"auto_in_rready", false,-1);
    tracep->declBit(c+321,"auto_in_rvalid", false,-1);
    tracep->declBus(c+322,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+323,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+321,"state", false,-1);
    tracep->declQuad(c+323,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+322,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+642,"raddr", false,-1, 31,0);
    tracep->declBit(c+643,"ren", false,-1);
    tracep->declBus(c+644,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+873,"auto_in_psel", false,-1);
    tracep->declBit(c+711,"auto_in_penable", false,-1);
    tracep->declBit(c+180,"auto_in_pwrite", false,-1);
    tracep->declBus(c+869,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1061,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1034,"auto_in_pready", false,-1);
    tracep->declBit(c+1062,"auto_in_pslverr", false,-1);
    tracep->declBus(c+183,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+902,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+903,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1031,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBus(c+869,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+873,"in_psel", false,-1);
    tracep->declBit(c+711,"in_penable", false,-1);
    tracep->declBus(c+1061,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+180,"in_pwrite", false,-1);
    tracep->declBus(c+181,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1034,"in_pready", false,-1);
    tracep->declBus(c+183,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1062,"in_pslverr", false,-1);
    tracep->declBit(c+902,"qspi_sck", false,-1);
    tracep->declBit(c+903,"qspi_ce_n", false,-1);
    tracep->declBus(c+1031,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1031,"din", false,-1, 3,0);
    tracep->declBus(c+997,"dout", false,-1, 3,0);
    tracep->declBus(c+998,"douten", false,-1, 3,0);
    tracep->declBit(c+1042,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1008,"clk_i", false,-1);
    tracep->declBit(c+1009,"rst_i", false,-1);
    tracep->declBus(c+869,"adr_i", false,-1, 31,0);
    tracep->declBus(c+181,"dat_i", false,-1, 31,0);
    tracep->declBus(c+183,"dat_o", false,-1, 31,0);
    tracep->declBus(c+182,"sel_i", false,-1, 3,0);
    tracep->declBit(c+873,"cyc_i", false,-1);
    tracep->declBit(c+873,"stb_i", false,-1);
    tracep->declBit(c+1042,"ack_o", false,-1);
    tracep->declBit(c+180,"we_i", false,-1);
    tracep->declBit(c+902,"sck", false,-1);
    tracep->declBit(c+903,"ce_n", false,-1);
    tracep->declBus(c+1031,"din", false,-1, 3,0);
    tracep->declBus(c+997,"dout", false,-1, 3,0);
    tracep->declBus(c+998,"douten", false,-1, 3,0);
    tracep->declBus(c+1079,"ST_INIT", false,-1, 1,0);
    tracep->declBus(c+1074,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1095,"ST_WAIT", false,-1, 1,0);
    tracep->declBit(c+774,"mr_sck", false,-1);
    tracep->declBit(c+13,"mr_ce_n", false,-1);
    tracep->declBus(c+1031,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1043,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+775,"mr_doe", false,-1);
    tracep->declBit(c+14,"mw_sck", false,-1);
    tracep->declBit(c+15,"mw_ce_n", false,-1);
    tracep->declBus(c+1031,"mw_din", false,-1, 3,0);
    tracep->declBus(c+860,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+16,"mw_doe", false,-1);
    tracep->declBit(c+17,"init_start", false,-1);
    tracep->declBit(c+18,"init_done", false,-1);
    tracep->declBit(c+19,"init_sck", false,-1);
    tracep->declBit(c+20,"init_ce_n", false,-1);
    tracep->declBus(c+21,"init_dout", false,-1, 3,0);
    tracep->declBit(c+1075,"init_doe", false,-1);
    tracep->declBit(c+999,"mr_rd", false,-1);
    tracep->declBit(c+776,"mr_done", false,-1);
    tracep->declBit(c+1000,"mw_wr", false,-1);
    tracep->declBit(c+861,"mw_done", false,-1);
    tracep->declBit(c+873,"wb_valid", false,-1);
    tracep->declBit(c+887,"wb_we", false,-1);
    tracep->declBit(c+888,"wb_re", false,-1);
    tracep->declBus(c+22,"state", false,-1, 1,0);
    tracep->declBus(c+1001,"nstate", false,-1, 1,0);
    tracep->declBus(c+645,"size", false,-1, 2,0);
    tracep->declBus(c+646,"byte0", false,-1, 7,0);
    tracep->declBus(c+647,"byte1", false,-1, 7,0);
    tracep->declBus(c+648,"byte2", false,-1, 7,0);
    tracep->declBus(c+649,"byte3", false,-1, 7,0);
    tracep->declBus(c+650,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("INIT ");
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1044,"rst_n", false,-1);
    tracep->declBit(c+17,"start", false,-1);
    tracep->declBit(c+18,"done", false,-1);
    tracep->declBit(c+19,"sck", false,-1);
    tracep->declBit(c+20,"ce_n", false,-1);
    tracep->declBus(c+21,"dout", false,-1, 3,0);
    tracep->declBit(c+1075,"douten", false,-1);
    tracep->declBus(c+1107,"CMD_35H", false,-1, 7,0);
    tracep->declBus(c+23,"counter", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1044,"rst_n", false,-1);
    tracep->declBus(c+889,"addr", false,-1, 23,0);
    tracep->declBit(c+999,"rd", false,-1);
    tracep->declBus(c+1108,"size", false,-1, 2,0);
    tracep->declBit(c+776,"done", false,-1);
    tracep->declBus(c+183,"line", false,-1, 31,0);
    tracep->declBit(c+774,"sck", false,-1);
    tracep->declBit(c+13,"ce_n", false,-1);
    tracep->declBus(c+1031,"din", false,-1, 3,0);
    tracep->declBus(c+1043,"dout", false,-1, 3,0);
    tracep->declBit(c+775,"douten", false,-1);
    tracep->declBus(c+1109,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1110,"READ", false,-1, 0,0);
    tracep->declBus(c+1111,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+24,"state", false,-1);
    tracep->declBit(c+1002,"nstate", false,-1);
    tracep->declBus(c+777,"counter", false,-1, 7,0);
    tracep->declBus(c+25,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+651+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1112,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+778,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1044,"rst_n", false,-1);
    tracep->declBus(c+890,"addr", false,-1, 23,0);
    tracep->declBus(c+650,"line", false,-1, 31,0);
    tracep->declBus(c+645,"size", false,-1, 2,0);
    tracep->declBit(c+1000,"wr", false,-1);
    tracep->declBit(c+861,"done", false,-1);
    tracep->declBit(c+14,"sck", false,-1);
    tracep->declBit(c+15,"ce_n", false,-1);
    tracep->declBus(c+1031,"din", false,-1, 3,0);
    tracep->declBus(c+860,"dout", false,-1, 3,0);
    tracep->declBit(c+16,"douten", false,-1);
    tracep->declBus(c+1109,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1110,"WRITE", false,-1, 0,0);
    tracep->declBus(c+655,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+26,"state", false,-1);
    tracep->declBit(c+1003,"nstate", false,-1);
    tracep->declBus(c+27,"counter", false,-1, 7,0);
    tracep->declBus(c+28,"saddr", false,-1, 23,0);
    tracep->declBus(c+1113,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+703,"auto_in_psel", false,-1);
    tracep->declBit(c+704,"auto_in_penable", false,-1);
    tracep->declBit(c+180,"auto_in_pwrite", false,-1);
    tracep->declBus(c+869,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1061,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+773,"auto_in_pready", false,-1);
    tracep->declBit(c+1062,"auto_in_pslverr", false,-1);
    tracep->declBus(c+12,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1032,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+765,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+766,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+767,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+768,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+769,"sdram_bundle_we", false,-1);
    tracep->declBus(c+770,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+771,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+772,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+1033,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBus(c+869,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+703,"in_psel", false,-1);
    tracep->declBit(c+704,"in_penable", false,-1);
    tracep->declBus(c+1061,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+180,"in_pwrite", false,-1);
    tracep->declBus(c+181,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+773,"in_pready", false,-1);
    tracep->declBus(c+12,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1062,"in_pslverr", false,-1);
    tracep->declBit(c+1032,"sdram_clk", false,-1);
    tracep->declBit(c+765,"sdram_cke", false,-1);
    tracep->declBit(c+766,"sdram_cs", false,-1);
    tracep->declBit(c+767,"sdram_ras", false,-1);
    tracep->declBit(c+768,"sdram_cas", false,-1);
    tracep->declBit(c+769,"sdram_we", false,-1);
    tracep->declBus(c+770,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+771,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+772,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+1033,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+29,"sdram_dout_en", false,-1);
    tracep->declBus(c+30,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+656,"state", false,-1, 1,0);
    tracep->declBit(c+779,"req_accept", false,-1);
    tracep->declBit(c+891,"is_read", false,-1);
    tracep->declBit(c+892,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1008,"clk_i", false,-1);
    tracep->declBit(c+1009,"rst_i", false,-1);
    tracep->declBus(c+893,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+891,"inport_rd_i", false,-1);
    tracep->declBus(c+1073,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+869,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+181,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1033,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+779,"inport_accept_o", false,-1);
    tracep->declBit(c+773,"inport_ack_o", false,-1);
    tracep->declBit(c+1062,"inport_error_o", false,-1);
    tracep->declBus(c+12,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1032,"sdram_clk_o", false,-1);
    tracep->declBit(c+765,"sdram_cke_o", false,-1);
    tracep->declBit(c+766,"sdram_cs_o", false,-1);
    tracep->declBit(c+767,"sdram_ras_o", false,-1);
    tracep->declBit(c+768,"sdram_cas_o", false,-1);
    tracep->declBit(c+769,"sdram_we_o", false,-1);
    tracep->declBus(c+772,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+770,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+771,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+30,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+29,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1114,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1115,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1116,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1117,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1117,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1117,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1118,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1102,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1119,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1120,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1121,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1118,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1122,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1123,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1124,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1125,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1126,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1127,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1128,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1072,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1129,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1118,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1072,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1128,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1127,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1123,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1125,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1124,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1126,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1122,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1130,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1131,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1132,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1132,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1133,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1132,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1117,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1117,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1134,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+869,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+893,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+891,"ram_rd_w", false,-1);
    tracep->declBit(c+779,"ram_accept_w", false,-1);
    tracep->declBus(c+181,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+12,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+773,"ram_ack_w", false,-1);
    tracep->declBit(c+894,"ram_req_w", false,-1);
    tracep->declBus(c+780,"command_q", false,-1, 3,0);
    tracep->declBus(c+770,"addr_q", false,-1, 12,0);
    tracep->declBus(c+30,"data_q", false,-1, 15,0);
    tracep->declBit(c+31,"data_rd_en_q", false,-1);
    tracep->declBus(c+772,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+765,"cke_q", false,-1);
    tracep->declBus(c+771,"bank_q", false,-1, 1,0);
    tracep->declBus(c+32,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+781,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+1033,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+33,"refresh_q", false,-1);
    tracep->declBus(c+34,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+35+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+782,"state_q", false,-1, 3,0);
    tracep->declBus(c+1004,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1005,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+39,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+40,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+895,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+896,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+897,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1118,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+41,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1006,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1135,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+783,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+42,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+43,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+44,"idx", false,-1, 31,0);
    tracep->declBus(c+784,"rd_q", false,-1, 3,0);
    tracep->declBit(c+773,"ack_q", false,-1);
    tracep->declArray(c+785,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+877,"auto_in_psel", false,-1);
    tracep->declBit(c+712,"auto_in_penable", false,-1);
    tracep->declBit(c+180,"auto_in_pwrite", false,-1);
    tracep->declBus(c+871,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1061,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1036,"auto_in_pready", false,-1);
    tracep->declBit(c+1062,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1037,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+763,"spi_bundle_sck", false,-1);
    tracep->declBus(c+764,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1030,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1136,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1137,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1138,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBus(c+898,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+877,"in_psel", false,-1);
    tracep->declBit(c+712,"in_penable", false,-1);
    tracep->declBus(c+1061,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+180,"in_pwrite", false,-1);
    tracep->declBus(c+181,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1036,"in_pready", false,-1);
    tracep->declBus(c+1037,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1062,"in_pslverr", false,-1);
    tracep->declBit(c+763,"spi_sck", false,-1);
    tracep->declBus(c+764,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_mosi", false,-1);
    tracep->declBit(c+1030,"spi_miso", false,-1);
    tracep->declBit(c+1139,"spi_irq_out", false,-1);
    tracep->declBus(c+657,"wb_adr_i", false,-1, 31,0);
    tracep->declBus(c+658,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+45,"wb_dat_o", false,-1, 31,0);
    tracep->declBit(c+659,"wb_we_i", false,-1);
    tracep->declBit(c+660,"wb_stb_i", false,-1);
    tracep->declBit(c+661,"wb_cyc_i", false,-1);
    tracep->declBit(c+788,"wb_ack_o", false,-1);
    tracep->declBit(c+789,"wb_int_o", false,-1);
    tracep->declBus(c+662,"wb_sel_i", false,-1, 3,0);
    tracep->declBus(c+663,"spi_state", false,-1, 3,0);
    tracep->declBus(c+1072,"SPI_IDLE", false,-1, 3,0);
    tracep->declBus(c+1128,"SPI_REG", false,-1, 3,0);
    tracep->declBus(c+1127,"SPI_FLASH_TX1", false,-1, 3,0);
    tracep->declBus(c+1123,"SPI_FLASH_TX0", false,-1, 3,0);
    tracep->declBus(c+1125,"SPI_FLASH_SS1", false,-1, 3,0);
    tracep->declBus(c+1124,"SPI_FLASH_CTRL", false,-1, 3,0);
    tracep->declBus(c+1126,"SPI_FLASH_INTT", false,-1, 3,0);
    tracep->declBus(c+1122,"SPI_FLASH_SS0", false,-1, 3,0);
    tracep->declBus(c+1130,"SPI_FLASH_DATA", false,-1, 3,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1140,"Tp", false,-1, 31,0);
    tracep->declBit(c+1008,"wb_clk_i", false,-1);
    tracep->declBit(c+1009,"wb_rst_i", false,-1);
    tracep->declBus(c+664,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+658,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+45,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+662,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+659,"wb_we_i", false,-1);
    tracep->declBit(c+660,"wb_stb_i", false,-1);
    tracep->declBit(c+661,"wb_cyc_i", false,-1);
    tracep->declBit(c+788,"wb_ack_o", false,-1);
    tracep->declBit(c+1062,"wb_err_o", false,-1);
    tracep->declBit(c+789,"wb_int_o", false,-1);
    tracep->declBus(c+764,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+763,"sclk_pad_o", false,-1);
    tracep->declBit(c+11,"mosi_pad_o", false,-1);
    tracep->declBit(c+1030,"miso_pad_i", false,-1);
    tracep->declBus(c+790,"divider", false,-1, 15,0);
    tracep->declBus(c+791,"ctrl", false,-1, 13,0);
    tracep->declBus(c+46,"ss", false,-1, 7,0);
    tracep->declBus(c+862,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+47,"rx", false,-1, 127,0);
    tracep->declBit(c+792,"rx_negedge", false,-1);
    tracep->declBit(c+793,"tx_negedge", false,-1);
    tracep->declBus(c+794,"char_len", false,-1, 6,0);
    tracep->declBit(c+795,"go", false,-1);
    tracep->declBit(c+796,"lsb", false,-1);
    tracep->declBit(c+797,"ie", false,-1);
    tracep->declBit(c+798,"ass", false,-1);
    tracep->declBit(c+665,"spi_divider_sel", false,-1);
    tracep->declBit(c+666,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+667,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+668,"spi_ss_sel", false,-1);
    tracep->declBit(c+799,"tip", false,-1);
    tracep->declBit(c+800,"pos_edge", false,-1);
    tracep->declBit(c+51,"neg_edge", false,-1);
    tracep->declBit(c+801,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1140,"Tp", false,-1, 31,0);
    tracep->declBit(c+1008,"clk_in", false,-1);
    tracep->declBit(c+1009,"rst", false,-1);
    tracep->declBit(c+799,"enable", false,-1);
    tracep->declBit(c+795,"go", false,-1);
    tracep->declBit(c+801,"last_clk", false,-1);
    tracep->declBus(c+790,"divider", false,-1, 15,0);
    tracep->declBit(c+763,"clk_out", false,-1);
    tracep->declBit(c+800,"pos_edge", false,-1);
    tracep->declBit(c+51,"neg_edge", false,-1);
    tracep->declBus(c+802,"cnt", false,-1, 15,0);
    tracep->declBit(c+803,"cnt_zero", false,-1);
    tracep->declBit(c+804,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1140,"Tp", false,-1, 31,0);
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1009,"rst", false,-1);
    tracep->declBus(c+669,"latch", false,-1, 3,0);
    tracep->declBus(c+662,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+794,"len", false,-1, 6,0);
    tracep->declBit(c+796,"lsb", false,-1);
    tracep->declBit(c+795,"go", false,-1);
    tracep->declBit(c+800,"pos_edge", false,-1);
    tracep->declBit(c+51,"neg_edge", false,-1);
    tracep->declBit(c+792,"rx_negedge", false,-1);
    tracep->declBit(c+793,"tx_negedge", false,-1);
    tracep->declBit(c+799,"tip", false,-1);
    tracep->declBit(c+801,"last", false,-1);
    tracep->declBus(c+658,"p_in", false,-1, 31,0);
    tracep->declArray(c+47,"p_out", false,-1, 127,0);
    tracep->declBit(c+763,"s_clk", false,-1);
    tracep->declBit(c+1030,"s_in", false,-1);
    tracep->declBit(c+11,"s_out", false,-1);
    tracep->declBus(c+805,"cnt", false,-1, 7,0);
    tracep->declArray(c+47,"data", false,-1, 127,0);
    tracep->declBus(c+806,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+807,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+808,"rx_clk", false,-1);
    tracep->declBit(c+809,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+874,"auto_in_psel", false,-1);
    tracep->declBit(c+875,"auto_in_penable", false,-1);
    tracep->declBit(c+180,"auto_in_pwrite", false,-1);
    tracep->declBus(c+872,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1061,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+876,"auto_in_pready", false,-1);
    tracep->declBit(c+1062,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1035,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1028,"uart_rx", false,-1);
    tracep->declBit(c+1029,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+874,"in_psel", false,-1);
    tracep->declBit(c+875,"in_penable", false,-1);
    tracep->declBus(c+1061,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+876,"in_pready", false,-1);
    tracep->declBit(c+1062,"in_pslverr", false,-1);
    tracep->declBus(c+886,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+180,"in_pwrite", false,-1);
    tracep->declBus(c+1035,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+181,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1028,"uart_rx", false,-1);
    tracep->declBit(c+1029,"uart_tx", false,-1);
    tracep->declBit(c+52,"rtsn", false,-1);
    tracep->declBit(c+1062,"ctsn", false,-1);
    tracep->declBit(c+53,"dtr_pad_o", false,-1);
    tracep->declBit(c+1062,"dsr_pad_i", false,-1);
    tracep->declBit(c+1062,"ri_pad_i", false,-1);
    tracep->declBit(c+1062,"dcd_pad_i", false,-1);
    tracep->declBit(c+54,"interrupt", false,-1);
    tracep->declBit(c+1045,"reg_we", false,-1);
    tracep->declBit(c+1046,"reg_re", false,-1);
    tracep->declBus(c+899,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+900,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+670,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1007,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+55,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1009,"wb_rst_i", false,-1);
    tracep->declBus(c+899,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+901,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1007,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1045,"wb_we_i", false,-1);
    tracep->declBit(c+1046,"wb_re_i", false,-1);
    tracep->declBit(c+1029,"stx_pad_o", false,-1);
    tracep->declBit(c+1028,"srx_pad_i", false,-1);
    tracep->declBus(c+1130,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+55,"rts_pad_o", false,-1);
    tracep->declBit(c+53,"dtr_pad_o", false,-1);
    tracep->declBit(c+54,"int_o", false,-1);
    tracep->declBit(c+810,"enable", false,-1);
    tracep->declBit(c+56,"srx_pad", false,-1);
    tracep->declBus(c+57,"ier", false,-1, 3,0);
    tracep->declBus(c+58,"iir", false,-1, 3,0);
    tracep->declBus(c+59,"fcr", false,-1, 1,0);
    tracep->declBus(c+60,"mcr", false,-1, 4,0);
    tracep->declBus(c+811,"lcr", false,-1, 7,0);
    tracep->declBus(c+61,"msr", false,-1, 7,0);
    tracep->declBus(c+812,"dl", false,-1, 15,0);
    tracep->declBus(c+62,"scratch", false,-1, 7,0);
    tracep->declBit(c+63,"start_dlc", false,-1);
    tracep->declBit(c+64,"lsr_mask_d", false,-1);
    tracep->declBit(c+65,"msi_reset", false,-1);
    tracep->declBus(c+813,"dlc", false,-1, 15,0);
    tracep->declBus(c+66,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+67,"rx_reset", false,-1);
    tracep->declBit(c+814,"tx_reset", false,-1);
    tracep->declBit(c+815,"dlab", false,-1);
    tracep->declBit(c+1075,"cts_pad_i", false,-1);
    tracep->declBit(c+1062,"dsr_pad_i", false,-1);
    tracep->declBit(c+1062,"ri_pad_i", false,-1);
    tracep->declBit(c+1062,"dcd_pad_i", false,-1);
    tracep->declBit(c+68,"loopback", false,-1);
    tracep->declBit(c+1062,"cts", false,-1);
    tracep->declBit(c+1075,"dsr", false,-1);
    tracep->declBit(c+1075,"ri", false,-1);
    tracep->declBit(c+1075,"dcd", false,-1);
    tracep->declBit(c+69,"cts_c", false,-1);
    tracep->declBit(c+70,"dsr_c", false,-1);
    tracep->declBit(c+71,"ri_c", false,-1);
    tracep->declBit(c+72,"dcd_c", false,-1);
    tracep->declBus(c+73,"lsr", false,-1, 7,0);
    tracep->declBit(c+816,"lsr0", false,-1);
    tracep->declBit(c+74,"lsr1", false,-1);
    tracep->declBit(c+75,"lsr2", false,-1);
    tracep->declBit(c+76,"lsr3", false,-1);
    tracep->declBit(c+77,"lsr4", false,-1);
    tracep->declBit(c+817,"lsr5", false,-1);
    tracep->declBit(c+818,"lsr6", false,-1);
    tracep->declBit(c+78,"lsr7", false,-1);
    tracep->declBit(c+79,"lsr0r", false,-1);
    tracep->declBit(c+80,"lsr1r", false,-1);
    tracep->declBit(c+81,"lsr2r", false,-1);
    tracep->declBit(c+82,"lsr3r", false,-1);
    tracep->declBit(c+83,"lsr4r", false,-1);
    tracep->declBit(c+84,"lsr5r", false,-1);
    tracep->declBit(c+85,"lsr6r", false,-1);
    tracep->declBit(c+86,"lsr7r", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+87,"rls_int", false,-1);
    tracep->declBit(c+88,"rda_int", false,-1);
    tracep->declBit(c+89,"ti_int", false,-1);
    tracep->declBit(c+90,"thre_int", false,-1);
    tracep->declBit(c+91,"ms_int", false,-1);
    tracep->declBit(c+819,"tf_push", false,-1);
    tracep->declBit(c+92,"rf_pop", false,-1);
    tracep->declBus(c+1047,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+93,"rf_error_bit", false,-1);
    tracep->declBit(c+74,"rf_overrun", false,-1);
    tracep->declBit(c+820,"rf_push_pulse", false,-1);
    tracep->declBus(c+94,"rf_count", false,-1, 4,0);
    tracep->declBus(c+821,"tf_count", false,-1, 4,0);
    tracep->declBus(c+822,"tstate", false,-1, 2,0);
    tracep->declBus(c+823,"rstate", false,-1, 3,0);
    tracep->declBus(c+95,"counter_t", false,-1, 9,0);
    tracep->declBit(c+96,"thre_set_en", false,-1);
    tracep->declBus(c+97,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+824,"block_value", false,-1, 7,0);
    tracep->declBit(c+825,"serial_out", false,-1);
    tracep->declBit(c+826,"serial_in", false,-1);
    tracep->declBit(c+3,"lsr_mask_condition", false,-1);
    tracep->declBit(c+4,"iir_read", false,-1);
    tracep->declBit(c+5,"msr_read", false,-1);
    tracep->declBit(c+6,"fifo_read", false,-1);
    tracep->declBit(c+7,"fifo_write", false,-1);
    tracep->declBus(c+98,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+99,"lsr0_d", false,-1);
    tracep->declBit(c+100,"lsr1_d", false,-1);
    tracep->declBit(c+101,"lsr2_d", false,-1);
    tracep->declBit(c+102,"lsr3_d", false,-1);
    tracep->declBit(c+103,"lsr4_d", false,-1);
    tracep->declBit(c+104,"lsr5_d", false,-1);
    tracep->declBit(c+105,"lsr6_d", false,-1);
    tracep->declBit(c+106,"lsr7_d", false,-1);
    tracep->declBit(c+107,"rls_int_d", false,-1);
    tracep->declBit(c+108,"thre_int_d", false,-1);
    tracep->declBit(c+109,"ms_int_d", false,-1);
    tracep->declBit(c+110,"ti_int_d", false,-1);
    tracep->declBit(c+111,"rda_int_d", false,-1);
    tracep->declBit(c+112,"rls_int_rise", false,-1);
    tracep->declBit(c+113,"thre_int_rise", false,-1);
    tracep->declBit(c+114,"ms_int_rise", false,-1);
    tracep->declBit(c+115,"ti_int_rise", false,-1);
    tracep->declBit(c+116,"rda_int_rise", false,-1);
    tracep->declBit(c+117,"rls_int_pnd", false,-1);
    tracep->declBit(c+118,"rda_int_pnd", false,-1);
    tracep->declBit(c+119,"thre_int_pnd", false,-1);
    tracep->declBit(c+120,"ms_int_pnd", false,-1);
    tracep->declBit(c+121,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1140,"Tp", false,-1, 31,0);
    tracep->declBus(c+1140,"width", false,-1, 31,0);
    tracep->declBus(c+1110,"init_value", false,-1, 0,0);
    tracep->declBit(c+1009,"rst_i", false,-1);
    tracep->declBit(c+1008,"clk_i", false,-1);
    tracep->declBit(c+1062,"stage1_rst_i", false,-1);
    tracep->declBit(c+1075,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1028,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+56,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+122,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1009,"wb_rst_i", false,-1);
    tracep->declBus(c+811,"lcr", false,-1, 7,0);
    tracep->declBit(c+92,"rf_pop", false,-1);
    tracep->declBit(c+826,"srx_pad_i", false,-1);
    tracep->declBit(c+810,"enable", false,-1);
    tracep->declBit(c+67,"rx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBus(c+95,"counter_t", false,-1, 9,0);
    tracep->declBus(c+94,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1047,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+74,"rf_overrun", false,-1);
    tracep->declBit(c+93,"rf_error_bit", false,-1);
    tracep->declBus(c+823,"rstate", false,-1, 3,0);
    tracep->declBit(c+820,"rf_push_pulse", false,-1);
    tracep->declBus(c+827,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+828,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+829,"rshift", false,-1, 7,0);
    tracep->declBit(c+830,"rparity", false,-1);
    tracep->declBit(c+831,"rparity_error", false,-1);
    tracep->declBit(c+832,"rframing_error", false,-1);
    tracep->declBit(c+123,"rbit_in", false,-1);
    tracep->declBit(c+833,"rparity_xor", false,-1);
    tracep->declBus(c+834,"counter_b", false,-1, 7,0);
    tracep->declBit(c+124,"rf_push_q", false,-1);
    tracep->declBus(c+835,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+836,"rf_push", false,-1);
    tracep->declBit(c+837,"break_error", false,-1);
    tracep->declBit(c+838,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+839,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+840,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+841,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1072,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1128,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1127,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1123,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1125,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1124,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1126,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1122,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1130,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1131,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1141,"sr_push", false,-1, 3,0);
    tracep->declBus(c+842,"toc_value", false,-1, 9,0);
    tracep->declBus(c+843,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1142,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1133,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1118,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1143,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1009,"wb_rst_i", false,-1);
    tracep->declBit(c+820,"push", false,-1);
    tracep->declBit(c+92,"pop", false,-1);
    tracep->declBus(c+835,"data_in", false,-1, 10,0);
    tracep->declBit(c+67,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1047,"data_out", false,-1, 10,0);
    tracep->declBit(c+74,"overrun", false,-1);
    tracep->declBus(c+94,"count", false,-1, 4,0);
    tracep->declBit(c+93,"error_bit", false,-1);
    tracep->declBus(c+1048,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+125+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+844,"top", false,-1, 3,0);
    tracep->declBus(c+141,"bottom", false,-1, 3,0);
    tracep->declBus(c+845,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+142,"word0", false,-1, 2,0);
    tracep->declBus(c+143,"word1", false,-1, 2,0);
    tracep->declBus(c+144,"word2", false,-1, 2,0);
    tracep->declBus(c+145,"word3", false,-1, 2,0);
    tracep->declBus(c+146,"word4", false,-1, 2,0);
    tracep->declBus(c+147,"word5", false,-1, 2,0);
    tracep->declBus(c+148,"word6", false,-1, 2,0);
    tracep->declBus(c+149,"word7", false,-1, 2,0);
    tracep->declBus(c+150,"word8", false,-1, 2,0);
    tracep->declBus(c+151,"word9", false,-1, 2,0);
    tracep->declBus(c+152,"word10", false,-1, 2,0);
    tracep->declBus(c+153,"word11", false,-1, 2,0);
    tracep->declBus(c+154,"word12", false,-1, 2,0);
    tracep->declBus(c+155,"word13", false,-1, 2,0);
    tracep->declBus(c+156,"word14", false,-1, 2,0);
    tracep->declBus(c+157,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1118,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1138,"data_width", false,-1, 31,0);
    tracep->declBus(c+1133,"depth", false,-1, 31,0);
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+820,"we", false,-1);
    tracep->declBus(c+844,"a", false,-1, 3,0);
    tracep->declBus(c+141,"dpra", false,-1, 3,0);
    tracep->declBus(c+846,"di", false,-1, 7,0);
    tracep->declBus(c+1048,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+671+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1009,"wb_rst_i", false,-1);
    tracep->declBus(c+811,"lcr", false,-1, 7,0);
    tracep->declBit(c+819,"tf_push", false,-1);
    tracep->declBus(c+901,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+810,"enable", false,-1);
    tracep->declBit(c+814,"tx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+825,"stx_pad_o", false,-1);
    tracep->declBus(c+822,"tstate", false,-1, 2,0);
    tracep->declBus(c+821,"tf_count", false,-1, 4,0);
    tracep->declBus(c+847,"counter", false,-1, 4,0);
    tracep->declBus(c+848,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+849,"shift_out", false,-1, 6,0);
    tracep->declBit(c+850,"stx_o_tmp", false,-1);
    tracep->declBit(c+851,"parity_xor", false,-1);
    tracep->declBit(c+852,"tf_pop", false,-1);
    tracep->declBit(c+853,"bit_out", false,-1);
    tracep->declBus(c+901,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+863,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+158,"tf_overrun", false,-1);
    tracep->declBus(c+1078,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1061,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1096,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1097,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1108,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1144,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1138,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1133,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1118,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1143,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+1009,"wb_rst_i", false,-1);
    tracep->declBit(c+819,"push", false,-1);
    tracep->declBit(c+852,"pop", false,-1);
    tracep->declBus(c+901,"data_in", false,-1, 7,0);
    tracep->declBit(c+814,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+863,"data_out", false,-1, 7,0);
    tracep->declBit(c+158,"overrun", false,-1);
    tracep->declBus(c+821,"count", false,-1, 4,0);
    tracep->declBus(c+854,"top", false,-1, 3,0);
    tracep->declBus(c+855,"bottom", false,-1, 3,0);
    tracep->declBus(c+856,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1118,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1138,"data_width", false,-1, 31,0);
    tracep->declBus(c+1133,"depth", false,-1, 31,0);
    tracep->declBit(c+1008,"clk", false,-1);
    tracep->declBit(c+819,"we", false,-1);
    tracep->declBus(c+854,"a", false,-1, 3,0);
    tracep->declBus(c+855,"dpra", false,-1, 3,0);
    tracep->declBus(c+901,"di", false,-1, 7,0);
    tracep->declBus(c+863,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+687+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBit(c+705,"auto_in_psel", false,-1);
    tracep->declBit(c+706,"auto_in_penable", false,-1);
    tracep->declBit(c+180,"auto_in_pwrite", false,-1);
    tracep->declBus(c+871,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1061,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+181,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1063,"auto_in_pready", false,-1);
    tracep->declBit(c+1064,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1065,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1022,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1023,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1024,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1025,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1026,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1027,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1008,"clock", false,-1);
    tracep->declBit(c+1009,"reset", false,-1);
    tracep->declBus(c+898,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+705,"in_psel", false,-1);
    tracep->declBit(c+706,"in_penable", false,-1);
    tracep->declBus(c+1061,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+180,"in_pwrite", false,-1);
    tracep->declBus(c+181,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+182,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1063,"in_pready", false,-1);
    tracep->declBus(c+1065,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1064,"in_pslverr", false,-1);
    tracep->declBus(c+1022,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1023,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1024,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1025,"vga_hsync", false,-1);
    tracep->declBit(c+1026,"vga_vsync", false,-1);
    tracep->declBit(c+1027,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+763,"sck", false,-1);
    tracep->declBit(c+857,"ss", false,-1);
    tracep->declBit(c+11,"mosi", false,-1);
    tracep->declBit(c+1049,"miso", false,-1);
    tracep->declBus(c+8,"data", false,-1, 7,0);
    tracep->declBus(c+9,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+763,"sck", false,-1);
    tracep->declBit(c+858,"ss", false,-1);
    tracep->declBit(c+11,"mosi", false,-1);
    tracep->declBit(c+1050,"miso", false,-1);
    tracep->declBit(c+858,"reset", false,-1);
    tracep->declBus(c+759,"state", false,-1, 2,0);
    tracep->declBus(c+760,"counter", false,-1, 7,0);
    tracep->declBus(c+1051,"cmd", false,-1, 7,0);
    tracep->declBus(c+1052,"addr", false,-1, 23,0);
    tracep->declBus(c+761,"data", false,-1, 31,0);
    tracep->declBit(c+762,"ren", false,-1);
    tracep->declBus(c+10,"rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"raddr", false,-1, 31,0);
    tracep->declBus(c+1054,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+763,"clock", false,-1);
    tracep->declBit(c+762,"valid", false,-1);
    tracep->declBus(c+1051,"cmd", false,-1, 7,0);
    tracep->declBus(c+1053,"addr", false,-1, 31,0);
    tracep->declBus(c+10,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+902,"sck", false,-1);
    tracep->declBit(c+903,"ce_n", false,-1);
    tracep->declBus(c+1031,"dio", false,-1, 3,0);
    tracep->declBus(c+864,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1055,"dout", false,-1, 3,0);
    tracep->declBus(c+1031,"din", false,-1, 3,0);
    tracep->declBit(c+1056,"QPI_MODE", false,-1);
    tracep->declBus(c+865,"cmd", false,-1, 7,0);
    tracep->declBus(c+866,"addr", false,-1, 23,0);
    tracep->declBus(c+1057,"data", false,-1, 31,0);
    tracep->declBus(c+1058,"rdata", false,-1, 31,0);
    tracep->declBus(c+867,"counter", false,-1, 7,0);
    tracep->declBus(c+868,"state", false,-1, 3,0);
    tracep->declBus(c+1059,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1060,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1032,"clk", false,-1);
    tracep->declBit(c+765,"cke", false,-1);
    tracep->declBit(c+766,"cs", false,-1);
    tracep->declBit(c+767,"ras", false,-1);
    tracep->declBit(c+768,"cas", false,-1);
    tracep->declBit(c+769,"we", false,-1);
    tracep->declBus(c+770,"a", false,-1, 12,0);
    tracep->declBus(c+771,"ba", false,-1, 1,0);
    tracep->declBus(c+772,"dqm", false,-1, 1,0);
    tracep->declBus(c+1033,"dq", false,-1, 15,0);
    tracep->declBus(c+1145,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1146,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1097,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1144,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1108,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1147,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1096,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1061,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1078,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1148,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+159+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+163,"dout_en", false,-1, 15,0);
    tracep->declBus(c+164,"dout", false,-1, 15,0);
    tracep->declBus(c+1033,"din", false,-1, 15,0);
    tracep->declBus(c+165,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+166,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+859,"command", false,-1, 2,0);
    tracep->declBus(c+167,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+168,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+169,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+170,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+171,"read_flag", false,-1);
    tracep->declBus(c+172,"R_Address", false,-1, 8,0);
    tracep->declBus(c+173,"W_Address", false,-1, 8,0);
    tracep->declBus(c+174,"W_Data", false,-1, 15,0);
    tracep->declBus(c+175,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+176,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+177,"Length", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__i),32);
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data),8);
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),8);
    bufp->fullIData(oldp+10,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullIData(oldp+12,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                               << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullBit(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+16,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+17,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullBit(oldp+18,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))));
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_sck));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_ce_n));
    bufp->fullCData(oldp+21,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))
                               ? (1U & (0x35U >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)))))
                               : 0U)),4);
    bufp->fullCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter),8);
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullSData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+52,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U)))));
    bufp->fullBit(oldp+53,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 1U))));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullCData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+68,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 4U))));
    bufp->fullBit(oldp+69,((IData)((0x10U != (0x12U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+70,((IData)((0x11U == (0x11U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+71,((IData)((0x14U == (0x14U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+72,((IData)((0x18U == (0x18U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+73,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                               << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                          << 6U) | 
                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                               << 3U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+75,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                  >> 1U))));
    bufp->fullBit(oldp+76,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                  >> 2U))));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+93,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [1U] | (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [2U] 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [3U] 
                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [4U] 
                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [5U] 
                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [6U] 
                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [7U] 
                                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [8U] 
                                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [9U] 
                                                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xaU] 
                                                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xbU] 
                                                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xcU] 
                                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xdU] 
                                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullSData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+96,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+112,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+113,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+114,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+115,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+116,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullSData(oldp+159,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+160,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+161,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+162,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+163,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_flag)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+164,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dout),16);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Brust_Length),3);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__L_Bank),2);
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__R_Counter),4);
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__W_Counter),4);
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_flag));
    bufp->fullSData(oldp+172,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__R_Address),9);
    bufp->fullSData(oldp+173,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__W_Address),9);
    bufp->fullSData(oldp+174,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__W_Data),16);
    bufp->fullIData(oldp+175,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+176,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Length),4);
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+179,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+183,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullQData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+213,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+214,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullIData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o),32);
    bufp->fullCData(oldp+216,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)),3);
    bufp->fullBit(oldp+217,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+218,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullQData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),64);
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),8);
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+223,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)) 
                             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+225,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullIData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o),32);
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_size_o),3);
    bufp->fullBit(oldp+228,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+230,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+232,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+234,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+235,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+280,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                       >> 8U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullWData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+286,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+287,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+290,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+291,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+292,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+295,((((QData)((IData)((0xffU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? (IData)(
                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                 >> 0x38U))
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7))))) 
                                << 0x38U) | (((QData)((IData)(
                                                              (0xffU 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                   ? 
                                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                    ? (IData)(
                                                                              (vlSelf->__VdfgTmp_hf134a362__0 
                                                                               >> 0x30U))
                                                                    : 0U)
                                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6))))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                      ? 
                                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                       ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x28U))
                                                                       : 0U)
                                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5))))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                          ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x20U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                          ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x18U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                                       << 0x18U) 
                                                                      | ((0xff0000U 
                                                                          & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                               ? 
                                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x10U))
                                                                                : 0U)
                                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                                             << 0x10U)) 
                                                                         | ((0xff00U 
                                                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                                                << 8U)) 
                                                                            | (0xffU 
                                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(vlSelf->__VdfgTmp_hf134a362__0)
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))))))))),64);
    bufp->fullCData(oldp+297,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+298,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullSData(oldp+310,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullQData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullSData(oldp+313,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+316,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+317,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+318,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+319,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+320,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+329,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+389,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+393,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+397,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+401,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+405,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+409,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+413,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+417,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+421,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+425,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+429,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+433,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+437,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+441,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+445,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+449,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+453,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+457,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+461,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+465,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+469,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+473,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+477,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+481,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+485,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+489,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+493,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+497,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+501,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+505,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+509,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+513,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r));
    bufp->fullIData(oldp+520,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                               [0x341U] : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                           [0x305U]
                                            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0)
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r)
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h623bd169__0
                                                    : 0U))))),32);
    bufp->fullBit(oldp+521,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o));
    bufp->fullIData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+524,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+525,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+526,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd),5);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd_wen));
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs1),5);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs2),5);
    bufp->fullIData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+535,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullBit(oldp+538,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r))))));
    bufp->fullIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r),32);
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren));
    bufp->fullIData(oldp+541,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h623bd169__0
                                : 0U)),32);
    bufp->fullCData(oldp+542,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize)),3);
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__wen));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret));
    bufp->fullIData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullBit(oldp+550,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o)
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren)
                                        : 0U)))));
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state),3);
    bufp->fullQData(oldp+553,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2))),64);
    bufp->fullCData(oldp+555,(((0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                ? 1U : ((1U == (7U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                         ? 3U : 0xfU))),8);
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_cnt),8);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state),2);
    bufp->fullSData(oldp+558,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data),32);
    bufp->fullIData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data),32);
    bufp->fullIData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r),32);
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+568,((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data)))),33);
    bufp->fullQData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+572,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+576,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+577,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+578,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+579,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+580,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+581,((1U & ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                      >> 0x1fU) | ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                            >> 0x20U)) 
                                                   | (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                              >> 0x20U)))) 
                                    & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                         >> 0x1fU) 
                                        | ((~ (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                       >> 0x20U))) 
                                           | (~ (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                         >> 0x20U))))) 
                                       & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                              >> 0x1fU)) 
                                          | (((~ (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                          >> 0x20U))) 
                                              | (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                         >> 0x20U))) 
                                             & ((~ (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                            >> 0x20U))) 
                                                | (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                           >> 0x20U))))))) 
                                   ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag)))));
    bufp->fullIData(oldp+582,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data))) 
                                       >> (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data)))),32);
    bufp->fullCData(oldp+583,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+584,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+586,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+587,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+588,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+589,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                         >> 0x14U))))))),32);
    bufp->fullSData(oldp+590,(((0x1000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+591,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+592,(((0x100000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+593,(((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_t),32);
    bufp->fullIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_t),32);
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__flush_inst));
    bufp->fullIData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize),32);
    bufp->fullIData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+642,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+648,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+649,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+650,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+655,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullIData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),32);
    bufp->fullIData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state),4);
    bufp->fullCData(oldp+664,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)),5);
    bufp->fullBit(oldp+665,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullBit(oldp+666,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+667,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))))),4);
    bufp->fullBit(oldp+668,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+707,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+708,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+709,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+710,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+711,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+712,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+713,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullQData(oldp+714,((((QData)((IData)(((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->fullCData(oldp+716,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullQData(oldp+717,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))
                                 : 0ULL) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                              : 0ULL) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                          ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x38U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7))))) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                            ? 
                                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                             ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x30U))
                                                                             : 0U)
                                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                               ? 
                                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x28U))
                                                                                : 0U)
                                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5))))) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x20U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x18U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                                                << 0x18U) 
                                                                               | ((0xff0000U 
                                                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x10U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(vlSelf->__VdfgTmp_hf134a362__0)
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))))))))
                                                : 0ULL)))),64);
    bufp->fullBit(oldp+719,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)))));
    bufp->fullBit(oldp+720,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+721,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+723,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+724,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+725,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+726,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+727,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+730,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+731,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+732,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+733,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+735,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+736,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+738,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+740,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+741,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+742,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+743,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+744,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+745,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+746,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+747,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+748,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+749,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+750,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+751,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+752,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+753,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullIData(oldp+754,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                         ? ((0x4000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                             ? ((0x2000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                 ? 0U
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))
                                             : ((0x2000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                                   ? (IData)(vlSelf->__VdfgTmp_hfe507537__0)
                                                   : 0U))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hfe507537__0 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                  : 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hfe507537__0 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                         : 0U))),32);
    bufp->fullBit(oldp+755,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i))));
    bufp->fullIData(oldp+756,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_hfe507537__0)
                                : 0U)),32);
    bufp->fullBit(oldp+757,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i))));
    bufp->fullBit(oldp+758,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                              : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen)))));
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+761,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+762,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+766,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+767,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+768,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+769,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+775,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+776,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullCData(oldp+778,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+779,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullSData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullBit(oldp+792,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+793,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+794,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+795,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+796,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+797,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+798,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+801,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+803,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+804,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+806,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullSData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullSData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+815,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+837,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+838,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+839,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+840,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+841,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+843,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+845,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+846,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+856,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+857,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+859,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullIData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullCData(oldp+864,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h299493e7__0)
                                ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+866,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullIData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+871,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+872,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+876,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+885,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+886,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+889,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+890,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+895,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+896,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+897,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+898,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+899,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_last_i));
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i));
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+957,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+958,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+959,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+960,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+961,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+962,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+963,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+964,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+965,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+966,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+967,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+968,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+969,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+970,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+971,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+972,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+973,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+974,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+975,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+977,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+979,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+980,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+982,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+983,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+984,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+985,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+986,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+987,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+988,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stall));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_ready_i));
    bufp->fullIData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst),32);
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_last_i));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen));
    bufp->fullIData(oldp+994,((IData)(vlSelf->__VdfgTmp_hfe507537__0)),32);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1008,(vlSelf->clock));
    bufp->fullBit(oldp+1009,(vlSelf->reset));
    bufp->fullSData(oldp+1010,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1011,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1012,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1013,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1014,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1015,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1016,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1017,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1018,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1019,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1020,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1021,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1022,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1023,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1024,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1025,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1026,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1027,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1028,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1029,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1030,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1032,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__din),16);
    bufp->fullBit(oldp+1034,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+1035,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1036,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                     : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                         : 0U)))));
    bufp->fullIData(oldp+1037,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o
                                 : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                     ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                                         << 0x18U) 
                                        | ((0xff0000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                                               << 8U)) 
                                           | ((0xff00U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                                                  >> 8U)) 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                                                 >> 0x18U))))
                                     : 0U))),32);
    bufp->fullCData(oldp+1038,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                         << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1040,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r
                                 : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                         ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                                  ? 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                                 [(0xfffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                                  : 0U))
                                     : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 0U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                                      ? (IData)(vlSelf->__VdfgTmp_hfe507537__0)
                                                      : 0U))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    (((- (IData)(
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hfe507537__0 
                                                                             >> 0xfU))))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                     : 
                                                    (((- (IData)(
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hfe507537__0 
                                                                             >> 7U))))) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                                  : 0U))))),32);
    bufp->fullIData(oldp+1041,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                         [(0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                          : 0U))),32);
    bufp->fullBit(oldp+1042,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1043,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                 ? 0xeU : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? 0xbU : 
                                           (0xfU & 
                                            ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x14U)
                                              : ((3U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0x10U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0xcU)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 8U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 4U)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                      : 0U)))))))))),4);
    bufp->fullBit(oldp+1044,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1047,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1050,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1053,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1055,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h6b154942__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1060,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1061,(1U),3);
    bufp->fullBit(oldp+1062,(0U));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1072,(0U),4);
    bufp->fullCData(oldp+1073,(0U),8);
    bufp->fullCData(oldp+1074,(1U),2);
    bufp->fullBit(oldp+1075,(1U));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1077,(0U),32);
    bufp->fullCData(oldp+1078,(0U),3);
    bufp->fullCData(oldp+1079,(0U),2);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullQData(oldp+1081,(0ULL),64);
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullQData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),64);
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_result_t),32);
    bufp->fullCData(oldp+1095,(2U),2);
    bufp->fullCData(oldp+1096,(2U),3);
    bufp->fullCData(oldp+1097,(3U),3);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_cnt),8);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+1101,(0U),5);
    bufp->fullIData(oldp+1102,(0xdU),32);
    bufp->fullIData(oldp+1103,(0xcU),32);
    bufp->fullIData(oldp+1104,(0x15U),32);
    bufp->fullIData(oldp+1105,(0x20U),32);
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst_t),32);
    bufp->fullCData(oldp+1107,(0x35U),8);
    bufp->fullCData(oldp+1108,(4U),3);
    bufp->fullBit(oldp+1109,(0U));
    bufp->fullBit(oldp+1110,(1U));
    bufp->fullCData(oldp+1111,(0x15U),8);
    bufp->fullCData(oldp+1112,(0xebU),8);
    bufp->fullCData(oldp+1113,(0x38U),8);
    bufp->fullIData(oldp+1114,(0x64U),32);
    bufp->fullIData(oldp+1115,(0x18U),32);
    bufp->fullIData(oldp+1116,(9U),32);
    bufp->fullIData(oldp+1117,(2U),32);
    bufp->fullIData(oldp+1118,(4U),32);
    bufp->fullIData(oldp+1119,(0x2000U),32);
    bufp->fullIData(oldp+1120,(0x2710U),32);
    bufp->fullIData(oldp+1121,(0x30cU),32);
    bufp->fullCData(oldp+1122,(7U),4);
    bufp->fullCData(oldp+1123,(3U),4);
    bufp->fullCData(oldp+1124,(5U),4);
    bufp->fullCData(oldp+1125,(4U),4);
    bufp->fullCData(oldp+1126,(6U),4);
    bufp->fullCData(oldp+1127,(2U),4);
    bufp->fullCData(oldp+1128,(1U),4);
    bufp->fullSData(oldp+1129,(0x21U),13);
    bufp->fullCData(oldp+1130,(8U),4);
    bufp->fullCData(oldp+1131,(9U),4);
    bufp->fullIData(oldp+1132,(0xaU),32);
    bufp->fullIData(oldp+1133,(0x10U),32);
    bufp->fullIData(oldp+1134,(6U),32);
    bufp->fullIData(oldp+1135,(0x11U),32);
    bufp->fullIData(oldp+1136,(0x30000000U),32);
    bufp->fullIData(oldp+1137,(0x3fffffffU),32);
    bufp->fullIData(oldp+1138,(8U),32);
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+1140,(1U),32);
    bufp->fullCData(oldp+1141,(0xaU),4);
    bufp->fullIData(oldp+1142,(0xbU),32);
    bufp->fullIData(oldp+1143,(5U),32);
    bufp->fullCData(oldp+1144,(5U),3);
    bufp->fullIData(oldp+1145,(3U),32);
    bufp->fullCData(oldp+1146,(7U),3);
    bufp->fullCData(oldp+1147,(6U),3);
    bufp->fullIData(oldp+1148,(0x400000U),32);
}
