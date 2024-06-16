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
wire [`DATA_WIDTH-1:0]      ifu_pc          	;
wire [`INST_WIDTH-1:0]      ifu_inst        	;
wire [`INST_WIDTH-1:0]      ifu_inst_t      	;

wire [`DATA_WIDTH-1:0]      jump_pc         	;
wire                        jump_pc_valid   	;
wire                        stall           	;

wire                        Icache_r_valid_o	;
wire [`AXI_ADDR_WIDTH-1:0]  Icache_r_addr_o 	;
wire                        Icache_r_ready_i	;
wire [`DATA_WIDTH-1:0]      Icache_r_data_i 	;
wire [`AXI_LEN_WIDTH-1:0]   Icache_r_len_o  	;
wire                        Icache_r_last_i 	;

wire   											ifu_jal 					;
wire   											ifu_jalr 					;
wire   											ifu_branch 				;
wire   											ifu_csr_ecall			;
wire   											ifu_csr_mret			;
wire   											ifu_jump					;
wire												ifu_sys						;

// idu
wire [`DATA_WIDTH-1:0]      idu_pc          	;
wire [`INST_WIDTH-1:0]      idu_inst        	;

wire                       	idu_branch				;
wire                       	idu_jal		   			;
wire                       	idu_jalr					;
wire [`REG_WIDTH-1:0]   		idu_rd_addr				;
wire                       	idu_rd_wen				;
wire [`REG_WIDTH-1:0]   		idu_rs1		   			;
wire [`REG_WIDTH-1:0]   		idu_rs2		   			;
wire [`DATA_WIDTH-1:0]     	idu_imm		   			;
wire [`ALU_OPT_WIDTH-1:0]   idu_alu_opt	    	;
wire [`SRC_SEL_WIDTH-1:0]   idu_src_sel	    	;
wire [`LSU_OPT_WIDTH-1:0]   idu_lsu_opt	    	;
wire [2:0]                  idu_funct3	    	;
wire 												idu_csr_ecall			;
wire 												idu_csr_mret			;
wire												idu_sys						;
//regfile
wire [`DATA_WIDTH-1:0]     	idu_src1					;
wire [`DATA_WIDTH-1:0]     	idu_src2					;
wire 												rs1_busy					;
wire 												rs2_busy					;
wire 												rd_busy						;

//exu

wire [`DATA_WIDTH-1:0]      exu_pc          	;
wire [`INST_WIDTH-1:0]      exu_inst        	;
wire [`DATA_WIDTH-1:0]     	exu_src1					;
wire [`DATA_WIDTH-1:0]     	exu_src2					;
wire [`DATA_WIDTH-1:0]     	exu_imm		    		;
wire [`ALU_OPT_WIDTH-1:0]   exu_alu_opt	    	;
wire [`SRC_SEL_WIDTH-1:0]   exu_src_sel	    	;
wire [`LSU_OPT_WIDTH-1:0]   exu_lsu_opt	    	;
wire [2:0]                  exu_funct3	    	;
wire                       	exu_branch				;
wire                       	exu_rd_wen				;
wire [`REG_WIDTH-1:0]   		exu_rd_addr				;
wire 												exu_csr_ecall			;
wire 												exu_csr_mret 			;
wire												exu_sys						;

wire                        zero_flag					;
wire [`DATA_WIDTH-1:0]      exu_result				;

