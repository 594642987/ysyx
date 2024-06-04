`include"ysyx_23060077_riscv_define.v"
module ysyx_23060077_riscv_id_opt(
    input 	    [6:0]                   opcode,
    input 	    [2:0]                   funct3,
    input 	    [6:0]                   funct7,
    output  reg [`ALU_OPT_WIDTH-1:0]    alu_opt,
    output      [`SRC_SEL_WIDTH-1:0]    src_sel,
    output      [`LSU_OPT_WIDTH-1:0]    lsu_opt
);

always @(*)begin
    alu_opt = 4'd0;
    case(opcode)    
        `LUI   :begin alu_opt = `ALU_ADD;       end     //lui
        `AUIPC :begin alu_opt = `ALU_ADD;       end     //auipc
        `JAL   :begin alu_opt = `ALU_ADD;       end     //jal
        `JALR  :begin alu_opt = `ALU_ADD;       end     //jalr
        `BRANCH:begin 
            case(funct3)
                3'b000 :begin alu_opt = `ALU_SUB ;  end     //beq
                3'b001 :begin alu_opt = `ALU_SUB ;  end     //bne
                3'b100 :begin alu_opt = `ALU_SLT ;  end     //blt
                3'b101 :begin alu_opt = `ALU_SLT ;  end     //bge
                3'b110 :begin alu_opt = `ALU_SLTU;  end     //bltu
                3'b111 :begin alu_opt = `ALU_SLTU;  end     //bgeu
                default : alu_opt = 4'd0;
            endcase
        end
        `LOAD  :begin alu_opt = `ALU_ADD;    end            //lb,lh,lw,lbu,lhu
        `STORE :begin alu_opt = `ALU_ADD;    end            //sb,sh,sw
        `OP_IMM:begin 
            case(funct3)
                3'b000 :begin alu_opt = `ALU_ADD;   end//addi
                3'b010 :begin alu_opt = `ALU_SUB;   end//slti
                3'b011 :begin alu_opt = `ALU_SLTU;  end//sltiu
                3'b100 :begin alu_opt = `ALU_XOR;   end//xori
                3'b110 :begin alu_opt = `ALU_OR;    end//ori
                3'b111 :begin alu_opt = `ALU_AND;   end//andi
                3'b001 :begin alu_opt = `ALU_SLL;   end//slli
                3'b101 :begin                          
                    case(funct7)                       
                        7'b000_0000 : begin alu_opt = `ALU_SRL;     end //srli
                        7'b010_0000 : begin alu_opt = `ALU_SRA;     end //srai
                        default : alu_opt = 4'd0;
                    endcase
                end
                default : alu_opt = 4'd0;
            endcase
        end
        `OP    :begin 
            case(funct3)
                3'b000:begin
                    case(funct7)
                        7'b000_0000 : begin alu_opt = `ALU_ADD;     end // add
                        7'b010_0000 : begin alu_opt = `ALU_SUB;     end // sub
                        default : alu_opt = 4'd0;
                    endcase                                            
                end                                                    
                3'b001:begin alu_opt = `ALU_SLL;end                    // sll
                3'b010:begin alu_opt = `ALU_SLT;end                    // slt  
                3'b011:begin alu_opt = `ALU_SLTU;end                   //sltu
                3'b100:begin alu_opt = `ALU_XOR;end                    // xor
                3'b101:begin                                           
                    case(funct7)                                       
                        7'b000_0000 : begin alu_opt = `ALU_SRL;     end // srl
                        7'b010_0000 : begin alu_opt = `ALU_SRA;     end // sra
                        default : alu_opt = 4'd0;
                    endcase
                end
                3'b110:begin alu_opt = `ALU_OR ;end                     // or
                3'b111:begin alu_opt = `ALU_AND;end                     // and
                default : alu_opt = 4'd0;
            endcase
        end
        `FENCE :begin alu_opt = `ALU_AND; end
        `SYS   :begin alu_opt = `ALU_AND; end
        default : alu_opt = 4'd0;
    endcase

end


