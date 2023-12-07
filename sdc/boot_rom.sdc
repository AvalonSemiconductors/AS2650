###############################################################################
# Created by write_sdc
# Thu Dec  7 15:42:07 2023
###############################################################################
current_design boot_rom
###############################################################################
# Timing Constraints
###############################################################################
create_clock -name clk -period 15.0000 [get_ports {wb_clk_i}]
set_clock_transition 0.1500 [get_clocks {clk}]
set_clock_uncertainty 0.2500 clk
set_propagated_clock [get_clocks {clk}]
set_clock_latency -source -min 4.6500 [get_clocks {clk}]
set_clock_latency -source -max 5.5700 [get_clocks {clk}]
###############################################################################
# Environment
###############################################################################
set_load -pin_load 0.1900 [get_ports {bus_out[7]}]
set_load -pin_load 0.1900 [get_ports {bus_out[6]}]
set_load -pin_load 0.1900 [get_ports {bus_out[5]}]
set_load -pin_load 0.1900 [get_ports {bus_out[4]}]
set_load -pin_load 0.1900 [get_ports {bus_out[3]}]
set_load -pin_load 0.1900 [get_ports {bus_out[2]}]
set_load -pin_load 0.1900 [get_ports {bus_out[1]}]
set_load -pin_load 0.1900 [get_ports {bus_out[0]}]
set_input_transition 0.6100 [get_ports {wb_clk_i}]
set_timing_derate -early 0.9500
set_timing_derate -late 1.0500
###############################################################################
# Design Rules
###############################################################################
set_max_transition 3.0000 [current_design]
set_max_fanout 4.0000 [current_design]
