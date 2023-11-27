#!/bin/bash

export RTL_DIR=$PWD/../verilog/rtl/
set -e

#TRACE_FLAGS="--trace-depth 6 --trace -DTRACE_ON -CFLAGS '-DTRACE_ON'"
verilator -DBENCH -Wno-fatal --timing --top-module tb -cc -exe ${TRACE_FLAGS} bench.cpp ./tb.v ./spiflash.v ${RTL_DIR}/as2650.v ${RTL_DIR}/avali_logo.v ${RTL_DIR}/boot_rom.v ${RTL_DIR}/defines.v ./sram_model.v ${RTL_DIR}/gf180_ram_512x8_wrapper.v ${RTL_DIR}/user_defines.v ${RTL_DIR}/user_project_wrapper.v ${RTL_DIR}/wrapped_as2650.v ${RTL_DIR}/SID/SID_channels.v ${RTL_DIR}/SID/SID_filter.v ${RTL_DIR}/SID/SID_top.v ${RTL_DIR}/SID/spi_dac_i.v ${RTL_DIR}/SID/tt_um_rejunity_sn76489.v ${RTL_DIR}/IO_Block/gpios.v ${RTL_DIR}/IO_Block/ram_controller.v ${RTL_DIR}/IO_Block/serial_ports.v ${RTL_DIR}/IO_Block/spi.v ${RTL_DIR}/IO_Block/timers.v ${RTL_DIR}/IO_Block/uart.v
cd obj_dir
make -f Vtb.mk
cd ..
