`include"ysyx_23060077_define.v"

module ysyx_23060077_Icache(
	input                           		clock             	,
	input                           		reset             	,

	input                           		ifu_valid_i       	,
	input  			[`INST_WIDTH-1:0]   		ifu_addr_i        	,
	output reg                      		ifu_ready_o       	,      
	output reg 	[`DATA_WIDTH-1:0]   		ifu_data_o        	,  

	input																ifu_fence_i					,

	// ICache Interface
	output reg                      		Icache_r_valid_o  	,
	output reg	[`AXI_ADDR_WIDTH-1:0] 	Icache_r_addr_o   	,
	input                           		Icache_r_ready_i  	,
	input   		[`DATA_WIDTH-1:0]     	Icache_r_data_i   	,
	output  		[`AXI_LEN_WIDTH-1:0]  	Icache_r_len_o    	,
	input                           		Icache_r_last_i     

);

localparam M = 4;  // b = 2 ^m = 16 块大小
localparam N = 8;  // k = 2 ^n = 64 块数
localparam CacheLineSize  = 2**M;	// = 2 ^M = 16 Byte 每一行多少个字节，一行为一个块
localparam BLOCK_SIZE   	= 8*(2**M);	// = 8*2 ^M = 128bit
localparam BLOCK_NUM    	= 2**N;			// 一个set有多少行
localparam TAG_NUM    		= 4;				// 有多少个set
integer i,j;
// 31    m+n m+n-1   m m-1    0
// +---------+---------+--------+
// |   tag   |  index  | offset |
// +---------+---------+--------+

wire 	[32-1-M-N:0]   	cache_tag			= ifu_addr_i[31:M+N];
wire 	[N-1:0]        	cache_index		= ifu_addr_i[M+N-1:M];
wire 	[M-1:0]        	cache_offset	= ifu_addr_i[M-1:0];

// 4块256Byte的cache set associative级联，random替换
reg 	[BLOCK_SIZE-1:0]	cache_data0   [0:BLOCK_NUM-1];
reg 	[BLOCK_SIZE-1:0]	cache_data1   [0:BLOCK_NUM-1];
reg 	[BLOCK_SIZE-1:0]	cache_data2   [0:BLOCK_NUM-1];
reg 	[BLOCK_SIZE-1:0]	cache_data3   [0:BLOCK_NUM-1];

reg 	[32-1-M-N:0]      tag_ram       [0:BLOCK_NUM-1][0:TAG_NUM-1];
reg  		    						tag_valid_ram	[0:BLOCK_NUM-1][0:TAG_NUM-1];

localparam ICACHE_STATE_WITDH = 3;
reg [ICACHE_STATE_WITDH-1:0] 			icache_state;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_IDLE   		= 'd0;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_RD_CACHE   = 'd1;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_RD_AXI 	  = 'd2;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_FENCE  		= 'd3;

