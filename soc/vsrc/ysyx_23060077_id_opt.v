`include"ysyx_23060077_define.v"
module ysyx_23060077_id_opt(
    input 	    [6:0]                   opcode,
    input 	    [2:0]                   funct3,
    input 	    [6:0]                   funct7,
    output  reg [`ALU_OPT_WIDTH-1:0]    alu_opt,
    output  reg [`SRC_SEL_WIDTH-1:0]    src_sel,
    output  reg [`LSU_OPT_WIDTH-1:0]    lsu_opt
);

always @(*)begin
    alu_opt = `ALU_NONE;
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
                default : alu_opt = `ALU_NONE;
            endcase
        end
        `LOAD  :begin alu_opt = `ALU_NONE;    end            //lb,lh,lw,lbu,lhu
        `STORE :begin alu_opt = `ALU_NONE;    end            //sb,sh,sw
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
                        default : alu_opt = `ALU_NONE;
                    endcase
                end
                default : alu_opt = `ALU_NONE;
            endcase
        end
        `OP    :begin 
            case(funct3)
                3'b000:begin
                    case(funct7)
                        7'b000_0000 : begin alu_opt = `ALU_ADD;     end // add
                        7'b010_0000 : begin alu_opt = `ALU_SUB;     end // sub
                        default : alu_opt = `ALU_NONE;
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
                        default : alu_opt = `ALU_NONE;
                    endcase
                end
                3'b110:begin alu_opt = `ALU_OR ;end                     // or
                3'b111:begin alu_opt = `ALU_AND;end                     // and
                default : alu_opt = `ALU_NONE;
            endcase
        end
        `FENCE :begin alu_opt = `ALU_AND; end
        `SYS   :begin alu_opt = `ALU_AND; end
        default : alu_opt = `ALU_NONE;
    endcase

end


always @(*) begin
    case(opcode)
        `LUI   : src_sel = `SRC_SEL_RS1_IMM ;
        `AUIPC : src_sel = `SRC_SEL_PC_IMM  ;
        `JAL   : src_sel = `SRC_SEL_PC_4    ;
        `JALR  : src_sel = `SRC_SEL_PC_4    ;
        `BRANCH: src_sel = `SRC_SEL_RS1_2   ;
        `LOAD  : src_sel = `SRC_SEL_RS1_IMM ;
        `STORE : src_sel = `SRC_SEL_RS1_IMM ;
        `OP_IMM: src_sel = `SRC_SEL_RS1_IMM ;
        `OP    : src_sel = `SRC_SEL_RS1_2   ;
        `FENCE : src_sel = `SRC_SEL_RS1_IMM ;
        `SYS   : src_sel = `SRC_SEL_RS1_IMM ;
        default: src_sel = `SRC_SEL_RS1_IMM ; 
    endcase
end


always @(*) begin
    case(opcode)
        `LOAD  : lsu_opt = `LSU_OPT_LOAD    ;
        `STORE : lsu_opt = `LSU_OPT_STORE   ;
        `SYS   : lsu_opt = `LSU_OPT_SYS     ;
        default: lsu_opt = `LSU_OPT_NONE    ; 
    endcase
end


endmodule


