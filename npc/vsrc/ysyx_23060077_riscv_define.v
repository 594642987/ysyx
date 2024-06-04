
`define INST_WIDTH          32
`define DATA_WIDTH          32
`define CSR_WIDTH           12
`define REG_WIDTH            5
`define REG_COUNT           (1<<`REG_WIDTH)


// opcode
`define LUI     7'b01101_11     //lui
`define AUIPC   7'b00101_11     //auipc
`define JAL     7'b11011_11     //jal
`define JALR    7'b11001_11     //jalr
`define BRANCH  7'b11000_11     //beq,bne,blt,bge,bltu,bgeu
`define LOAD    7'b00000_11     //lb,lh,lw,lbu,lhu
`define STORE   7'b01000_11     //sb,sh,sw
`define OP_IMM  7'b00100_11     //addi,slti,sltiu,xori,ori,andi,slli,srli,srai
`define OP      7'b01100_11     //add,sub,sll,slt,ltu,xor,srl,sra,or,and
`define FENCE   7'b00011_11     //fence,fence.i
`define SYS     7'b11100_11     //ecall,ebreak,csrrw,csrrs,csrrc,csrrwi,cssrrsi,csrrci  

`define ALU_OPT_WIDTH      4
`define ALU_ADD         `ALU_OPT_WIDTH'd1
`define ALU_SUB         `ALU_OPT_WIDTH'd2
`define ALU_SLL         `ALU_OPT_WIDTH'd3
`define ALU_SLT         `ALU_OPT_WIDTH'd4
`define ALU_SLTU        `ALU_OPT_WIDTH'd5
`define ALU_XOR         `ALU_OPT_WIDTH'd6
`define ALU_SRL         `ALU_OPT_WIDTH'd7
`define ALU_SRA         `ALU_OPT_WIDTH'd8
`define ALU_OR          `ALU_OPT_WIDTH'd9
`define ALU_AND         `ALU_OPT_WIDTH'd10
`define ALU_SUBU        `ALU_OPT_WIDTH'd11

`define SRC_SEL_WIDTH      2
`define SRC_SEL_RS1_2   `SRC_SEL_WIDTH'd0
`define SRC_SEL_RS1_IMM `SRC_SEL_WIDTH'd1
`define SRC_SEL_PC_4    `SRC_SEL_WIDTH'd2
`define SRC_SEL_PC_IMM  `SRC_SEL_WIDTH'd3

`define LSU_OPT_WIDTH      2
`define LSU_OPT_NONE    `LSU_OPT_WIDTH'd0
`define LSU_OPT_LOAD    `LSU_OPT_WIDTH'd1
`define LSU_OPT_STORE   `LSU_OPT_WIDTH'd2
`define LSU_OPT_SYS     `LSU_OPT_WIDTH'd3



// csr reg addr
`define CSR_M_CYCLE     `CSR_WIDTH'hb00    
`define CSR_MSTATUS     `CSR_WIDTH'h300
`define CSR_MIE         `CSR_WIDTH'h304
`define CSR_MTVEC       `CSR_WIDTH'h305    
`define CSR_MEPC        `CSR_WIDTH'h341
`define CSR_MCAUSE      `CSR_WIDTH'h342
`define CSR_MTVAL       `CSR_WIDTH'h343
`define CSR_MINSTRET    `CSR_WIDTH'hb02
`define CSR_MSCRATCH    `CSR_WIDTH'h340

