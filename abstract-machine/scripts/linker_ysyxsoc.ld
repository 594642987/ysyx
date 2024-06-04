ENTRY(_start)
MEMORY {
  mrom :  ORIGIN = 0x20000000, LENGTH = 4K
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  sram :  ORIGIN = 0x0f000000, LENGTH = 8K
  sdram : ORIGIN = 0xa0000000, LENGTH = 256M
}

SECTIONS {
  . = ORIGIN(flash);

  .fsbl :{
    *(entry)
    *(.text._trm_init)
    *(.text.fsbl)
    . = ALIGN(8);
  } > flash

  _ssbl_origin = .;
  .ssbl : {
    _ssbl_ram_start = .;
    *(.text.ssbl)
    . = ALIGN(8);
    _ssbl_ram_end = .;
  } > psram AT> flash

  _test_origin = LOADADDR(.text);
  .text : {
    _text_ram_start = .;
    *(.text*)
    . = ALIGN(8);
  } > psram AT> flash
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
    *(.srodata)
    *(.srodata.*)
    . = ALIGN(8);
  } > psram AT> flash

  .data : {
    *(.data)
    *(.data.*)
    *(.sdata)
    *(.sdata.*)
    . = ALIGN(8);
    _data_ram_end = .;
  } > psram AT> flash

  edata = .;
  _data = .;

  .bss : {
	  _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(8);
    _bss_end = .;
  } > psram AT> flash

  _stack_top = ALIGN(0x30000);
  . = _stack_top + 0x20000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x60000);
  _heap_end = _heap_start  + 0x30000;
}
