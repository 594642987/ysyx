`include"ysyx_23060077_define.v"

// csr reg addr
`define CSR_ADDR_WIDTH      12
`define CSR_M_CYCLE_ADDR    `CSR_ADDR_WIDTH'hb00    
`define CSR_MSTATUS_ADDR    `CSR_ADDR_WIDTH'h300
`define CSR_MIE_ADDR        `CSR_ADDR_WIDTH'h304
`define CSR_MTVEC_ADDR      `CSR_ADDR_WIDTH'h305    
`define CSR_MEPC_ADDR       `CSR_ADDR_WIDTH'h341
`define CSR_MCAUSE_ADDR     `CSR_ADDR_WIDTH'h342
`define CSR_MTVAL_ADDR      `CSR_ADDR_WIDTH'h343
`define CSR_MINSTRET_ADDR   `CSR_ADDR_WIDTH'hb02
`define CSR_MSCRATCH_ADDR   `CSR_ADDR_WIDTH'h340
`define CSR_MVENDORID_ADDR  `CSR_ADDR_WIDTH'hF11
`define CSR_MARCHID_ADDR    `CSR_ADDR_WIDTH'hF12

`define CSR_REG_WIDTH       4
`define CSR_M_CYCLE         `CSR_REG_WIDTH'd0    
`define CSR_MSTATUS         `CSR_REG_WIDTH'd1
`define CSR_MIE             `CSR_REG_WIDTH'd2
`define CSR_MTVEC           `CSR_REG_WIDTH'd3    
`define CSR_MEPC            `CSR_REG_WIDTH'd4
`define CSR_MCAUSE          `CSR_REG_WIDTH'd5
`define CSR_MTVAL           `CSR_REG_WIDTH'd6
`define CSR_MINSTRET        `CSR_REG_WIDTH'd7
`define CSR_MSCRATCH        `CSR_REG_WIDTH'd8
`define CSR_MVENDORID       `CSR_REG_WIDTH'd9
`define CSR_MARCHID         `CSR_REG_WIDTH'd10

module ysyx_23060077_csr(
    input 	                            clk,
    input 	                            reset,

    // input                               wr_en,
    input       [`CSR_ADDR_WIDTH-1:0]   wr_addr,
    input       [`DATA_WIDTH-1:0]       wr_data,

    // input                               rd_en,
    input       [`CSR_ADDR_WIDTH-1:0]   rd_addr,
    output      [`DATA_WIDTH-1:0]       rd_data,

    input                               i_csr_ecall,
    input                               i_csr_mret,

    input       [`INST_WIDTH-1:0]       i_inst, 
    input       [`DATA_WIDTH-1:0]       i_pc,

    output      [`DATA_WIDTH-1:0]       o_mstatus,
    output      [`DATA_WIDTH-1:0]       o_mtvec,
    output      [`INST_WIDTH-1:0]       o_mpec   
);


reg [`DATA_WIDTH-1:0]       rd_data_r;
assign rd_data = rd_data_r;

reg [`DATA_WIDTH-1:0] csr_reg [2**`CSR_REG_WIDTH-1:0];
`ifdef
import "DPI-C" function void set_csr_ptr(input logic [`DATA_WIDTH-1:0] csr_reg []);
initial set_csr_ptr(csr_reg);
`endif
wire wr_en,rd_en;
assign wr_en = (i_inst[6:0] == `SYS && i_inst[14:12] != 3'b000);
assign rd_en = (i_inst[6:0] == `SYS && i_inst[14:12] != 3'b000);

// wire [`DATA_WIDTH-1:0]        wr_data_r;
// wire [`DATA_WIDTH-1:0]        temp;
// assign temp = csr_reg[wr_addr];
// assign wr_data_r = (i_inst[13:12] == 2'b01) ? wr_data : (i_inst[13:12] == 2'b10) ? temp | wr_data : temp & (~wr_data);

assign csr_reg[`CSR_MVENDORID]  = `MVENDORID;
assign csr_reg[`CSR_MARCHID]    = `MARCHID;

//rd_data
always @(*) begin
    if(reset)begin  
        rd_data_r = 'd0; 
    end
    else if(rd_en)begin
        case(rd_addr)
            `CSR_M_CYCLE_ADDR  :begin rd_data_r = csr_reg[`CSR_M_CYCLE];    end
            `CSR_MSTATUS_ADDR  :begin rd_data_r = csr_reg[`CSR_MSTATUS];    end
            `CSR_MIE_ADDR      :begin rd_data_r = csr_reg[`CSR_MIE];        end
            `CSR_MTVEC_ADDR    :begin rd_data_r = csr_reg[`CSR_MTVEC];      end
            `CSR_MEPC_ADDR     :begin rd_data_r = csr_reg[`CSR_MEPC];       end
            `CSR_MCAUSE_ADDR   :begin rd_data_r = csr_reg[`CSR_MCAUSE];     end
            `CSR_MTVAL_ADDR    :begin rd_data_r = csr_reg[`CSR_MTVAL];      end
            `CSR_MINSTRET_ADDR :begin rd_data_r = csr_reg[`CSR_MINSTRET];   end
            `CSR_MSCRATCH_ADDR :begin rd_data_r = csr_reg[`CSR_MSCRATCH];   end
            `CSR_MVENDORID_ADDR:begin rd_data_r = csr_reg[`CSR_MVENDORID];  end
            `CSR_MARCHID_ADDR  :begin rd_data_r = csr_reg[`CSR_MARCHID];    end
            default:begin
                rd_data_r = 'd0;
            end
        endcase
    end
    else begin
        rd_data_r = 'd0;
    end
