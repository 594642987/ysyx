`include "ysyx_23060077_define.v"
`include"ysyx_23060077_axi_define.v"

module ysyx_23060077_ifu(
    input                               clk             ,
    input                               reset           ,

    input       [`DATA_WIDTH-1:0]       jump_pc         ,
    input                               jump_pc_valid   ,
    input                               stall           ,
    input                               wbu_stall       ,

    // IFU Interface
    output                              ifu_r_valid_o   ,
    output  [`AXI_ADDR_WIDTH-1:0]       ifu_r_addr_o    ,
    input                               ifu_r_ready_i   ,
    input   [`DATA_WIDTH-1:0]           ifu_r_data_i    ,
    output  [`AXI_LEN_WIDTH-1:0]        ifu_r_len_o     ,
    input                               ifu_r_last_i    ,

    output                              ifu_stall       ,            
    output  	[`INST_WIDTH-1:0]       ifu_pc_o        ,
    output  	[`INST_WIDTH-1:0]       ifu_inst_o
);

reg  	[`INST_WIDTH-1:0]       ifu_pc_o_r;
reg  	[`INST_WIDTH-1:0]       ifu_inst_o_r;

reg  	[`INST_WIDTH-1:0]       ifu_pc_o_t;
reg  	[`INST_WIDTH-1:0]       ifu_inst_o_t;

assign ifu_pc_o = ifu_pc_o_r;
assign ifu_inst_o = ifu_inst_o_r;

reg   [`DATA_WIDTH-1:0]         pc;
wire  [`INST_WIDTH-1:0]         inst;
reg   [`INST_WIDTH-1:0]         inst_t;

reg ifu_stall_r;
reg flush_inst;

assign ifu_stall = ifu_stall_r;

import "DPI-C" function void get_riscv32_rst(input bit reset);
always @(*)begin
    get_riscv32_rst(reset);
end

initial begin
    pc = 32'h3000_0000;
    ifu_pc_o_r = 32'h3000_0000;
end
always @(posedge clk) begin
    if(reset)begin
        pc <= 32'h3000_0000;
        // pc <= 32'h0f000000;
    end
    else if(flush_inst)begin
        pc <= pc;
    end
    else if(stall | wbu_stall)begin
        pc <= pc;
    end
    else if(jump_pc_valid &!ifu_stall)begin // a bug: 当是jalr ra,会导致jump_pc被更新跳错地方
        pc <= jump_pc;
    end
    else if(ifu_stall_r)begin
        pc <= pc;
    end
    else begin
        pc <= pc + 4;
    end
end
always @(posedge clk ) begin
    if(ifu_r_ready_i & ifu_r_last_i)begin
        ifu_pc_o_t      <= pc;
        ifu_inst_o_t    <= inst;
        if((!stall) & (!wbu_stall))begin
            flush_inst      <= 1'b0;
        end
        else begin
            flush_inst      <= 1'b1;
        end
    end
    else if((!stall) & (!wbu_stall))begin
        flush_inst      <= 1'b0;
    end
end

always @(posedge clk) begin
    if(ifu_r_last_i & (!stall) & (!wbu_stall))begin
        ifu_pc_o_r <= pc;
        ifu_inst_o_r <= inst;
        ifu_stall_r <= 1'b0;
    end
    else if(flush_inst & (!stall) & (!wbu_stall))begin
        ifu_pc_o_r <= ifu_pc_o_t;
        ifu_inst_o_r <= ifu_inst_o_t;
        ifu_stall_r <= 1'b0;
    end
    else begin
        ifu_pc_o_r <= ifu_pc_o_r;
        ifu_inst_o_r <= ifu_inst_o_r;
        ifu_stall_r <= 1'b1;
    end
end

assign ifu_r_valid_o = ifu_stall_r & !flush_inst;
assign ifu_r_addr_o  = pc;
// assign flush_inst    = ifu_r_ready_i & ifu_r_last_i;
assign inst          = ifu_r_data_i;
assign ifu_r_len_o   = 8'd0;


endmodule
