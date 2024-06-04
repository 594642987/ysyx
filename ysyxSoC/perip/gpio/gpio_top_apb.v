module gpio_top_apb(
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

  output [15:0] gpio_out,
  input  [15:0] gpio_in,
  output [7:0]  gpio_seg_0,
  output [7:0]  gpio_seg_1,
  output [7:0]  gpio_seg_2,
  output [7:0]  gpio_seg_3,
  output [7:0]  gpio_seg_4,
  output [7:0]  gpio_seg_5,
  output [7:0]  gpio_seg_6,
  output [7:0]  gpio_seg_7
);

reg [31:0] gpio_reg [0:3];
assign gpio_out = gpio_reg[0][15:0];
wire [7:0] gpio_seg [0:7];
assign gpio_seg_0 = gpio_seg[0];
assign gpio_seg_1 = gpio_seg[1];
assign gpio_seg_2 = gpio_seg[2];
assign gpio_seg_3 = gpio_seg[3];
assign gpio_seg_4 = gpio_seg[4];
assign gpio_seg_5 = gpio_seg[5];
assign gpio_seg_6 = gpio_seg[6];
assign gpio_seg_7 = gpio_seg[7];

localparam N = 4;
integer i;
genvar k;
generate
  for(k=0; k<8; k++)begin
    bcd7seg bcd7seg_u(
      .b(gpio_reg[2][4*k+:4]),
      .en(1'b1),
      .h(gpio_seg[k])
    );
  end
endgenerate

localparam GPIO_STATE_WIDTH = 2;
reg [GPIO_STATE_WIDTH-1:0] gpio_apb_state;
localparam [GPIO_STATE_WIDTH-1:0] GPIO_APB_IDLE   = 'd0;
localparam [GPIO_STATE_WIDTH-1:0] GPIO_APB_READ   = 'd1;
localparam [GPIO_STATE_WIDTH-1:0] GPIO_APB_WRITE  = 'd2;

assign in_pready = (gpio_apb_state == GPIO_APB_READ | gpio_apb_state == GPIO_APB_WRITE) ? 1'b1 : 1'b0;
assign in_prdata = (gpio_apb_state == GPIO_APB_READ) ? gpio_reg[in_paddr[3:2]] : 'd0;
assign in_pslverr = 1'b0;

always @(posedge clock or posedge reset) begin
  if(reset)begin
    gpio_apb_state  <= GPIO_APB_IDLE;
  end
  else begin
    case(GPIO_APB_IDLE)
      GPIO_APB_IDLE:begin
        if(in_psel)begin
          case(in_pwrite)
            1'b0: gpio_apb_state  <= GPIO_APB_READ;
            1'b1: gpio_apb_state  <= GPIO_APB_WRITE;
          endcase
        end
      end
      GPIO_APB_READ:begin
        gpio_apb_state  <= GPIO_APB_IDLE;
      end
      GPIO_APB_WRITE:begin
        gpio_apb_state  <= GPIO_APB_IDLE;
      end
      default:begin
        gpio_apb_state  <= GPIO_APB_IDLE;
      end
    endcase
  end
end

always @(posedge clock or posedge reset) begin
  if(reset)begin
    for(i=0; i<N; i++)begin
      gpio_reg[i] <= 'd0;
    end
  end
  else begin
    if(in_paddr[3:2] != 2'b01 && in_penable)begin
      for(i=0;i<4;i++)begin
        gpio_reg[in_paddr[3:2]] <= in_pwdata;
      end
    end
    else begin
      gpio_reg[1][15:0] <= gpio_in;
    end
  end
end


endmodule