end

// mstatus
wire [`DATA_WIDTH-1:0]       o_mstatus_r;
assign o_mstatus_r = csr_reg[`CSR_MSTATUS];
assign o_mstatus = o_mstatus_r;

always @(posedge clk) begin
    if(reset)begin
        csr_reg[`CSR_MSTATUS]   <= 'd0;
    end
    else if(i_csr_ecall)begin
        csr_reg[`CSR_MSTATUS]   <= o_mstatus_r | 32'h0000_1800;
    end
    else if(i_csr_mret)begin
        csr_reg[`CSR_MSTATUS]   <= o_mstatus_r & ~(32'h0000_1800);
    end
    else if(wr_en && wr_addr == `CSR_MSTATUS_ADDR)begin
        case(i_inst[13:12])
            2'b01:  csr_reg[`CSR_MSTATUS]   <= wr_data;
            2'b10:  csr_reg[`CSR_MSTATUS]   <= wr_data | csr_reg[`CSR_MSTATUS];
            2'b11:  csr_reg[`CSR_MSTATUS]   <= (~wr_data) & csr_reg[`CSR_MSTATUS];
            default: csr_reg[`CSR_MSTATUS]   <= csr_reg[`CSR_MSTATUS];
        endcase
        // csr_reg[`CSR_MSTATUS]   <= wr_data;
    end
    else begin
        csr_reg[`CSR_MSTATUS]   <= csr_reg[`CSR_MSTATUS];
    end
end

//mtvec
assign o_mtvec = csr_reg[`CSR_MTVEC];
always @(posedge clk) begin
    if(reset)begin
        csr_reg[`CSR_MTVEC] <= 'd0;
    end
    else if(wr_en && wr_addr == `CSR_MTVEC_ADDR)begin
        case(i_inst[13:12])
            2'b01:  csr_reg[`CSR_MTVEC]   <= wr_data;
            2'b10:  csr_reg[`CSR_MTVEC]   <= wr_data | csr_reg[`CSR_MTVEC];
            2'b11:  csr_reg[`CSR_MTVEC]   <= (~wr_data) & csr_reg[`CSR_MTVEC];
            default: csr_reg[`CSR_MTVEC]   <= csr_reg[`CSR_MTVEC];
        endcase
        // csr_reg[`CSR_MTVEC]   <= wr_data;
    end
    else begin
        csr_reg[`CSR_MTVEC]   <= csr_reg[`CSR_MTVEC];
    end
end

//mepc
reg [`INST_WIDTH-1:0] mepc_inst_r;
assign o_mpec = csr_reg[`CSR_MEPC];

always @(posedge clk) begin
    if(reset)begin
        csr_reg[`CSR_MEPC]  <= 'd0;
        mepc_inst_r         <= 'd0;
    end
    else if(i_csr_ecall)begin
        csr_reg[`CSR_MEPC]   <= i_pc;
        mepc_inst_r          <= i_inst;
    end
    else if(wr_en && wr_addr == `CSR_MEPC_ADDR)begin
        case(i_inst[13:12])
            2'b01:  csr_reg[`CSR_MEPC]   <= wr_data;
            2'b10:  csr_reg[`CSR_MEPC]   <= wr_data | csr_reg[`CSR_MEPC];
            2'b11:  csr_reg[`CSR_MEPC]   <= (~wr_data) & csr_reg[`CSR_MEPC];
            default: csr_reg[`CSR_MEPC]   <= csr_reg[`CSR_MEPC];
        endcase
        // csr_reg[`CSR_MEPC]   <= wr_data;
        mepc_inst_r          <= mepc_inst_r;
    end
    else begin
        csr_reg[`CSR_MEPC]   <= csr_reg[`CSR_MEPC];
        mepc_inst_r          <= mepc_inst_r;
    end
end

//mcause
wire [`DATA_WIDTH-1:0] mcause;
assign mcause = csr_reg[`CSR_MCAUSE];
always @(posedge clk) begin
    if(reset)begin
        csr_reg[`CSR_MCAUSE]    <= 'd0;
    end
    else if(i_csr_ecall)begin
        csr_reg[`CSR_MCAUSE]    <= 32'd11;
    end
    else if(wr_en && wr_addr == `CSR_MCAUSE_ADDR)begin
        case(i_inst[13:12])
            2'b01:  csr_reg[`CSR_MCAUSE]   <= wr_data;
            2'b10:  csr_reg[`CSR_MCAUSE]   <= wr_data | csr_reg[`CSR_MCAUSE];
            2'b11:  csr_reg[`CSR_MCAUSE]   <= (~wr_data) & csr_reg[`CSR_MCAUSE];
            default: csr_reg[`CSR_MCAUSE]  <= csr_reg[`CSR_MCAUSE];
        endcase
        // csr_reg[`CSR_MCAUSE]    <= wr_data;
    end
    else begin
        csr_reg[`CSR_MCAUSE]    <= csr_reg[`CSR_MCAUSE];
    end
end

endmodule