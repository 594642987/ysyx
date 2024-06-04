module bitrev (
  input  sck,
  input  ss,
  input  mosi,
  output reg miso
);
  // assign miso = 1'b1;
  reg[7:0] data;
  reg[7:0] bit_cnt;
  initial begin
    data     = 0;
    bit_cnt = 0;
    miso    = 1'b1;
  end

  always @(posedge sck ) begin
    if(!ss)begin
      if(bit_cnt <= 7)begin
        data <= {data[6:0],mosi};
        bit_cnt <= bit_cnt + 1;
      end
      else if(bit_cnt <=15)begin
        data <= data;
        bit_cnt <= bit_cnt + 1;
      end
    end
    else begin
      bit_cnt <= 0;
      data <= 0;
    end
  end

  always @(negedge sck) begin
    case(bit_cnt)
      8'd8:   miso <= data[7];
      8'd9:   miso <= data[6];
      8'd10:  miso <= data[5];
      8'd11:  miso <= data[4];
      8'd12:  miso <= data[3];
      8'd13:  miso <= data[2];
      8'd14:  miso <= data[1];
      8'd15:  miso <= data[0];
      default miso <= 1'b1;
        
    endcase
  end

endmodule
