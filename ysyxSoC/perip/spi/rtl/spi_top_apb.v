// define this macro to enable fast behavior simulation
// for flash by skipping SPI transfers
// `define FAST_FLASH

module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_ss_num       = 8
) (
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);

`ifdef FAST_FLASH

wire [31:0] data;
parameter invalid_cmd = 8'h0;
flash_cmd flash_cmd_i(
  .clock(clock),
  .valid(in_psel && !in_penable),
  .cmd(in_pwrite ? invalid_cmd : 8'h03),
  .addr({8'b0, in_paddr[23:2], 2'b0}),
  .data(data)
);
assign spi_sck    = 1'b0;
assign spi_ss     = 8'b0;
assign spi_mosi   = 1'b1;
assign spi_irq_out= 1'b0;
assign in_pslverr = 1'b0;
assign in_pready  = in_penable && in_psel && !in_pwrite;
assign in_prdata  = data[31:0];

`else


reg  [31:0] wb_adr_i;
reg  [31:0] wb_dat_i;
wire [31:0] wb_dat_o;

reg         wb_we_i ;
reg         wb_stb_i;
reg         wb_cyc_i;
wire        wb_ack_o;
wire        wb_int_o;
reg  [3:0]	wb_sel_i;	

assign in_pready = (spi_state == SPI_REG) ? wb_ack_o : (spi_state == SPI_FLASH_DATA) ? wb_ack_o : 'b0;
assign in_prdata = (spi_state == SPI_REG) ? wb_dat_o : (spi_state == SPI_FLASH_DATA) ? {wb_dat_o[7:0],wb_dat_o[15:8],wb_dat_o[23:16],wb_dat_o[31:24]}:'d0;


reg [3:0]	spi_state;
parameter [3:0] SPI_IDLE   		= 'd0;
parameter [3:0] SPI_REG    		= 'd1;
parameter [3:0] SPI_FLASH_TX1   = 'd2;
parameter [3:0] SPI_FLASH_TX0   = 'd3;
parameter [3:0] SPI_FLASH_SS1   = 'd4;
parameter [3:0] SPI_FLASH_CTRL  = 'd5;
parameter [3:0] SPI_FLASH_INTT  = 'd6;
parameter [3:0] SPI_FLASH_SS0   = 'd7;
parameter [3:0] SPI_FLASH_DATA  = 'd8;

