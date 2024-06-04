VERILATOR = verilator
# project source
VSRCS = $(shell find $(abspath $(NPC_HOME)/vsrc) -name "*.v" )
SIM_SRCS := $(shell find $(abspath $(NPC_HOME)/sim_src) -name "*.cpp" -or -name "*.cc")
# INC_PATH :=$(shell find $(abspath $(NPC_HOME)/sim_src) -name "*.h")
VERILATOR_INC_PATH = -I$(NPC_HOME)/vsrc

TOPNAME = ysyx_23060077_top

VERILATOR_FLAGS += --trace --cc --exe --build 
VERILATOR_FLAGS += ${VERILATOR_INC_PATH}
VERILATOR_FLAGS += --top ${TOPNAME}

LDFLAGS += -lSDL2
LDFLAGS += -ldl 
LDFLAGS += -lreadline	#导入readline库，否则找不到readline函数
LDFLAGS += $(shell llvm-config --libs) -flto 	#llvm库

#g++ include路径
INC_PATH += $(NPC_HOME)/sim_src/include
INC_PATH += $(NPC_HOME)/sim_src/utils
INC_PATH += $(NPC_HOME)/sim_src/device/include
# INC_PATH += $(NPC_HOME)/sim_src/device/io
INCFLAGS += $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS)

# llvm, 用figure—out消除 warning: "__STDC_FORMAT_MACROS" redefined报错
LLVM_FLAGS += $(filter-out -D__STDC_FORMAT_MACROS, $(shell llvm-config --cxxflags))  -fPIE
CFLAGS += $(LLVM_FLAGS) 


DIFFTEST = ${NEMU_HOME}/build/riscv32-nemu-interpreter-so
DIFF := --diff=${DIFFTEST}
IMGS ?= ../am-kernels/tests/cpu-tests/build/add-riscv32e-npc.bin
IMG = --img=${IMGS}
ELFFILE = ../am-kernels/tests/cpu-tests/build/add-riscv32e-npc.elf
ELF = --elf=${ELFFILE}

override ARGS ?= ${DIFF} ${IMG} ${ELF} $(IMG) #--batch

all:defualt
#	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) ${VERILATOR_FLAGS} $(VSRCS) $(SIM_SRCS)  \
	$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))

run:sim
	./obj_dir/V${TOPNAME} ${ARGS} --batch

wave:
	gtkwave wave.vcd

clean:
	-rm -rf obj_dir *.log *.dmp *.vpd core

include ../Makefile
