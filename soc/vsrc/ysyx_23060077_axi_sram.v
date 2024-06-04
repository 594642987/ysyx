`include"ysyx_23060077_axi_define.v"

module ysyx_23060077_axi_sram(
    input                               aclk,
    input                               areset_n,
    // 写地址通道
    output                              axi_sram_aw_ready_o,
    input                               axi_sram_aw_valid_i,
    input   [`AXI_PORT_WIDTH-1:0]       axi_sram_aw_port_i,
    input   [`AXI_ADDR_WIDTH-1:0]       axi_sram_aw_addr_i,

    // 写数据通道
    output                              axi_sram_w_ready_o,
    input                               axi_sram_w_valid_i,
    input   [`AXI_STRB_WIDTH-1:0]       axi_sram_w_strb_i,
    input   [`AXI_DATA_WIDTH-1:0]       axi_sram_w_data_i,

    // 写应答通道
    output  [`AXI_RESP_WIDTH-1:0]       axi_sram_b_resp_o,
    output                              axi_sram_b_valid_o,
    input                               axi_sram_b_ready_i,

    // 读地址通道
    output                              axi_sram_ar_ready_o,
    input                               axi_sram_ar_valid_i,
    input   [`AXI_PORT_WIDTH-1:0]       axi_sram_ar_port_i,
    input   [`AXI_ADDR_WIDTH-1:0]       axi_sram_ar_addr_i,

    // 读数据通道
    input                               axi_sram_r_ready_i,
    output                              axi_sram_r_valid_o,
    output  [`AXI_RESP_WIDTH-1:0]       axi_sram_r_resp_o,
    output  [`AXI_DATA_WIDTH-1:0]       axi_sram_r_data_o
);

reg [5:0] lfsr_out;

reg [5:0] r_delay_cnt = 0;
reg [5:0] w_delay_cnt = 0;

always @(posedge aclk ) begin
    if(areset_n)begin
        lfsr_out <= 'd1;
    end
    else if(axi_sram_b_ready_i | axi_sram_r_ready_i)begin
        lfsr_out <= lfsr_out;
    end
    else begin
        lfsr_out <= {lfsr_out[4:0], (lfsr_out[4] ^ lfsr_out[3] ^ lfsr_out[0])};
    end
end

// 写逻辑
reg [`AXI_W_STATE_WIDTH-1:0] sram_w_state;
parameter [`AXI_W_STATE_WIDTH-1:0] SRAM_W_IDLE   = 'd0;
parameter [`AXI_W_STATE_WIDTH-1:0] SRAM_W_ADDR   = 'd1;
parameter [`AXI_W_STATE_WIDTH-1:0] SRAM_W_DATA   = 'd2;
parameter [`AXI_W_STATE_WIDTH-1:0] SRAM_W_RESP   = 'd3;

reg [`AXI_ADDR_WIDTH-1:0] w_addr;
reg [`AXI_DATA_WIDTH-1:0] w_data;
reg [`AXI_DATA_WIDTH-1:0] w_mask;

reg axi_sram_aw_ready_o_r;
reg axi_sram_w_ready_o_r;
reg axi_sram_b_valid_o_r;

assign axi_sram_aw_ready_o = axi_sram_aw_ready_o_r;
assign axi_sram_w_ready_o  = axi_sram_w_ready_o_r;
assign axi_sram_b_valid_o  = axi_sram_b_valid_o_r;

