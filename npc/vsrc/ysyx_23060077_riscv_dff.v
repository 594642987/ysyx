// 触发器模板
module ysyx_23060077_riscv_dff #(
  WIDTH = 1, 
  RESET_VAL = 0
) (
  input clk,
  input rst_n,
  input wen,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout
  
);
initial begin
  dout = RESET_VAL;
end
  always @(posedge clk) begin
    if (!rst_n) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule

// // 使用触发器模板的示例
// module example(
//   input clk,
//   input rst,
//   input [3:0] in,
//   output [3:0] out
// );
//   // 位宽为1比特, 复位值为1'b1, 写使能一直有效
//   Reg #(1, 1'b1) i0 (clk, rst, in[0], out[0], 1'b1);
//   // 位宽为3比特, 复位值为3'b0, 写使能为out[0]
//   Reg #(3, 3'b0) i1 (clk, rst, in[3:1], out[3:1], out[0]);
// endmodule
