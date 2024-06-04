`define AXI_ADDR_WIDTH          32
`define AXI_DATA_WIDTH          64
`define AXI_PORT_WIDTH          3

`define AXI_RESP_WIDTH          2
`define AXI_ID_WIDTH            4
`define AXI_LEN_WIDTH           8


   

`define AXI_SIZE_WIDTH          3
`define AXI_SIZE_1              `AXI_SIZE_WIDTH'b000
`define AXI_SIZE_2              `AXI_SIZE_WIDTH'b001
`define AXI_SIZE_4              `AXI_SIZE_WIDTH'b010
`define AXI_SIZE_8              `AXI_SIZE_WIDTH'b011

`define AXI_BURST_WIDTH         2
`define AXI_BURST_FIXED         `AXI_BURST_WIDTH'b00
`define AXI_BURST_INCR          `AXI_BURST_WIDTH'b01
`define AXI_BURST_WRAP          `AXI_BURST_WIDTH'b10

`define AXI_STRB_WIDTH          8

`define AXI_W_STATE_WIDTH       3        
`define AXI_R_STATE_WIDTH       2        
`define AXI_ARB_STATE_WIDTH     2

`define AXI_UART_ADDR           32'ha00003f8
`define AXI_SRAM_ADDR           32'h8???_????
`define AXI_CLINT_ADDR          32'h0200_????