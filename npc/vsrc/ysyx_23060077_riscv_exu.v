`include"ysyx_23060077_riscv_define.v"
module ysyx_23060077_riscv_exu(
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

wire [`DATA_WIDTH-1:0] alu_a_data;
wire [`DATA_WIDTH-1:0] alu_b_data;
wire [`DATA_WIDTH-1:0] alu_out_data;
wire carry_flag;
wire signed_flag;
ysyx_23060077_riscv_mux#(
    .NR_KEY      (4), 
    .KEY_LEN     (`SRC_SEL_WIDTH), 
    .DATA_LEN    (`DATA_WIDTH+`DATA_WIDTH)
)riscv_mux_ex_src_sel(
  .key              (src_sel),
  .default_out      (0),
  .out              ({alu_a_data,alu_b_data}),
  .lut({`SRC_SEL_RS1_2  , {src1 ,src2   },
        `SRC_SEL_RS1_IMM, {src1 ,imm    },
        `SRC_SEL_PC_4   , {pc   ,32'd4  },
        `SRC_SEL_PC_IMM , {pc   ,imm    }
  })
);

ysyx_23060077_riscv_ex_alu riscv_ex_alu(
   .alu_opt         (alu_opt),
   .alu_a_data      (alu_a_data),
   .alu_b_data      (alu_b_data),
   .alu_out_data    (alu_out_data)
);

ysyx_23060077_riscv_mux#(
    .NR_KEY      (6), 
    .KEY_LEN     (4), 
    .DATA_LEN    (`DATA_WIDTH)
)riscv_mux_ex_branch(
  .key              ({branch,funct3}),
  .default_out      (alu_out_data),
  .out              (exu_result),
  .lut({{1'b1,3'b000}, {{(`DATA_WIDTH-1){1'b0}}, ~(|alu_out_data)},     //beq
        {1'b1,3'b001}, {{(`DATA_WIDTH-1){1'b0}}, (|alu_out_data)},     //bne
        {1'b1,3'b100}, {{(`DATA_WIDTH-1){1'b0}}, alu_out_data[0]},     //blt
        {1'b1,3'b101}, {{(`DATA_WIDTH-1){1'b0}}, !alu_out_data[0]},     //bge
        {1'b1,3'b110}, {{(`DATA_WIDTH-1){1'b0}}, alu_out_data[0]},     //bltu
        {1'b1,3'b111}, {{(`DATA_WIDTH-1){1'b0}}, !alu_out_data[0]}      //bgeu
  })
);

endmodule