//lsu
wire [`DATA_WIDTH-1:0]     	lsu_result				;
wire                        mem_stall       	;
wire                        lsu_rd_wen      	;

wire                        lsu_r_valid_o   	;
wire [`AXI_ADDR_WIDTH-1:0]  lsu_r_addr_o    	;
wire                        lsu_r_ready_i   	;
wire [`DATA_WIDTH-1:0]      lsu_r_data_i    	;
wire [`AXI_SIZE_WIDTH-1:0]  lsu_r_size_o    	;
wire [`AXI_LEN_WIDTH-1:0]   lsu_r_len_o     	;
wire                        lsu_r_last_i    	;
wire                        lsu_w_valid_o   	;
wire [`AXI_ADDR_WIDTH-1:0]  lsu_w_addr_o    	;
wire                        lsu_w_ready_i   	;
wire [`DATA_WIDTH-1:0]      lsu_w_data_o    	;
wire [`AXI_SIZE_WIDTH-1:0]  lsu_w_size_o    	;
wire [`AXI_LEN_WIDTH-1:0]   lsu_w_len_o     	;
wire                        lsu_w_last_i    	;

//wbu
wire [`DATA_WIDTH-1:0]      wbu_pc          	;	// 为了difftest
wire [`INST_WIDTH-1:0]      wbu_inst        	;

wire [`DATA_WIDTH-1:0]			wb_exu_result			;
wire                        wbu_rd_wen      	;
wire [`REG_WIDTH-1:0]   		wbu_rd_addr				;
wire [`DATA_WIDTH-1:0]     	wbu_rd_data		  	;
wire [`LSU_OPT_WIDTH-1:0]   wbu_lsu_opt				;
wire [`DATA_WIDTH-1:0]			wbu_lsu_result		;
wire [`DATA_WIDTH-1:0]     	wbu_rd_csr_data		;
//csr
wire [`DATA_WIDTH-1:0]     	csr_wr_data				;
wire [`DATA_WIDTH-1:0]     	csr_rd_data				;
wire [`DATA_WIDTH-1:0]      csr_mstatus     	;
wire [`DATA_WIDTH-1:0]      csr_mtvec       	;
wire [`INST_WIDTH-1:0]      csr_mpec        	;




// assign jump_pc = csr_mret ? csr_mpec : (csr_ecall ? csr_mtvec :(((idu_branch && !zero_flag) || idu_jal) ? ifu_pc + idu_imm : (idu_jalr ? idu_src1 + idu_imm : 'd0)));
// assign jump_pc_valid = csr_mret | csr_ecall | ((idu_branch && !zero_flag) || idu_jal) | idu_jalr;

assign stall = mem_stall;
wire [`DATA_WIDTH-1:0]      jump_pc_src1;
wire [`DATA_WIDTH-1:0]      jump_pc_add;

assign jump_pc_src1 = idu_jalr ? idu_src1 : ifu_pc;
assign jump_pc_add  = jump_pc_src1 + idu_imm;
assign jump_pc = exu_csr_mret ? csr_mpec : ( exu_csr_ecall ? csr_mtvec : ((idu_branch && !zero_flag) || idu_jal || idu_jalr ? jump_pc_add : jump_pc_src1+4));
assign jump_pc_valid = exu_csr_mret | exu_csr_ecall | idu_branch | idu_jal | idu_jalr;	//

// ifu要等idu和exu运行完才能那pc去访存
ysyx_23060077_ifu ifu_u0(
	.clock          	( clock         		),
	.reset          	( reset         		),
	.jump_pc        	( jump_pc       		),
	.jump_pc_valid  	( jump_pc_valid 		),
	.ifu_jump					( ifu_jump					),
	.exu_finished     ( ex_to_wb_valid & ex_to_wb_ready &(exu_pc == ifu_pc)   ),	// 需要等待exu运行到当前pc值

	.Icache_r_valid_o ( Icache_r_valid_o 	),
	.Icache_r_addr_o  ( Icache_r_addr_o  	),
	.Icache_r_ready_i ( Icache_r_ready_i 	),
	.Icache_r_data_i  ( Icache_r_data_i  	),
	.Icache_r_len_o   ( Icache_r_len_o   	),
	.Icache_r_last_i  ( Icache_r_last_i  	),

	.if_to_id_ready_i	( if_to_id_ready 		),
	.if_to_id_valid_o	( if_to_id_valid		),
	.ifu_pc_o       	( ifu_pc        		),
	.ifu_inst_o     	( ifu_inst      		)
);

