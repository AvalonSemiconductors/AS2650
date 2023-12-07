###############################################################################
# Created by write_sdc
# Thu Dec  7 15:47:58 2023
###############################################################################
current_design ram_controller
###############################################################################
# Timing Constraints
###############################################################################
create_clock -name clk -period 18.0000 [get_ports {wb_clk_i}]
set_clock_transition 0.1500 [get_clocks {clk}]
set_clock_uncertainty 0.2500 clk
set_propagated_clock [get_clocks {clk}]
set_clock_latency -source -min 4.6500 [get_clocks {clk}]
set_clock_latency -source -max 5.5700 [get_clocks {clk}]
###############################################################################
# Environment
###############################################################################
set_load -pin_load 0.1900 [get_ports {CEN_all}]
set_load -pin_load 0.1900 [get_ports {GWEN_0}]
set_load -pin_load 0.1900 [get_ports {GWEN_1}]
set_load -pin_load 0.1900 [get_ports {GWEN_2}]
set_load -pin_load 0.1900 [get_ports {GWEN_3}]
set_load -pin_load 0.1900 [get_ports {GWEN_4}]
set_load -pin_load 0.1900 [get_ports {GWEN_5}]
set_load -pin_load 0.1900 [get_ports {GWEN_6}]
set_load -pin_load 0.1900 [get_ports {GWEN_7}]
set_load -pin_load 0.1900 [get_ports {A_all[8]}]
set_load -pin_load 0.1900 [get_ports {A_all[7]}]
set_load -pin_load 0.1900 [get_ports {A_all[6]}]
set_load -pin_load 0.1900 [get_ports {A_all[5]}]
set_load -pin_load 0.1900 [get_ports {A_all[4]}]
set_load -pin_load 0.1900 [get_ports {A_all[3]}]
set_load -pin_load 0.1900 [get_ports {A_all[2]}]
set_load -pin_load 0.1900 [get_ports {A_all[1]}]
set_load -pin_load 0.1900 [get_ports {A_all[0]}]
set_load -pin_load 0.1900 [get_ports {D_all[7]}]
set_load -pin_load 0.1900 [get_ports {D_all[6]}]
set_load -pin_load 0.1900 [get_ports {D_all[5]}]
set_load -pin_load 0.1900 [get_ports {D_all[4]}]
set_load -pin_load 0.1900 [get_ports {D_all[3]}]
set_load -pin_load 0.1900 [get_ports {D_all[2]}]
set_load -pin_load 0.1900 [get_ports {D_all[1]}]
set_load -pin_load 0.1900 [get_ports {D_all[0]}]
set_load -pin_load 0.1900 [get_ports {WEN_all[7]}]
set_load -pin_load 0.1900 [get_ports {WEN_all[6]}]
set_load -pin_load 0.1900 [get_ports {WEN_all[5]}]
set_load -pin_load 0.1900 [get_ports {WEN_all[4]}]
set_load -pin_load 0.1900 [get_ports {WEN_all[3]}]
set_load -pin_load 0.1900 [get_ports {WEN_all[2]}]
set_load -pin_load 0.1900 [get_ports {WEN_all[1]}]
set_load -pin_load 0.1900 [get_ports {WEN_all[0]}]
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
