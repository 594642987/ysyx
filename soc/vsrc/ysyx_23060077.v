`include"ysyx_23060077_axi_define.v"
`include"ysyx_23060077_define.v"

module ysyx_23060077(
	input                       clock               ,
	input                       reset               ,
    input                       io_interrupt        ,

    input                       io_master_awready   ,
    output                      io_master_awvalid   ,
    output      [31:0]          io_master_awaddr    ,
    output      [3:0]           io_master_awid      ,
    output      [7:0]           io_master_awlen     ,
    output      [2:0]           io_master_awsize    ,
    output      [1:0]           io_master_awburst   ,
    input                       io_master_wready    ,
    output                      io_master_wvalid    ,
    output      [63:0]          io_master_wdata     ,
    output      [7:0]           io_master_wstrb     ,
    output                      io_master_wlast     ,
    output                      io_master_bready    ,
    input                       io_master_bvalid    ,
    input       [1:0]           io_master_bresp     ,
    input       [3:0]           io_master_bid       ,
    input                       io_master_arready   ,
    output                      io_master_arvalid   ,
    output      [31:0]          io_master_araddr    ,
    output      [3:0]           io_master_arid      ,
    output      [7:0]           io_master_arlen     ,
    output      [2:0]           io_master_arsize    ,
    output      [1:0]           io_master_arburst   ,
    output                      io_master_rready    ,
    input                       io_master_rvalid    ,
    input       [1:0]           io_master_rresp     ,
    input       [63:0]          io_master_rdata     ,
    input                       io_master_rlast     ,
    input       [3:0]           io_master_rid       ,

    output                      io_slave_awready    ,
    input                       io_slave_awvalid    ,
    input       [31:0]          io_slave_awaddr     ,
    input       [3:0]           io_slave_awid       ,
    input       [7:0]           io_slave_awlen      ,
    input       [2:0]           io_slave_awsize     ,
    input       [1:0]           io_slave_awburst    ,
    output                      io_slave_wready     ,
    input                       io_slave_wvalid     ,
    input       [63:0]          io_slave_wdata      ,
    input       [7:0]           io_slave_wstrb      ,
    input                       io_slave_wlast      ,
    input                       io_slave_bready     ,
    output                      io_slave_bvalid     ,
    output      [1:0]           io_slave_bresp      ,
    output      [3:0]           io_slave_bid        ,
    output                      io_slave_arready    ,
    input                       io_slave_arvalid    ,
    input       [31:0]          io_slave_araddr     ,
    input       [3:0]           io_slave_arid       ,
    input       [7:0]           io_slave_arlen      ,
    input       [2:0]           io_slave_arsize     ,
    input       [1:0]           io_slave_arburst    ,
    input                       io_slave_rready     ,
    output                      io_slave_rvalid     ,
    output      [1:0]           io_slave_rresp      ,
    output      [63:0]          io_slave_rdata      ,
    output                      io_slave_rlast      ,
    output      [3:0]           io_slave_rid        
);


// ifu
wire [`DATA_WIDTH-1:0]      ifu_pc          ;
wire [`INST_WIDTH-1:0]      ifu_inst        ;
wire [`INST_WIDTH-1:0]      ifu_inst_t      ;
wire                        ifu_stall       ;

wire [`DATA_WIDTH-1:0]      jump_pc         ;
wire                        jump_pc_valid   ;
wire                        stall           ; 

wire                        ifu_r_valid_o   ;
wire [`AXI_ADDR_WIDTH-1:0]  ifu_r_addr_o    ;
wire                        ifu_r_ready_i   ;
wire [`DATA_WIDTH-1:0]      ifu_r_data_i    ;
wire [`AXI_LEN_WIDTH-1:0]   ifu_r_len_o     ;
wire                        ifu_r_last_i    ;

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
reg  [`DATA_WIDTH-1:0]      exu_result		;
wire [`DATA_WIDTH-1:0]      exu_result_t	;

//lsu
wire [`DATA_WIDTH-1:0]     	lsu_result		;
wire                        mem_stall       ;     
wire                        lsu_rd_wen      ; 

wire                        lsu_r_valid_o   ;
wire [`AXI_ADDR_WIDTH-1:0]  lsu_r_addr_o    ;
wire                        lsu_r_ready_i   ;
wire [`DATA_WIDTH-1:0]      lsu_r_data_i    ;
wire [`AXI_SIZE_WIDTH-1:0]  lsu_r_size_o    ;
wire [`AXI_LEN_WIDTH-1:0]   lsu_r_len_o     ;
wire                        lsu_r_last_i    ;
wire                        lsu_w_valid_o   ;
wire [`AXI_ADDR_WIDTH-1:0]  lsu_w_addr_o    ;
wire                        lsu_w_ready_i   ;
wire [`DATA_WIDTH-1:0]      lsu_w_data_o    ;
wire [`AXI_SIZE_WIDTH-1:0]  lsu_w_size_o    ;
wire [`AXI_LEN_WIDTH-1:0]   lsu_w_len_o     ;
wire                        lsu_w_last_i    ;

