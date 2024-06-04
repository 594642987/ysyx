`include"ysyx_23060077_riscv_define.v"

module ysyx_23060077_riscv_csr(
    input 	                            clk,
    input 	                            rst_n,

    // input                               wr_en,
    input       [`CSR_WIDTH-1:0]        wr_addr,
    input       [`DATA_WIDTH-1:0]       wr_data,

    // input                               rd_en,
    input       [`CSR_WIDTH-1:0]        rd_addr,
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

reg [`DATA_WIDTH-1:0] csr_reg [2**`CSR_WIDTH-1:0];
import "DPI-C" function void set_csr_ptr(input logic [`DATA_WIDTH-1:0] csr_reg []);
initial set_csr_ptr(csr_reg);

wire wr_en,rd_en;
assign wr_en = (i_inst[6:0] == `SYS && i_inst[14:12] != 3'b000);
assign rd_en = (i_inst[6:0] == `SYS && i_inst[14:12] != 3'b000);

wire [`DATA_WIDTH-1:0]        wr_data_r;
wire [`DATA_WIDTH-1:0]        temp;
assign temp = csr_reg[wr_addr];
assign wr_data_r = (i_inst[13:12] == 2'b01) ? wr_data : (i_inst[13:12] == 2'b10) ? temp | wr_data : temp & (~wr_data);

//rd_data
always @(*) begin
    if(!rst_n)begin  
        rd_data_r = 'd0; 
    end
    else if(rd_en)begin
        rd_data_r = csr_reg[rd_addr];
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
    if(!rst_n)begin
        csr_reg[`CSR_MSTATUS]   <= 'd0;
    end
    else if(i_csr_ecall)begin
        csr_reg[`CSR_MSTATUS]   <= o_mstatus_r | 32'h0000_1800;
    end
    else if(i_csr_mret)begin
        csr_reg[`CSR_MSTATUS]   <= o_mstatus_r & ~(32'h0000_1800);
    end
    else if(wr_en && wr_addr == `CSR_MSTATUS)begin
        csr_reg[`CSR_MSTATUS]   <= wr_data_r;
    end
    else begin
        csr_reg[`CSR_MSTATUS]   <= csr_reg[`CSR_MSTATUS];
    end
end

//mtvec
assign o_mtvec = csr_reg[`CSR_MTVEC];
always @(posedge clk) begin
    if(!rst_n)begin
        csr_reg[`CSR_MTVEC] <= 'd0;
    end
    else if(wr_en && wr_addr == `CSR_MTVEC)begin
        csr_reg[`CSR_MTVEC]   <= wr_data_r;
    end
    else begin
        csr_reg[`CSR_MTVEC]   <= csr_reg[`CSR_MTVEC];
    end
end

//mepc
reg [`INST_WIDTH-1:0] mepc_inst_r;
assign o_mpec = csr_reg[`CSR_MEPC];

always @(posedge clk) begin
    if(!rst_n)begin
        csr_reg[`CSR_MEPC]  <= 'd0;
        mepc_inst_r         <= 'd0;
    end
    else if(i_csr_ecall)begin
        csr_reg[`CSR_MEPC]   <= i_pc;
        mepc_inst_r          <= i_inst;
    end
    else if(wr_en && wr_addr == `CSR_MEPC)begin
        csr_reg[`CSR_MEPC]   <= wr_data_r;
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
    if(!rst_n)begin
        csr_reg[`CSR_MCAUSE]    <= 'd0;
    end
    else if(i_csr_ecall)begin
        csr_reg[`CSR_MCAUSE]    <= 32'd11;
    end
    else if(wr_en && wr_addr == `CSR_MCAUSE)begin
        csr_reg[`CSR_MCAUSE]    <= wr_data_r;
    end
    else begin
        csr_reg[`CSR_MCAUSE]    <= csr_reg[`CSR_MCAUSE];
    end
end

endmodule