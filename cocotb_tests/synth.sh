./yosys_e -p "read_verilog as2650.v; synth -top as2650; write_verilog synthesized.v;" && clear