ysyx_23060077_pre_decode pre_decode_u0(
	.ifu_inst     		( ifu_inst     			),
	.ifu_jal 					( ifu_jal 					),
	.ifu_jalr 				( ifu_jalr 					),
	.ifu_branch 			( ifu_branch 				),
	.ifu_sys					( ifu_sys						),
	.ifu_csr_ecall		( ifu_csr_ecall			),
	.ifu_csr_mret			( ifu_csr_mret			),
	.ifu_jump					( ifu_jump					)
);


wire if_to_id_valid;
reg if_to_id_ready;

ysyx_23060077_pipeline#(
	.WIDTH          (`DATA_WIDTH+`INST_WIDTH+6),
	.RESET_VAL      ('d0)
)pipeline_if_to_id(
	.clock	( clock ),
	.reset	( reset ),
	.wen		( if_to_id_valid & if_to_id_ready ),
	.stall	( !if_to_id_ready),
	.flush	( ),
	.din		( {ifu_pc,ifu_inst,ifu_jal,ifu_jalr,ifu_branch,ifu_csr_ecall,ifu_csr_mret,ifu_sys}),
	.dout		( {idu_pc,idu_inst,idu_jal,idu_jalr,idu_branch,idu_csr_ecall,idu_csr_mret,idu_sys})
);

always @(posedge clock) begin
	if(reset)begin
		if_to_id_ready	<= 'd1;
	end
	else begin	// 必须是后级传输成功然后拉高ready在前面
		if(id_to_ex_valid & id_to_ex_ready)begin	// 后级传递过去了，当前级可以接收新的数据了
			if_to_id_ready <= 'd1;
		end
		else if(if_to_id_valid)begin
			if_to_id_ready <= 'd0;
		end
	end
end
// 代表运行了一个周期
reg idu_stall;
always @(posedge clock) begin
	if(reset)begin
		idu_stall <= 'd0;
	end
	else begin
		if(if_to_id_valid & if_to_id_ready)begin
			idu_stall <= 'd1;
		end
		else if((rs1_busy | rs2_busy | rd_busy))begin
			idu_stall <= 'd1;
		end
		else begin
			idu_stall <= 'd0;
		end
	end
end

always @(posedge clock) begin
	if(reset)begin
		id_to_ex_valid	<= 'd0;
	end
	else begin
		if(idu_stall & (!(rs1_busy | rs2_busy | rd_busy)))begin	// 运行完了
		// if(if_to_id_valid & if_to_id_ready)begin	// IDU只运行一个周期，当前级握手完成后，就可以拉搞valid，在下一个周期直接握手
			id_to_ex_valid <= 'd1;
		end
		else if(id_to_ex_ready)begin
			id_to_ex_valid <= 'd0;
		end
	end
end

reg idu_rd_wen_t;
always @(posedge clock) begin
	if(reset)begin
		idu_rd_wen_t <= 'd0;
	end
	else begin
		if(id_to_ex_valid & id_to_ex_ready & idu_rd_wen)begin
			idu_rd_wen_t <= 'd1;
		end
		else begin
			idu_rd_wen_t <= 'd0;
		end
	end
end

ysyx_23060077_idu idu_u0(
	.inst						( idu_inst	  ),
	.rd							( idu_rd_addr	),
	.rd_wen					( idu_rd_wen	),
	.rs1						( idu_rs1			),
	.rs2						( idu_rs2			),
	.imm						( idu_imm			),
	.alu_opt				( idu_alu_opt	),
	.src_sel				( idu_src_sel	),
	.lsu_opt				( idu_lsu_opt	),
	.funct3		  		( idu_funct3	)
);

ysyx_23060077_regfile regfile_u0(
	.clock					( clock		    ),
	.reset      		( reset       ),
	.rs1_busy  			( rs1_busy  	),
	.rs2_busy 			( rs2_busy 		),
	.rd_busy				( rd_busy 		),
	.idu_rd_addr		( idu_rd_addr	),
	.idu_rd_wen			( idu_rd_wen_t),

	.rs1_addr				( idu_rs1	    ),
	.rs1_data				( idu_src1		),
	.rs2_addr				( idu_rs2	    ),
	.rs2_data				( idu_src2		),
	.reg_rd_en			( wbu_rd_wen  ),
	.reg_rd_addr		( wbu_rd_addr	),
	.reg_rd_data		( wbu_rd_data	)
);

