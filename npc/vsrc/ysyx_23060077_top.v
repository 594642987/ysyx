module ysyx_23060077_top(
	input clk,
	input rst_n
);

// wire rst_n;

// ysyx_23060077_riscv_dff #(
//   .WIDTH(1), 
//   .RESET_VAL(1'b0)
// )riscv_dff_pc(
//     .clk    (clk),
//     .rst_n  (1'b1),
//     .wen    (1'b1),
//     .din    (i_rst_n),
//     .dout   (rst_n)
  
// );

// ifu
reg  [`DATA_WIDTH-1:0]      ifu_pc;
wire [`INST_WIDTH-1:0]      ifu_inst;

// idu
wire                       	idu_branch		;
wire                       	idu_jal		    ;
wire                       	idu_jalr		;
wire [`REG_WIDTH-1:0]   	idu_rd			;
wire                       	idu_rd_wen		;
wire [`REG_WIDTH-1:0]   	idu_rs1		    ;
wire [`REG_WIDTH-1:0]   	idu_rs2		    ;
wire [`DATA_WIDTH-1:0]     	idu_imm		    ;
wire [`ALU_OPT_WIDTH-1:0]   idu_alu_opt	    ;
wire [`SRC_SEL_WIDTH-1:0]   idu_src_sel	    ;
wire [`LSU_OPT_WIDTH-1:0]   idu_lsu_opt	    ;
wire [2:0]                  idu_funct3	    ;

//regfile
wire [`DATA_WIDTH-1:0]     	src1			;
wire [`DATA_WIDTH-1:0]     	src2			;
wire [`DATA_WIDTH-1:0]     	rd_data		    ;

//exu
wire                        zero_flag		;
wire [`DATA_WIDTH-1:0]      exu_result		;

//lsu
wire [`DATA_WIDTH-1:0]     	lsu_result		;

//csr
wire                        csr_ecall;
wire                        csr_mret;
wire [`DATA_WIDTH-1:0]     	wr_csr_data		;
wire [`DATA_WIDTH-1:0]     	rd_csr_data		;
wire [`DATA_WIDTH-1:0]      csr_mstatus     ;
wire [`DATA_WIDTH-1:0]      csr_mtvec       ;
wire [`INST_WIDTH-1:0]      csr_mpec        ;

// ysyx_23060077_riscv_bpu   ysyx_23060077_riscv_bpu_u0(
//     .clk            (clk      ),
//     .rst_n          (rst_n    ),
//     .zero_flag      (zero_flag),
//     .branch         (idu_branch   ),
//     .jal            (idu_jal      ),
//     .jalr           (idu_jalr     ),
//     .src1           (src1     ),
//     .imm            (idu_imm      ),
//     .pc             (ifu_pc       )
// );

initial begin
    ifu_pc = 32'h8000_0000;
end
always @(posedge clk) begin
    if(!rst_n)begin
        ifu_pc <= 32'h8000_0000;
    end
    else if(csr_mret)begin
        ifu_pc <= csr_mpec;
    end
    else if(csr_ecall)begin
        ifu_pc <= csr_mtvec;
    end
    else if((idu_branch && !zero_flag) || idu_jal)begin
        ifu_pc <= ifu_pc + idu_imm;
    end
    else if(idu_jalr)begin
        ifu_pc <= src1 + idu_imm;
    end
    else begin
        ifu_pc <= ifu_pc + 4;
    end
end


ysyx_23060077_riscv_ifu riscv_ifu_u0(
    .rst_n	(rst_n),
    .pc		(ifu_pc),
    .inst	(ifu_inst)
);


ysyx_23060077_riscv_idu riscv_idu_u0(
    .inst			(ifu_inst	),
    .branch			(idu_branch	),
    .jal			(idu_jal		),
    .jalr			(idu_jalr	),
    .rd				(idu_rd		),
    .rd_wen			(idu_rd_wen	),
    .rs1			(idu_rs1		),
    .rs2			(idu_rs2		),
    .imm			(idu_imm		),
    .alu_opt		(idu_alu_opt	),
    .src_sel		(idu_src_sel	),
    .lsu_opt		(idu_lsu_opt	),
    .funct3		    (idu_funct3	)
);

ysyx_23060077_riscv_regfile riscv_regfile_u0(
    .clk			(clk		),
    .rst_n          (rst_n      ),
    .rs1_addr		(idu_rs1	),
    .rs1_data		(src1		),
    .rs2_addr		(idu_rs2	),
    .rs2_data		(src2		),
    .rd_en			(idu_rd_wen		),
    .rd_addr		(idu_rd	),
    .rd_data		(rd_data	)	
);


ysyx_23060077_riscv_exu riscv_exu_u0(
    .pc				(ifu_pc			),
    .src1			(src1		),
    .src2			(src2		),
    .imm			(idu_imm		),
    .branch			(idu_branch		),
    .alu_opt		(idu_alu_opt	),
    .src_sel		(idu_src_sel	),
    .funct3		    (idu_funct3),
    .zero_flag		(zero_flag),
    .exu_result		(exu_result)
);

ysyx_23060077_riscv_lsu riscv_lsu_u0(
    .clk			(clk		),
    .rst_n          (rst_n      ),
    .exu_result		(exu_result),
    .src2			(src2),
    .lsu_opt		(idu_lsu_opt),
    .funct3		    (idu_funct3),
    .lsu_result		(lsu_result)
);

assign wr_csr_data = ifu_inst[14] ? {27'd0,ifu_inst[19:15]} : src1;
assign csr_ecall = (ifu_inst[6:0] == `SYS && ifu_inst[14:12] == 3'b000 && ifu_inst[31:20] == 12'd0);
assign csr_mret  = (ifu_inst[6:0] == `SYS && ifu_inst[14:12] == 3'b000 && ifu_inst[31:20] == 12'b0011_0000_0010);

ysyx_23060077_riscv_csr  riscv_csr_u0 (
    .clk                     ( clk                          ),
    .rst_n                   ( rst_n                        ),
    .wr_addr                 ( idu_imm[`CSR_WIDTH-1:0]      ),
    .wr_data                 ( wr_csr_data                  ),
    .rd_addr                 ( idu_imm[`CSR_WIDTH-1:0]      ),
    .rd_data                 ( rd_csr_data                  ),

    .i_csr_ecall             ( csr_ecall                    ),
    .i_csr_mret              ( csr_mret                     ),

    .i_inst                  ( ifu_inst                     ),
    .i_pc                    ( ifu_pc                       ),

    .o_mstatus               ( csr_mstatus                  ),
    .o_mtvec                 ( csr_mtvec                    ),
    .o_mpec                  ( csr_mpec                     )
);

ysyx_23060077_riscv_wbu riscv_wbu_u0(
    .lsu_opt		(idu_lsu_opt),
    .exu_result		(exu_result),
    .lsu_result		(lsu_result),
    .csr_result     (rd_csr_data),
    .wbu_result		(rd_data)
    
);


endmodule