always @(posedge clock) begin
    if(reset)begin
		wb_adr_i	<= 'd0;
		wb_dat_i	<= 'd0;
		wb_we_i 	<= 'd0;
		wb_stb_i	<= 'd0;
		wb_cyc_i	<= 'd0;

		spi_state	<= SPI_IDLE;
    end
	else begin
		case(spi_state)
			SPI_IDLE:begin
				wb_adr_i	<= 'd0;
				wb_dat_i	<= 'd0;
				wb_we_i 	<= 'd0;
				wb_stb_i	<= 'd0;
				wb_cyc_i	<= 'd0;
				wb_sel_i	<= 'd0;
				if(in_psel & (in_paddr[29:28] == 2'b01))begin
					spi_state	<= SPI_REG;
				end
				else if(in_psel & (in_paddr[29:28] == 2'b11))begin
					spi_state	<= SPI_FLASH_TX1;
				end
			end
			SPI_REG:begin
				wb_adr_i	<= in_paddr;
				wb_dat_i	<= in_pwdata;
				wb_we_i 	<= in_pwrite;
				wb_stb_i	<= in_psel;
				wb_cyc_i	<= in_penable;
				wb_sel_i	<= in_pstrb;
				if(wb_ack_o)begin
					spi_state	<= SPI_IDLE;
				end
			end
			SPI_FLASH_TX1:begin
				wb_we_i 	<= 1'b1;
				wb_stb_i	<= 1'b1;
				wb_cyc_i	<= 1'b1;
				wb_adr_i	<= 32'h00000004;
				wb_dat_i	<= {8'h03,in_paddr[23:2],2'b00};	// 地址4字节对齐
				wb_sel_i	<= 4'hf;
				if(wb_ack_o)begin
					wb_we_i 	<= 1'b0;
					wb_stb_i	<= 1'b0;
					wb_cyc_i	<= 1'b0;
					spi_state	<= SPI_FLASH_TX0;
				end
			end
			SPI_FLASH_TX0:begin
				wb_we_i 	<= 1'b1;
				wb_stb_i	<= 1'b1;
				wb_cyc_i	<= 1'b1;
				wb_adr_i	<= 32'h00000000;
				wb_dat_i	<= 'd0;
				if(wb_ack_o)begin
					wb_we_i 	<= 1'b0;
					wb_stb_i	<= 1'b0;
					wb_cyc_i	<= 1'b0;
					spi_state	<= SPI_FLASH_SS1;
				end
			end
			SPI_FLASH_SS1:begin
				wb_we_i 	<= 1'b1;
				wb_stb_i	<= 1'b1;
				wb_cyc_i	<= 1'b1;
				wb_adr_i	<= 32'h00000018;
				wb_dat_i	<= 'd1;
				if(wb_ack_o)begin
					wb_we_i 	<= 1'b0;
					wb_stb_i	<= 1'b0;
					wb_cyc_i	<= 1'b0;
					spi_state	<= SPI_FLASH_CTRL;
				end
			end
			SPI_FLASH_CTRL:begin
				wb_we_i 	<= 1'b1;
				wb_stb_i	<= 1'b1;
				wb_cyc_i	<= 1'b1;
				wb_adr_i	<= 32'h00000010;
				wb_dat_i	<= 32'h00001140;
				if(wb_ack_o)begin
					wb_we_i 	<= 1'b0;
					wb_stb_i	<= 1'b0;
					wb_cyc_i	<= 1'b0;
					spi_state	<= SPI_FLASH_INTT;
				end
			end
			SPI_FLASH_INTT:begin
				if(wb_int_o == 1'b1)begin
					spi_state	<=  SPI_FLASH_SS0;
				end
			end
			SPI_FLASH_SS0:begin
				wb_we_i 	<= 1'b1;
				wb_stb_i	<= 1'b1;
				wb_cyc_i	<= 1'b1;
				wb_adr_i	<= 32'h00000018;
				wb_dat_i	<= 'd0;
				if(wb_ack_o)begin
					wb_we_i 	<= 1'b0;
					wb_stb_i	<= 1'b0;
					wb_cyc_i	<= 1'b0;
					spi_state	<= SPI_FLASH_DATA;
				end
			end
			SPI_FLASH_DATA:begin
				wb_we_i 	<= 1'b0;
				wb_stb_i	<= 1'b1;
				wb_cyc_i	<= 1'b1;
				wb_adr_i	<= 32'h00000000;
				if(wb_ack_o)begin
					wb_stb_i	<= 1'b0;
					wb_cyc_i	<= 1'b0;
					spi_state	<= SPI_IDLE;
				end
			end
			default:begin
				spi_state	<= SPI_IDLE;
			end
		endcase
	end
end


spi_top u0_spi_top (
	.wb_clk_i(clock),
	.wb_rst_i(reset),
	.wb_adr_i(wb_adr_i[4:0]),
	.wb_dat_i(wb_dat_i),
	.wb_dat_o(wb_dat_o),
	.wb_sel_i(wb_sel_i),
	.wb_we_i (wb_we_i),
	.wb_stb_i(wb_stb_i),
	.wb_cyc_i(wb_cyc_i),
	.wb_ack_o(wb_ack_o),
	.wb_err_o(in_pslverr),
	.wb_int_o(wb_int_o),

	.ss_pad_o(spi_ss),
	.sclk_pad_o(spi_sck),
	.mosi_pad_o(spi_mosi),
	.miso_pad_i(spi_miso)
);


// spi_top u0_spi_top (
//   .wb_clk_i(clock),
//   .wb_rst_i(reset),
//   .wb_adr_i(in_paddr[4:0]),
//   .wb_dat_i(in_pwdata),
//   .wb_dat_o(in_prdata),
//   .wb_sel_i(in_pstrb),
//   .wb_we_i (in_pwrite),
//   .wb_stb_i(in_psel),
//   .wb_cyc_i(in_penable),
//   .wb_ack_o(in_pready),
//   .wb_err_o(in_pslverr),
//   .wb_int_o(spi_irq_out),

//   .ss_pad_o(spi_ss),
//   .sclk_pad_o(spi_sck),
//   .mosi_pad_o(spi_mosi),
//   .miso_pad_i(spi_miso)
// );

`endif // FAST_FLASH

endmodule
