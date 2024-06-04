`include"ysyx_23060077_riscv_define.v"
module ysyx_23060077_riscv_idu(
    input 	    [`INST_WIDTH-1:0]       inst,

    output                              branch,
    output                              jal,
    output                              jalr,

    output  	[`REG_WIDTH-1:0]        rd,
    output  	                        rd_wen,
    output  	[`REG_WIDTH-1:0]        rs1,
    output  	[`REG_WIDTH-1:0]        rs2,


    output      [`DATA_WIDTH-1:0]       imm,

    output      [`ALU_OPT_WIDTH-1:0]    alu_opt,
    output      [`SRC_SEL_WIDTH-1:0]    src_sel,
    output      [`LSU_OPT_WIDTH-1:0]    lsu_opt,
    output      [2:0]                   funct3

);

assign  branch  = (inst[6:0] == `BRANCH)    ? 1'b1 : 1'b0;
assign  jal     = (inst[6:0] == `JAL)       ? 1'b1 : 1'b0;
assign  jalr    = (inst[6:0] == `JALR)      ? 1'b1 : 1'b0;


wire [6:0]  opcode;
wire [6:0]  funct7;

assign opcode   = inst[6:0];
assign funct3   = inst[14:12];
assign funct7   = inst[31:25];

wire [`REG_WIDTH-1:0] reg_zero;
assign reg_zero = {`REG_WIDTH{1'b0}};

ysyx_23060077_riscv_mux#(
  .NR_KEY      (11), 
  .KEY_LEN     (7), 
  .DATA_LEN    (`REG_WIDTH+`REG_WIDTH+`REG_WIDTH+1)
)riscv_mux_id_reg(
  .key                (opcode),
  .default_out        (0),
  .out                ({rs1,rs2,rd,rd_wen}),
  .lut({    `LUI   ,  {reg_zero   , reg_zero   , inst[11:7], 1'b1},
            `AUIPC ,  {reg_zero   , reg_zero   , inst[11:7], 1'b1},
            `JAL   ,  {reg_zero   , reg_zero   , inst[11:7], 1'b1},
            `JALR  ,  {inst[19:15], reg_zero   , inst[11:7], 1'b1},
            `BRANCH,  {inst[19:15], inst[24:20], reg_zero  , 1'b0},
            `LOAD  ,  {inst[19:15], reg_zero   , inst[11:7], 1'b1},
            `STORE ,  {inst[19:15], inst[24:20], reg_zero  , 1'b0},
            `OP_IMM,  {inst[19:15], reg_zero   , inst[11:7], 1'b1},
            `OP    ,  {inst[19:15], inst[24:20], inst[11:7], 1'b1},
            `FENCE ,  {reg_zero   , reg_zero   , reg_zero  , 1'b0},
            `SYS   ,  {inst[19:15], reg_zero   , inst[11:7], 1'b1}
  })
);

ysyx_23060077_riscv_id_imm riscv_id_imm_idu(
    .inst      (inst),
    .imm       (imm)
);

ysyx_23060077_riscv_id_opt riscv_id_opt_idu(
    .opcode     (opcode),
    .funct3     (funct3),
    .funct7     (funct7),
    .alu_opt    (alu_opt  ),
    .src_sel    (src_sel  ),
    .lsu_opt    (lsu_opt  )
);

endmodule
