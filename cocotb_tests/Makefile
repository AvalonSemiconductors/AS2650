SIM ?= icarus
TOPLEVEL_LANG ?= verilog

# normal simulation
VERILOG_SOURCES += $(PWD)/tb.v $(PWD)/as2650.v

# TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
TOPLEVEL = tb

# MODULE is the basename of the Python test file
MODULE = test

COMPILE_ARGS += -DBENCH

include $(shell cocotb-config --makefiles)/Makefile.sim
