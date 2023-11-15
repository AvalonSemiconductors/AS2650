#include "defs.h"

#define reg_mprj_counter (*(volatile uint32_t*)0x30400000)

void delay(const int d) {
    /* Configure timer for a single-shot countdown */
	reg_timer0_config = 0;
	reg_timer0_data = d;
    reg_timer0_config = 1;

    // Loop, waiting for value to reach zero
   reg_timer0_update = 1;  // latch current value
   while (reg_timer0_value > 0) {
		reg_timer0_update = 1;
		asm volatile ("nop");
		asm volatile ("nop");
		asm volatile ("nop");
		asm volatile ("nop");
		asm volatile ("nop");
		asm volatile ("nop");
		asm volatile ("nop");
	}
}

void main() {
    // Configure All LA probes as inputs to the cpu
	reg_la0_oenb = reg_la0_iena = 0x00000000;    // [31:0]
	reg_la1_oenb = reg_la1_iena = 0x00000000;    // [63:32]
	reg_la2_oenb = reg_la2_iena = 0x00000000;    // [95:64]
	reg_la3_oenb = reg_la3_iena = 0x00000000;    // [127:96]
	
    reg_gpio_mode1 = 1;
    reg_gpio_mode0 = 0;
    reg_gpio_ien = 1;
    reg_gpio_oeb = 0;
    reg_gpio_out = 1;
	
	reg_mprj_datah = 0;
	reg_mprj_datal = 0;
	
	reg_mprj_io_0 = GPIO_MODE_USER_STD_INPUT_PULLDOWN;
	reg_mprj_io_1 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_2 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_3 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_4 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_5 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
	reg_mprj_io_6 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
	reg_mprj_io_7 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
	reg_mprj_io_8 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
	reg_mprj_io_9 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
	reg_mprj_io_10 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
	reg_mprj_io_11 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
	reg_mprj_io_12 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
	reg_mprj_io_13 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_14 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_15 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_16 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_17 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_18 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_19 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_20 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_21 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_22 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_23 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_24 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_25 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_26 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_27 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_28 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_29 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_30 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_31 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_32 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_33 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_34 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_35 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_36 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_37 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_gpio_out = 0;
	
	reg_mprj_xfer = 1;
	reg_wb_enable = 1;
	while(reg_mprj_xfer == 1);
	reg_mprj_counter = 0;
	reg_gpio_out = 1;
	
	delay(4000000);
	reg_mprj_io_27 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_28 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_29 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_30 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_31 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_32 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_33 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_34 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_35 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_36 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	reg_mprj_io_37 = GPIO_MODE_USER_STD_INPUT_PULLUP;
	while(1);
}