//wbu
wire                        wbu_rd_wen      ;

//csr
wire                        csr_ecall       ;
wire                        csr_mret        ;
wire [`DATA_WIDTH-1:0]     	wr_csr_data		;
wire [`DATA_WIDTH-1:0]     	rd_csr_data		;
wire [`DATA_WIDTH-1:0]      csr_mstatus     ;
wire [`DATA_WIDTH-1:0]      csr_mtvec       ;
wire [`INST_WIDTH-1:0]      csr_mpec        ;


assign jump_pc = csr_mret ? csr_mpec : (csr_ecall ? csr_mtvec :(((idu_branch && !zero_flag) || idu_jal) ? ifu_pc + idu_imm : (idu_jalr ? src1 + idu_imm : 'd0)));
assign jump_pc_valid = csr_mret | csr_ecall | ((idu_branch && !zero_flag) || idu_jal) | idu_jalr;

assign stall = mem_stall;

ysyx_23060077_ifu ifu_u0(
    .clk            ( clock         ),
    .reset          ( reset         ),
    .jump_pc        ( jump_pc       ),
    .jump_pc_valid  ( jump_pc_valid ),
    .stall          ( stall         ),
    .wbu_stall      ( lsu_rd_wen    ),

    .ifu_r_valid_o  ( ifu_r_valid_o ),
    .ifu_r_addr_o   ( ifu_r_addr_o  ),
    .ifu_r_ready_i  ( ifu_r_ready_i ),
    .ifu_r_data_i   ( ifu_r_data_i  ),
    .ifu_r_len_o    ( ifu_r_len_o   ),
    .ifu_r_last_i   ( ifu_r_last_i  ),

    .ifu_stall      ( ifu_stall     ),
    .ifu_pc_o       ( ifu_pc        ),
    .ifu_inst_o     ( ifu_inst      )
);


ysyx_23060077_idu idu_u0(
    .inst			( ifu_inst	    ),
    .branch			( idu_branch	),
    .jal			( idu_jal		),
    .jalr			( idu_jalr	    ),
    .rd				( idu_rd		),
    .rd_wen			( idu_rd_wen	),
    .rs1			( idu_rs1		),
    .rs2			( idu_rs2		),
    .imm			( idu_imm		),
    .alu_opt		( idu_alu_opt	),
    .src_sel		( idu_src_sel	),
    .lsu_opt		( idu_lsu_opt	),
    .funct3		    ( idu_funct3	)
);

ysyx_23060077_regfile regfile_u0(
    .clk			( clock		    ),
    .reset          ( reset         ),
    .rs1_addr		( idu_rs1	    ),
    .rs1_data		( src1		    ),
    .rs2_addr		( idu_rs2	    ),
    .rs2_data		( src2		    ),
    .rd_en			( wbu_rd_wen    ),
    .rd_addr		( idu_rd	    ),
    .rd_data		( rd_data	    )	
);


ysyx_23060077_exu exu_u0(
    .pc				( ifu_pc		),
    .src1			( src1		    ),
    .src2			( src2		    ),
    .imm			( idu_imm		),
    .branch			( idu_branch	),
    .alu_opt		( idu_alu_opt	),
    .src_sel		( idu_src_sel	),
    .funct3		    ( idu_funct3    ),
    .zero_flag		( zero_flag     ),
    .exu_result		( exu_result    )
);

ysyx_23060077_lsu lsu_u0(
    .clk			( clock		    ),
    .reset          ( reset         ),
    .src1           ( src1          ),
    .src2           ( src2          ),
    .imm            ( idu_imm       ),
    .lsu_opt		( idu_lsu_opt   ),
    .funct3		    ( idu_funct3    ),
    .ifu_stall      ( ifu_stall     ),

    .lsu_r_valid_o  ( lsu_r_valid_o ),
    .lsu_r_addr_o   ( lsu_r_addr_o  ),
    .lsu_r_ready_i  ( lsu_r_ready_i ),
    .lsu_r_data_i   ( lsu_r_data_i  ),
    .lsu_r_size_o   ( lsu_r_size_o  ),
    .lsu_r_len_o    ( lsu_r_len_o   ),
    .lsu_r_last_i   ( lsu_r_last_i  ),
    .lsu_w_valid_o  ( lsu_w_valid_o ),
    .lsu_w_addr_o   ( lsu_w_addr_o  ),
    .lsu_w_ready_i  ( lsu_w_ready_i ),
    .lsu_w_data_o   ( lsu_w_data_o  ),
    .lsu_w_size_o   ( lsu_w_size_o  ),
    .lsu_w_len_o    ( lsu_w_len_o   ),
    .lsu_w_last_i   ( lsu_w_last_i  ),

    .mem_stall      ( mem_stall     ),
    .lsu_rd_wen     ( lsu_rd_wen    ),
    .lsu_result		( lsu_result    )
);

assign wr_csr_data = ifu_inst[14] ? {27'd0,ifu_inst[19:15]} : src1;
assign csr_ecall = (ifu_inst[6:0] == `SYS && ifu_inst[14:12] == 3'b000 && ifu_inst[31:20] == 12'd0);
assign csr_mret  = (ifu_inst[6:0] == `SYS && ifu_inst[14:12] == 3'b000 && ifu_inst[31:20] == 12'b0011_0000_0010);

ysyx_23060077_csr  csr_u0 (
    .clk            ( clock                     ),
    .reset          ( reset                     ),
    .wr_addr        ( idu_imm[`CSR_WIDTH-1:0]   ),
    .wr_data        ( wr_csr_data               ),
    .rd_addr        ( idu_imm[`CSR_WIDTH-1:0]   ),
    .rd_data        ( rd_csr_data               ),

    .i_csr_ecall    ( csr_ecall                 ),
    .i_csr_mret     ( csr_mret                  ),

    .i_inst         ( ifu_inst                  ),
    .i_pc           ( ifu_pc                    ),

    .o_mstatus      ( csr_mstatus               ),
    .o_mtvec        ( csr_mtvec                 ),
    .o_mpec         ( csr_mpec                  )
);

ysyx_23060077_wbu wbu_u0(
    .lsu_opt		( idu_lsu_opt               ),

    .exu_result		( exu_result                ),
    .lsu_result		( lsu_result                ),
    .csr_result     ( rd_csr_data               ),

    .lsu_rd_wen     ( lsu_rd_wen                ),
    .idu_rd_wen     ( idu_rd_wen & !ifu_stall   ),
    .wbu_rd_wen     ( wbu_rd_wen                ),
    .wbu_result		( rd_data                   )
    
);

ysyx_23060077_axi_arbiter axi_arbiter_u0(
    .aclk           ( clock             ),
    .areset_n       ( reset             ),
    .ifu_r_valid_i  ( ifu_r_valid_o     ),
    .ifu_r_addr_i   ( ifu_r_addr_o      ),
    .ifu_r_ready_o  ( ifu_r_ready_i     ),
    .ifu_r_data_o   ( ifu_r_data_i      ),
    .ifu_r_len_i    ( ifu_r_len_o       ),
    .ifu_r_last_o   ( ifu_r_last_i      ),

    .lsu_r_valid_i  ( lsu_r_valid_o     ),
    .lsu_r_addr_i   ( lsu_r_addr_o      ),
    .lsu_r_ready_o  ( lsu_r_ready_i     ),
    .lsu_r_data_o   ( lsu_r_data_i      ),
    .lsu_r_size_i   ( lsu_r_size_o      ),
    .lsu_r_len_i    ( lsu_r_len_o       ),
    .lsu_r_last_o   ( lsu_r_last_i      ),
    .lsu_w_valid_i  ( lsu_w_valid_o     ),
    .lsu_w_addr_i   ( lsu_w_addr_o      ),
    .lsu_w_ready_o  ( lsu_w_ready_i     ),
    .lsu_w_data_i   ( lsu_w_data_o      ),
    .lsu_w_size_i   ( lsu_w_size_o      ),
    .lsu_w_len_i    ( lsu_w_len_o       ),
    .lsu_w_last_o   ( lsu_w_last_i      ),

    .axi_aw_ready_i ( io_master_awready ),
    .axi_aw_valid_o ( io_master_awvalid ),
    .axi_aw_addr_o  ( io_master_awaddr  ),
    .axi_aw_id_o    ( io_master_awid    ),
    .axi_aw_len_o   ( io_master_awlen   ),
    .axi_aw_size_o  ( io_master_awsize  ),
    .axi_aw_burst_o ( io_master_awburst ),
    .axi_w_ready_i  ( io_master_wready  ),
    .axi_w_valid_o  ( io_master_wvalid  ),
    .axi_w_data_o   ( io_master_wdata   ),
    .axi_w_strb_o   ( io_master_wstrb   ),
    .axi_w_last_o   ( io_master_wlast   ),
    .axi_b_ready_o  ( io_master_bready  ),
    .axi_b_valid_i  ( io_master_bvalid  ),
    .axi_b_resp_i   ( io_master_bresp   ),
    .axi_b_id_i     ( io_master_bid     ),
    .axi_ar_ready_i ( io_master_arready ),
    .axi_ar_valid_o ( io_master_arvalid ),
    .axi_ar_addr_o  ( io_master_araddr  ),
    .axi_ar_id_o    ( io_master_arid    ),
    .axi_ar_len_o   ( io_master_arlen   ),
    .axi_ar_size_o  ( io_master_arsize  ),
    .axi_ar_burst_o ( io_master_arburst ),
    .axi_r_ready_o  ( io_master_rready  ),
    .axi_r_valid_i  ( io_master_rvalid  ),
    .axi_r_resp_i   ( io_master_rresp   ),
    .axi_r_data_i   ( io_master_rdata   ),
    .axi_r_last_i   ( io_master_rlast   ),
    .axi_r_id_i     ( io_master_rid     )
);

import "DPI-C" function void set_pc_ptr(input int pc, input int inst, input bit valid);
always @(*)begin
    set_pc_ptr(ifu_pc,ifu_inst,1'b1);
end

endmodule

