`include "ysyx_23060077_riscv_define.v"
module ysyx_23060077_riscv_ifu(
    input                               rst_n,
    input 	    [`DATA_WIDTH-1:0]       pc,

    output  	[`INST_WIDTH-1:0]       inst
);


import "DPI-C" function void riscv_pmem_read(input int raddr, output int rdata,input int len,input ren);
import "DPI-C" function void set_pc_ptr(input int pc);
import "DPI-C" function void get_riscv32_rst(input bit rst_n);
always @(*)begin
    riscv_pmem_read(pc,inst,32'd4,rst_n);
    set_pc_ptr(pc);
    get_riscv32_rst(rst_n);
end


endmodule