wire [TAG_NUM-1:0] tag_hit = {
(tag_ram[cache_index][2'd3] == cache_tag & tag_valid_ram[cache_index][2'd3] == 1'b1),
(tag_ram[cache_index][2'd2] == cache_tag & tag_valid_ram[cache_index][2'd2] == 1'b1),
(tag_ram[cache_index][2'd1] == cache_tag & tag_valid_ram[cache_index][2'd1] == 1'b1),
(tag_ram[cache_index][2'd0] == cache_tag & tag_valid_ram[cache_index][2'd0] == 1'b1)	};

wire [1:0] tag_hit_idx = 
(tag_hit == 4'b0001) ?	2'd0	:
(tag_hit == 4'b0010) ?	2'd1	:
(tag_hit == 4'b0100) ?	2'd2	:
(tag_hit == 4'b1000) ?	2'd3	:	2'd0;

// wire tag_hit = (tag_ram[cache_index] == cache_tag & tag_valid_ram[cache_index] == 1'b1);
wire  [BLOCK_SIZE-1:0] 	cache_read_data = 
(tag_hit_idx == 2'd0) ? cache_data0[cache_index]	:
(tag_hit_idx == 2'd1) ? cache_data1[cache_index]	:
(tag_hit_idx == 2'd2) ? cache_data2[cache_index]	:
(tag_hit_idx == 2'd3) ? cache_data3[cache_index]	: 'd0;

reg  [BLOCK_SIZE-1:0] 	cache_write_data;
// 
reg  [1:0] data_cnt;
reg  [1:0] random_data_cnt;
reg    			cache_wen;

assign Icache_r_len_o 	= 8'd3;

always @(*) begin
	case(icache_state)
		ICACHE_IDLE:begin
			ifu_ready_o			= 'd0;
			ifu_data_o			= 'd0;
			Icache_r_valid_o	= 'd0;
			Icache_r_addr_o		= 'd0;
		end
		ICACHE_RD_CACHE:begin
			ifu_ready_o			= 'd1;
			case(cache_offset[M-1:2])
				2'd0:ifu_data_o = cache_read_data[0+:32] ;
				2'd1:ifu_data_o = cache_read_data[32+:32];
				2'd2:ifu_data_o = cache_read_data[64+:32];
				2'd3:ifu_data_o = cache_read_data[96+:32];
			endcase
		end
		ICACHE_RD_AXI:begin	// todo 优化方向：当offset==当前读到的第n个数时直接赋值输出，按照概率能优化2个周期
			Icache_r_valid_o	= 'd1;
			Icache_r_addr_o		= {ifu_addr_i[31:4],4'd0};

			if(Icache_r_last_i)begin
				ifu_ready_o		= 'd1;
				case(cache_offset[M-1:2])
					2'd0:ifu_data_o = cache_write_data[32+:32];
					2'd1:ifu_data_o = cache_write_data[64+:32];
					2'd2:ifu_data_o = cache_write_data[96+:32];
					2'd3:ifu_data_o = Icache_r_data_i;
				endcase
			end
		end
		default:begin
			ifu_ready_o			= 'd0;
			ifu_data_o			= 'd0;
			Icache_r_valid_o	= 'd0;
			Icache_r_addr_o		= 'd0;
		end
	endcase
end

always @(posedge clock) begin
	if(reset)begin
		random_data_cnt		<= 'd0;
	end
	else begin
		random_data_cnt 	<= random_data_cnt + 1;
	end
end
always @(posedge clock) begin
	if(reset)begin
		cache_wen					<= 'd0;
	end
	else if(Icache_r_last_i)begin
		cache_wen					<= 'd1;
	end
	else begin
		cache_wen					<= 'd0;
	end
end


always @(posedge clock ) begin
	if(reset)begin
		cache_write_data	<= 'd0;
	end
	else if(Icache_r_ready_i)begin
		cache_write_data	<= {Icache_r_data_i,cache_write_data[127:32]};
	end
end

always @(posedge clock) begin
	if(Icache_r_last_i)begin
		tag_ram[cache_index][random_data_cnt]				<= cache_tag;
		case(random_data_cnt)
			2'd0:cache_data0[cache_index] 				<= {Icache_r_data_i,cache_write_data[127:32]};
			2'd1:cache_data1[cache_index] 				<= {Icache_r_data_i,cache_write_data[127:32]};
			2'd2:cache_data2[cache_index] 				<= {Icache_r_data_i,cache_write_data[127:32]};
			2'd3:cache_data3[cache_index] 				<= {Icache_r_data_i,cache_write_data[127:32]};
		endcase
	end
end
always @(posedge clock) begin
	if(reset | ifu_fence_i)begin
		for(i=0; i<BLOCK_NUM; i++)begin
			for(j=0; j<TAG_NUM;j++)begin
				tag_valid_ram[i][j]				= 'd0;
			end
		end
	end
	else begin
		if(Icache_r_last_i)begin
			tag_valid_ram[cache_index][random_data_cnt]	<= 'd1;
		end
	end
end


always @(posedge clock) begin
	if(reset)begin
		icache_state	<= ICACHE_IDLE;
	end
	else begin
		case(icache_state)
		ICACHE_IDLE:begin
			if(ifu_valid_i == 1'b1)begin
				if(tag_hit != 'd0)begin
					icache_state	<= ICACHE_RD_CACHE;
				end
				else begin
					icache_state	<= ICACHE_RD_AXI;
				end
			end
			else if(ifu_fence_i)begin				// fence会比valid早一个周期，后续如果修改电路要考虑这里的问题
				icache_state	<= ICACHE_FENCE;
			end
		end
		ICACHE_RD_CACHE:begin
			if(ifu_ready_o)begin
				icache_state	<= ICACHE_IDLE;
			end
		end
		ICACHE_RD_AXI:begin
			if(Icache_r_last_i)begin
				icache_state	<= ICACHE_IDLE;
			end
		end
		ICACHE_FENCE:begin
			icache_state	<= ICACHE_IDLE;
		end
		default:begin
			icache_state	<= ICACHE_IDLE;
		end
		endcase
	end
end

`ifdef USING_DPI_C
import "DPI-C" function void Icache_access(input bit valid);
import "DPI-C" function void Icache_miss(input bit valid);
always @(posedge clock)begin
  if(icache_state == ICACHE_RD_CACHE)begin
    Icache_access(ifu_ready_o);
  end
	if(icache_state == ICACHE_RD_AXI)begin
    Icache_miss(ifu_ready_o);
  end
end
`endif


endmodule