// ysyx_23060077_ysyx_23060077_riscv_mux#(
//     .NR_KEY      (33), 
//     .KEY_LEN     (17), 
//     .DATA_LEN    (`ALU_OPT_WIDTH)
// )ysyx_23060077_riscv_mux_id_alu_opt(
//   .key              ({opcode,funct3,funct7}),  //opcode + func_code + [31:25]
//   .default_out      (4'd0),
//   .out              ({alu_opt}),
//   .lut({  {`LUI   , 3'b???, 7'b???_????}, {`ALU_ADD},   //lui
//           {`AUIPC , 3'b???, 7'b???_????}, {`ALU_ADD},   //auipc
//           {`JAL   , 3'b???, 7'b???_????}, {`ALU_ADD},   //jal
//           {`JALR  , 3'b???, 7'b???_????}, {`ALU_ADD},   //jalr
//           {`BRANCH, 3'b000, 7'b???_????}, {`ALU_SUB},   //beq
//           {`BRANCH, 3'b001, 7'b???_????}, {`ALU_SUB},   //bne
//           {`BRANCH, 3'b100, 7'b???_????}, {`ALU_SUB},   //blt
//           {`BRANCH, 3'b101, 7'b???_????}, {`ALU_SUB},   //bge
//           {`BRANCH, 3'b110, 7'b???_????}, {`ALU_SUBU},  //bltu
//           {`BRANCH, 3'b111, 7'b???_????}, {`ALU_SUBU},  //bgeu
//           {`LOAD  , 3'b???, 7'b???_????}, {`ALU_ADD},   //lb,lh,lw,lbu,lhu
//           {`STORE , 3'b???, 7'b???_????}, {`ALU_ADD},   //sb,sh,sw
//           {`OP_IMM, 3'b000, 7'b???_????}, {`ALU_ADD},   //addi
//           {`OP_IMM, 3'b010, 7'b???_????}, {`ALU_SUB},   //slti
//           {`OP_IMM, 3'b011, 7'b???_????}, {`ALU_SLTU},  //sltiu
//           {`OP_IMM, 3'b100, 7'b???_????}, {`ALU_XOR},   //xori
//           {`OP_IMM, 3'b110, 7'b???_????}, {`ALU_OR},    //ori
//           {`OP_IMM, 3'b111, 7'b???_????}, {`ALU_AND},   //andi
//           {`OP_IMM, 3'b001, 7'b000_0000}, {`ALU_SLL},   //slli
//           {`OP_IMM, 3'b101, 7'b000_0000}, {`ALU_SRL},   //srli
//           {`OP_IMM, 3'b101, 7'b010_0000}, {`ALU_SRA},   //srai
//           {`OP    , 3'b000, 7'b000_0000}, {`ALU_ADD},   // add
//           {`OP    , 3'b000, 7'b010_0000}, {`ALU_SUB},   // sub
//           {`OP    , 3'b001, 7'b000_0000}, {`ALU_SLL},   // sll
//           {`OP    , 3'b010, 7'b000_0000}, {`ALU_SLT},   // slt
//           {`OP    , 3'b011, 7'b000_0000}, {`ALU_SLTU},  //sltu
//           {`OP    , 3'b100, 7'b000_0000}, {`ALU_XOR},   // xor
//           {`OP    , 3'b101, 7'b000_0000}, {`ALU_SRL},   // srl
//           {`OP    , 3'b101, 7'b010_0000}, {`ALU_SRA},   // sra
//           {`OP    , 3'b110, 7'b000_0000}, {`ALU_OR },   // or
//           {`OP    , 3'b111, 7'b000_0000}, {`ALU_AND},   // and
//           {`FENCE , 3'b???, 7'b???_????}, {`ALU_AND},
//           {`SYS   , 3'b???, 7'b???_????}, {`ALU_AND}
//   })
// );

ysyx_23060077_riscv_mux#(
    .NR_KEY      (11), 
    .KEY_LEN     (7), 
    .DATA_LEN    (`SRC_SEL_WIDTH)
)riscv_mux_id_src_sel(
    .key              (opcode),//opcode
    .default_out      (`SRC_SEL_RS1_IMM),
    .out              (src_sel),
    .lut({  `LUI   ,{`SRC_SEL_RS1_IMM},
            `AUIPC ,{`SRC_SEL_PC_IMM},
            `JAL   ,{`SRC_SEL_PC_4},
            `JALR  ,{`SRC_SEL_PC_4},
            `BRANCH,{`SRC_SEL_RS1_2},
            `LOAD  ,{`SRC_SEL_RS1_IMM},
            `STORE ,{`SRC_SEL_RS1_IMM},
            `OP_IMM,{`SRC_SEL_RS1_IMM},
            `OP    ,{`SRC_SEL_RS1_2},
            `FENCE ,{`SRC_SEL_RS1_IMM},
            `SYS   ,{`SRC_SEL_RS1_IMM}
  })
);


ysyx_23060077_riscv_mux#(
    .NR_KEY      (3), 
    .KEY_LEN     (7), 
    .DATA_LEN    (`LSU_OPT_WIDTH)
)ysyx_23060077_riscv_mux_id_lsu_opt(
    .key              ({opcode}),//opcode
    .default_out      (`LSU_OPT_NONE),
    .out              (lsu_opt),
    .lut({  `LOAD  ,{`LSU_OPT_LOAD},
            `STORE ,{`LSU_OPT_STORE},
            `SYS   ,{`LSU_OPT_SYS}
  })
);

endmodule


