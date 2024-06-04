`include"ysyx_23060077_define.v"
`include"ysyx_23060077_axi_define.v"


module ysyx_23060077_axi_clint(
    input                               aclk                    ,
    input                               areset_n                ,
    
    output                              axi_clint_aw_ready_o    ,
    input                               axi_clint_aw_valid_i    ,
    input   [`AXI_ADDR_WIDTH-1:0]       axi_clint_aw_addr_i     ,
    input   [`AXI_ID_WIDTH-1:0]         axi_clint_aw_id_i       ,
    input   [`AXI_LEN_WIDTH-1:0]        axi_clint_aw_len_i      ,
    input   [`AXI_SIZE_WIDTH-1:0]       axi_clint_aw_size_i     ,
    input   [`AXI_BURST_WIDTH-1:0]      axi_clint_aw_burst_i    ,
    output                              axi_clint_w_ready_o     ,
    input                               axi_clint_w_valid_i     ,
    input   [`AXI_DATA_WIDTH-1:0]       axi_clint_w_data_i      ,
    input   [`AXI_STRB_WIDTH-1:0]       axi_clint_w_strb_i      ,
    input                               axi_clint_w_last_i      ,
    input                               axi_clint_b_ready_i     ,
    output                              axi_clint_b_valid_o     ,
    output  [`AXI_RESP_WIDTH-1:0]       axi_clint_b_resp_o      ,
    output  [`AXI_ID_WIDTH-1:0]         axi_clint_b_id_o        ,
    output                              axi_clint_ar_ready_o    ,
    input                               axi_clint_ar_valid_i    ,
    input   [`AXI_ADDR_WIDTH-1:0]       axi_clint_ar_addr_i     ,
    input   [`AXI_ID_WIDTH-1:0]         axi_clint_ar_id_i       ,
    input   [`AXI_LEN_WIDTH-1:0]        axi_clint_ar_len_i      ,
    input   [`AXI_SIZE_WIDTH-1:0]       axi_clint_ar_size_i     ,
    input   [`AXI_BURST_WIDTH-1:0]      axi_clint_ar_burst_i    ,
    input                               axi_clint_r_ready_i     ,
    output                              axi_clint_r_valid_o     ,
    output  [`AXI_RESP_WIDTH-1:0]       axi_clint_r_resp_o      ,
    output  [`AXI_DATA_WIDTH-1:0]       axi_clint_r_data_o      ,
    output                              axi_clint_r_last_o      ,
    output  [`AXI_ID_WIDTH-1:0]         axi_clint_r_id_o      
);

reg [63:0] clint_data;
reg [63:0] data_store;
reg [`AXI_ADDR_WIDTH-1:0] addr;
//读逻辑
reg [`AXI_R_STATE_WIDTH-1:0] clint_r_state;
localparam [`AXI_R_STATE_WIDTH-1:0] CLINT_R_IDLE   = 'd0;
localparam [`AXI_R_STATE_WIDTH-1:0] CLINT_R_ADDR   = 'd1;
localparam [`AXI_R_STATE_WIDTH-1:0] CLINT_R_DATA   = 'd2;


assign axi_clint_ar_ready_o = (clint_r_state == CLINT_R_ADDR)&axi_clint_ar_valid_i  ? 1'b1 : 1'b0;
assign axi_clint_r_valid_o = (clint_r_state == CLINT_R_DATA)&axi_clint_r_ready_i    ? 1'b1 : 1'b0;
assign axi_clint_r_last_o  = (clint_r_state == CLINT_R_DATA)&axi_clint_r_ready_i    ? 1'b1 : 1'b0;
assign axi_clint_r_resp_o  = `AXI_RESP_WIDTH'd0;
assign axi_clint_r_id_o    = `AXI_ID_WIDTH'd0;
assign axi_clint_r_data_o[31:0]  = (addr == 32'h02000000) ? data_store[31:0] : data_store[63:32];

always @(posedge aclk ) begin
    if(areset_n)begin
        clint_data  <= 'd0;
    end
    else begin
        clint_data  <= clint_data + 1;
    end
end

always @(posedge aclk ) begin
    if(areset_n)begin
        data_store  <= 'd0;
        addr        <= 'd0;
    end
    else if(axi_clint_ar_valid_i)begin
        data_store  <= clint_data;
        addr        <= axi_clint_ar_addr_i;
    end
end


always @(posedge aclk ) begin
    if(areset_n)begin
        clint_r_state <= CLINT_R_IDLE;
    end
    else begin
        case(clint_r_state)
            CLINT_R_IDLE:begin
                if(axi_clint_ar_valid_i)begin
                    clint_r_state     <= CLINT_R_ADDR;
                end
            end
            CLINT_R_ADDR:begin
                if(axi_clint_ar_valid_i & axi_clint_ar_ready_o)begin
                    clint_r_state     <= CLINT_R_DATA;
                end
            end
            CLINT_R_DATA:begin
                if(axi_clint_r_ready_i & axi_clint_r_last_o)begin
                    clint_r_state     <= CLINT_R_ADDR;
                end
            end
            default:begin
                clint_r_state <= CLINT_R_IDLE;
            end
        endcase
    end
end

endmodule