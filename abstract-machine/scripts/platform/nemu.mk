AM_SRCS := platform/nemu/trm.c \
           platform/nemu/ioe/ioe.c \
           platform/nemu/ioe/timer.c \
           platform/nemu/ioe/input.c \
           platform/nemu/ioe/gpu.c \
           platform/nemu/ioe/audio.c \
           platform/nemu/ioe/disk.c \
           platform/nemu/mpe.c

### -fdata-sections  全局和静态变量放入单独的节（sections）中
### -ffunction-sections 将函数放入单独的节中
CFLAGS    += -fdata-sections -ffunction-sections -fno-inline
### -T $(AM_HOME)/scripts/linker.ld 使用指定的链接脚本文件
### --defsym=_pmem_start=0x80000000 将 _pmem_start 符号定义为 0x80000000
### --defsym=_entry_offset=0x0 将 _entry_offset 符号定义为 0x0
### --gc-sections 最终可执行文件中删除未使用的节
### -e _start 指定了程序的入口点
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld \
             --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
### 传递nemu的flags，用于传递一些文件路径或运行模式
NEMUFLAGS += -l $(shell dirname $(IMAGE).elf)/nemu-log.txt 
NEMUFLAGS += -b 
NEMUFLAGS += -e $(IMAGE).elf

### 定义了一个名为 MAINARGS 的宏，并为它设置一个字符串值，该字符串的内容由 $(mainargs) 变量的值
CFLAGS += -DMAINARGS=\"$(mainargs)\"
CFLAGS += -I$(AM_HOME)/am/src/platform/nemu/include
.PHONY: $(AM_HOME)/am/src/platform/nemu/trm.c

### OBJDUMP反汇编
### OBJCOPY
###    -S 去除无效的节
###    --set-section-flags   .bss=alloc,contents 选项设置 .bss 节的标志，以指示它应该被分配并包含内容。
###    -O binary 输出为二进制文件
image: $(IMAGE).elf ### 生成可执行文件的目标依赖于 $(IMAGE).elf 文件
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt 
	@echo + OBJCOPY "->" $(IMAGE_REL).bin 
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

### -C $(NEMU_HOME) -C代表切换到$(NEMU_HOME)目录
### ARGS、IMG都是传递的参数
run: image
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) run ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin

gdb: image
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) gdb ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin
