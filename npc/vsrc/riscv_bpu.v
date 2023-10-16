`include"riscv_define.v"
module riscv_bpu(
    input 	                            clk,
    input 	                            rst_n,

    input                               zero_flag,
    input                               branch,

    input                               jal,
    input                               jalr,

    input       [`DATA_WIDTH-1:0]       src1,
    input       [`DATA_WIDTH-1:0]       imm,

    output      [`DATA_WIDTH-1:0]       pc

);
assign tpc = 32'h8000_0000;
assign pc = rst_n ? npc : tpc;

wire [`DATA_WIDTH-1:0]       npc;
wire [`DATA_WIDTH-1:0]       tpc;

assign npc = ((branch && !zero_flag) || jal) ? (pc + imm) : (jalr ? (src1 + imm) : (pc + 4));

riscv_dff #(
  .WIDTH(`DATA_WIDTH), 
  .RESET_VAL(32'h8000_0000)
)riscv_dff_pc(
    .clk    (clk),
    .rst_n  (rst_n),
    .wen    (1'b1),
    .din    (npc),
    .dout   (tpc)
  
);


endmodule