reg id_to_ex_valid;
reg id_to_ex_ready;

ysyx_23060077_pipeline#(
	.WIDTH          (`DATA_WIDTH*5+`ALU_OPT_WIDTH+`SRC_SEL_WIDTH+3+`LSU_OPT_WIDTH+1+1+`REG_WIDTH+3),
	.RESET_VAL      ('d0)
)pipeline_id_to_ex(
	.clock	( clock ),
	.reset	( reset ),
	.wen		( id_to_ex_valid & id_to_ex_ready ),
	.stall	( !id_to_ex_ready),
	.flush	( ),
	.din		( {idu_pc,idu_inst,idu_src1,idu_src2,idu_imm,idu_alu_opt,idu_src_sel,idu_funct3,idu_lsu_opt,idu_branch,idu_rd_wen,idu_rd_addr,idu_csr_ecall,idu_csr_mret,idu_sys}),
	.dout		( {exu_pc,exu_inst,exu_src1,exu_src2,exu_imm,exu_alu_opt,exu_src_sel,exu_funct3,exu_lsu_opt,exu_branch,exu_rd_wen,exu_rd_addr,exu_csr_ecall,exu_csr_mret,exu_sys})
);

always @(posedge clock) begin
	if(reset)begin
		id_to_ex_ready <= 'd1;
	end
	else begin
		if(ex_to_wb_valid & ex_to_wb_ready)begin	
			id_to_ex_ready <= 'd1;
		end
		else if(id_to_ex_valid)begin
			id_to_ex_ready <= 'd0;
		end
	end
end
reg exu_stall;
always @(posedge clock) begin
	if(reset)begin
		exu_stall <= 'd0;
	end
	else begin
		if(id_to_ex_valid & id_to_ex_ready)begin // exu运行一个周期
			exu_stall <= 'd1;
		end
		else begin
			exu_stall <= 'd0;
		end
	end
end

always @(posedge clock) begin
	if(reset)begin
		ex_to_wb_valid <= 'd0;
	end
	else begin
		if(lsu_rd_wen)begin
			ex_to_wb_valid <= 'd1;
		end
		else if(!mem_stall& exu_stall)begin // lsu不工作
			ex_to_wb_valid <= 'd1;
		end
		else if(ex_to_wb_ready)begin
			ex_to_wb_valid <= 'd0;
		end
	end
end

ysyx_23060077_exu exu_u0(
	.pc								( exu_pc					),
	.src1							( exu_src1		    ),
	.src2							( exu_src2		    ),
	.imm							( exu_imm					),
	.branch						( exu_branch			),
	.alu_opt					( exu_alu_opt			),
	.src_sel					( exu_src_sel			),
	.funct3		    		( exu_funct3    	),
	.zero_flag				( zero_flag     	),
	.exu_result				( exu_result    	)
);

ysyx_23060077_lsu lsu_u0(
	.clock						( clock		    	),
	.reset        		( reset         ),
	.src1     				( exu_src1      ),
	.src2     				( exu_src2      ),
	.imm          		( exu_imm       ),
	.lsu_opt					( exu_lsu_opt   ),
	.funct3		    		( exu_funct3    ),

	.lsu_r_valid_o  	( lsu_r_valid_o ),
	.lsu_r_addr_o   	( lsu_r_addr_o  ),
	.lsu_r_ready_i  	( lsu_r_ready_i ),
	.lsu_r_data_i   	( lsu_r_data_i  ),
	.lsu_r_size_o   	( lsu_r_size_o  ),
	.lsu_r_len_o    	( lsu_r_len_o   ),
	.lsu_r_last_i   	( lsu_r_last_i  ),
	.lsu_w_valid_o  	( lsu_w_valid_o ),
	.lsu_w_addr_o   	( lsu_w_addr_o  ),
	.lsu_w_ready_i  	( lsu_w_ready_i ),
	.lsu_w_data_o   	( lsu_w_data_o  ),
	.lsu_w_size_o   	( lsu_w_size_o  ),
	.lsu_w_len_o    	( lsu_w_len_o   ),
	.lsu_w_last_i   	( lsu_w_last_i  ),

	.id_to_ex					( id_to_ex_valid & id_to_ex_ready),
	.mem_stall      	( mem_stall     ),
	.lsu_rd_wen     	( lsu_rd_wen    ),
	.lsu_result				( lsu_result    )
);



wire [`CSR_WIDTH-1:0] csr_imm = exu_imm[5+:`CSR_WIDTH];
// assign csr_wr_data = exu_inst[14] ? {27'd0,exu_inst[19:15]} : exu_src1;
assign csr_wr_data = exu_funct3[2] ? {27'd0,exu_imm[4:0]} : exu_src1;

ysyx_23060077_csr  csr_u0 (
	.clock          ( clock         ),
	.reset          ( reset         ),
	.csr_wr_addr    ( csr_imm   		),
	.csr_wr_data    ( csr_wr_data  	),
	.csr_rd_addr    ( csr_imm   		),
	.csr_rd_data    ( csr_rd_data   ),

	.csr_ecall_i    ( exu_csr_ecall ),
	.csr_mret_i     ( exu_csr_mret  ),

	.sys 						( exu_sys				),
	.funct3         ( exu_funct3    ),
	.csr_pc         ( exu_pc        ),

	.csr_mstatus    ( csr_mstatus   ),
	.csr_mtvec      ( csr_mtvec     ),
	.csr_mpec       ( csr_mpec      )
);

reg ex_to_wb_valid;
reg ex_to_wb_ready;

always @(posedge clock) begin
	if(reset)begin
		ex_to_wb_ready <= 'd1;
	end
	else begin
		if(ex_to_wb_valid)begin
			ex_to_wb_ready <= 'd0;
		end
		else begin
			ex_to_wb_ready <= 'd1;
		end
	end
end

ysyx_23060077_pipeline#(
	.WIDTH          (`DATA_WIDTH*3+1+`REG_WIDTH+`LSU_OPT_WIDTH+`DATA_WIDTH+`DATA_WIDTH),
	.RESET_VAL      ('d0)
)pipeline_ex_to_wb(
	.clock	( clock ),
	.reset	( reset ),
	.wen		( ex_to_wb_valid & ex_to_wb_ready ),
	.stall	( ),
	.flush	( ),
	.din		( {exu_pc,exu_inst,exu_result,exu_rd_wen,exu_rd_addr,exu_lsu_opt,lsu_result,csr_rd_data}),
	.dout		( {wbu_pc,wbu_inst,wb_exu_result,wbu_rd_wen,wbu_rd_addr,wbu_lsu_opt,wbu_lsu_result,wbu_rd_csr_data})
);

