`include"ysyx_23060077_define.v"
module ysyx_23060077_ex_alu(
   input            [`ALU_OPT_WIDTH-1:0]    alu_opt,
    input           [`DATA_WIDTH-1:0]       alu_a_data,
    input           [`DATA_WIDTH-1:0]       alu_b_data,
    output  	      [`DATA_WIDTH-1:0]       alu_out_data
);

wire sub_flag = (alu_opt == `ALU_SUB || alu_opt == `ALU_SLT || alu_opt == `ALU_SLTU);

wire [`DATA_WIDTH:0] alu_a_t = {alu_a_data[`DATA_WIDTH-1],alu_a_data};
wire [`DATA_WIDTH:0] alu_b_t = {alu_b_data[`DATA_WIDTH-1],alu_b_data} ^ {(`DATA_WIDTH+1){sub_flag}};
wire [`DATA_WIDTH:0] cin     = {{(`DATA_WIDTH){1'b0}},sub_flag};
wire [`DATA_WIDTH:0] add_out = alu_a_t + alu_b_t + cin;

wire top_A = alu_a_t[`DATA_WIDTH];
wire top_B = alu_b_t[`DATA_WIDTH];
wire top_C = add_out[`DATA_WIDTH];

wire sign_flag = add_out[`DATA_WIDTH-1];
wire over_flag = add_out[`DATA_WIDTH] ^ add_out[`DATA_WIDTH-1];
/*
减法的时候  
*/
wire carry_flag = ((top_A|top_B|top_C) & (top_A|!top_B|!top_C) & (!top_A|top_B|!top_C) & (!top_A|!top_B|top_C)) ^ sub_flag;
// wire carry_flag = ((top_A&top_B&top_C) | (!top_A&!top_B&top_C) | (top_A&!top_B&!top_C) | (!top_A&top_B&!top_C)) ^ sub_flag;

wire [`DATA_WIDTH-1:0] sra_result = {{{(`DATA_WIDTH){alu_a_data[`DATA_WIDTH-1]}},alu_a_data} >> alu_b_data[5:0]}[`DATA_WIDTH-1:0] ;
// wire [`DATA_WIDTH-1:0]sra_result = {{{(`DATA_WIDTH){alu_a_data[`DATA_WIDTH-1]}},alu_a_data} >> alu_b_data[5:0]} ;

reg [`DATA_WIDTH-1:0]       alu_out_data_r;
assign alu_out_data = alu_out_data_r;
always @(*) begin
  case(alu_opt)
      `ALU_ADD  : alu_out_data_r = add_out[`DATA_WIDTH-1:0]                       ;
      `ALU_SUB  : alu_out_data_r = add_out[`DATA_WIDTH-1:0]                       ;
      `ALU_SLL  : alu_out_data_r = alu_a_data << alu_b_data[4:0]                  ;
      `ALU_SLT  : alu_out_data_r = {{(`DATA_WIDTH-1){1'b0}},sign_flag^over_flag}  ;
      `ALU_SLTU : alu_out_data_r = {{(`DATA_WIDTH-1){1'b0}},carry_flag}           ;
      `ALU_XOR  : alu_out_data_r = alu_a_data ^ alu_b_data                        ;
      `ALU_SRL  : alu_out_data_r = alu_a_data >> alu_b_data[4:0]                  ;
      `ALU_SRA  : alu_out_data_r = sra_result                                     ;
      `ALU_OR   : alu_out_data_r = alu_a_data | alu_b_data                        ;
      `ALU_AND  : alu_out_data_r = alu_a_data & alu_b_data                        ;
      `ALU_SUBU : alu_out_data_r = add_out[`DATA_WIDTH-1:0]                       ;
      default:    alu_out_data_r = 'd0; 
  endcase
end

endmodule
