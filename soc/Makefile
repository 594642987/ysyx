TOPNAME = ysyxSoCFull
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_INC_PATH += -I$(SOC_HOME)/vsrc
VERILATOR_INC_PATH += -I$(YSYXSOC_HOME)/perip/uart16550/rtl
VERILATOR_INC_PATH += -I$(YSYXSOC_HOME)/perip/spi/rtl

VERILATOR_FLAGS += --trace --cc --exe --build
VERILATOR_FLAGS += ${VERILATOR_INC_PATH}
VERILATOR_FLAGS += --top ${TOPNAME}
VERILATOR_FLAGS += --no-timing
VERILATOR_FLAGS += --timescale "1ns/1ns"
VERILATOR_FLAGS += --autoflush
# VERILATOR_FLAGS += --threads 10

BUILD_DIR  = ./build
OBJ_DIR    = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

LDFLAGS += -lSDL2 -lSDL2_image
LDFLAGS += -ldl 
LDFLAGS += -lreadline	#导入readline库，否则找不到readline函数
LDFLAGS += $(shell llvm-config --libs) -flto 	#llvm库

# 传进入作为mainargs的参数
DIFFTEST = ${NEMU_SOC_HOME}/nemu_soc/build/riscv32-nemu-interpreter-so
DIFF := --diff=${DIFFTEST}
IMGS ?= ../test/char-test.bin
IMG = --img=${IMGS}
ELFFILE = ../test/char-test.elf
ELF = --elf=${ELFFILE}

override ARGS ?= ${DIFF} ${IMG} ${ELF} $(IMG) #--batch
default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS += $(shell find $(abspath $(SOC_HOME)/vsrc) -name "*.v" )
VSRCS += $(shell find $(abspath $(YSYXSOC_HOME)/perip) -name "*.v" )
VSRCS += $(YSYXSOC_HOME)/build/ysyxSoCFull.v

SIM_SRCS := $(shell find $(abspath $(SOC_HOME)/sim_src) -name "*.cpp" -or -name "*.cc")
SIM_SRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

#g++ include路径
INC_PATH += $(SOC_HOME)/sim_src/include
INC_PATH += $(SOC_HOME)/sim_src/utils
INC_PATH += $(SOC_HOME)/sim_src/device/include
# INC_PATH += $(SOC_HOME)/sim_src/device/io
INCFLAGS += $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" -w

# llvm, 用figure—out消除 warning: "__STDC_FORMAT_MACROS" redefined报错
LLVM_FLAGS += $(filter-out -D__STDC_FORMAT_MACROS, $(shell llvm-config --cxxflags))  -fPIE
CXXFLAGS += $(LLVM_FLAGS) 

$(BIN): $(VSRCS) $(SIM_SRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
			--Mdir $(OBJ_DIR)

all: defualt

sim: $(BIN)

run:sim
	$(OBJ_DIR)/V$(TOPNAME) ${ARGS} --batch

wave: 
	gtkwave wave.vcd

clean:
	rm -rf $(BUILD_DIR)

clean1:
	-rm -rf obj_dir *.log *.dmp *.vpd core

include ../Makefile
