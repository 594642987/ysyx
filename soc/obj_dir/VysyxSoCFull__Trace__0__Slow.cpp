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
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBus(c+1274,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1275,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1276,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1277,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1278,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1279,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1280,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1281,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1282,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1283,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1284,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1285,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1286,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1287,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1288,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1289,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1290,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1291,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1292,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1293,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBus(c+1274,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1275,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1276,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1277,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1278,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1279,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1280,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1281,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1282,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1283,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1284,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1285,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1286,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1287,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1288,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1289,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1290,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1291,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1292,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1293,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1055,"spi_sck", false,-1);
    tracep->declBus(c+1056,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+719,"spi_mosi", false,-1);
    tracep->declBit(c+1294,"spi_miso", false,-1);
    tracep->declBit(c+1292,"uart_rx", false,-1);
    tracep->declBit(c+1293,"uart_tx", false,-1);
    tracep->declBit(c+1157,"psram_sck", false,-1);
    tracep->declBit(c+1158,"psram_ce_n", false,-1);
    tracep->declBus(c+1295,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1296,"sdram_clk", false,-1);
    tracep->declBit(c+1057,"sdram_cke", false,-1);
    tracep->declBit(c+1058,"sdram_cs", false,-1);
    tracep->declBit(c+1059,"sdram_ras", false,-1);
    tracep->declBit(c+1060,"sdram_cas", false,-1);
    tracep->declBit(c+1061,"sdram_we", false,-1);
    tracep->declBus(c+1159,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1062,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1063,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1113,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1274,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1275,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1276,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1277,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1278,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1279,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1280,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1281,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1282,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1283,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1284,"ps2_clk", false,-1);
    tracep->declBit(c+1285,"ps2_data", false,-1);
    tracep->declBus(c+1286,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1287,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1288,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1289,"vga_hsync", false,-1);
    tracep->declBit(c+1290,"vga_vsync", false,-1);
    tracep->declBit(c+1291,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBus(c+1121,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1011,"in_psel", false,-1);
    tracep->declBit(c+1012,"in_penable", false,-1);
    tracep->declBus(c+1353,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1013,"in_pwrite", false,-1);
    tracep->declBus(c+1014,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1160,"in_pready", false,-1);
    tracep->declBus(c+1161,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1122,"in_pslverr", false,-1);
    tracep->declBus(c+1121,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1011,"out_psel", false,-1);
    tracep->declBit(c+1012,"out_penable", false,-1);
    tracep->declBus(c+1353,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1013,"out_pwrite", false,-1);
    tracep->declBus(c+1014,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1160,"out_pready", false,-1);
    tracep->declBus(c+1161,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1122,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1011,"auto_in_psel", false,-1);
    tracep->declBit(c+1012,"auto_in_penable", false,-1);
    tracep->declBit(c+1013,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1121,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1353,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1160,"auto_in_pready", false,-1);
    tracep->declBit(c+1122,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1161,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1043,"auto_out_6_psel", false,-1);
    tracep->declBit(c+1044,"auto_out_6_penable", false,-1);
    tracep->declBit(c+1013,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+1121,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1353,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+720,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1354,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+721,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1045,"auto_out_5_psel", false,-1);
    tracep->declBit(c+1046,"auto_out_5_penable", false,-1);
    tracep->declBit(c+1013,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+1123,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1353,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1355,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1356,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1357,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1047,"auto_out_4_psel", false,-1);
    tracep->declBit(c+1048,"auto_out_4_penable", false,-1);
    tracep->declBit(c+1013,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+1124,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1353,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1358,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1359,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1360,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1049,"auto_out_3_psel", false,-1);
    tracep->declBit(c+1125,"auto_out_3_penable", false,-1);
    tracep->declBit(c+1013,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+1124,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1353,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+722,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1354,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1297,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1126,"auto_out_2_psel", false,-1);
    tracep->declBit(c+1050,"auto_out_2_penable", false,-1);
    tracep->declBit(c+1013,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+1121,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1353,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1298,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1354,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+139,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1127,"auto_out_1_psel", false,-1);
    tracep->declBit(c+1128,"auto_out_1_penable", false,-1);
    tracep->declBit(c+1013,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+1124,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1353,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1129,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1354,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+1299,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1130,"auto_out_0_psel", false,-1);
    tracep->declBit(c+1051,"auto_out_0_penable", false,-1);
    tracep->declBit(c+1013,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+1123,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1353,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1300,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1354,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+1301,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1131,"sel_0", false,-1);
    tracep->declBit(c+1132,"sel_1", false,-1);
    tracep->declBit(c+1133,"sel_2", false,-1);
    tracep->declBit(c+1134,"sel_3", false,-1);
    tracep->declBit(c+1135,"sel_4", false,-1);
    tracep->declBit(c+1136,"sel_5", false,-1);
    tracep->declBit(c+1137,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1016,"auto_in_awready", false,-1);
    tracep->declBit(c+140,"auto_in_awvalid", false,-1);
    tracep->declBus(c+141,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+142,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+143,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1016,"auto_in_wready", false,-1);
    tracep->declBit(c+144,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+145,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+147,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+1162,"auto_in_bready", false,-1);
    tracep->declBit(c+1163,"auto_in_bvalid", false,-1);
    tracep->declBus(c+148,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1138,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1017,"auto_in_arready", false,-1);
    tracep->declBit(c+149,"auto_in_arvalid", false,-1);
    tracep->declBus(c+150,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+152,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1164,"auto_in_rready", false,-1);
    tracep->declBit(c+1165,"auto_in_rvalid", false,-1);
    tracep->declBus(c+153,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+1302,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1138,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1011,"auto_out_psel", false,-1);
    tracep->declBit(c+1012,"auto_out_penable", false,-1);
    tracep->declBit(c+1013,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1121,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1014,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1160,"auto_out_pready", false,-1);
    tracep->declBit(c+1122,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1161,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1012,"nodeOut_penable", false,-1);
    tracep->declBus(c+1018,"state", false,-1, 1,0);
    tracep->declBit(c+1017,"accept_read", false,-1);
    tracep->declBit(c+1016,"accept_write", false,-1);
    tracep->declBit(c+154,"is_write_r", false,-1);
    tracep->declBit(c+1013,"is_write", false,-1);
    tracep->declBus(c+153,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+148,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+155,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+156,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+1019,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+157,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+1020,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+159,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+1022,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+1139,"resp", false,-1, 1,0);
    tracep->declBus(c+160,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1138,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1165,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+161,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1163,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+162,"auto_in_awready", false,-1);
    tracep->declBit(c+163,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1361,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+164,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+165,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+166,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+167,"auto_in_wready", false,-1);
    tracep->declBit(c+168,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+172,"auto_in_wlast", false,-1);
    tracep->declBit(c+173,"auto_in_bready", false,-1);
    tracep->declBit(c+1166,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1167,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+675,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+174,"auto_in_arready", false,-1);
    tracep->declBit(c+175,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1361,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+177,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+178,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+179,"auto_in_rready", false,-1);
    tracep->declBit(c+1168,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1169,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+1304,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1306,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+676,"auto_in_rlast", false,-1);
    tracep->declBit(c+1170,"auto_out_awready", false,-1);
    tracep->declBit(c+180,"auto_out_awvalid", false,-1);
    tracep->declBus(c+141,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+142,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+143,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+181,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1171,"auto_out_wready", false,-1);
    tracep->declBit(c+182,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+145,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+147,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+183,"auto_out_wlast", false,-1);
    tracep->declBit(c+1172,"auto_out_bready", false,-1);
    tracep->declBit(c+1173,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1167,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1174,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1175,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1176,"auto_out_arready", false,-1);
    tracep->declBit(c+184,"auto_out_arvalid", false,-1);
    tracep->declBus(c+150,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+152,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+185,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+179,"auto_out_rready", false,-1);
    tracep->declBit(c+1168,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1169,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+1304,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1306,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+677,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1177,"auto_out_rlast", false,-1);
    tracep->declBit(c+182,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+186,"w_idle", false,-1);
    tracep->declBit(c+1178,"in_awready", false,-1);
    tracep->declBit(c+187,"busy", false,-1);
    tracep->declBus(c+188,"r_addr", false,-1, 31,0);
    tracep->declBus(c+189,"r_len", false,-1, 7,0);
    tracep->declBus(c+190,"len", false,-1, 7,0);
    tracep->declBus(c+191,"addr", false,-1, 31,0);
    tracep->declBit(c+192,"busy_1", false,-1);
    tracep->declBus(c+193,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+194,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+195,"len_1", false,-1, 7,0);
    tracep->declBus(c+196,"addr_1", false,-1, 31,0);
    tracep->declBit(c+197,"wbeats_latched", false,-1);
    tracep->declBit(c+180,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+198,"wbeats_valid", false,-1);
    tracep->declBus(c+199,"w_counter", false,-1, 8,0);
    tracep->declBus(c+200,"w_todo", false,-1, 8,0);
    tracep->declBit(c+183,"w_last", false,-1);
    tracep->declBit(c+1172,"nodeOut_bready", false,-1);
    tracep->declBus(c+201,"error_0", false,-1, 1,0);
    tracep->declBus(c+202,"error_1", false,-1, 1,0);
    tracep->declBus(c+203,"error_2", false,-1, 1,0);
    tracep->declBus(c+204,"error_3", false,-1, 1,0);
    tracep->declBus(c+205,"error_4", false,-1, 1,0);
    tracep->declBus(c+206,"error_5", false,-1, 1,0);
    tracep->declBus(c+207,"error_6", false,-1, 1,0);
    tracep->declBus(c+208,"error_7", false,-1, 1,0);
    tracep->declBus(c+209,"error_8", false,-1, 1,0);
    tracep->declBus(c+210,"error_9", false,-1, 1,0);
    tracep->declBus(c+211,"error_10", false,-1, 1,0);
    tracep->declBus(c+212,"error_11", false,-1, 1,0);
    tracep->declBus(c+213,"error_12", false,-1, 1,0);
    tracep->declBus(c+214,"error_13", false,-1, 1,0);
    tracep->declBus(c+215,"error_14", false,-1, 1,0);
    tracep->declBus(c+216,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+174,"io_enq_ready", false,-1);
    tracep->declBit(c+175,"io_enq_valid", false,-1);
    tracep->declBus(c+1361,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+176,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1362,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+177,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+178,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1179,"io_deq_ready", false,-1);
    tracep->declBit(c+184,"io_deq_valid", false,-1);
    tracep->declBus(c+150,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+217,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+218,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+152,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+219,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+220,"ram", false,-1, 48,0);
    tracep->declBit(c+222,"full", false,-1);
    tracep->declBit(c+184,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1180,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+162,"io_enq_ready", false,-1);
    tracep->declBit(c+163,"io_enq_valid", false,-1);
    tracep->declBus(c+1361,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+164,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1362,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+165,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+166,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1181,"io_deq_ready", false,-1);
    tracep->declBit(c+223,"io_deq_valid", false,-1);
    tracep->declBus(c+141,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+224,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+225,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+143,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+226,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+227,"ram", false,-1, 48,0);
    tracep->declBit(c+229,"full", false,-1);
    tracep->declBit(c+223,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1182,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+167,"io_enq_ready", false,-1);
    tracep->declBit(c+168,"io_enq_valid", false,-1);
    tracep->declQuad(c+169,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+171,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+172,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1183,"io_deq_ready", false,-1);
    tracep->declBit(c+230,"io_deq_valid", false,-1);
    tracep->declQuad(c+145,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+147,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+231,"io_deq_bits_last", false,-1);
    tracep->declArray(c+232,"ram", false,-1, 72,0);
    tracep->declBit(c+235,"full", false,-1);
    tracep->declBit(c+230,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1184,"do_enq", false,-1);
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
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1185,"auto_in_awready", false,-1);
    tracep->declBit(c+236,"auto_in_awvalid", false,-1);
    tracep->declBus(c+141,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+237,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+678,"auto_in_wready", false,-1);
    tracep->declBit(c+238,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+145,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+147,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+1186,"auto_in_bready", false,-1);
    tracep->declBit(c+239,"auto_in_bvalid", false,-1);
    tracep->declBus(c+240,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+241,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1187,"auto_in_arready", false,-1);
    tracep->declBit(c+242,"auto_in_arvalid", false,-1);
    tracep->declBus(c+150,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+243,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1188,"auto_in_rready", false,-1);
    tracep->declBit(c+244,"auto_in_rvalid", false,-1);
    tracep->declBus(c+245,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+246,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+248,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1187,"nodeIn_arready", false,-1);
    tracep->declBit(c+1185,"nodeIn_awready", false,-1);
    tracep->declBit(c+249,"w_sel0", false,-1);
    tracep->declBit(c+239,"w_full", false,-1);
    tracep->declBus(c+240,"w_id", false,-1, 3,0);
    tracep->declBit(c+250,"r_sel1", false,-1);
    tracep->declBit(c+251,"w_sel1", false,-1);
    tracep->declBit(c+244,"r_full", false,-1);
    tracep->declBus(c+245,"r_id", false,-1, 3,0);
    tracep->declBit(c+1189,"ren", false,-1);
    tracep->declBit(c+252,"rdata_REG", false,-1);
    tracep->declBus(c+253,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+254,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+255,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+256,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+257,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+258,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+259,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+260,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+261,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+1189,"R0_en", false,-1);
    tracep->declBit(c+1272,"R0_clk", false,-1);
    tracep->declQuad(c+262,"R0_data", false,-1, 63,0);
    tracep->declBus(c+264,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+1190,"W0_en", false,-1);
    tracep->declBit(c+1272,"W0_clk", false,-1);
    tracep->declQuad(c+145,"W0_data", false,-1, 63,0);
    tracep->declBus(c+147,"W0_mask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+162,"auto_in_awready", false,-1);
    tracep->declBit(c+163,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1361,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+164,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+165,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+166,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+167,"auto_in_wready", false,-1);
    tracep->declBit(c+168,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+172,"auto_in_wlast", false,-1);
    tracep->declBit(c+173,"auto_in_bready", false,-1);
    tracep->declBit(c+1166,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1167,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+675,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+174,"auto_in_arready", false,-1);
    tracep->declBit(c+175,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1361,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+177,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+178,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+179,"auto_in_rready", false,-1);
    tracep->declBit(c+1168,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1169,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+1304,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1306,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+676,"auto_in_rlast", false,-1);
    tracep->declBit(c+162,"auto_out_awready", false,-1);
    tracep->declBit(c+163,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1361,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+164,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+165,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+166,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+167,"auto_out_wready", false,-1);
    tracep->declBit(c+168,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+172,"auto_out_wlast", false,-1);
    tracep->declBit(c+173,"auto_out_bready", false,-1);
    tracep->declBit(c+1166,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1167,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+675,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+174,"auto_out_arready", false,-1);
    tracep->declBit(c+175,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1361,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+177,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+178,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+179,"auto_out_rready", false,-1);
    tracep->declBit(c+1168,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1169,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+1304,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1306,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+676,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1191,"auto_in_awready", false,-1);
    tracep->declBit(c+265,"auto_in_awvalid", false,-1);
    tracep->declBus(c+141,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+142,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+143,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1171,"auto_in_wready", false,-1);
    tracep->declBit(c+182,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+145,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+147,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+183,"auto_in_wlast", false,-1);
    tracep->declBit(c+1172,"auto_in_bready", false,-1);
    tracep->declBit(c+1173,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1167,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1174,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1192,"auto_in_arready", false,-1);
    tracep->declBit(c+266,"auto_in_arvalid", false,-1);
    tracep->declBus(c+150,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+152,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+179,"auto_in_rready", false,-1);
    tracep->declBit(c+1168,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1169,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+1304,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1306,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1177,"auto_in_rlast", false,-1);
    tracep->declBit(c+1185,"auto_out_2_awready", false,-1);
    tracep->declBit(c+236,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+141,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+237,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+678,"auto_out_2_wready", false,-1);
    tracep->declBit(c+238,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+145,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+147,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+1186,"auto_out_2_bready", false,-1);
    tracep->declBit(c+239,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+240,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+241,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1187,"auto_out_2_arready", false,-1);
    tracep->declBit(c+242,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+150,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+243,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1188,"auto_out_2_rready", false,-1);
    tracep->declBit(c+244,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+245,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+246,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+248,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+267,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+268,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+269,"auto_out_1_arready", false,-1);
    tracep->declBit(c+270,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+150,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+152,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+679,"auto_out_1_rready", false,-1);
    tracep->declBit(c+272,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+273,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+274,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+1016,"auto_out_0_awready", false,-1);
    tracep->declBit(c+140,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+141,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+142,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+143,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1016,"auto_out_0_wready", false,-1);
    tracep->declBit(c+144,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+145,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+147,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+1162,"auto_out_0_bready", false,-1);
    tracep->declBit(c+1163,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+148,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1138,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1017,"auto_out_0_arready", false,-1);
    tracep->declBit(c+149,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+150,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+152,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1164,"auto_out_0_rready", false,-1);
    tracep->declBit(c+1165,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+153,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+1302,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+1138,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1173,"in_0_bvalid", false,-1);
    tracep->declBit(c+1168,"in_0_rvalid", false,-1);
    tracep->declBit(c+1191,"nodeIn_awready", false,-1);
    tracep->declBit(c+276,"requestARIO_0_0", false,-1);
    tracep->declBit(c+277,"requestARIO_0_1", false,-1);
    tracep->declBit(c+278,"requestARIO_0_2", false,-1);
    tracep->declBit(c+279,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+280,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+281,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+282,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+283,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+284,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+285,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+286,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+287,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+288,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+289,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+290,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+291,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+292,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+293,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+294,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+295,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+296,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+297,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+298,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+299,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+300,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+301,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+302,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+303,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+304,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+305,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+306,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+307,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+308,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+309,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+310,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+311,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+312,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+313,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+314,"latched", false,-1);
    tracep->declBit(c+315,"in_0_awvalid", false,-1);
    tracep->declBit(c+316,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+317,"in_0_wvalid", false,-1);
    tracep->declBit(c+318,"idle_3", false,-1);
    tracep->declBit(c+1193,"anyValid", false,-1);
    tracep->declBus(c+1194,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+319,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1195,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1196,"prefixOR_1", false,-1);
    tracep->declBit(c+1197,"winner_3_1", false,-1);
    tracep->declBit(c+1198,"winner_3_2", false,-1);
    tracep->declBit(c+320,"state_3_0", false,-1);
    tracep->declBit(c+321,"state_3_1", false,-1);
    tracep->declBit(c+322,"state_3_2", false,-1);
    tracep->declBit(c+1199,"muxState_3_0", false,-1);
    tracep->declBit(c+1200,"muxState_3_1", false,-1);
    tracep->declBit(c+1201,"muxState_3_2", false,-1);
    tracep->declBit(c+323,"idle_4", false,-1);
    tracep->declBit(c+1202,"anyValid_1", false,-1);
    tracep->declBus(c+1203,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+324,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1204,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1205,"winner_4_0", false,-1);
    tracep->declBit(c+1206,"winner_4_2", false,-1);
    tracep->declBit(c+325,"state_4_0", false,-1);
    tracep->declBit(c+326,"state_4_2", false,-1);
    tracep->declBit(c+1207,"muxState_4_0", false,-1);
    tracep->declBit(c+1208,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+327,"io_enq_ready", false,-1);
    tracep->declBit(c+316,"io_enq_valid", false,-1);
    tracep->declBus(c+328,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1209,"io_deq_ready", false,-1);
    tracep->declBit(c+329,"io_deq_valid", false,-1);
    tracep->declBus(c+330,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+331,"wrap", false,-1);
    tracep->declBit(c+332,"wrap_1", false,-1);
    tracep->declBit(c+333,"maybe_full", false,-1);
    tracep->declBit(c+334,"ptr_match", false,-1);
    tracep->declBit(c+335,"empty", false,-1);
    tracep->declBit(c+336,"full", false,-1);
    tracep->declBit(c+329,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1210,"do_deq", false,-1);
    tracep->declBit(c+1211,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+332,"R0_addr", false,-1);
    tracep->declBit(c+1363,"R0_en", false,-1);
    tracep->declBit(c+1272,"R0_clk", false,-1);
    tracep->declBus(c+337,"R0_data", false,-1, 2,0);
    tracep->declBit(c+331,"W0_addr", false,-1);
    tracep->declBit(c+1211,"W0_en", false,-1);
    tracep->declBit(c+1272,"W0_clk", false,-1);
    tracep->declBus(c+328,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+338+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1170,"auto_in_awready", false,-1);
    tracep->declBit(c+180,"auto_in_awvalid", false,-1);
    tracep->declBus(c+141,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+142,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+143,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+181,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1171,"auto_in_wready", false,-1);
    tracep->declBit(c+182,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+145,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+147,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+183,"auto_in_wlast", false,-1);
    tracep->declBit(c+1172,"auto_in_bready", false,-1);
    tracep->declBit(c+1173,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1167,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1174,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1175,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1176,"auto_in_arready", false,-1);
    tracep->declBit(c+184,"auto_in_arvalid", false,-1);
    tracep->declBus(c+150,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+152,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+185,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+179,"auto_in_rready", false,-1);
    tracep->declBit(c+1168,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1169,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+1304,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1306,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+677,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1177,"auto_in_rlast", false,-1);
    tracep->declBit(c+1191,"auto_out_awready", false,-1);
    tracep->declBit(c+265,"auto_out_awvalid", false,-1);
    tracep->declBus(c+141,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+142,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+143,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1171,"auto_out_wready", false,-1);
    tracep->declBit(c+182,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+145,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+147,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+183,"auto_out_wlast", false,-1);
    tracep->declBit(c+1172,"auto_out_bready", false,-1);
    tracep->declBit(c+1173,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1167,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1174,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1192,"auto_out_arready", false,-1);
    tracep->declBit(c+266,"auto_out_arvalid", false,-1);
    tracep->declBus(c+150,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+152,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+179,"auto_out_rready", false,-1);
    tracep->declBit(c+1168,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1169,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+1304,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1306,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1177,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+340,"io_enq_ready", false,-1);
    tracep->declBit(c+680,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1212,"io_deq_ready", false,-1);
    tracep->declBit(c+341,"io_deq_valid", false,-1);
    tracep->declBit(c+342,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+342,"ram_real_last", false,-1);
    tracep->declBit(c+341,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+343,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+344,"io_enq_ready", false,-1);
    tracep->declBit(c+681,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1213,"io_deq_ready", false,-1);
    tracep->declBit(c+345,"io_deq_valid", false,-1);
    tracep->declBit(c+346,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+346,"ram_real_last", false,-1);
    tracep->declBit(c+345,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+347,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+348,"io_enq_ready", false,-1);
    tracep->declBit(c+682,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1214,"io_deq_ready", false,-1);
    tracep->declBit(c+349,"io_deq_valid", false,-1);
    tracep->declBit(c+350,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+350,"ram_real_last", false,-1);
    tracep->declBit(c+349,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+351,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+352,"io_enq_ready", false,-1);
    tracep->declBit(c+683,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1215,"io_deq_ready", false,-1);
    tracep->declBit(c+353,"io_deq_valid", false,-1);
    tracep->declBit(c+354,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+354,"ram_real_last", false,-1);
    tracep->declBit(c+353,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+355,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+356,"io_enq_ready", false,-1);
    tracep->declBit(c+684,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1216,"io_deq_ready", false,-1);
    tracep->declBit(c+357,"io_deq_valid", false,-1);
    tracep->declBit(c+358,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+358,"ram_real_last", false,-1);
    tracep->declBit(c+357,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+359,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+360,"io_enq_ready", false,-1);
    tracep->declBit(c+685,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1217,"io_deq_ready", false,-1);
    tracep->declBit(c+361,"io_deq_valid", false,-1);
    tracep->declBit(c+362,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+362,"ram_real_last", false,-1);
    tracep->declBit(c+361,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+363,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+364,"io_enq_ready", false,-1);
    tracep->declBit(c+686,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1218,"io_deq_ready", false,-1);
    tracep->declBit(c+365,"io_deq_valid", false,-1);
    tracep->declBit(c+366,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+366,"ram_real_last", false,-1);
    tracep->declBit(c+365,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+367,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+368,"io_enq_ready", false,-1);
    tracep->declBit(c+687,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1219,"io_deq_ready", false,-1);
    tracep->declBit(c+369,"io_deq_valid", false,-1);
    tracep->declBit(c+370,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+370,"ram_real_last", false,-1);
    tracep->declBit(c+369,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+371,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+372,"io_enq_ready", false,-1);
    tracep->declBit(c+688,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1220,"io_deq_ready", false,-1);
    tracep->declBit(c+373,"io_deq_valid", false,-1);
    tracep->declBit(c+374,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+374,"ram_real_last", false,-1);
    tracep->declBit(c+373,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+375,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+689,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1221,"io_deq_ready", false,-1);
    tracep->declBit(c+377,"io_deq_valid", false,-1);
    tracep->declBit(c+378,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+378,"ram_real_last", false,-1);
    tracep->declBit(c+377,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+379,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+380,"io_enq_ready", false,-1);
    tracep->declBit(c+690,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1222,"io_deq_ready", false,-1);
    tracep->declBit(c+381,"io_deq_valid", false,-1);
    tracep->declBit(c+382,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+382,"ram_real_last", false,-1);
    tracep->declBit(c+381,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+383,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+384,"io_enq_ready", false,-1);
    tracep->declBit(c+691,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1223,"io_deq_ready", false,-1);
    tracep->declBit(c+385,"io_deq_valid", false,-1);
    tracep->declBit(c+386,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+386,"ram_real_last", false,-1);
    tracep->declBit(c+385,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+387,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+388,"io_enq_ready", false,-1);
    tracep->declBit(c+692,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1224,"io_deq_ready", false,-1);
    tracep->declBit(c+389,"io_deq_valid", false,-1);
    tracep->declBit(c+390,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+390,"ram_real_last", false,-1);
    tracep->declBit(c+389,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+391,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+392,"io_enq_ready", false,-1);
    tracep->declBit(c+693,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1225,"io_deq_ready", false,-1);
    tracep->declBit(c+393,"io_deq_valid", false,-1);
    tracep->declBit(c+394,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+394,"ram_real_last", false,-1);
    tracep->declBit(c+393,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+395,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+396,"io_enq_ready", false,-1);
    tracep->declBit(c+694,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1226,"io_deq_ready", false,-1);
    tracep->declBit(c+397,"io_deq_valid", false,-1);
    tracep->declBit(c+398,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+398,"ram_real_last", false,-1);
    tracep->declBit(c+397,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+399,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+400,"io_enq_ready", false,-1);
    tracep->declBit(c+695,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1227,"io_deq_ready", false,-1);
    tracep->declBit(c+401,"io_deq_valid", false,-1);
    tracep->declBit(c+402,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+402,"ram_real_last", false,-1);
    tracep->declBit(c+401,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+403,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+404,"io_enq_ready", false,-1);
    tracep->declBit(c+696,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1228,"io_deq_ready", false,-1);
    tracep->declBit(c+405,"io_deq_valid", false,-1);
    tracep->declBit(c+406,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+406,"ram_real_last", false,-1);
    tracep->declBit(c+405,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+407,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+408,"io_enq_ready", false,-1);
    tracep->declBit(c+697,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1229,"io_deq_ready", false,-1);
    tracep->declBit(c+409,"io_deq_valid", false,-1);
    tracep->declBit(c+410,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+410,"ram_real_last", false,-1);
    tracep->declBit(c+409,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+411,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+412,"io_enq_ready", false,-1);
    tracep->declBit(c+698,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1230,"io_deq_ready", false,-1);
    tracep->declBit(c+413,"io_deq_valid", false,-1);
    tracep->declBit(c+414,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+414,"ram_real_last", false,-1);
    tracep->declBit(c+413,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+415,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+416,"io_enq_ready", false,-1);
    tracep->declBit(c+699,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1231,"io_deq_ready", false,-1);
    tracep->declBit(c+417,"io_deq_valid", false,-1);
    tracep->declBit(c+418,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+418,"ram_real_last", false,-1);
    tracep->declBit(c+417,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+419,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+420,"io_enq_ready", false,-1);
    tracep->declBit(c+700,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1232,"io_deq_ready", false,-1);
    tracep->declBit(c+421,"io_deq_valid", false,-1);
    tracep->declBit(c+422,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+422,"ram_real_last", false,-1);
    tracep->declBit(c+421,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+423,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+424,"io_enq_ready", false,-1);
    tracep->declBit(c+701,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1233,"io_deq_ready", false,-1);
    tracep->declBit(c+425,"io_deq_valid", false,-1);
    tracep->declBit(c+426,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+426,"ram_real_last", false,-1);
    tracep->declBit(c+425,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+427,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+428,"io_enq_ready", false,-1);
    tracep->declBit(c+702,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1234,"io_deq_ready", false,-1);
    tracep->declBit(c+429,"io_deq_valid", false,-1);
    tracep->declBit(c+430,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+430,"ram_real_last", false,-1);
    tracep->declBit(c+429,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+431,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+432,"io_enq_ready", false,-1);
    tracep->declBit(c+703,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1235,"io_deq_ready", false,-1);
    tracep->declBit(c+433,"io_deq_valid", false,-1);
    tracep->declBit(c+434,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+434,"ram_real_last", false,-1);
    tracep->declBit(c+433,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+435,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+436,"io_enq_ready", false,-1);
    tracep->declBit(c+704,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1236,"io_deq_ready", false,-1);
    tracep->declBit(c+437,"io_deq_valid", false,-1);
    tracep->declBit(c+438,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+438,"ram_real_last", false,-1);
    tracep->declBit(c+437,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+439,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+440,"io_enq_ready", false,-1);
    tracep->declBit(c+705,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1237,"io_deq_ready", false,-1);
    tracep->declBit(c+441,"io_deq_valid", false,-1);
    tracep->declBit(c+442,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+442,"ram_real_last", false,-1);
    tracep->declBit(c+441,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+443,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+444,"io_enq_ready", false,-1);
    tracep->declBit(c+706,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1238,"io_deq_ready", false,-1);
    tracep->declBit(c+445,"io_deq_valid", false,-1);
    tracep->declBit(c+446,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+446,"ram_real_last", false,-1);
    tracep->declBit(c+445,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+447,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+448,"io_enq_ready", false,-1);
    tracep->declBit(c+707,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1239,"io_deq_ready", false,-1);
    tracep->declBit(c+449,"io_deq_valid", false,-1);
    tracep->declBit(c+450,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+450,"ram_real_last", false,-1);
    tracep->declBit(c+449,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+451,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+452,"io_enq_ready", false,-1);
    tracep->declBit(c+708,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1240,"io_deq_ready", false,-1);
    tracep->declBit(c+453,"io_deq_valid", false,-1);
    tracep->declBit(c+454,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+454,"ram_real_last", false,-1);
    tracep->declBit(c+453,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+455,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+456,"io_enq_ready", false,-1);
    tracep->declBit(c+709,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1241,"io_deq_ready", false,-1);
    tracep->declBit(c+457,"io_deq_valid", false,-1);
    tracep->declBit(c+458,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+458,"ram_real_last", false,-1);
    tracep->declBit(c+457,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+459,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+460,"io_enq_ready", false,-1);
    tracep->declBit(c+710,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1242,"io_deq_ready", false,-1);
    tracep->declBit(c+461,"io_deq_valid", false,-1);
    tracep->declBit(c+462,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+462,"ram_real_last", false,-1);
    tracep->declBit(c+461,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+463,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+464,"io_enq_ready", false,-1);
    tracep->declBit(c+711,"io_enq_valid", false,-1);
    tracep->declBit(c+185,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1243,"io_deq_ready", false,-1);
    tracep->declBit(c+465,"io_deq_valid", false,-1);
    tracep->declBit(c+466,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+466,"ram_real_last", false,-1);
    tracep->declBit(c+465,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+467,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1307,"reset", false,-1);
    tracep->declBit(c+162,"auto_master_out_awready", false,-1);
    tracep->declBit(c+163,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1361,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+164,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+165,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+166,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+167,"auto_master_out_wready", false,-1);
    tracep->declBit(c+168,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+172,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+173,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1166,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1167,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+675,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+174,"auto_master_out_arready", false,-1);
    tracep->declBit(c+175,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1361,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+177,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+178,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+179,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1168,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1169,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+1304,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1306,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+676,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1307,"reset", false,-1);
    tracep->declBit(c+1354,"io_interrupt", false,-1);
    tracep->declBit(c+162,"io_master_awready", false,-1);
    tracep->declBit(c+163,"io_master_awvalid", false,-1);
    tracep->declBus(c+164,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1361,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1362,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+165,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+166,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+167,"io_master_wready", false,-1);
    tracep->declBit(c+168,"io_master_wvalid", false,-1);
    tracep->declQuad(c+169,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+172,"io_master_wlast", false,-1);
    tracep->declBit(c+173,"io_master_bready", false,-1);
    tracep->declBit(c+1166,"io_master_bvalid", false,-1);
    tracep->declBus(c+675,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1167,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+174,"io_master_arready", false,-1);
    tracep->declBit(c+175,"io_master_arvalid", false,-1);
    tracep->declBus(c+176,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1361,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1362,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+177,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+178,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+179,"io_master_rready", false,-1);
    tracep->declBit(c+1168,"io_master_rvalid", false,-1);
    tracep->declBus(c+1306,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+1304,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+676,"io_master_rlast", false,-1);
    tracep->declBus(c+1169,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1364,"io_slave_awready", false,-1);
    tracep->declBit(c+1354,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1365,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1361,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1362,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1366,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1367,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1368,"io_slave_wready", false,-1);
    tracep->declBit(c+1354,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+1369,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+1362,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+1354,"io_slave_wlast", false,-1);
    tracep->declBit(c+1354,"io_slave_bready", false,-1);
    tracep->declBit(c+1371,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1372,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1373,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1374,"io_slave_arready", false,-1);
    tracep->declBit(c+1354,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1365,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1361,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1362,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1366,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1367,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1354,"io_slave_rready", false,-1);
    tracep->declBit(c+1375,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1376,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1377,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1379,"io_slave_rlast", false,-1);
    tracep->declBus(c+1380,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+468,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+469,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+1381,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+470,"ifu_stall", false,-1);
    tracep->declBus(c+471,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+472,"jump_pc_valid", false,-1);
    tracep->declBit(c+1244,"stall", false,-1);
    tracep->declBit(c+473,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+474,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+1245,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+1246,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1362,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+1247,"ifu_r_last_i", false,-1);
    tracep->declBit(c+475,"idu_branch", false,-1);
    tracep->declBit(c+476,"idu_jal", false,-1);
    tracep->declBit(c+477,"idu_jalr", false,-1);
    tracep->declBus(c+478,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+479,"idu_rd_wen", false,-1);
    tracep->declBus(c+480,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+481,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+482,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+483,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+484,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+485,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+486,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+487,"src1", false,-1, 31,0);
    tracep->declBus(c+488,"src2", false,-1, 31,0);
    tracep->declBus(c+1308,"rd_data", false,-1, 31,0);
    tracep->declBit(c+489,"zero_flag", false,-1);
    tracep->declBus(c+490,"exu_result", false,-1, 31,0);
    tracep->declBus(c+1382,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+712,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+1244,"mem_stall", false,-1);
    tracep->declBit(c+1248,"lsu_rd_wen", false,-1);
    tracep->declBit(c+491,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+492,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+713,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+714,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+493,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1362,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+715,"lsu_r_last_i", false,-1);
    tracep->declBit(c+494,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+495,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+496,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+488,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+497,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1362,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+1249,"lsu_w_last_i", false,-1);
    tracep->declBit(c+716,"wbu_rd_wen", false,-1);
    tracep->declBit(c+498,"csr_ecall", false,-1);
    tracep->declBit(c+499,"csr_mret", false,-1);
    tracep->declBus(c+500,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+1309,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+501,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+502,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+503,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("axi_arbiter_u0 ");
    tracep->declBit(c+1272,"aclk", false,-1);
    tracep->declBit(c+1307,"areset_n", false,-1);
    tracep->declBit(c+473,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+474,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+1245,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+1246,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+1362,"ifu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+1247,"ifu_r_last_o", false,-1);
    tracep->declBit(c+491,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+492,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+713,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+714,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+493,"lsu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1362,"lsu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+715,"lsu_r_last_o", false,-1);
    tracep->declBit(c+494,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+495,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+496,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+488,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+497,"lsu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1362,"lsu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+1249,"lsu_w_last_o", false,-1);
    tracep->declBit(c+162,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+163,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+164,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1361,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1362,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+165,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+166,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+167,"axi_w_ready_i", false,-1);
    tracep->declBit(c+168,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+169,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+171,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+172,"axi_w_last_o", false,-1);
    tracep->declBit(c+173,"axi_b_ready_o", false,-1);
    tracep->declBit(c+1166,"axi_b_valid_i", false,-1);
    tracep->declBus(c+675,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+1167,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+174,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+175,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+176,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1361,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1362,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+177,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+178,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+179,"axi_r_ready_o", false,-1);
    tracep->declBit(c+1168,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1306,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+1304,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+676,"axi_r_last_i", false,-1);
    tracep->declBus(c+1169,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+504,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+505,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+1250,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+1251,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+506,"cpu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1362,"cpu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+1252,"cpu_r_last_i", false,-1);
    tracep->declBit(c+494,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+495,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+496,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+488,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+497,"cpu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1362,"cpu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+1249,"cpu_w_last_i", false,-1);
    tracep->declBus(c+507,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+1367,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+1383,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+1384,"ARB_LSU", false,-1, 1,0);
    tracep->declBit(c+508,"arb_axi_aw_ready_i", false,-1);
    tracep->declBit(c+509,"arb_axi_aw_valid_o", false,-1);
    tracep->declBus(c+495,"arb_axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1361,"arb_axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1362,"arb_axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+497,"arb_axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1383,"arb_axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+496,"arb_axi_w_ready_i", false,-1);
    tracep->declBit(c+510,"arb_axi_w_valid_o", false,-1);
    tracep->declQuad(c+511,"arb_axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+513,"arb_axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+514,"arb_axi_w_last_o", false,-1);
    tracep->declBit(c+515,"arb_axi_b_ready_o", false,-1);
    tracep->declBit(c+1249,"arb_axi_b_valid_i", false,-1);
    tracep->declBus(c+717,"arb_axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+1253,"arb_axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+516,"arb_axi_ar_ready_i", false,-1);
    tracep->declBit(c+517,"arb_axi_ar_valid_o", false,-1);
    tracep->declBus(c+505,"arb_axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1361,"arb_axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1362,"arb_axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+506,"arb_axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1383,"arb_axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+518,"arb_axi_r_ready_o", false,-1);
    tracep->declBit(c+1250,"arb_axi_r_valid_i", false,-1);
    tracep->declBus(c+1310,"arb_axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+1254,"arb_axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+1252,"arb_axi_r_last_i", false,-1);
    tracep->declBus(c+718,"arb_axi_r_id_i", false,-1, 3,0);
    tracep->pushNamePrefix("axi_u0 ");
    tracep->declBit(c+1272,"aclk", false,-1);
    tracep->declBit(c+1307,"areset_n", false,-1);
    tracep->declBit(c+504,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+505,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+1250,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+1251,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+506,"cpu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1362,"cpu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+1252,"cpu_r_last_o", false,-1);
    tracep->declBit(c+494,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+495,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+496,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+488,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+497,"cpu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1362,"cpu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+1249,"cpu_w_last_o", false,-1);
    tracep->declBit(c+508,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+509,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+495,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1361,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1362,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+497,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1383,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+496,"axi_w_ready_i", false,-1);
    tracep->declBit(c+510,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+511,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+513,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+514,"axi_w_last_o", false,-1);
    tracep->declBit(c+515,"axi_b_ready_o", false,-1);
    tracep->declBit(c+1249,"axi_b_valid_i", false,-1);
    tracep->declBus(c+717,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+1253,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+516,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+517,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+505,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1361,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1362,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+506,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1383,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+518,"axi_r_ready_o", false,-1);
    tracep->declBit(c+1250,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1310,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+1254,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+1252,"axi_r_last_i", false,-1);
    tracep->declBus(c+718,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+519,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+1366,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+1353,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+1385,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+1386,"AXI_W_RESP", false,-1, 2,0);
    tracep->declQuad(c+520,"axi_w_data_t", false,-1, 63,0);
    tracep->declBus(c+522,"axi_w_strb_t", false,-1, 7,0);
    tracep->declBus(c+523,"axi_w_cnt", false,-1, 7,0);
    tracep->declBus(c+524,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+1367,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1383,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1384,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+1387,"axi_r_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_23060077_axi_xbar ");
    tracep->declBit(c+1272,"aclk", false,-1);
    tracep->declBit(c+1307,"areset_n", false,-1);
    tracep->declBit(c+162,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+163,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+164,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1361,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1362,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+165,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+166,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+167,"axi_w_ready_i", false,-1);
    tracep->declBit(c+168,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+169,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+171,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+172,"axi_w_last_o", false,-1);
    tracep->declBit(c+173,"axi_b_ready_o", false,-1);
    tracep->declBit(c+1166,"axi_b_valid_i", false,-1);
    tracep->declBus(c+675,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+1167,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+174,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+175,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+176,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1361,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1362,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+177,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+178,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+179,"axi_r_ready_o", false,-1);
    tracep->declBit(c+1168,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1306,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+1304,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+676,"axi_r_last_i", false,-1);
    tracep->declBus(c+1169,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+508,"arb_axi_aw_ready_o", false,-1);
    tracep->declBit(c+509,"arb_axi_aw_valid_i", false,-1);
    tracep->declBus(c+495,"arb_axi_aw_addr_i", false,-1, 31,0);
    tracep->declBus(c+1361,"arb_axi_aw_id_i", false,-1, 3,0);
    tracep->declBus(c+1362,"arb_axi_aw_len_i", false,-1, 7,0);
    tracep->declBus(c+497,"arb_axi_aw_size_i", false,-1, 2,0);
    tracep->declBus(c+1383,"arb_axi_aw_burst_i", false,-1, 1,0);
    tracep->declBit(c+496,"arb_axi_w_ready_o", false,-1);
    tracep->declBit(c+510,"arb_axi_w_valid_i", false,-1);
    tracep->declQuad(c+511,"arb_axi_w_data_i", false,-1, 63,0);
    tracep->declBus(c+513,"arb_axi_w_strb_i", false,-1, 7,0);
    tracep->declBit(c+514,"arb_axi_w_last_i", false,-1);
    tracep->declBit(c+515,"arb_axi_b_ready_i", false,-1);
    tracep->declBit(c+1249,"arb_axi_b_valid_o", false,-1);
    tracep->declBus(c+717,"arb_axi_b_resp_o", false,-1, 1,0);
    tracep->declBus(c+1253,"arb_axi_b_id_o", false,-1, 3,0);
    tracep->declBit(c+516,"arb_axi_ar_ready_o", false,-1);
    tracep->declBit(c+517,"arb_axi_ar_valid_i", false,-1);
    tracep->declBus(c+505,"arb_axi_ar_addr_i", false,-1, 31,0);
    tracep->declBus(c+1361,"arb_axi_ar_id_i", false,-1, 3,0);
    tracep->declBus(c+1362,"arb_axi_ar_len_i", false,-1, 7,0);
    tracep->declBus(c+506,"arb_axi_ar_size_i", false,-1, 2,0);
    tracep->declBus(c+1383,"arb_axi_ar_burst_i", false,-1, 1,0);
    tracep->declBit(c+518,"arb_axi_r_ready_i", false,-1);
    tracep->declBit(c+1250,"arb_axi_r_valid_o", false,-1);
    tracep->declBus(c+1310,"arb_axi_r_resp_o", false,-1, 1,0);
    tracep->declQuad(c+1254,"arb_axi_r_data_o", false,-1, 63,0);
    tracep->declBit(c+1252,"arb_axi_r_last_o", false,-1);
    tracep->declBus(c+718,"arb_axi_r_id_o", false,-1, 3,0);
    tracep->declBit(c+1388,"axi_clint_aw_ready_i", false,-1);
    tracep->declBit(c+525,"axi_clint_aw_valid_o", false,-1);
    tracep->declBus(c+526,"axi_clint_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1361,"axi_clint_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1362,"axi_clint_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+527,"axi_clint_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+528,"axi_clint_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+1389,"axi_clint_w_ready_i", false,-1);
    tracep->declBit(c+529,"axi_clint_w_valid_o", false,-1);
    tracep->declQuad(c+530,"axi_clint_w_data_o", false,-1, 63,0);
    tracep->declBus(c+532,"axi_clint_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+533,"axi_clint_w_last_o", false,-1);
    tracep->declBit(c+534,"axi_clint_b_ready_o", false,-1);
    tracep->declBit(c+1390,"axi_clint_b_valid_i", false,-1);
    tracep->declBus(c+1391,"axi_clint_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+1392,"axi_clint_b_id_i", false,-1, 3,0);
    tracep->declBit(c+535,"axi_clint_ar_ready_i", false,-1);
    tracep->declBit(c+536,"axi_clint_ar_valid_o", false,-1);
    tracep->declBus(c+537,"axi_clint_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1361,"axi_clint_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1362,"axi_clint_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+538,"axi_clint_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+539,"axi_clint_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+540,"axi_clint_r_ready_o", false,-1);
    tracep->declBit(c+541,"axi_clint_r_valid_i", false,-1);
    tracep->declBus(c+1367,"axi_clint_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+542,"axi_clint_r_data_i", false,-1, 63,0);
    tracep->declBit(c+541,"axi_clint_r_last_i", false,-1);
    tracep->declBus(c+1361,"axi_clint_r_id_i", false,-1, 3,0);
    tracep->pushNamePrefix("u_ysyx_23060077_axi_clint ");
    tracep->declBit(c+1272,"aclk", false,-1);
    tracep->declBit(c+1307,"areset_n", false,-1);
    tracep->declBit(c+1388,"axi_clint_aw_ready_o", false,-1);
    tracep->declBit(c+525,"axi_clint_aw_valid_i", false,-1);
    tracep->declBus(c+526,"axi_clint_aw_addr_i", false,-1, 31,0);
    tracep->declBus(c+1361,"axi_clint_aw_id_i", false,-1, 3,0);
    tracep->declBus(c+1362,"axi_clint_aw_len_i", false,-1, 7,0);
    tracep->declBus(c+527,"axi_clint_aw_size_i", false,-1, 2,0);
    tracep->declBus(c+528,"axi_clint_aw_burst_i", false,-1, 1,0);
    tracep->declBit(c+1389,"axi_clint_w_ready_o", false,-1);
    tracep->declBit(c+529,"axi_clint_w_valid_i", false,-1);
    tracep->declQuad(c+530,"axi_clint_w_data_i", false,-1, 63,0);
    tracep->declBus(c+532,"axi_clint_w_strb_i", false,-1, 7,0);
    tracep->declBit(c+533,"axi_clint_w_last_i", false,-1);
    tracep->declBit(c+534,"axi_clint_b_ready_i", false,-1);
    tracep->declBit(c+1390,"axi_clint_b_valid_o", false,-1);
    tracep->declBus(c+1391,"axi_clint_b_resp_o", false,-1, 1,0);
    tracep->declBus(c+1392,"axi_clint_b_id_o", false,-1, 3,0);
    tracep->declBit(c+535,"axi_clint_ar_ready_o", false,-1);
    tracep->declBit(c+536,"axi_clint_ar_valid_i", false,-1);
    tracep->declBus(c+537,"axi_clint_ar_addr_i", false,-1, 31,0);
    tracep->declBus(c+1361,"axi_clint_ar_id_i", false,-1, 3,0);
    tracep->declBus(c+1362,"axi_clint_ar_len_i", false,-1, 7,0);
    tracep->declBus(c+538,"axi_clint_ar_size_i", false,-1, 2,0);
    tracep->declBus(c+539,"axi_clint_ar_burst_i", false,-1, 1,0);
    tracep->declBit(c+540,"axi_clint_r_ready_i", false,-1);
    tracep->declBit(c+541,"axi_clint_r_valid_o", false,-1);
    tracep->declBus(c+1367,"axi_clint_r_resp_o", false,-1, 1,0);
    tracep->declQuad(c+542,"axi_clint_r_data_o", false,-1, 63,0);
    tracep->declBit(c+541,"axi_clint_r_last_o", false,-1);
    tracep->declBus(c+1361,"axi_clint_r_id_o", false,-1, 3,0);
    tracep->declQuad(c+544,"clint_data", false,-1, 63,0);
    tracep->declQuad(c+546,"data_store", false,-1, 63,0);
    tracep->declBus(c+548,"addr", false,-1, 31,0);
    tracep->declBus(c+549,"clint_r_state", false,-1, 1,0);
    tracep->declBus(c+1367,"CLINT_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1383,"CLINT_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1384,"CLINT_R_DATA", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csr_u0 ");
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1307,"reset", false,-1);
    tracep->declBus(c+550,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+500,"wr_data", false,-1, 31,0);
    tracep->declBus(c+550,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+1309,"rd_data", false,-1, 31,0);
    tracep->declBit(c+498,"i_csr_ecall", false,-1);
    tracep->declBit(c+499,"i_csr_mret", false,-1);
    tracep->declBus(c+469,"i_inst", false,-1, 31,0);
    tracep->declBus(c+468,"i_pc", false,-1, 31,0);
    tracep->declBus(c+501,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+502,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+503,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+1309,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+551,"wr_en", false,-1);
    tracep->declBit(c+551,"rd_en", false,-1);
    tracep->declBus(c+552,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+553,"temp", false,-1, 31,0);
    tracep->declBus(c+501,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+554,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+555,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_u0 ");
    tracep->declBus(c+468,"pc", false,-1, 31,0);
    tracep->declBus(c+487,"src1", false,-1, 31,0);
    tracep->declBus(c+488,"src2", false,-1, 31,0);
    tracep->declBus(c+482,"imm", false,-1, 31,0);
    tracep->declBit(c+475,"branch", false,-1);
    tracep->declBus(c+483,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+484,"src_sel", false,-1, 1,0);
    tracep->declBus(c+486,"funct3", false,-1, 2,0);
    tracep->declBit(c+489,"zero_flag", false,-1);
    tracep->declBus(c+490,"exu_result", false,-1, 31,0);
    tracep->declBus(c+556,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+557,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+558,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+1393,"carry_flag", false,-1);
    tracep->declBit(c+1394,"signed_flag", false,-1);
    tracep->declBus(c+490,"exu_result_r", false,-1, 31,0);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBus(c+483,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+556,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+557,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+558,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+559,"sub_flag", false,-1);
    tracep->declQuad(c+560,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+562,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+564,"cin", false,-1, 32,0);
    tracep->declQuad(c+566,"add_out", false,-1, 32,0);
    tracep->declBit(c+568,"top_A", false,-1);
    tracep->declBit(c+569,"top_B", false,-1);
    tracep->declBit(c+570,"top_C", false,-1);
    tracep->declBit(c+571,"sign_flag", false,-1);
    tracep->declBit(c+572,"over_flag", false,-1);
    tracep->declBit(c+573,"carry_flag", false,-1);
    tracep->declBus(c+574,"sra_result", false,-1, 31,0);
    tracep->declBus(c+558,"alu_out_data_r", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_u0 ");
    tracep->declBus(c+469,"inst", false,-1, 31,0);
    tracep->declBit(c+475,"branch", false,-1);
    tracep->declBit(c+476,"jal", false,-1);
    tracep->declBit(c+477,"jalr", false,-1);
    tracep->declBus(c+478,"rd", false,-1, 4,0);
    tracep->declBit(c+479,"rd_wen", false,-1);
    tracep->declBus(c+480,"rs1", false,-1, 4,0);
    tracep->declBus(c+481,"rs2", false,-1, 4,0);
    tracep->declBus(c+482,"imm", false,-1, 31,0);
    tracep->declBus(c+483,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+484,"src_sel", false,-1, 1,0);
    tracep->declBus(c+485,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+486,"funct3", false,-1, 2,0);
    tracep->declBus(c+575,"opcode", false,-1, 6,0);
    tracep->declBus(c+576,"funct7", false,-1, 6,0);
    tracep->declBus(c+1395,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("id_imm_idu ");
    tracep->declBus(c+469,"inst", false,-1, 31,0);
    tracep->declBus(c+482,"imm", false,-1, 31,0);
    tracep->declBus(c+482,"imm_r", false,-1, 31,0);
    tracep->declBus(c+577,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+578,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+579,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+580,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+581,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+1365,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+1365,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("id_imm_ext_typeB ");
    tracep->declBus(c+1396,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+582,"imm_in", false,-1, 12,0);
    tracep->declBus(c+580,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeI ");
    tracep->declBus(c+1397,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"imm_in", false,-1, 11,0);
    tracep->declBus(c+577,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeJ ");
    tracep->declBus(c+1398,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+584,"imm_in", false,-1, 20,0);
    tracep->declBus(c+581,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeS ");
    tracep->declBus(c+1397,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+585,"imm_in", false,-1, 11,0);
    tracep->declBus(c+579,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeU ");
    tracep->declBus(c+1399,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+578,"imm_in", false,-1, 31,0);
    tracep->declBus(c+578,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_opt_idu ");
    tracep->declBus(c+575,"opcode", false,-1, 6,0);
    tracep->declBus(c+486,"funct3", false,-1, 2,0);
    tracep->declBus(c+576,"funct7", false,-1, 6,0);
    tracep->declBus(c+483,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+484,"src_sel", false,-1, 1,0);
    tracep->declBus(c+485,"lsu_opt", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_u0 ");
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1307,"reset", false,-1);
    tracep->declBus(c+471,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+472,"jump_pc_valid", false,-1);
    tracep->declBit(c+1244,"stall", false,-1);
    tracep->declBit(c+1248,"wbu_stall", false,-1);
    tracep->declBit(c+473,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+474,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+1245,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+1246,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1362,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+1247,"ifu_r_last_i", false,-1);
    tracep->declBit(c+470,"ifu_stall", false,-1);
    tracep->declBus(c+468,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+469,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+468,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+469,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+586,"ifu_pc_o_t", false,-1, 31,0);
    tracep->declBus(c+587,"ifu_inst_o_t", false,-1, 31,0);
    tracep->declBus(c+474,"pc", false,-1, 31,0);
    tracep->declBus(c+1246,"inst", false,-1, 31,0);
    tracep->declBus(c+1400,"inst_t", false,-1, 31,0);
    tracep->declBit(c+470,"ifu_stall_r", false,-1);
    tracep->declBit(c+588,"flush_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_u0 ");
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1307,"reset", false,-1);
    tracep->declBus(c+487,"src1", false,-1, 31,0);
    tracep->declBus(c+488,"src2", false,-1, 31,0);
    tracep->declBus(c+482,"imm", false,-1, 31,0);
    tracep->declBus(c+485,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+486,"funct3", false,-1, 2,0);
    tracep->declBit(c+470,"ifu_stall", false,-1);
    tracep->declBit(c+491,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+492,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+713,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+714,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+493,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1362,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+715,"lsu_r_last_i", false,-1);
    tracep->declBit(c+494,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+495,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+496,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+488,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+497,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1362,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+1249,"lsu_w_last_i", false,-1);
    tracep->declBit(c+1244,"mem_stall", false,-1);
    tracep->declBit(c+1248,"lsu_rd_wen", false,-1);
    tracep->declBus(c+712,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+492,"raddr", false,-1, 31,0);
    tracep->declBus(c+714,"rdata", false,-1, 31,0);
    tracep->declBus(c+589,"rsize", false,-1, 31,0);
    tracep->declBus(c+495,"waddr", false,-1, 31,0);
    tracep->declBus(c+488,"wdata", false,-1, 31,0);
    tracep->declBus(c+590,"wmask", false,-1, 31,0);
    tracep->declBus(c+590,"mask", false,-1, 31,0);
    tracep->declBus(c+712,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+491,"ren", false,-1);
    tracep->declBit(c+494,"wen", false,-1);
    tracep->declBit(c+1256,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+1257,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_u0 ");
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1307,"reset", false,-1);
    tracep->declBus(c+480,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+487,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+481,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+488,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+716,"rd_en", false,-1);
    tracep->declBus(c+478,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1308,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+591+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_u0 ");
    tracep->declBus(c+485,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+490,"exu_result", false,-1, 31,0);
    tracep->declBus(c+712,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+1309,"csr_result", false,-1, 31,0);
    tracep->declBit(c+1248,"lsu_rd_wen", false,-1);
    tracep->declBit(c+623,"idu_rd_wen", false,-1);
    tracep->declBit(c+716,"wbu_rd_wen", false,-1);
    tracep->declBus(c+1308,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"io_d", false,-1);
    tracep->declBit(c+624,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"io_d", false,-1);
    tracep->declBit(c+624,"io_q", false,-1);
    tracep->declBit(c+624,"sync_0", false,-1);
    tracep->declBit(c+625,"sync_1", false,-1);
    tracep->declBit(c+626,"sync_2", false,-1);
    tracep->declBit(c+627,"sync_3", false,-1);
    tracep->declBit(c+628,"sync_4", false,-1);
    tracep->declBit(c+629,"sync_5", false,-1);
    tracep->declBit(c+630,"sync_6", false,-1);
    tracep->declBit(c+631,"sync_7", false,-1);
    tracep->declBit(c+632,"sync_8", false,-1);
    tracep->declBit(c+633,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1049,"auto_in_psel", false,-1);
    tracep->declBit(c+1125,"auto_in_penable", false,-1);
    tracep->declBit(c+1013,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1124,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1353,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+722,"auto_in_pready", false,-1);
    tracep->declBit(c+1354,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1297,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1274,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1275,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1276,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1277,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1278,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1279,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1280,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1281,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1282,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1283,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBus(c+1140,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1049,"in_psel", false,-1);
    tracep->declBit(c+1125,"in_penable", false,-1);
    tracep->declBus(c+1353,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1013,"in_pwrite", false,-1);
    tracep->declBus(c+1014,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+722,"in_pready", false,-1);
    tracep->declBus(c+1297,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1354,"in_pslverr", false,-1);
    tracep->declBus(c+1274,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1275,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1276,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1277,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1278,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1279,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1280,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1281,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1282,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1283,"gpio_seg_7", false,-1, 7,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+723+i*1,"gpio_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1311+i*1,"gpio_seg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1401,"N", false,-1, 31,0);
    tracep->declBus(c+727,"i", false,-1, 31,0);
    tracep->declBus(c+1402,"GPIO_STATE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+728,"gpio_apb_state", false,-1, 1,0);
    tracep->declBus(c+1367,"GPIO_APB_IDLE", false,-1, 1,0);
    tracep->declBus(c+1383,"GPIO_APB_READ", false,-1, 1,0);
    tracep->declBus(c+1384,"GPIO_APB_WRITE", false,-1, 1,0);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("bcd7seg_u ");
    tracep->declBus(c+1064,"b", false,-1, 3,0);
    tracep->declBit(c+1273,"en", false,-1);
    tracep->declBus(c+1319,"h", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+2+i*1,"segs", true,(i+0), 7,0);
    }
    tracep->declBus(c+1320,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("bcd7seg_u ");
    tracep->declBus(c+1065,"b", false,-1, 3,0);
    tracep->declBit(c+1273,"en", false,-1);
    tracep->declBus(c+1321,"h", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+18+i*1,"segs", true,(i+0), 7,0);
    }
    tracep->declBus(c+1322,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("bcd7seg_u ");
    tracep->declBus(c+1066,"b", false,-1, 3,0);
    tracep->declBit(c+1273,"en", false,-1);
    tracep->declBus(c+1323,"h", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+34+i*1,"segs", true,(i+0), 7,0);
    }
    tracep->declBus(c+1324,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("bcd7seg_u ");
    tracep->declBus(c+1067,"b", false,-1, 3,0);
    tracep->declBit(c+1273,"en", false,-1);
    tracep->declBus(c+1325,"h", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+50+i*1,"segs", true,(i+0), 7,0);
    }
    tracep->declBus(c+1326,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("bcd7seg_u ");
    tracep->declBus(c+1068,"b", false,-1, 3,0);
    tracep->declBit(c+1273,"en", false,-1);
    tracep->declBus(c+1327,"h", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+66+i*1,"segs", true,(i+0), 7,0);
    }
    tracep->declBus(c+1328,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[5] ");
    tracep->pushNamePrefix("bcd7seg_u ");
    tracep->declBus(c+1069,"b", false,-1, 3,0);
    tracep->declBit(c+1273,"en", false,-1);
    tracep->declBus(c+1329,"h", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+82+i*1,"segs", true,(i+0), 7,0);
    }
    tracep->declBus(c+1330,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[6] ");
    tracep->pushNamePrefix("bcd7seg_u ");
    tracep->declBus(c+1070,"b", false,-1, 3,0);
    tracep->declBit(c+1273,"en", false,-1);
    tracep->declBus(c+1331,"h", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+98+i*1,"segs", true,(i+0), 7,0);
    }
    tracep->declBus(c+1332,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[7] ");
    tracep->pushNamePrefix("bcd7seg_u ");
    tracep->declBus(c+1071,"b", false,-1, 3,0);
    tracep->declBit(c+1273,"en", false,-1);
    tracep->declBus(c+1333,"h", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+114+i*1,"segs", true,(i+0), 7,0);
    }
    tracep->declBus(c+1334,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1047,"auto_in_psel", false,-1);
    tracep->declBit(c+1048,"auto_in_penable", false,-1);
    tracep->declBit(c+1013,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1124,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1353,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1358,"auto_in_pready", false,-1);
    tracep->declBit(c+1359,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1360,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1284,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1285,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBus(c+1140,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1047,"in_psel", false,-1);
    tracep->declBit(c+1048,"in_penable", false,-1);
    tracep->declBus(c+1353,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1013,"in_pwrite", false,-1);
    tracep->declBus(c+1014,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1358,"in_pready", false,-1);
    tracep->declBus(c+1360,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1359,"in_pslverr", false,-1);
    tracep->declBit(c+1284,"ps2_clk", false,-1);
    tracep->declBit(c+1285,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+267,"auto_in_awvalid", false,-1);
    tracep->declBit(c+268,"auto_in_wvalid", false,-1);
    tracep->declBit(c+269,"auto_in_arready", false,-1);
    tracep->declBit(c+270,"auto_in_arvalid", false,-1);
    tracep->declBus(c+150,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+152,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+679,"auto_in_rready", false,-1);
    tracep->declBit(c+272,"auto_in_rvalid", false,-1);
    tracep->declBus(c+273,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+274,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+272,"state", false,-1);
    tracep->declQuad(c+274,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+273,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+634,"raddr", false,-1, 31,0);
    tracep->declBit(c+635,"ren", false,-1);
    tracep->declBus(c+636,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1126,"auto_in_psel", false,-1);
    tracep->declBit(c+1050,"auto_in_penable", false,-1);
    tracep->declBit(c+1013,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1121,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1353,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1298,"auto_in_pready", false,-1);
    tracep->declBit(c+1354,"auto_in_pslverr", false,-1);
    tracep->declBus(c+139,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1157,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1158,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1295,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBus(c+1121,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1126,"in_psel", false,-1);
    tracep->declBit(c+1050,"in_penable", false,-1);
    tracep->declBus(c+1353,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1013,"in_pwrite", false,-1);
    tracep->declBus(c+1014,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1298,"in_pready", false,-1);
    tracep->declBus(c+139,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1354,"in_pslverr", false,-1);
    tracep->declBit(c+1157,"qspi_sck", false,-1);
    tracep->declBit(c+1158,"qspi_ce_n", false,-1);
    tracep->declBus(c+1295,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1295,"din", false,-1, 3,0);
    tracep->declBus(c+1258,"dout", false,-1, 3,0);
    tracep->declBus(c+1259,"douten", false,-1, 3,0);
    tracep->declBit(c+1335,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1272,"clk_i", false,-1);
    tracep->declBit(c+1273,"rst_i", false,-1);
    tracep->declBus(c+1121,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1014,"dat_i", false,-1, 31,0);
    tracep->declBus(c+139,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1015,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1126,"cyc_i", false,-1);
    tracep->declBit(c+1126,"stb_i", false,-1);
    tracep->declBit(c+1335,"ack_o", false,-1);
    tracep->declBit(c+1013,"we_i", false,-1);
    tracep->declBit(c+1157,"sck", false,-1);
    tracep->declBit(c+1158,"ce_n", false,-1);
    tracep->declBus(c+1295,"din", false,-1, 3,0);
    tracep->declBus(c+1258,"dout", false,-1, 3,0);
    tracep->declBus(c+1259,"douten", false,-1, 3,0);
    tracep->declBus(c+1367,"ST_INIT", false,-1, 1,0);
    tracep->declBus(c+1383,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1384,"ST_WAIT", false,-1, 1,0);
    tracep->declBit(c+729,"mr_sck", false,-1);
    tracep->declBit(c+730,"mr_ce_n", false,-1);
    tracep->declBus(c+1295,"mr_din", false,-1, 3,0);
    tracep->declBus(c+731,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+732,"mr_doe", false,-1);
    tracep->declBit(c+733,"mw_sck", false,-1);
    tracep->declBit(c+734,"mw_ce_n", false,-1);
    tracep->declBus(c+1295,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1052,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+735,"mw_doe", false,-1);
    tracep->declBit(c+736,"init_start", false,-1);
    tracep->declBit(c+737,"init_done", false,-1);
    tracep->declBit(c+738,"init_sck", false,-1);
    tracep->declBit(c+739,"init_ce_n", false,-1);
    tracep->declBus(c+740,"init_dout", false,-1, 3,0);
    tracep->declBit(c+1363,"init_doe", false,-1);
    tracep->declBit(c+1260,"mr_rd", false,-1);
    tracep->declBit(c+741,"mr_done", false,-1);
    tracep->declBit(c+1261,"mw_wr", false,-1);
    tracep->declBit(c+1053,"mw_done", false,-1);
    tracep->declBit(c+1126,"wb_valid", false,-1);
    tracep->declBit(c+1141,"wb_we", false,-1);
    tracep->declBit(c+1142,"wb_re", false,-1);
    tracep->declBus(c+742,"state", false,-1, 1,0);
    tracep->declBus(c+1262,"nstate", false,-1, 1,0);
    tracep->declBus(c+1023,"size", false,-1, 2,0);
    tracep->declBus(c+1024,"byte0", false,-1, 7,0);
    tracep->declBus(c+1025,"byte1", false,-1, 7,0);
    tracep->declBus(c+1026,"byte2", false,-1, 7,0);
    tracep->declBus(c+1027,"byte3", false,-1, 7,0);
    tracep->declBus(c+1028,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("INIT ");
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1336,"rst_n", false,-1);
    tracep->declBit(c+736,"start", false,-1);
    tracep->declBit(c+737,"done", false,-1);
    tracep->declBit(c+738,"sck", false,-1);
    tracep->declBit(c+739,"ce_n", false,-1);
    tracep->declBus(c+740,"dout", false,-1, 3,0);
    tracep->declBit(c+1363,"douten", false,-1);
    tracep->declBus(c+1403,"CMD_35H", false,-1, 7,0);
    tracep->declBus(c+743,"counter", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1336,"rst_n", false,-1);
    tracep->declBus(c+1143,"addr", false,-1, 23,0);
    tracep->declBit(c+1260,"rd", false,-1);
    tracep->declBus(c+1404,"size", false,-1, 2,0);
    tracep->declBit(c+741,"done", false,-1);
    tracep->declBus(c+139,"line", false,-1, 31,0);
    tracep->declBit(c+729,"sck", false,-1);
    tracep->declBit(c+730,"ce_n", false,-1);
    tracep->declBus(c+1295,"din", false,-1, 3,0);
    tracep->declBus(c+731,"dout", false,-1, 3,0);
    tracep->declBit(c+732,"douten", false,-1);
    tracep->declBus(c+1405,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1406,"READ", false,-1, 0,0);
    tracep->declBus(c+1407,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+744,"state", false,-1);
    tracep->declBit(c+1263,"nstate", false,-1);
    tracep->declBus(c+745,"counter", false,-1, 7,0);
    tracep->declBus(c+746,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+637+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1408,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+747,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1336,"rst_n", false,-1);
    tracep->declBus(c+1144,"addr", false,-1, 23,0);
    tracep->declBus(c+1028,"line", false,-1, 31,0);
    tracep->declBus(c+1023,"size", false,-1, 2,0);
    tracep->declBit(c+1261,"wr", false,-1);
    tracep->declBit(c+1053,"done", false,-1);
    tracep->declBit(c+733,"sck", false,-1);
    tracep->declBit(c+734,"ce_n", false,-1);
    tracep->declBus(c+1295,"din", false,-1, 3,0);
    tracep->declBus(c+1052,"dout", false,-1, 3,0);
    tracep->declBit(c+735,"douten", false,-1);
    tracep->declBus(c+1405,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1406,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1029,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+748,"state", false,-1);
    tracep->declBit(c+1264,"nstate", false,-1);
    tracep->declBus(c+749,"counter", false,-1, 7,0);
    tracep->declBus(c+750,"saddr", false,-1, 23,0);
    tracep->declBus(c+1409,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1043,"auto_in_psel", false,-1);
    tracep->declBit(c+1044,"auto_in_penable", false,-1);
    tracep->declBit(c+1013,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1121,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1353,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+720,"auto_in_pready", false,-1);
    tracep->declBit(c+1354,"auto_in_pslverr", false,-1);
    tracep->declBus(c+721,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1296,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1057,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1058,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1059,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1060,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1061,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1159,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1062,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1063,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1113,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBus(c+1121,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1043,"in_psel", false,-1);
    tracep->declBit(c+1044,"in_penable", false,-1);
    tracep->declBus(c+1353,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1013,"in_pwrite", false,-1);
    tracep->declBus(c+1014,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+720,"in_pready", false,-1);
    tracep->declBus(c+721,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1354,"in_pslverr", false,-1);
    tracep->declBit(c+1296,"sdram_clk", false,-1);
    tracep->declBit(c+1057,"sdram_cke", false,-1);
    tracep->declBit(c+1058,"sdram_cs", false,-1);
    tracep->declBit(c+1059,"sdram_ras", false,-1);
    tracep->declBit(c+1060,"sdram_cas", false,-1);
    tracep->declBit(c+1061,"sdram_we", false,-1);
    tracep->declBus(c+1159,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1062,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1063,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1113,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+751,"sdram_dout_en", false,-1);
    tracep->declBus(c+752,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+641,"state", false,-1, 1,0);
    tracep->declBit(c+1072,"req_accept", false,-1);
    tracep->declBit(c+1145,"is_read", false,-1);
    tracep->declBit(c+1146,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1272,"clk_i", false,-1);
    tracep->declBit(c+1273,"rst_i", false,-1);
    tracep->declBus(c+1147,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1145,"inport_rd_i", false,-1);
    tracep->declBus(c+1362,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1121,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1014,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1113,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1072,"inport_accept_o", false,-1);
    tracep->declBit(c+720,"inport_ack_o", false,-1);
    tracep->declBit(c+1354,"inport_error_o", false,-1);
    tracep->declBus(c+721,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1296,"sdram_clk_o", false,-1);
    tracep->declBit(c+1057,"sdram_cke_o", false,-1);
    tracep->declBit(c+1058,"sdram_cs_o", false,-1);
    tracep->declBit(c+1059,"sdram_ras_o", false,-1);
    tracep->declBit(c+1060,"sdram_cas_o", false,-1);
    tracep->declBit(c+1061,"sdram_we_o", false,-1);
    tracep->declBus(c+1063,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1159,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1062,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+752,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+751,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1410,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1411,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1412,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1402,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1402,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1401,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1413,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1396,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1414,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1415,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1416,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1401,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1417,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1418,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1419,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1420,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1421,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1422,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1423,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1361,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1424,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1401,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1361,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1423,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1422,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1418,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1420,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1419,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1421,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1417,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1425,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1426,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1427,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1427,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1399,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1427,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1402,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1402,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1428,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1121,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1147,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1145,"ram_rd_w", false,-1);
    tracep->declBit(c+1072,"ram_accept_w", false,-1);
    tracep->declBus(c+1014,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+721,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+720,"ram_ack_w", false,-1);
    tracep->declBit(c+1148,"ram_req_w", false,-1);
    tracep->declBus(c+1073,"command_q", false,-1, 3,0);
    tracep->declBus(c+1074,"addr_q", false,-1, 12,0);
    tracep->declBus(c+752,"data_q", false,-1, 31,0);
    tracep->declBit(c+753,"data_rd_en_q", false,-1);
    tracep->declBus(c+1063,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1057,"cke_q", false,-1);
    tracep->declBus(c+1062,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1113,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+754,"refresh_q", false,-1);
    tracep->declBus(c+755,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+756+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1075,"state_q", false,-1, 3,0);
    tracep->declBus(c+1265,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1266,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+764,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+765,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1149,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1150,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1151,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1152,"addr_bank_double", false,-1, 2,0);
    tracep->declBus(c+1401,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+766,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1267,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1429,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1076,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+767,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+721,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+768,"idx", false,-1, 31,0);
    tracep->declBus(c+769,"rd_q", false,-1, 3,0);
    tracep->declBit(c+720,"ack_q", false,-1);
    tracep->declArray(c+1077,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1130,"auto_in_psel", false,-1);
    tracep->declBit(c+1051,"auto_in_penable", false,-1);
    tracep->declBit(c+1013,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1123,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1353,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1300,"auto_in_pready", false,-1);
    tracep->declBit(c+1354,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1301,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1055,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1056,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+719,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1294,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1430,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1431,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1413,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBus(c+1153,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1130,"in_psel", false,-1);
    tracep->declBit(c+1051,"in_penable", false,-1);
    tracep->declBus(c+1353,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1013,"in_pwrite", false,-1);
    tracep->declBus(c+1014,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1300,"in_pready", false,-1);
    tracep->declBus(c+1301,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1354,"in_pslverr", false,-1);
    tracep->declBit(c+1055,"spi_sck", false,-1);
    tracep->declBus(c+1056,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+719,"spi_mosi", false,-1);
    tracep->declBit(c+1294,"spi_miso", false,-1);
    tracep->declBit(c+1432,"spi_irq_out", false,-1);
    tracep->declBus(c+1030,"wb_adr_i", false,-1, 31,0);
    tracep->declBus(c+1031,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+770,"wb_dat_o", false,-1, 31,0);
    tracep->declBit(c+1032,"wb_we_i", false,-1);
    tracep->declBit(c+1033,"wb_stb_i", false,-1);
    tracep->declBit(c+1034,"wb_cyc_i", false,-1);
    tracep->declBit(c+1080,"wb_ack_o", false,-1);
    tracep->declBit(c+1081,"wb_int_o", false,-1);
    tracep->declBus(c+1035,"wb_sel_i", false,-1, 3,0);
    tracep->declBus(c+1036,"spi_state", false,-1, 3,0);
    tracep->declBus(c+1361,"SPI_IDLE", false,-1, 3,0);
    tracep->declBus(c+1423,"SPI_REG", false,-1, 3,0);
    tracep->declBus(c+1422,"SPI_FLASH_TX1", false,-1, 3,0);
    tracep->declBus(c+1418,"SPI_FLASH_TX0", false,-1, 3,0);
    tracep->declBus(c+1420,"SPI_FLASH_SS1", false,-1, 3,0);
    tracep->declBus(c+1419,"SPI_FLASH_CTRL", false,-1, 3,0);
    tracep->declBus(c+1421,"SPI_FLASH_INTT", false,-1, 3,0);
    tracep->declBus(c+1417,"SPI_FLASH_SS0", false,-1, 3,0);
    tracep->declBus(c+1425,"SPI_FLASH_DATA", false,-1, 3,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1433,"Tp", false,-1, 31,0);
    tracep->declBit(c+1272,"wb_clk_i", false,-1);
    tracep->declBit(c+1273,"wb_rst_i", false,-1);
    tracep->declBus(c+1037,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1031,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+770,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1035,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1032,"wb_we_i", false,-1);
    tracep->declBit(c+1033,"wb_stb_i", false,-1);
    tracep->declBit(c+1034,"wb_cyc_i", false,-1);
    tracep->declBit(c+1080,"wb_ack_o", false,-1);
    tracep->declBit(c+1354,"wb_err_o", false,-1);
    tracep->declBit(c+1081,"wb_int_o", false,-1);
    tracep->declBus(c+1056,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+1055,"sclk_pad_o", false,-1);
    tracep->declBit(c+719,"mosi_pad_o", false,-1);
    tracep->declBit(c+1294,"miso_pad_i", false,-1);
    tracep->declBus(c+1082,"divider", false,-1, 15,0);
    tracep->declBus(c+1083,"ctrl", false,-1, 13,0);
    tracep->declBus(c+771,"ss", false,-1, 7,0);
    tracep->declBus(c+1268,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+772,"rx", false,-1, 127,0);
    tracep->declBit(c+1084,"rx_negedge", false,-1);
    tracep->declBit(c+1085,"tx_negedge", false,-1);
    tracep->declBus(c+1086,"char_len", false,-1, 6,0);
    tracep->declBit(c+1087,"go", false,-1);
    tracep->declBit(c+1088,"lsb", false,-1);
    tracep->declBit(c+1089,"ie", false,-1);
    tracep->declBit(c+1090,"ass", false,-1);
    tracep->declBit(c+1038,"spi_divider_sel", false,-1);
    tracep->declBit(c+1039,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1040,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1041,"spi_ss_sel", false,-1);
    tracep->declBit(c+1091,"tip", false,-1);
    tracep->declBit(c+1092,"pos_edge", false,-1);
    tracep->declBit(c+776,"neg_edge", false,-1);
    tracep->declBit(c+1093,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1433,"Tp", false,-1, 31,0);
    tracep->declBit(c+1272,"clk_in", false,-1);
    tracep->declBit(c+1273,"rst", false,-1);
    tracep->declBit(c+1091,"enable", false,-1);
    tracep->declBit(c+1087,"go", false,-1);
    tracep->declBit(c+1093,"last_clk", false,-1);
    tracep->declBus(c+1082,"divider", false,-1, 15,0);
    tracep->declBit(c+1055,"clk_out", false,-1);
    tracep->declBit(c+1092,"pos_edge", false,-1);
    tracep->declBit(c+776,"neg_edge", false,-1);
    tracep->declBus(c+1094,"cnt", false,-1, 15,0);
    tracep->declBit(c+1095,"cnt_zero", false,-1);
    tracep->declBit(c+1096,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1433,"Tp", false,-1, 31,0);
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1273,"rst", false,-1);
    tracep->declBus(c+1042,"latch", false,-1, 3,0);
    tracep->declBus(c+1035,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+1086,"len", false,-1, 6,0);
    tracep->declBit(c+1088,"lsb", false,-1);
    tracep->declBit(c+1087,"go", false,-1);
    tracep->declBit(c+1092,"pos_edge", false,-1);
    tracep->declBit(c+776,"neg_edge", false,-1);
    tracep->declBit(c+1084,"rx_negedge", false,-1);
    tracep->declBit(c+1085,"tx_negedge", false,-1);
    tracep->declBit(c+1091,"tip", false,-1);
    tracep->declBit(c+1093,"last", false,-1);
    tracep->declBus(c+1031,"p_in", false,-1, 31,0);
    tracep->declArray(c+772,"p_out", false,-1, 127,0);
    tracep->declBit(c+1055,"s_clk", false,-1);
    tracep->declBit(c+1294,"s_in", false,-1);
    tracep->declBit(c+719,"s_out", false,-1);
    tracep->declBus(c+1097,"cnt", false,-1, 7,0);
    tracep->declArray(c+772,"data", false,-1, 127,0);
    tracep->declBus(c+1098,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+1099,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+1100,"rx_clk", false,-1);
    tracep->declBit(c+1101,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1127,"auto_in_psel", false,-1);
    tracep->declBit(c+1128,"auto_in_penable", false,-1);
    tracep->declBit(c+1013,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1124,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1353,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1129,"auto_in_pready", false,-1);
    tracep->declBit(c+1354,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1299,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1292,"uart_rx", false,-1);
    tracep->declBit(c+1293,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1127,"in_psel", false,-1);
    tracep->declBit(c+1128,"in_penable", false,-1);
    tracep->declBus(c+1353,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1129,"in_pready", false,-1);
    tracep->declBit(c+1354,"in_pslverr", false,-1);
    tracep->declBus(c+1140,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1013,"in_pwrite", false,-1);
    tracep->declBus(c+1299,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1014,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"uart_rx", false,-1);
    tracep->declBit(c+1293,"uart_tx", false,-1);
    tracep->declBit(c+777,"rtsn", false,-1);
    tracep->declBit(c+1354,"ctsn", false,-1);
    tracep->declBit(c+778,"dtr_pad_o", false,-1);
    tracep->declBit(c+1354,"dsr_pad_i", false,-1);
    tracep->declBit(c+1354,"ri_pad_i", false,-1);
    tracep->declBit(c+1354,"dcd_pad_i", false,-1);
    tracep->declBit(c+779,"interrupt", false,-1);
    tracep->declBit(c+1337,"reg_we", false,-1);
    tracep->declBit(c+1338,"reg_re", false,-1);
    tracep->declBus(c+1154,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1155,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+642,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1269,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+780,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1273,"wb_rst_i", false,-1);
    tracep->declBus(c+1154,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1156,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1269,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1337,"wb_we_i", false,-1);
    tracep->declBit(c+1338,"wb_re_i", false,-1);
    tracep->declBit(c+1293,"stx_pad_o", false,-1);
    tracep->declBit(c+1292,"srx_pad_i", false,-1);
    tracep->declBus(c+1425,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+780,"rts_pad_o", false,-1);
    tracep->declBit(c+778,"dtr_pad_o", false,-1);
    tracep->declBit(c+779,"int_o", false,-1);
    tracep->declBit(c+781,"enable", false,-1);
    tracep->declBit(c+782,"srx_pad", false,-1);
    tracep->declBus(c+783,"ier", false,-1, 3,0);
    tracep->declBus(c+784,"iir", false,-1, 3,0);
    tracep->declBus(c+785,"fcr", false,-1, 1,0);
    tracep->declBus(c+786,"mcr", false,-1, 4,0);
    tracep->declBus(c+787,"lcr", false,-1, 7,0);
    tracep->declBus(c+788,"msr", false,-1, 7,0);
    tracep->declBus(c+789,"dl", false,-1, 15,0);
    tracep->declBus(c+790,"scratch", false,-1, 7,0);
    tracep->declBit(c+791,"start_dlc", false,-1);
    tracep->declBit(c+792,"lsr_mask_d", false,-1);
    tracep->declBit(c+793,"msi_reset", false,-1);
    tracep->declBus(c+794,"dlc", false,-1, 15,0);
    tracep->declBus(c+795,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+796,"rx_reset", false,-1);
    tracep->declBit(c+797,"tx_reset", false,-1);
    tracep->declBit(c+798,"dlab", false,-1);
    tracep->declBit(c+1363,"cts_pad_i", false,-1);
    tracep->declBit(c+1354,"dsr_pad_i", false,-1);
    tracep->declBit(c+1354,"ri_pad_i", false,-1);
    tracep->declBit(c+1354,"dcd_pad_i", false,-1);
    tracep->declBit(c+799,"loopback", false,-1);
    tracep->declBit(c+1354,"cts", false,-1);
    tracep->declBit(c+1363,"dsr", false,-1);
    tracep->declBit(c+1363,"ri", false,-1);
    tracep->declBit(c+1363,"dcd", false,-1);
    tracep->declBit(c+800,"cts_c", false,-1);
    tracep->declBit(c+801,"dsr_c", false,-1);
    tracep->declBit(c+802,"ri_c", false,-1);
    tracep->declBit(c+803,"dcd_c", false,-1);
    tracep->declBus(c+804,"lsr", false,-1, 7,0);
    tracep->declBit(c+805,"lsr0", false,-1);
    tracep->declBit(c+806,"lsr1", false,-1);
    tracep->declBit(c+807,"lsr2", false,-1);
    tracep->declBit(c+808,"lsr3", false,-1);
    tracep->declBit(c+809,"lsr4", false,-1);
    tracep->declBit(c+810,"lsr5", false,-1);
    tracep->declBit(c+811,"lsr6", false,-1);
    tracep->declBit(c+812,"lsr7", false,-1);
    tracep->declBit(c+813,"lsr0r", false,-1);
    tracep->declBit(c+814,"lsr1r", false,-1);
    tracep->declBit(c+815,"lsr2r", false,-1);
    tracep->declBit(c+816,"lsr3r", false,-1);
    tracep->declBit(c+817,"lsr4r", false,-1);
    tracep->declBit(c+818,"lsr5r", false,-1);
    tracep->declBit(c+819,"lsr6r", false,-1);
    tracep->declBit(c+820,"lsr7r", false,-1);
    tracep->declBit(c+130,"lsr_mask", false,-1);
    tracep->declBit(c+821,"rls_int", false,-1);
    tracep->declBit(c+822,"rda_int", false,-1);
    tracep->declBit(c+823,"ti_int", false,-1);
    tracep->declBit(c+824,"thre_int", false,-1);
    tracep->declBit(c+825,"ms_int", false,-1);
    tracep->declBit(c+826,"tf_push", false,-1);
    tracep->declBit(c+827,"rf_pop", false,-1);
    tracep->declBus(c+1339,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+828,"rf_error_bit", false,-1);
    tracep->declBit(c+806,"rf_overrun", false,-1);
    tracep->declBit(c+829,"rf_push_pulse", false,-1);
    tracep->declBus(c+830,"rf_count", false,-1, 4,0);
    tracep->declBus(c+831,"tf_count", false,-1, 4,0);
    tracep->declBus(c+832,"tstate", false,-1, 2,0);
    tracep->declBus(c+833,"rstate", false,-1, 3,0);
    tracep->declBus(c+834,"counter_t", false,-1, 9,0);
    tracep->declBit(c+835,"thre_set_en", false,-1);
    tracep->declBus(c+836,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+837,"block_value", false,-1, 7,0);
    tracep->declBit(c+838,"serial_out", false,-1);
    tracep->declBit(c+839,"serial_in", false,-1);
    tracep->declBit(c+131,"lsr_mask_condition", false,-1);
    tracep->declBit(c+132,"iir_read", false,-1);
    tracep->declBit(c+133,"msr_read", false,-1);
    tracep->declBit(c+134,"fifo_read", false,-1);
    tracep->declBit(c+135,"fifo_write", false,-1);
    tracep->declBus(c+840,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+841,"lsr0_d", false,-1);
    tracep->declBit(c+842,"lsr1_d", false,-1);
    tracep->declBit(c+843,"lsr2_d", false,-1);
    tracep->declBit(c+844,"lsr3_d", false,-1);
    tracep->declBit(c+845,"lsr4_d", false,-1);
    tracep->declBit(c+846,"lsr5_d", false,-1);
    tracep->declBit(c+847,"lsr6_d", false,-1);
    tracep->declBit(c+848,"lsr7_d", false,-1);
    tracep->declBit(c+849,"rls_int_d", false,-1);
    tracep->declBit(c+850,"thre_int_d", false,-1);
    tracep->declBit(c+851,"ms_int_d", false,-1);
    tracep->declBit(c+852,"ti_int_d", false,-1);
    tracep->declBit(c+853,"rda_int_d", false,-1);
    tracep->declBit(c+854,"rls_int_rise", false,-1);
    tracep->declBit(c+855,"thre_int_rise", false,-1);
    tracep->declBit(c+856,"ms_int_rise", false,-1);
    tracep->declBit(c+857,"ti_int_rise", false,-1);
    tracep->declBit(c+858,"rda_int_rise", false,-1);
    tracep->declBit(c+859,"rls_int_pnd", false,-1);
    tracep->declBit(c+860,"rda_int_pnd", false,-1);
    tracep->declBit(c+861,"thre_int_pnd", false,-1);
    tracep->declBit(c+862,"ms_int_pnd", false,-1);
    tracep->declBit(c+863,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1433,"Tp", false,-1, 31,0);
    tracep->declBus(c+1433,"width", false,-1, 31,0);
    tracep->declBus(c+1406,"init_value", false,-1, 0,0);
    tracep->declBit(c+1273,"rst_i", false,-1);
    tracep->declBit(c+1272,"clk_i", false,-1);
    tracep->declBit(c+1354,"stage1_rst_i", false,-1);
    tracep->declBit(c+1363,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1292,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+782,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+864,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1273,"wb_rst_i", false,-1);
    tracep->declBus(c+787,"lcr", false,-1, 7,0);
    tracep->declBit(c+827,"rf_pop", false,-1);
    tracep->declBit(c+839,"srx_pad_i", false,-1);
    tracep->declBit(c+781,"enable", false,-1);
    tracep->declBit(c+796,"rx_reset", false,-1);
    tracep->declBit(c+130,"lsr_mask", false,-1);
    tracep->declBus(c+834,"counter_t", false,-1, 9,0);
    tracep->declBus(c+830,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1339,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+806,"rf_overrun", false,-1);
    tracep->declBit(c+828,"rf_error_bit", false,-1);
    tracep->declBus(c+833,"rstate", false,-1, 3,0);
    tracep->declBit(c+829,"rf_push_pulse", false,-1);
    tracep->declBus(c+865,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+866,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+867,"rshift", false,-1, 7,0);
    tracep->declBit(c+868,"rparity", false,-1);
    tracep->declBit(c+869,"rparity_error", false,-1);
    tracep->declBit(c+870,"rframing_error", false,-1);
    tracep->declBit(c+871,"rbit_in", false,-1);
    tracep->declBit(c+872,"rparity_xor", false,-1);
    tracep->declBus(c+873,"counter_b", false,-1, 7,0);
    tracep->declBit(c+874,"rf_push_q", false,-1);
    tracep->declBus(c+875,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+876,"rf_push", false,-1);
    tracep->declBit(c+877,"break_error", false,-1);
    tracep->declBit(c+878,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+879,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+880,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+881,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1361,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1423,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1422,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1418,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1420,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1419,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1421,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1417,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1425,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1426,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1434,"sr_push", false,-1, 3,0);
    tracep->declBus(c+882,"toc_value", false,-1, 9,0);
    tracep->declBus(c+883,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1435,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1436,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1401,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1437,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1273,"wb_rst_i", false,-1);
    tracep->declBit(c+829,"push", false,-1);
    tracep->declBit(c+827,"pop", false,-1);
    tracep->declBus(c+875,"data_in", false,-1, 10,0);
    tracep->declBit(c+796,"fifo_reset", false,-1);
    tracep->declBit(c+130,"reset_status", false,-1);
    tracep->declBus(c+1339,"data_out", false,-1, 10,0);
    tracep->declBit(c+806,"overrun", false,-1);
    tracep->declBus(c+830,"count", false,-1, 4,0);
    tracep->declBit(c+828,"error_bit", false,-1);
    tracep->declBus(c+1340,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+884+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+900,"top", false,-1, 3,0);
    tracep->declBus(c+901,"bottom", false,-1, 3,0);
    tracep->declBus(c+902,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+903,"word0", false,-1, 2,0);
    tracep->declBus(c+904,"word1", false,-1, 2,0);
    tracep->declBus(c+905,"word2", false,-1, 2,0);
    tracep->declBus(c+906,"word3", false,-1, 2,0);
    tracep->declBus(c+907,"word4", false,-1, 2,0);
    tracep->declBus(c+908,"word5", false,-1, 2,0);
    tracep->declBus(c+909,"word6", false,-1, 2,0);
    tracep->declBus(c+910,"word7", false,-1, 2,0);
    tracep->declBus(c+911,"word8", false,-1, 2,0);
    tracep->declBus(c+912,"word9", false,-1, 2,0);
    tracep->declBus(c+913,"word10", false,-1, 2,0);
    tracep->declBus(c+914,"word11", false,-1, 2,0);
    tracep->declBus(c+915,"word12", false,-1, 2,0);
    tracep->declBus(c+916,"word13", false,-1, 2,0);
    tracep->declBus(c+917,"word14", false,-1, 2,0);
    tracep->declBus(c+918,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1401,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1413,"data_width", false,-1, 31,0);
    tracep->declBus(c+1436,"depth", false,-1, 31,0);
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+829,"we", false,-1);
    tracep->declBus(c+900,"a", false,-1, 3,0);
    tracep->declBus(c+901,"dpra", false,-1, 3,0);
    tracep->declBus(c+919,"di", false,-1, 7,0);
    tracep->declBus(c+1340,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+643+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1273,"wb_rst_i", false,-1);
    tracep->declBus(c+787,"lcr", false,-1, 7,0);
    tracep->declBit(c+826,"tf_push", false,-1);
    tracep->declBus(c+1156,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+781,"enable", false,-1);
    tracep->declBit(c+797,"tx_reset", false,-1);
    tracep->declBit(c+130,"lsr_mask", false,-1);
    tracep->declBit(c+838,"stx_pad_o", false,-1);
    tracep->declBus(c+832,"tstate", false,-1, 2,0);
    tracep->declBus(c+831,"tf_count", false,-1, 4,0);
    tracep->declBus(c+920,"counter", false,-1, 4,0);
    tracep->declBus(c+921,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+922,"shift_out", false,-1, 6,0);
    tracep->declBit(c+923,"stx_o_tmp", false,-1);
    tracep->declBit(c+924,"parity_xor", false,-1);
    tracep->declBit(c+925,"tf_pop", false,-1);
    tracep->declBit(c+926,"bit_out", false,-1);
    tracep->declBus(c+1156,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1054,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+927,"tf_overrun", false,-1);
    tracep->declBus(c+1366,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1353,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1385,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1386,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1404,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1438,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1413,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1436,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1401,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1437,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+1273,"wb_rst_i", false,-1);
    tracep->declBit(c+826,"push", false,-1);
    tracep->declBit(c+925,"pop", false,-1);
    tracep->declBus(c+1156,"data_in", false,-1, 7,0);
    tracep->declBit(c+797,"fifo_reset", false,-1);
    tracep->declBit(c+130,"reset_status", false,-1);
    tracep->declBus(c+1054,"data_out", false,-1, 7,0);
    tracep->declBit(c+927,"overrun", false,-1);
    tracep->declBus(c+831,"count", false,-1, 4,0);
    tracep->declBus(c+928,"top", false,-1, 3,0);
    tracep->declBus(c+929,"bottom", false,-1, 3,0);
    tracep->declBus(c+930,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1401,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1413,"data_width", false,-1, 31,0);
    tracep->declBus(c+1436,"depth", false,-1, 31,0);
    tracep->declBit(c+1272,"clk", false,-1);
    tracep->declBit(c+826,"we", false,-1);
    tracep->declBus(c+928,"a", false,-1, 3,0);
    tracep->declBus(c+929,"dpra", false,-1, 3,0);
    tracep->declBus(c+1156,"di", false,-1, 7,0);
    tracep->declBus(c+1054,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+659+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBit(c+1045,"auto_in_psel", false,-1);
    tracep->declBit(c+1046,"auto_in_penable", false,-1);
    tracep->declBit(c+1013,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1123,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1353,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1014,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1355,"auto_in_pready", false,-1);
    tracep->declBit(c+1356,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1357,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1286,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1287,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1288,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1289,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1290,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1291,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1272,"clock", false,-1);
    tracep->declBit(c+1273,"reset", false,-1);
    tracep->declBus(c+1153,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1045,"in_psel", false,-1);
    tracep->declBit(c+1046,"in_penable", false,-1);
    tracep->declBus(c+1353,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1013,"in_pwrite", false,-1);
    tracep->declBus(c+1014,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1015,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1355,"in_pready", false,-1);
    tracep->declBus(c+1357,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1356,"in_pslverr", false,-1);
    tracep->declBus(c+1286,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1287,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1288,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1289,"vga_hsync", false,-1);
    tracep->declBit(c+1290,"vga_vsync", false,-1);
    tracep->declBit(c+1291,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1055,"sck", false,-1);
    tracep->declBit(c+1102,"ss", false,-1);
    tracep->declBit(c+719,"mosi", false,-1);
    tracep->declBit(c+1341,"miso", false,-1);
    tracep->declBus(c+136,"data", false,-1, 7,0);
    tracep->declBus(c+137,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1055,"sck", false,-1);
    tracep->declBit(c+1103,"ss", false,-1);
    tracep->declBit(c+719,"mosi", false,-1);
    tracep->declBit(c+1342,"miso", false,-1);
    tracep->declBit(c+1103,"reset", false,-1);
    tracep->declBus(c+1007,"state", false,-1, 2,0);
    tracep->declBus(c+1008,"counter", false,-1, 7,0);
    tracep->declBus(c+1343,"cmd", false,-1, 7,0);
    tracep->declBus(c+1344,"addr", false,-1, 23,0);
    tracep->declBus(c+1009,"data", false,-1, 31,0);
    tracep->declBit(c+1010,"ren", false,-1);
    tracep->declBus(c+138,"rdata", false,-1, 31,0);
    tracep->declBus(c+1345,"raddr", false,-1, 31,0);
    tracep->declBus(c+1346,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1055,"clock", false,-1);
    tracep->declBit(c+1010,"valid", false,-1);
    tracep->declBus(c+1343,"cmd", false,-1, 7,0);
    tracep->declBus(c+1345,"addr", false,-1, 31,0);
    tracep->declBus(c+138,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1157,"sck", false,-1);
    tracep->declBit(c+1158,"ce_n", false,-1);
    tracep->declBus(c+1295,"dio", false,-1, 3,0);
    tracep->declBus(c+1116,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1347,"dout", false,-1, 3,0);
    tracep->declBus(c+1295,"din", false,-1, 3,0);
    tracep->declBit(c+1348,"QPI_MODE", false,-1);
    tracep->declBus(c+1117,"cmd", false,-1, 7,0);
    tracep->declBus(c+1118,"addr", false,-1, 23,0);
    tracep->declBus(c+1349,"data", false,-1, 31,0);
    tracep->declBus(c+1350,"rdata", false,-1, 31,0);
    tracep->declBus(c+1119,"counter", false,-1, 7,0);
    tracep->declBus(c+1120,"state", false,-1, 3,0);
    tracep->declBus(c+1351,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1352,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1296,"clk", false,-1);
    tracep->declBit(c+1057,"cke", false,-1);
    tracep->declBit(c+1058,"cs", false,-1);
    tracep->declBit(c+1059,"ras", false,-1);
    tracep->declBit(c+1060,"cas", false,-1);
    tracep->declBit(c+1061,"we", false,-1);
    tracep->declBus(c+1159,"a", false,-1, 13,0);
    tracep->declBus(c+1062,"ba", false,-1, 1,0);
    tracep->declBus(c+1063,"dqm", false,-1, 3,0);
    tracep->declBus(c+1113,"dq", false,-1, 31,0);
    tracep->declBus(c+1104,"command", false,-1, 2,0);
    tracep->declBit(c+1107,"ras_u0", false,-1);
    tracep->declBit(c+1108,"cas_u0", false,-1);
    tracep->declBit(c+1109,"we_u0", false,-1);
    tracep->declBit(c+1110,"ras_u1", false,-1);
    tracep->declBit(c+1111,"cas_u1", false,-1);
    tracep->declBit(c+1112,"we_u1", false,-1);
    tracep->pushNamePrefix("sdram_double_u0 ");
    tracep->declBit(c+1296,"clk", false,-1);
    tracep->declBit(c+1057,"cke", false,-1);
    tracep->declBit(c+1058,"cs", false,-1);
    tracep->declBit(c+1107,"ras", false,-1);
    tracep->declBit(c+1108,"cas", false,-1);
    tracep->declBit(c+1109,"we", false,-1);
    tracep->declBus(c+1074,"a", false,-1, 12,0);
    tracep->declBus(c+1062,"ba", false,-1, 1,0);
    tracep->declBus(c+1063,"dqm", false,-1, 3,0);
    tracep->declBus(c+1113,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_single_u0 ");
    tracep->declBit(c+1296,"clk", false,-1);
    tracep->declBit(c+1057,"cke", false,-1);
    tracep->declBit(c+1058,"cs", false,-1);
    tracep->declBit(c+1107,"ras", false,-1);
    tracep->declBit(c+1108,"cas", false,-1);
    tracep->declBit(c+1109,"we", false,-1);
    tracep->declBus(c+1074,"a", false,-1, 12,0);
    tracep->declBus(c+1062,"ba", false,-1, 1,0);
    tracep->declBus(c+1105,"dqm", false,-1, 1,0);
    tracep->declBus(c+1114,"dq", false,-1, 15,0);
    tracep->declBus(c+1439,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1440,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1386,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1438,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1404,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1441,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1385,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1353,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1366,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1442,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+931+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+935,"dout_en", false,-1, 15,0);
    tracep->declBus(c+936,"dout", false,-1, 15,0);
    tracep->declBus(c+1114,"din", false,-1, 15,0);
    tracep->declBus(c+937,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+938,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1270,"command", false,-1, 2,0);
    tracep->declBus(c+939,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+940,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+941,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+942,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+943,"read_flag", false,-1);
    tracep->declBus(c+944,"R_Address", false,-1, 8,0);
    tracep->declBus(c+945,"W_Address", false,-1, 8,0);
    tracep->declBus(c+946,"W_Data", false,-1, 15,0);
    tracep->declBus(c+947,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+948,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+949,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_single_u1 ");
    tracep->declBit(c+1296,"clk", false,-1);
    tracep->declBit(c+1057,"cke", false,-1);
    tracep->declBit(c+1058,"cs", false,-1);
    tracep->declBit(c+1107,"ras", false,-1);
    tracep->declBit(c+1108,"cas", false,-1);
    tracep->declBit(c+1109,"we", false,-1);
    tracep->declBus(c+1074,"a", false,-1, 12,0);
    tracep->declBus(c+1062,"ba", false,-1, 1,0);
    tracep->declBus(c+1106,"dqm", false,-1, 1,0);
    tracep->declBus(c+1115,"dq", false,-1, 15,0);
    tracep->declBus(c+1439,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1440,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1386,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1438,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1404,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1441,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1385,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1353,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1366,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1442,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+950+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+954,"dout_en", false,-1, 15,0);
    tracep->declBus(c+955,"dout", false,-1, 15,0);
    tracep->declBus(c+1115,"din", false,-1, 15,0);
    tracep->declBus(c+956,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+957,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1270,"command", false,-1, 2,0);
    tracep->declBus(c+958,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+959,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+960,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+961,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+962,"read_flag", false,-1);
    tracep->declBus(c+963,"R_Address", false,-1, 8,0);
    tracep->declBus(c+964,"W_Address", false,-1, 8,0);
    tracep->declBus(c+965,"W_Data", false,-1, 15,0);
    tracep->declBus(c+966,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+967,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+968,"Length", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_double_u1 ");
    tracep->declBit(c+1296,"clk", false,-1);
    tracep->declBit(c+1057,"cke", false,-1);
    tracep->declBit(c+1058,"cs", false,-1);
    tracep->declBit(c+1110,"ras", false,-1);
    tracep->declBit(c+1111,"cas", false,-1);
    tracep->declBit(c+1112,"we", false,-1);
    tracep->declBus(c+1074,"a", false,-1, 12,0);
    tracep->declBus(c+1062,"ba", false,-1, 1,0);
    tracep->declBus(c+1063,"dqm", false,-1, 3,0);
    tracep->declBus(c+1113,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_single_u0 ");
    tracep->declBit(c+1296,"clk", false,-1);
    tracep->declBit(c+1057,"cke", false,-1);
    tracep->declBit(c+1058,"cs", false,-1);
    tracep->declBit(c+1110,"ras", false,-1);
    tracep->declBit(c+1111,"cas", false,-1);
    tracep->declBit(c+1112,"we", false,-1);
    tracep->declBus(c+1074,"a", false,-1, 12,0);
    tracep->declBus(c+1062,"ba", false,-1, 1,0);
    tracep->declBus(c+1105,"dqm", false,-1, 1,0);
    tracep->declBus(c+1114,"dq", false,-1, 15,0);
    tracep->declBus(c+1439,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1440,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1386,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1438,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1404,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1441,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1385,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1353,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1366,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1442,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+969+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+973,"dout_en", false,-1, 15,0);
    tracep->declBus(c+974,"dout", false,-1, 15,0);
    tracep->declBus(c+1114,"din", false,-1, 15,0);
    tracep->declBus(c+975,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+976,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1271,"command", false,-1, 2,0);
    tracep->declBus(c+977,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+978,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+979,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+980,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+981,"read_flag", false,-1);
    tracep->declBus(c+982,"R_Address", false,-1, 8,0);
    tracep->declBus(c+983,"W_Address", false,-1, 8,0);
    tracep->declBus(c+984,"W_Data", false,-1, 15,0);
    tracep->declBus(c+985,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+986,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+987,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_single_u1 ");
    tracep->declBit(c+1296,"clk", false,-1);
    tracep->declBit(c+1057,"cke", false,-1);
    tracep->declBit(c+1058,"cs", false,-1);
    tracep->declBit(c+1110,"ras", false,-1);
    tracep->declBit(c+1111,"cas", false,-1);
    tracep->declBit(c+1112,"we", false,-1);
    tracep->declBus(c+1074,"a", false,-1, 12,0);
    tracep->declBus(c+1062,"ba", false,-1, 1,0);
    tracep->declBus(c+1106,"dqm", false,-1, 1,0);
    tracep->declBus(c+1115,"dq", false,-1, 15,0);
    tracep->declBus(c+1439,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1440,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1386,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1438,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1404,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1441,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1385,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1353,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1366,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1442,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+988+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+992,"dout_en", false,-1, 15,0);
    tracep->declBus(c+993,"dout", false,-1, 15,0);
    tracep->declBus(c+1115,"din", false,-1, 15,0);
    tracep->declBus(c+994,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+995,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1271,"command", false,-1, 2,0);
    tracep->declBus(c+996,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+997,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+998,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+999,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+1000,"read_flag", false,-1);
    tracep->declBus(c+1001,"R_Address", false,-1, 8,0);
    tracep->declBus(c+1002,"W_Address", false,-1, 8,0);
    tracep->declBus(c+1003,"W_Data", false,-1, 15,0);
    tracep->declBus(c+1004,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1005,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1006,"Length", false,-1, 3,0);
    tracep->popNamePrefix(4);
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
    bufp->fullCData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[0]),8);
    bufp->fullCData(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[1]),8);
    bufp->fullCData(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[2]),8);
    bufp->fullCData(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[3]),8);
    bufp->fullCData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[4]),8);
    bufp->fullCData(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[5]),8);
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[6]),8);
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[7]),8);
    bufp->fullCData(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[8]),8);
    bufp->fullCData(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[9]),8);
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[10]),8);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[11]),8);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[12]),8);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[13]),8);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[14]),8);
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__segs[15]),8);
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[0]),8);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[1]),8);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[2]),8);
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[3]),8);
    bufp->fullCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[4]),8);
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[5]),8);
    bufp->fullCData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[6]),8);
    bufp->fullCData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[7]),8);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[8]),8);
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[9]),8);
    bufp->fullCData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[10]),8);
    bufp->fullCData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[11]),8);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[12]),8);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[13]),8);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[14]),8);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__segs[15]),8);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[0]),8);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[1]),8);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[2]),8);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[3]),8);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[4]),8);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[5]),8);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[6]),8);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[7]),8);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[8]),8);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[9]),8);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[10]),8);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[11]),8);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[12]),8);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[13]),8);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[14]),8);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__segs[15]),8);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[0]),8);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[1]),8);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[2]),8);
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[3]),8);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[4]),8);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[5]),8);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[6]),8);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[7]),8);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[8]),8);
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[9]),8);
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[10]),8);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[11]),8);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[12]),8);
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[13]),8);
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[14]),8);
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__segs[15]),8);
    bufp->fullCData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[0]),8);
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[1]),8);
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[2]),8);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[3]),8);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[4]),8);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[5]),8);
    bufp->fullCData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[6]),8);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[7]),8);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[8]),8);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[9]),8);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[10]),8);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[11]),8);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[12]),8);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[13]),8);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[14]),8);
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__segs[15]),8);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[0]),8);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[1]),8);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[2]),8);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[3]),8);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[4]),8);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[5]),8);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[6]),8);
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[7]),8);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[8]),8);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[9]),8);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[10]),8);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[11]),8);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[12]),8);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[13]),8);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[14]),8);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__segs[15]),8);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[0]),8);
    bufp->fullCData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[1]),8);
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[2]),8);
    bufp->fullCData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[3]),8);
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[4]),8);
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[5]),8);
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[6]),8);
    bufp->fullCData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[7]),8);
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[8]),8);
    bufp->fullCData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[9]),8);
    bufp->fullCData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[10]),8);
    bufp->fullCData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[11]),8);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[12]),8);
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[13]),8);
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[14]),8);
    bufp->fullCData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__segs[15]),8);
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[0]),8);
    bufp->fullCData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[1]),8);
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[2]),8);
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[3]),8);
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[4]),8);
    bufp->fullCData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[5]),8);
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[6]),8);
    bufp->fullCData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[7]),8);
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[8]),8);
    bufp->fullCData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[9]),8);
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[10]),8);
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[11]),8);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[12]),8);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[13]),8);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[14]),8);
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__segs[15]),8);
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data),8);
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),8);
    bufp->fullIData(oldp+138,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+139,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullQData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+162,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+166,(((0x2000000U == (0xffff0000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o))
                                ? 0U : 1U)),2);
    bufp->fullBit(oldp+167,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullQData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),64);
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),8);
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+174,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+178,(((0x2000000U == (0xffff0000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
                                ? 0U : 1U)),2);
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+181,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+183,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+185,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+186,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+231,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                       >> 8U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullWData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+237,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+243,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+246,((((QData)((IData)((0xffU 
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
    bufp->fullCData(oldp+248,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+249,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullSData(oldp+261,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullQData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullSData(oldp+264,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+267,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+268,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+269,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+270,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+271,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+280,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+340,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+344,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+348,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+352,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+360,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+372,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+380,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+384,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+388,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+392,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+396,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+400,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+404,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+408,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+412,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+416,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+420,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+424,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+428,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+432,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+436,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+440,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+444,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+448,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+452,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+456,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+460,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+464,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r));
    bufp->fullIData(oldp+471,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret)
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
    bufp->fullBit(oldp+472,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o));
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+475,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+476,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+477,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd),5);
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd_wen));
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs1),5);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs2),5);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+486,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullBit(oldp+489,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r))))));
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r),32);
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren));
    bufp->fullIData(oldp+492,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h623bd169__0
                                : 0U)),32);
    bufp->fullCData(oldp+493,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize)),3);
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__wen));
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o),32);
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_w_ready_i));
    bufp->fullCData(oldp+497,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)),3);
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret));
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullBit(oldp+504,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o)
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren)
                                        : 0U)))));
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o),32);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_size_o),3);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullBit(oldp+508,((1U & ((0x2000000U == (0xffff0000U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_aw_ready_i)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+509,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullBit(oldp+510,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullQData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_w_data_o),64);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_w_strb_o),8);
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_w_last_o));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_b_ready_o));
    bufp->fullBit(oldp+516,((1U & ((0x2000000U == (0xffff0000U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_ar_ready_i)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))))));
    bufp->fullBit(oldp+517,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullBit(oldp+518,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state),3);
    bufp->fullQData(oldp+520,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2))),64);
    bufp->fullCData(oldp+522,(((0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                ? 1U : ((1U == (7U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                         ? 3U : 0xfU))),8);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_cnt),8);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state),2);
    bufp->fullBit(oldp+525,(((0x2000000U == (0xffff0000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o)) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_aw_addr_o),32);
    bufp->fullCData(oldp+527,(((0x2000000U == (0xffff0000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o))
                                ? (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)
                                : 0U)),3);
    bufp->fullCData(oldp+528,(((0x2000000U == (0xffff0000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o))
                                ? 1U : 0U)),2);
    bufp->fullBit(oldp+529,(((0x2000000U == (0xffff0000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o)) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullQData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_w_data_o),64);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_w_strb_o),8);
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_w_last_o));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_b_ready_o));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_ar_ready_i));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_ar_valid_o));
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_ar_addr_o),32);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_ar_size_o),3);
    bufp->fullCData(oldp+539,(((0x2000000U == (0xffff0000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
                                ? 1U : 0U)),2);
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_r_ready_o));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_r_valid_i));
    bufp->fullQData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_r_data_i),64);
    bufp->fullQData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_clint__DOT__clint_data),64);
    bufp->fullQData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_clint__DOT__data_store),64);
    bufp->fullIData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_clint__DOT__addr),32);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_clint__DOT__clint_r_state),2);
    bufp->fullSData(oldp+550,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data),32);
    bufp->fullIData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data),32);
    bufp->fullIData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r),32);
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+560,((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data)))),33);
    bufp->fullQData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+564,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+568,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+569,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+570,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+571,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+572,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+573,((1U & ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
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
    bufp->fullIData(oldp+574,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data))) 
                                       >> (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data)))),32);
    bufp->fullCData(oldp+575,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+576,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+578,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+579,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+580,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullIData(oldp+581,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullSData(oldp+582,(((0x1000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+583,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+584,(((0x100000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+585,(((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_t),32);
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_t),32);
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__flush_inst));
    bufp->fullIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize),32);
    bufp->fullIData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+634,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+675,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+676,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4))));
    bufp->fullBit(oldp+677,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+678,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+679,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+680,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+681,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+682,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+683,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+684,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+685,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+686,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+687,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+688,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+689,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+690,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+691,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+692,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+693,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+694,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+695,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+696,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+697,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+698,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+701,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+702,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+707,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+708,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+709,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+710,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+711,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullIData(oldp+712,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
                                                   ? (IData)(vlSelf->__VdfgTmp_hc772c02b__0)
                                                   : 0U))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hc772c02b__0 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                  : 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hc772c02b__0 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                         : 0U))),32);
    bufp->fullBit(oldp+713,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_r_valid_i))));
    bufp->fullIData(oldp+714,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_hc772c02b__0)
                                : 0U)),32);
    bufp->fullBit(oldp+715,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_r_last_i))));
    bufp->fullBit(oldp+716,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                              : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen)))));
    bufp->fullCData(oldp+717,((3U & ((0x2000000U == 
                                      (0xffff0000U 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_b_resp_i)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                   << 1U))))))),2);
    bufp->fullCData(oldp+718,(((0x2000000U == (0xffff0000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
                                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19))),4);
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+722,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_apb_state)) 
                             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_apb_state)))));
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[0]),32);
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[1]),32);
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[2]),32);
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[3]),32);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__i),32);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_apb_state),2);
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+731,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                ? 0xeU : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0xbU : 
                                          (0xfU & (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U)
                                                    : 
                                                   ((3U 
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
    bufp->fullBit(oldp+732,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+735,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+736,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullBit(oldp+737,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_sck));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_ce_n));
    bufp->fullCData(oldp+740,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)))))
                                : 0U)),4);
    bufp->fullBit(oldp+741,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter),8);
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+747,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+751,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullSData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullIData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+777,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+778,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+780,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+798,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+799,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+800,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+801,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+802,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+803,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+804,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+807,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+808,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+809,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+828,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+835,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+854,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+855,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+856,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+857,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+858,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+877,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+878,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+879,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+880,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+881,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+883,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+902,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+919,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+930,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+931,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+932,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+933,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+934,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+935,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__read_flag)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+936,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__dout),16);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Brust_Length),3);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__L_Bank),2);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__R_Counter),4);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__W_Counter),4);
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__read_flag));
    bufp->fullSData(oldp+944,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__R_Address),9);
    bufp->fullSData(oldp+945,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__W_Address),9);
    bufp->fullSData(oldp+946,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__W_Data),16);
    bufp->fullIData(oldp+947,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+948,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Length),4);
    bufp->fullSData(oldp+950,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+951,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+952,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+953,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+954,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__read_flag)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+955,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__dout),16);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Brust_Length),3);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__R_Counter),4);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__W_Counter),4);
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__read_flag));
    bufp->fullSData(oldp+963,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__R_Address),9);
    bufp->fullSData(oldp+964,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__W_Address),9);
    bufp->fullSData(oldp+965,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__W_Data),16);
    bufp->fullIData(oldp+966,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+967,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Length),4);
    bufp->fullSData(oldp+969,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+970,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+971,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+972,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+973,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__read_flag)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+974,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__dout),16);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Brust_Length),3);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__L_Bank),2);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__R_Counter),4);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__W_Counter),4);
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__read_flag));
    bufp->fullSData(oldp+982,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__R_Address),9);
    bufp->fullSData(oldp+983,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__W_Address),9);
    bufp->fullSData(oldp+984,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__W_Data),16);
    bufp->fullIData(oldp+985,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+986,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Length),4);
    bufp->fullSData(oldp+988,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+989,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+990,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+991,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+992,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__read_flag)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+993,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__dout),16);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Brust_Length),3);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__R_Counter),4);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__W_Counter),4);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__read_flag));
    bufp->fullSData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__R_Address),9);
    bufp->fullSData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__W_Address),9);
    bufp->fullSData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__W_Data),16);
    bufp->fullIData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Length),4);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1010,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1012,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1026,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1027,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1028,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1029,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),32);
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state),4);
    bufp->fullCData(oldp+1037,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)),5);
    bufp->fullBit(oldp+1038,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullBit(oldp+1039,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+1040,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                  & (0xcU == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))) 
                                 << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (8U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+1041,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullBit(oldp+1043,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1044,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1045,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1046,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1047,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1048,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1049,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1050,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1051,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+1058,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1059,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1060,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1061,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__bcd7seg_u__b),4);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__bcd7seg_u__b),4);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__bcd7seg_u__b),4);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__bcd7seg_u__b),4);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__bcd7seg_u__b),4);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__bcd7seg_u__b),4);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__bcd7seg_u__b),4);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__bcd7seg_u__b),4);
    bufp->fullBit(oldp+1072,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullSData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullSData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullBit(oldp+1084,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+1085,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+1086,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+1087,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+1088,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1089,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1090,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+1093,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+1095,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+1096,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+1098,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+1102,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1104,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+1105,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1106,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1107,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 2U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 7U
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+1108,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 1U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 7U
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+1109,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                     : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                         ? 7U : (7U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))));
    bufp->fullBit(oldp+1110,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 2U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                    : 7U) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+1111,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 1U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                    : 7U) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+1112,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                     : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                         ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                         : 7U)))));
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1114,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+1115,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullCData(oldp+1116,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h299493e7__0)
                                 ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1123,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+1124,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_3_penable));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+1129,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+1139,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullIData(oldp+1140,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1143,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1144,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1149,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1150,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1151,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_double),3);
    bufp->fullIData(oldp+1153,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+1154,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullSData(oldp+1159,(vlSelf->ysyxSoCFull__DOT___asic_sdram_a),14);
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1166,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1212,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1213,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1214,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1215,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1216,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1217,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1218,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1219,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1220,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1221,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1222,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1223,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1224,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1225,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1226,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1227,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1228,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1229,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1230,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1231,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1232,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1233,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1234,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1235,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1237,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1240,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1243,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stall));
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_ready_i));
    bufp->fullIData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst),32);
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_last_i));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen));
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_b_valid_i));
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_r_valid_i));
    bufp->fullIData(oldp+1251,((IData)(vlSelf->__VdfgTmp_hc772c02b__0)),32);
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_r_last_i));
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_b_id_i),4);
    bufp->fullQData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_r_data_i),64);
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__command),3);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__command),3);
    bufp->fullBit(oldp+1272,(vlSelf->clock));
    bufp->fullBit(oldp+1273,(vlSelf->reset));
    bufp->fullSData(oldp+1274,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1275,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1276,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1277,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1278,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1279,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1280,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1281,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1282,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1283,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1284,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1285,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1286,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1287,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1288,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1289,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1290,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1291,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1292,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1293,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1294,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1296,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1297,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_apb_state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg
                                [(3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                        >> 2U))] : 0U)),32);
    bufp->fullBit(oldp+1298,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+1299,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1300,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                     : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                         : 0U)))));
    bufp->fullIData(oldp+1301,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
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
    bufp->fullQData(oldp+1302,((((QData)((IData)(((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((1U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->fullQData(oldp+1304,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
                                                 ? 
                                                (((QData)((IData)(
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
    bufp->fullCData(oldp+1306,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1308,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
                                                      ? (IData)(vlSelf->__VdfgTmp_hc772c02b__0)
                                                      : 0U))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    (((- (IData)(
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hc772c02b__0 
                                                                             >> 0xfU))))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                     : 
                                                    (((- (IData)(
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hc772c02b__0 
                                                                             >> 7U))))) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                                  : 0U))))),32);
    bufp->fullIData(oldp+1309,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                         [(0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                          : 0U))),32);
    bufp->fullCData(oldp+1310,(((0x2000000U == (0xffff0000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
                                 ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                           : 0U) | 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U)))),2);
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg[0]),8);
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg[1]),8);
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg[2]),8);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg[3]),8);
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg[4]),8);
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg[5]),8);
    bufp->fullCData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg[6]),8);
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg[7]),8);
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bcd7seg_u__h),8);
    bufp->fullIData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__0__KET____DOT__bcd7seg_u__DOT__i),32);
    bufp->fullCData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bcd7seg_u__h),8);
    bufp->fullIData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__1__KET____DOT__bcd7seg_u__DOT__i),32);
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellout__genblk1__BRA__2__KET____DOT__bcd7seg_u__h),8);
    bufp->fullIData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__2__KET____DOT__bcd7seg_u__DOT__i),32);
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellout__genblk1__BRA__3__KET____DOT__bcd7seg_u__h),8);
    bufp->fullIData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__3__KET____DOT__bcd7seg_u__DOT__i),32);
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellout__genblk1__BRA__4__KET____DOT__bcd7seg_u__h),8);
    bufp->fullIData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__4__KET____DOT__bcd7seg_u__DOT__i),32);
    bufp->fullCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellout__genblk1__BRA__5__KET____DOT__bcd7seg_u__h),8);
    bufp->fullIData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__5__KET____DOT__bcd7seg_u__DOT__i),32);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellout__genblk1__BRA__6__KET____DOT__bcd7seg_u__h),8);
    bufp->fullIData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__6__KET____DOT__bcd7seg_u__DOT__i),32);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____Vcellout__genblk1__BRA__7__KET____DOT__bcd7seg_u__h),8);
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__genblk1__BRA__7__KET____DOT__bcd7seg_u__DOT__i),32);
    bufp->fullBit(oldp+1335,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1336,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1339,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1342,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1345,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1347,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h6b154942__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1352,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1353,(1U),3);
    bufp->fullBit(oldp+1354,(0U));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullCData(oldp+1361,(0U),4);
    bufp->fullCData(oldp+1362,(0U),8);
    bufp->fullBit(oldp+1363,(1U));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1365,(0U),32);
    bufp->fullCData(oldp+1366,(0U),3);
    bufp->fullCData(oldp+1367,(0U),2);
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullQData(oldp+1369,(0ULL),64);
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullQData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),64);
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_result_t),32);
    bufp->fullCData(oldp+1383,(1U),2);
    bufp->fullCData(oldp+1384,(2U),2);
    bufp->fullCData(oldp+1385,(2U),3);
    bufp->fullCData(oldp+1386,(3U),3);
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_cnt),8);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_aw_ready_i));
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_w_ready_i));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_b_valid_i));
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_b_resp_i),2);
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_b_id_i),4);
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+1395,(0U),5);
    bufp->fullIData(oldp+1396,(0xdU),32);
    bufp->fullIData(oldp+1397,(0xcU),32);
    bufp->fullIData(oldp+1398,(0x15U),32);
    bufp->fullIData(oldp+1399,(0x20U),32);
    bufp->fullIData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst_t),32);
    bufp->fullIData(oldp+1401,(4U),32);
    bufp->fullIData(oldp+1402,(2U),32);
    bufp->fullCData(oldp+1403,(0x35U),8);
    bufp->fullCData(oldp+1404,(4U),3);
    bufp->fullBit(oldp+1405,(0U));
    bufp->fullBit(oldp+1406,(1U));
    bufp->fullCData(oldp+1407,(0x15U),8);
    bufp->fullCData(oldp+1408,(0xebU),8);
    bufp->fullCData(oldp+1409,(0x38U),8);
    bufp->fullIData(oldp+1410,(0x64U),32);
    bufp->fullIData(oldp+1411,(0x18U),32);
    bufp->fullIData(oldp+1412,(9U),32);
    bufp->fullIData(oldp+1413,(8U),32);
    bufp->fullIData(oldp+1414,(0x2000U),32);
    bufp->fullIData(oldp+1415,(0x2710U),32);
    bufp->fullIData(oldp+1416,(0x30cU),32);
    bufp->fullCData(oldp+1417,(7U),4);
    bufp->fullCData(oldp+1418,(3U),4);
    bufp->fullCData(oldp+1419,(5U),4);
    bufp->fullCData(oldp+1420,(4U),4);
    bufp->fullCData(oldp+1421,(6U),4);
    bufp->fullCData(oldp+1422,(2U),4);
    bufp->fullCData(oldp+1423,(1U),4);
    bufp->fullSData(oldp+1424,(0x20U),13);
    bufp->fullCData(oldp+1425,(8U),4);
    bufp->fullCData(oldp+1426,(9U),4);
    bufp->fullIData(oldp+1427,(0xaU),32);
    bufp->fullIData(oldp+1428,(6U),32);
    bufp->fullIData(oldp+1429,(0x11U),32);
    bufp->fullIData(oldp+1430,(0x30000000U),32);
    bufp->fullIData(oldp+1431,(0x3fffffffU),32);
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+1433,(1U),32);
    bufp->fullCData(oldp+1434,(0xaU),4);
    bufp->fullIData(oldp+1435,(0xbU),32);
    bufp->fullIData(oldp+1436,(0x10U),32);
    bufp->fullIData(oldp+1437,(5U),32);
    bufp->fullCData(oldp+1438,(5U),3);
    bufp->fullIData(oldp+1439,(3U),32);
    bufp->fullCData(oldp+1440,(7U),3);
    bufp->fullCData(oldp+1441,(6U),3);
    bufp->fullIData(oldp+1442,(0x400000U),32);
}
