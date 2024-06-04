`include"ysyx_23060077_define.v"
module ysyx_23060077_id_imm_ext #(
    INPUT_WIDTH = 1
) (
    input 	    [INPUT_WIDTH-1:0]       imm_in,
    output  	[`DATA_WIDTH-1:0]       imm_out
);

assign imm_out = {{(`DATA_WIDTH-INPUT_WIDTH){imm_in[INPUT_WIDTH-1]}},imm_in};

endmodule
