`include"ysyx_23060077_define.v"
module ysyx_23060077_exu(
    input 	    [`DATA_WIDTH-1:0]       pc,

    input  	    [`DATA_WIDTH-1:0]       src1,
    input  	    [`DATA_WIDTH-1:0]       src2,

    input       [`DATA_WIDTH-1:0]       imm,

    input                               branch,

    input       [`ALU_OPT_WIDTH-1:0]    alu_opt,
    input       [`SRC_SEL_WIDTH-1:0]    src_sel,
    input       [2:0]                   funct3,

    output                              zero_flag,
    output      [`DATA_WIDTH-1:0]       exu_result
);
// 将每个bit或起来取反
assign zero_flag = ~(|exu_result);

reg  [`DATA_WIDTH-1:0] alu_a_data;
reg  [`DATA_WIDTH-1:0] alu_b_data;
wire [`DATA_WIDTH-1:0] alu_out_data;
wire carry_flag;
wire signed_flag;

always @(*) begin
  	case(src_sel)
      	`SRC_SEL_RS1_2    : begin alu_a_data = src1;  alu_b_data = src2 ; end
      	`SRC_SEL_RS1_IMM  : begin alu_a_data = src1;  alu_b_data = imm  ; end
      	`SRC_SEL_PC_4     : begin alu_a_data = pc  ;  alu_b_data = 32'd4; end
      	`SRC_SEL_PC_IMM   : begin alu_a_data = pc  ;  alu_b_data = imm  ; end
      	default:            begin alu_a_data = 'd0 ;  alu_b_data = 'd0  ; end
  	endcase
end


ysyx_23060077_ex_alu ex_alu(
   	.alu_opt         (alu_opt),
   	.alu_a_data      (alu_a_data),
   	.alu_b_data      (alu_b_data),
   	.alu_out_data    (alu_out_data)
);

reg [`DATA_WIDTH-1:0]   exu_result_r;
assign exu_result = exu_result_r;
always @(*) begin
  	case({branch,funct3})
  	    {1'b1,3'b000} : exu_result_r = {{(`DATA_WIDTH-1){1'b0}}, ~(|alu_out_data)} ;
  	    {1'b1,3'b001} : exu_result_r = {{(`DATA_WIDTH-1){1'b0}}, (|alu_out_data)}  ;
  	    {1'b1,3'b100} : exu_result_r = {{(`DATA_WIDTH-1){1'b0}}, alu_out_data[0]}  ;
  	    {1'b1,3'b101} : exu_result_r = {{(`DATA_WIDTH-1){1'b0}}, !alu_out_data[0]} ;
  	    {1'b1,3'b110} : exu_result_r = {{(`DATA_WIDTH-1){1'b0}}, alu_out_data[0]}  ;
  	    {1'b1,3'b111} : exu_result_r = {{(`DATA_WIDTH-1){1'b0}}, !alu_out_data[0]} ;
  	    default:    	exu_result_r = alu_out_data; 
  	endcase
end


endmodule

