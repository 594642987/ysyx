`include"ysyx_23060077_riscv_define.v"
module ysyx_23060077_riscv_bpu(
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

wire [`DATA_WIDTH-1:0]       npc;
assign npc = ((branch && !zero_flag) || jal) ? (pc + imm) : (jalr ? (src1 + imm) : (pc + 4));

ysyx_23060077_riscv_dff #(
  .WIDTH(`DATA_WIDTH), 
  .RESET_VAL(32'h8000_0000)
)riscv_dff_pc(
    .clk    (clk),
    .rst_n  (rst_n),
    .wen    (1'b1),
    .din    (npc),
    .dout   (pc)
  
);



endmodule
