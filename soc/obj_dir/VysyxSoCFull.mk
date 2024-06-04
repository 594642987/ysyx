# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VysyxSoCFull.mk

default: VysyxSoCFull

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VysyxSoCFull
# Module prefix (from --prefix)
VM_MODPREFIX = VysyxSoCFull
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/include \
	-I/home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/utils \
	-I/home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/device/include \
	-I/usr/lib/llvm-14/include \
	-std=c++14 \
	-fno-exceptions \
	-D_GNU_SOURCE \
	-D__STDC_CONSTANT_MACROS \
	-D__STDC_LIMIT_MACROS \
	-fPIE \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lSDL2 \
	-ldl \
	-lreadline \
	-lLLVM-14 \
	-flto \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	deivice_timer \
	device_kb \
	device_lib \
	device_uart \
	device_vga \
	map \
	mmio \
	port-io \
	cpu \
	difftest \
	disasm \
	dpic \
	expr \
	ftrace \
	init \
	pmem \
	reg \
	sdb \
	watchpoint \
	sim_main \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src \
	/home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/device \
	/home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/device/io \
	/home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb \


### Default rules...
# Include list of all generated classes
include VysyxSoCFull_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

deivice_timer.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/device/deivice_timer.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device_kb.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/device/device_kb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device_lib.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/device/device_lib.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device_uart.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/device/device_uart.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device_vga.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/device/device_vga.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/device/io/map.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/device/io/mmio.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
port-io.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/device/io/port-io.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
cpu.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb/cpu.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb/difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dpic.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb/dpic.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb/expr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ftrace.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb/ftrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb/init.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
pmem.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb/pmem.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb/reg.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb/sdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sdb/watchpoint.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim_main.o: /home/jimple/Documents/ysyx/ysyx-workbench/soc/sim_src/sim_main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VysyxSoCFull: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
