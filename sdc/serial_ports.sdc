###############################################################################
# Created by write_sdc
# Mon Nov 20 20:49:47 2023
###############################################################################
current_design serial_ports
###############################################################################
# Timing Constraints
###############################################################################
create_clock -name clk -period 28.0000 [get_ports {wb_clk_i}]
set_clock_transition 0.1500 [get_clocks {clk}]
set_clock_uncertainty 0.2500 clk
set_propagated_clock [get_clocks {clk}]
set_clock_latency -source -min 4.6500 [get_clocks {clk}]
set_clock_latency -source -max 5.5700 [get_clocks {clk}]
###############################################################################
# Environment
###############################################################################
set_load -pin_load 0.1900 [get_ports {TXD}]
set_load -pin_load 0.1900 [get_ports {irq3}]
set_load -pin_load 0.1900 [get_ports {data_out[7]}]
set_load -pin_load 0.1900 [get_ports {data_out[6]}]
set_load -pin_load 0.1900 [get_ports {data_out[5]}]
set_load -pin_load 0.1900 [get_ports {data_out[4]}]
set_load -pin_load 0.1900 [get_ports {data_out[3]}]
set_load -pin_load 0.1900 [get_ports {data_out[2]}]
set_load -pin_load 0.1900 [get_ports {data_out[1]}]
set_load -pin_load 0.1900 [get_ports {data_out[0]}]
set_load -pin_load 0.1900 [get_ports {io_oeb[2]}]
set_load -pin_load 0.1900 [get_ports {io_oeb[1]}]
set_load -pin_load 0.1900 [get_ports {io_oeb[0]}]
set_load -pin_load 0.1900 [get_ports {io_out[2]}]
set_load -pin_load 0.1900 [get_ports {io_out[1]}]
set_load -pin_load 0.1900 [get_ports {io_out[0]}]
set_input_transition 0.6100 [get_ports {wb_clk_i}]
set_timing_derate -early 0.9500
set_timing_derate -late 1.0500
###############################################################################
# Design Rules
###############################################################################
set_max_transition 3.0000 [current_design]
set_max_fanout 4.0000 [current_design]
