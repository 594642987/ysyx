`include"ysyx_23060077_define.v"
module ysyx_23060077_idu(
    input 	    [`INST_WIDTH-1:0]       inst,

    output                              branch,
    output                              jal,
    output                              jalr,

    output  reg [`REG_WIDTH-1:0]        rd,
    output  reg                         rd_wen,
    output  reg [`REG_WIDTH-1:0]        rs1,
    output  reg [`REG_WIDTH-1:0]        rs2,


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


always @(*) begin
  case(opcode)
      `LUI   : {rs1,rs2,rd,rd_wen} = {reg_zero   , reg_zero   , inst[11:7], 1'b1} ;
      `AUIPC : {rs1,rs2,rd,rd_wen} = {reg_zero   , reg_zero   , inst[11:7], 1'b1} ;
      `JAL   : {rs1,rs2,rd,rd_wen} = {reg_zero   , reg_zero   , inst[11:7], 1'b1} ;
      `JALR  : {rs1,rs2,rd,rd_wen} = {inst[19:15], reg_zero   , inst[11:7], 1'b1} ;
      `BRANCH: {rs1,rs2,rd,rd_wen} = {inst[19:15], inst[24:20], reg_zero  , 1'b0} ;
      `LOAD  : {rs1,rs2,rd,rd_wen} = {inst[19:15], reg_zero   , inst[11:7], 1'b1} ;
      `STORE : {rs1,rs2,rd,rd_wen} = {inst[19:15], inst[24:20], reg_zero  , 1'b0} ;
      `OP_IMM: {rs1,rs2,rd,rd_wen} = {inst[19:15], reg_zero   , inst[11:7], 1'b1} ;
      `OP    : {rs1,rs2,rd,rd_wen} = {inst[19:15], inst[24:20], inst[11:7], 1'b1} ;
      `FENCE : {rs1,rs2,rd,rd_wen} = {reg_zero   , reg_zero   , reg_zero  , 1'b0} ;
      `SYS   : {rs1,rs2,rd,rd_wen} = {inst[19:15], reg_zero   , inst[11:7], 1'b1} ;
      default: {rs1,rs2,rd,rd_wen} = 'd0 ; 
  endcase
end

ysyx_23060077_id_imm id_imm_idu(
    .inst      (inst),
    .imm       (imm)
);

ysyx_23060077_id_opt id_opt_idu(
    .opcode     (opcode),
    .funct3     (funct3),
    .funct7     (funct7),
    .alu_opt    (alu_opt  ),
    .src_sel    (src_sel  ),
    .lsu_opt    (lsu_opt  )
);

endmodule
