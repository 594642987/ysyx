`include"ysyx_23060077_axi_define.v"

module ysyx_23060077_axi_uart(
    input                               aclk,
    input                               areset_n,
    // 写地址通道
    output                              axi_uart_aw_ready_o,
    input                               axi_uart_aw_valid_i,
    input   [`AXI_PORT_WIDTH-1:0]       axi_uart_aw_port_i,
    input   [`AXI_ADDR_WIDTH-1:0]       axi_uart_aw_addr_i,

    // 写数据通道
    output                              axi_uart_w_ready_o,
    input                               axi_uart_w_valid_i,
    input   [`AXI_STRB_WIDTH-1:0]       axi_uart_w_strb_i,
    input   [`AXI_DATA_WIDTH-1:0]       axi_uart_w_data_i,

    // 写应答通道
    output  [`AXI_RESP_WIDTH-1:0]       axi_uart_b_resp_o,
    output                              axi_uart_b_valid_o,
    input                               axi_uart_b_ready_i
);

reg [5:0] lfsr_out;

reg [5:0] w_delay_cnt = 0;

always @(posedge aclk ) begin
    if(areset_n)begin
        lfsr_out <= 'd1;
    end
    else if(axi_uart_b_ready_i )begin
        lfsr_out <= lfsr_out;
    end
    else begin
        // lfsr_out <= {lfsr_out[4:0], (lfsr_out[4] ^ lfsr_out[3] ^ lfsr_out[0])};
        lfsr_out <= 'd1;
    end
end

// 写逻辑
reg [`AXI_W_STATE_WIDTH-1:0] uart_w_state;
parameter [`AXI_W_STATE_WIDTH-1:0] UART_W_IDLE   = 'd0;
parameter [`AXI_W_STATE_WIDTH-1:0] UART_W_ADDR   = 'd1;
parameter [`AXI_W_STATE_WIDTH-1:0] UART_W_DATA   = 'd2;
parameter [`AXI_W_STATE_WIDTH-1:0] UART_W_RESP   = 'd3;

reg [`AXI_ADDR_WIDTH-1:0] w_addr;
reg [`AXI_DATA_WIDTH-1:0] w_data;

reg axi_uart_aw_ready_o_r;
reg axi_uart_w_ready_o_r;
reg axi_uart_b_valid_o_r;

assign axi_uart_aw_ready_o = axi_uart_aw_ready_o_r;
assign axi_uart_w_ready_o  = axi_uart_w_ready_o_r;
assign axi_uart_b_valid_o  = axi_uart_b_valid_o_r;

always @(posedge aclk ) begin
    if(areset_n)begin
        w_addr          <= 'd0;
        w_data          <= 'd0;
    end
    else begin
        if(axi_uart_aw_valid_i)begin
            w_addr          <= axi_uart_aw_addr_i;
        end
        if(axi_uart_w_valid_i)begin
            w_data          <= axi_uart_w_data_i;
        end
    end
end

always @(posedge aclk ) begin
    if(areset_n)begin
        uart_w_state <= UART_W_IDLE;
        axi_uart_aw_ready_o_r <= 'd0;
        axi_uart_w_ready_o_r <= 'd0;
        axi_uart_b_valid_o_r <= 'd0;
    end
    else begin
        case(uart_w_state)
            UART_W_IDLE:begin
                if(axi_uart_aw_valid_i)begin
                    uart_w_state    <= UART_W_ADDR;
                    axi_uart_aw_ready_o_r <= 'd1;
                end
            end
            UART_W_ADDR:begin
                axi_uart_aw_ready_o_r <= 'd0;
                if(axi_uart_w_valid_i)begin
                    uart_w_state    <= UART_W_DATA;
                    axi_uart_w_ready_o_r <= 'd1;
                end
            end
            UART_W_DATA:begin
                axi_uart_w_ready_o_r <= 'd0;
                if(axi_uart_b_ready_i)begin
                    if(w_delay_cnt < lfsr_out)begin
                        w_delay_cnt <= w_delay_cnt + 1;
                    end
                    else begin
                        w_delay_cnt <= 'd0;

                        uart_w_state    <= UART_W_RESP;
                        axi_uart_b_valid_o_r <= 'd1;
                    end
                end
            end
            UART_W_RESP:begin
                axi_uart_b_valid_o_r <= 'd0;
                uart_w_state    <= UART_W_IDLE;
            end
            default:begin
                uart_w_state <= UART_W_IDLE;
            end
        endcase
    end
end


import "DPI-C" function void riscv_uart_write(input int wdata,input wen);

always @(*)begin
    riscv_uart_write(w_data,axi_uart_w_ready_o_r);
end

endmodule
