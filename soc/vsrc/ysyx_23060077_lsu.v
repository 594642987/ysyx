`include"ysyx_23060077_define.v"
module ysyx_23060077_lsu(
    input 	                            clk 			      ,
    input 	                            reset 			    ,    

    input  	[`DATA_WIDTH-1:0]       	  src1  			    ,
    input  	[`DATA_WIDTH-1:0]       	  src2  			    ,
    input  	[`DATA_WIDTH-1:0]       	  imm 			      ,

    input   [`LSU_OPT_WIDTH-1:0]    	  lsu_opt 		    ,
    input   [2:0]                   	  funct3  		    ,
    input                               ifu_stall 		  ,
    // LSU Interface
    output                              lsu_r_valid_o 	,
    output 	[`AXI_ADDR_WIDTH-1:0]      	lsu_r_addr_o  	,
    input                               lsu_r_ready_i 	,
    input   [`DATA_WIDTH-1:0]      	    lsu_r_data_i  	,
    output 	[`AXI_SIZE_WIDTH-1:0]       lsu_r_size_o    ,
    output  [`AXI_LEN_WIDTH-1:0]       	lsu_r_len_o     ,
    input                               lsu_r_last_i  	,
    output                              lsu_w_valid_o 	,
    output  [`AXI_ADDR_WIDTH-1:0]      	lsu_w_addr_o  	,
    input                               lsu_w_ready_i 	,
    output  [`DATA_WIDTH-1:0]      	    lsu_w_data_o  	,
	  output 	[`AXI_SIZE_WIDTH-1:0]       lsu_w_size_o    ,
	  output  [`AXI_LEN_WIDTH-1:0]       	lsu_w_len_o     ,
    input                              	lsu_w_last_i    ,
    
    output                              mem_stall 		  ,
    output                              lsu_rd_wen  	  ,
    output 	[`DATA_WIDTH-1:0]       	  lsu_result
);

wire [`DATA_WIDTH-1:0] raddr;
wire [`DATA_WIDTH-1:0] rdata;
reg  [`DATA_WIDTH-1:0] rsize;
wire [`DATA_WIDTH-1:0] waddr;
wire [`DATA_WIDTH-1:0] wdata;
wire [`DATA_WIDTH-1:0] wmask;
reg  [`DATA_WIDTH-1:0]  mask;


assign raddr = (lsu_opt == `LSU_OPT_LOAD)  ? src1 + imm : 'd0;
assign waddr = (lsu_opt == `LSU_OPT_STORE) ? src1 + imm : 'd0;
assign wdata = src2;
assign wmask = mask;

reg [`DATA_WIDTH-1:0]     lsu_result_r;
assign lsu_result = lsu_result_r;
always @(*) begin
  	case({lsu_opt,funct3})
  	    {`LSU_OPT_LOAD,3'b000}: lsu_result_r = {{(`DATA_WIDTH-8){rdata[7]}}    ,rdata[7:0]} 	;
  	    {`LSU_OPT_LOAD,3'b001}: lsu_result_r = {{(`DATA_WIDTH-16){rdata[15]}}  ,rdata[15:0]}	;
  	    {`LSU_OPT_LOAD,3'b010}: lsu_result_r = {{(`DATA_WIDTH-32){rdata[31]}}  ,rdata[31:0]}	;
  	    {`LSU_OPT_LOAD,3'b100}: lsu_result_r = {{(`DATA_WIDTH-8){1'b0}}        ,rdata[7:0]} 	;
  	    {`LSU_OPT_LOAD,3'b101}: lsu_result_r = {{(`DATA_WIDTH-16){1'b0}}       ,rdata[15:0]}	;
  	    default: 				lsu_result_r = 'd0 ; 
  	endcase
end

always @(*) begin
  case({lsu_opt,funct3})
      {`LSU_OPT_LOAD,3'b000}: rsize = 32'd0	;
      {`LSU_OPT_LOAD,3'b001}: rsize = 32'd1	;
      {`LSU_OPT_LOAD,3'b010}: rsize = 32'd2	;
      {`LSU_OPT_LOAD,3'b100}: rsize = 32'd0	;
      {`LSU_OPT_LOAD,3'b101}: rsize = 32'd1	;
      default: 				rsize = 'd0 ; 
  endcase
end

always @(*) begin
	case({lsu_opt,funct3})
		{`LSU_OPT_STORE,3'b000}: mask = {32'd0};
		{`LSU_OPT_STORE,3'b001}: mask = {32'd1};
		{`LSU_OPT_STORE,3'b010}: mask = {32'd2};
		default: 			 	 mask = 'd0 ; 
	endcase
end


reg ren;
reg wen;

wire lsu_rd_wen_r;
wire lsu_rd_wen_w;
assign lsu_rd_wen = lsu_rd_wen_r | lsu_rd_wen_w;

always @(posedge clk ) begin
  if(reset)begin
    ren <= 'd0;
  end
  else if(lsu_rd_wen_r)begin
    ren <= 'd0;
  end
  else if(lsu_opt == `LSU_OPT_LOAD && ifu_stall == 'b0)begin
    ren <= 'd1;
  end

end

always @(posedge clk ) begin
  if(reset)begin
    wen <= 'd0;
  end
  else if(lsu_rd_wen_w)begin
    wen <= 'd0;
  end
  else if(lsu_opt == `LSU_OPT_STORE && ifu_stall == 'b0)begin
    wen <= 'd1;
  end

end

assign mem_stall = (ren | wen) & !lsu_rd_wen;

assign lsu_r_valid_o  = ren;
assign lsu_r_addr_o   = raddr;
assign lsu_rd_wen_r   = lsu_r_ready_i & lsu_r_last_i;
assign rdata          = lsu_r_data_i;
assign lsu_r_size_o   = rsize[2:0];
assign lsu_r_len_o	  = 8'd0;

assign lsu_w_valid_o  = wen;
assign lsu_w_addr_o   = waddr;
assign lsu_rd_wen_w   = lsu_w_ready_i & lsu_w_last_i;
assign lsu_w_data_o   = wdata;
assign lsu_w_size_o   = wmask[2:0];
assign lsu_w_len_o	  = 8'd0;

// always @(posedge clk ) begin
//   if(lsu_rd_wen_r)begin
//     $display("read addr = %x data = %x\n",raddr,rdata);
//   end
// end

import "DPI-C" function void device_skip(input bit ren,input int raddr, input bit wen,input int waddr);
always @(*)begin
  device_skip(ren,raddr,wen,waddr);
end
import "DPI-C" function void sdram_check(input int addr, input int data, input int len);
// always @(posedge clk)begin
//   if(lsu_r_last_i)begin
//     sdram_check(raddr,rdata,rsize);
//   end
//   // if(wen&(waddr>=32'ha0000000 && waddr <= 32'hb0000000)&lsu_w_last_i)begin
//   //   sdram_check(waddr,wdata);
//   // end
//   if(waddr>= 32'ha001e144 && waddr<= 32'ha001e14F && lsu_w_last_i)begin
//     $display("write addr = %x data = %x\n",waddr,wdata);
//   end
// end


endmodule