always @(posedge aclk ) begin
    if(areset_n)begin
        w_addr          <= 'd0;
        w_data          <= 'd0;
        w_mask          <= 'd0;
    end
    else begin
        if(axi_sram_aw_valid_i)begin
            w_addr          <= axi_sram_aw_addr_i;
        end
        if(axi_sram_w_valid_i)begin
            w_data          <= axi_sram_w_data_i;
            w_mask[`AXI_STRB_WIDTH-1:0]  <= axi_sram_w_strb_i;
        end
    end
end

always @(posedge aclk ) begin
    if(areset_n)begin
        sram_w_state <= SRAM_W_IDLE;
        axi_sram_aw_ready_o_r <= 'd0;
        axi_sram_w_ready_o_r <= 'd0;
        axi_sram_b_valid_o_r <= 'd0;
    end
    else begin
        case(sram_w_state)
            SRAM_W_IDLE:begin
                if(axi_sram_aw_valid_i)begin
                    sram_w_state    <= SRAM_W_ADDR;
                    axi_sram_aw_ready_o_r <= 'd1;
                end
            end
            SRAM_W_ADDR:begin
                axi_sram_aw_ready_o_r <= 'd0;
                if(axi_sram_w_valid_i)begin
                    sram_w_state    <= SRAM_W_DATA;
                    axi_sram_w_ready_o_r <= 'd1;
                end
            end
            SRAM_W_DATA:begin
                axi_sram_w_ready_o_r <= 'd0;
                if(axi_sram_b_ready_i)begin
                    if(w_delay_cnt < lfsr_out)begin
                        w_delay_cnt <= w_delay_cnt + 1;
                    end
                    else begin
                        w_delay_cnt <= 'd0;

                        sram_w_state    <= SRAM_W_RESP;
                        axi_sram_b_valid_o_r <= 'd1;
                    end
                end
            end
            SRAM_W_RESP:begin
                axi_sram_b_valid_o_r <= 'd0;
                sram_w_state    <= SRAM_W_IDLE;
            end
            default:begin
                sram_w_state <= SRAM_W_IDLE;
            end
        endcase
    end
end



//读逻辑
reg [`AXI_R_STATE_WIDTH-1:0] sram_r_state;
parameter [`AXI_R_STATE_WIDTH-1:0] SRAM_R_IDLE   = 'd0;
parameter [`AXI_R_STATE_WIDTH-1:0] SRAM_R_ADDR   = 'd1;
parameter [`AXI_R_STATE_WIDTH-1:0] SRAM_R_DATA   = 'd2;

reg  [`AXI_ADDR_WIDTH-1:0] r_addr;
wire [`AXI_DATA_WIDTH-1:0] r_data;

reg axi_sram_ar_ready_o_r;
reg axi_sram_r_valid_o_r;
reg [`AXI_DATA_WIDTH-1:0] axi_sram_r_data_o_r;

assign axi_sram_ar_ready_o = axi_sram_ar_ready_o_r;
assign axi_sram_r_valid_o = axi_sram_r_valid_o_r;
assign axi_sram_r_data_o = axi_sram_r_data_o_r;

always @(posedge aclk ) begin
    if(areset_n)begin
        axi_sram_r_data_o_r <= 'd0;
        r_addr  <= 'd0;
    end
    else begin
        if(axi_sram_ar_ready_o_r)begin
            axi_sram_r_data_o_r <= r_data;
        end
        if(axi_sram_ar_valid_i)begin
            r_addr  <= axi_sram_ar_addr_i;
        end
    end
end

always @(posedge aclk ) begin
    if(areset_n)begin
        sram_r_state <= SRAM_R_IDLE;
        axi_sram_ar_ready_o_r <= 'd0;
        axi_sram_r_valid_o_r <= 'd0;

        r_delay_cnt     <= 'd0;
    end
    else begin
        case(sram_r_state)
            SRAM_R_IDLE:begin
                if(axi_sram_ar_valid_i)begin
                    sram_r_state <= SRAM_R_ADDR;
                    axi_sram_ar_ready_o_r <= 'd1;
                end
            end
            SRAM_R_ADDR:begin
                axi_sram_ar_ready_o_r <= 'd0;
                if(axi_sram_r_ready_i)begin
                    if(r_delay_cnt < lfsr_out)begin
                        r_delay_cnt <= r_delay_cnt + 1;
                    end
                    else begin
                        r_delay_cnt <= 'd0;

                        sram_r_state <= SRAM_R_DATA;
                        axi_sram_r_valid_o_r <= 'd1;
                    end
                end
            end
            SRAM_R_DATA:begin
                sram_r_state <= SRAM_R_IDLE;
                axi_sram_r_valid_o_r <= 'd0;
            end
            default:begin
                sram_r_state <= SRAM_R_IDLE;
            end
        endcase
    end
end
// // for test
// reg [`AXI_DATA_WIDTH-1:0] mem_r [255:0];
// reg [`AXI_DATA_WIDTH-1:0] mem_w [255:0];

// reg [`AXI_DATA_WIDTH-1:0] r_data_r;
// assign r_data = r_data_r;

// integer i;
// initial begin
//     for(i=0; i<256; i=i+1)begin
//         mem_r[i] = 0;
//         mem_w[i] = 0;
//     end   
// end

// always @(posedge aclk) begin
//     if (axi_sram_ar_ready_o_r)begin
//         r_data_r <= mem_r[r_addr];
//     end 
// end
// always @(posedge aclk) begin
//     if (axi_sram_w_ready_o_r)begin
//         mem_w[w_addr] <= w_data;
//     end 
// end


import "DPI-C" function void riscv_pmem_read(input int raddr, output int rdata, input ren);
import "DPI-C" function void riscv_pmem_write(input int waddr, input int wdata,  input int wmask, input wen);

always @(*)begin
    riscv_pmem_read(r_addr,r_data,axi_sram_ar_ready_o_r);
    riscv_pmem_write(w_addr,w_data,w_mask,axi_sram_w_ready_o_r);
end

endmodule
