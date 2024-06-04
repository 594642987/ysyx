AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trm.c \
           riscv/ysyxsoc/ioe.c \
           riscv/ysyxsoc/timer.c \
           riscv/ysyxsoc/input.c \
           riscv/ysyxsoc/gpu.c \
           riscv/ysyxsoc/cte.c \
           riscv/ysyxsoc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections

LDFLAGS   += -T $(AM_HOME)/scripts/linker_ysyxsoc.ld \
			--defsym=_pmem_start=0x0f000000  \
			--defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

# SOCFLAGS += --batch
SOCFLAGS += --elf $(IMAGE).elf
SOCFLAGS += --img $(IMAGE).bin
SOCFLAGS += --diff ${NEMU_SOC_HOME}/build/riscv32-nemu-interpreter-so

image: $(IMAGE).elf
	@$(OBJDUMP) -h -t -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
	$(MAKE) -C $(SOC_HOME) ISA=$(ISA) run ARGS="$(SOCFLAGS)" 

wave:
	$(MAKE) -C $(SOC_HOME) ISA=$(ISA) wave ARGS="$(SOCFLAGS)" 

gdb: image
	$(MAKE) -C $(SOC_HOME) ISA=$(ISA) gdb ARGS="$(SOCFLAGS)"