ysyx_23060077_wbu wbu_u0(
	.lsu_opt					( wbu_lsu_opt     	),
	.exu_result				( wb_exu_result			),
	.lsu_result				( wbu_lsu_result   	),
	.csr_result     	( wbu_rd_csr_data  	),
	.wbu_result				( wbu_rd_data      	)

);









ysyx_23060077_axi_arbiter axi_arbiter_u0(
	.aclk          		( clock             ),
	.areset_n      		( reset             ),
	.Icache_r_valid_i	( Icache_r_valid_o  ),
	.Icache_r_addr_i 	( Icache_r_addr_o   ),
	.Icache_r_ready_o	( Icache_r_ready_i  ),
	.Icache_r_data_o 	( Icache_r_data_i   ),
	.Icache_r_len_i  	( Icache_r_len_o    ),
	.Icache_r_last_o 	( Icache_r_last_i   ),

	.lsu_r_valid_i  	( lsu_r_valid_o     ),
	.lsu_r_addr_i   	( lsu_r_addr_o      ),
	.lsu_r_ready_o  	( lsu_r_ready_i     ),
	.lsu_r_data_o   	( lsu_r_data_i      ),
	.lsu_r_size_i   	( lsu_r_size_o      ),
	.lsu_r_len_i    	( lsu_r_len_o       ),
	.lsu_r_last_o   	( lsu_r_last_i      ),
	.lsu_w_valid_i  	( lsu_w_valid_o     ),
	.lsu_w_addr_i   	( lsu_w_addr_o      ),
	.lsu_w_ready_o  	( lsu_w_ready_i     ),
	.lsu_w_data_i   	( lsu_w_data_o      ),
	.lsu_w_size_i   	( lsu_w_size_o      ),
	.lsu_w_len_i    	( lsu_w_len_o       ),
	.lsu_w_last_o   	( lsu_w_last_i      ),

	.axi_aw_ready_i 	( io_master_awready ),
	.axi_aw_valid_o 	( io_master_awvalid ),
	.axi_aw_addr_o  	( io_master_awaddr  ),
	.axi_aw_id_o    	( io_master_awid    ),
	.axi_aw_len_o   	( io_master_awlen   ),
	.axi_aw_size_o  	( io_master_awsize  ),
	.axi_aw_burst_o 	( io_master_awburst ),
	.axi_w_ready_i  	( io_master_wready  ),
	.axi_w_valid_o  	( io_master_wvalid  ),
	.axi_w_data_o   	( io_master_wdata   ),
	.axi_w_strb_o   	( io_master_wstrb   ),
	.axi_w_last_o   	( io_master_wlast   ),
	.axi_b_ready_o  	( io_master_bready  ),
	.axi_b_valid_i  	( io_master_bvalid  ),
	.axi_b_resp_i   	( io_master_bresp   ),
	.axi_b_id_i     	( io_master_bid     ),
	.axi_ar_ready_i 	( io_master_arready ),
	.axi_ar_valid_o 	( io_master_arvalid ),
	.axi_ar_addr_o  	( io_master_araddr  ),
	.axi_ar_id_o    	( io_master_arid    ),
	.axi_ar_len_o   	( io_master_arlen   ),
	.axi_ar_size_o  	( io_master_arsize  ),
	.axi_ar_burst_o 	( io_master_arburst ),
	.axi_r_ready_o  	( io_master_rready  ),
	.axi_r_valid_i  	( io_master_rvalid  ),
	.axi_r_resp_i   	( io_master_rresp   ),
	.axi_r_data_i   	( io_master_rdata   ),
	.axi_r_last_i   	( io_master_rlast   ),
	.axi_r_id_i     	( io_master_rid     )
);

`ifdef USING_DPI_C

reg wbu_stall;
always @(posedge clock)begin
	if(!reset)begin
		wbu_stall <= 'd1;
	end
	else if(ex_to_wb_valid & ex_to_wb_ready)begin
		wbu_stall <= 'd1;
	end
	else begin
		wbu_stall <= 'd0;
	end
end

import "DPI-C" function void set_pc_ptr(input int pc, input int inst, input bit valid);
always @(*)begin
	set_pc_ptr(wbu_pc,wbu_inst,wbu_stall);
end


import "DPI-C" function void inst_type_count(input int inst);
always @(posedge clock)begin
	if(!reset)begin
		inst_type_count(ifu_inst);
	end
end

import "DPI-C" function void get_riscv32_rst(input bit reset);
always @(*)begin
	get_riscv32_rst(reset);
end

import "DPI-C" function void set_axi_resp(input int b_resp,input int r_resp);
always @(*)begin
	set_axi_resp({30'd0,io_master_bresp},{30'd0,io_master_rresp});
end



import "DPI-C" function void exu_data_finished();
always @(posedge clock)begin
	if((exu_stall) && (idu_alu_opt != `ALU_NONE))begin
		exu_data_finished();
	end
end

`endif

endmodule

