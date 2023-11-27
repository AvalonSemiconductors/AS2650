#include "Vtb.h"
#include "verilated.h"
#include <iostream>
#include <fstream>

static Vtb top;

#define reg_mprj_counter (0x30400000)
#define reg_mprj_debug_opts (0x30200000)
#define reg_mprj_rom_opts_2 (0x30180000)
#define reg_mprj_rom_opts_1 (0x30100000)

void clocks(int c) {
	for(int i = 0; i < c*2; i++) {
		Verilated::timeInc(1);
		top.clk = !top.clk;
		top.eval();
		if(Verilated::gotFinish()) return;
	}
}

void wbs_write(uint32_t addr, uint32_t val) {
	top.wbs_dat_i = val;
	top.wbs_adr_i = addr;
	top.wbs_we_i = 1;
	top.wbs_cyc_i = 1;
	clocks(1);
	top.wbs_stb_i = 1;
	do {
		clocks(1);
	}while(top.wbs_ack_o != 1);
	top.wbs_stb_i = 0;
	top.wbs_we_i = 0;
	top.wbs_cyc_i = 0,
	clocks(1);
}

int main(int argc, char** argv, char** env) {
#ifdef TRACE_ON
	printf("Warning: tracing is ON!\r\n");
	Verilated::traceEverOn(true);
#endif
	top.wbs_stb_i = 0;
	top.wbs_cyc_i = 0;
	top.wbs_we_i = 0;
	top.wbs_dat_i = 0;
	top.wbs_adr_i = 0;
	top.rst_n = 0;
	clocks(8);
	top.rst_n = 1;
	clocks(2);
	wbs_write(reg_mprj_debug_opts, 0b100110000);
	wbs_write(reg_mprj_counter, 0x00889900);
	wbs_write(reg_mprj_rom_opts_2, 0x80000007);
	wbs_write(reg_mprj_rom_opts_1, 0x0FFF0000);
	wbs_write(reg_mprj_debug_opts, 0b100100000);
	while(!Verilated::gotFinish()) {
		Verilated::timeInc(1);
		top.clk = !top.clk;
		top.eval();
	}
	
	top.final();
}
