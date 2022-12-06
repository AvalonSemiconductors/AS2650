import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import Timer, ClockCycles

@cocotb.test()
async def test_cpu(dut):
	dut._log.info("start")
	
	memory = [0] * 8192
	
	with open("test.bin", mode='rb') as file:
		for i in range(0, 8192):
			a = file.read(1)
			if len(a) > 0:
				memory[i] = a[0]
	
	dut.sense.value = 0
	dut.dbus_in.value = 0
	dut.reset.value = 1
	clock = Clock(dut.clk, 1, units="us")
	cocotb.start_soon(clock.start())
	await ClockCycles(dut.clk, 3)
	dut.reset.value = 0

	d_counter = 0
	c_counter = 0
	expected_io_out_d = [55, 66, 10]
	expected_io_out_c = [12, 38, 33]
	d_out_counter = 0
	c_out_counter = 0
	tt = 0
	while dut.as2650.halted == 0:
		await Timer(0.25, units="us")
		tt += 1
		dut.dbus_in.value = 0
		if dut.oeb.value == 0:
			if dut.rw.value == 1 and dut.opreq.value == 1 and dut.wrp.value == 1:
				if dut.m_io == 1:
					memory[dut.adr.value] = dut.dbus_out.value
				else:
					if dut.wrp.value == 1:
						if dut.d_c.value == 1:
							assert dut.dbus_out.value == expected_io_out_d[d_out_counter]
							if tt % 5 == 4:
								d_out_counter += 1
						else:
							assert dut.dbus_out.value == expected_io_out_c[c_out_counter]
							if tt % 5 == 4:
								c_out_counter += 1
		else:
			if dut.rw.value == 0 and dut.opreq.value == 1:
				if dut.m_io.value == 1:
					dut.dbus_in.value = memory[dut.adr.value]
				else:
					if dut.d_c.value == 1:
						dut.dbus_in.value = d_counter
						if tt % 4 == 3:
							d_counter += 1
					else:
						dut.dbus_in.value = c_counter
						if tt % 4 == 3:
							c_counter += 2
	
	assert memory[8191] == 0x16
	assert memory[8190] == 0xFF
	assert memory[8189] == 0x16
	assert memory[8191-7] == 70
	assert memory[8191-8] == 3
	assert memory[8191-9] == 6
	assert memory[8191-10] == 66
	assert memory[8191-11] == 11
	assert memory[8191-12] == 0b01010101
	assert memory[8191-13] == 0b10001111
	assert memory[8191-14] == 24
	assert memory[8191-15] == 2
	assert memory[8191-16] == 1
	assert memory[8191-17] == 2
	assert memory[8191-18] == 2
	assert memory[8191-19] == 2
	assert memory[8191-20] == 1
	assert memory[8191-21] == 8
	assert memory[8191-22] == 0b11111101
	assert memory[8191-23] == 15
	assert memory[8191-24] == 0b11111101
	assert memory[8191-25] == 14
	assert memory[8191-26] == 10
	assert memory[8191-27] == 20
	assert memory[8191-28] == 6
	assert memory[8191-29] == 96
	assert memory[8191-30] == 0b10000111
	assert memory[8191-31] == 0b00001111
	assert memory[8191-32] == 0b00000111
	assert memory[8191-33] == 0b10000011
	assert memory[8191-34] == 0b00000001
	assert memory[8191-35] == 0b00000010
	assert memory[8191-36] == 0b00001001
	assert memory[8191-37] == 0
	assert memory[8191-38] == 0
	assert memory[8191-39] == 0b10000000
	assert memory[8191-40] == 0
	assert memory[8191-41] == 0b10000000
	assert memory[8191-42] == 55
	assert memory[8191-43] == 5
	assert memory[8191-44] == 4
	assert memory[8191-45] == 3
	assert memory[8191-46] == 103
	assert memory[8191-47] == 180
	assert memory[8191-48] == 0b01000000
	assert memory[8191-49] == 220
	assert memory[8191-50] == 5
	assert memory[8191-51] == 8
	assert memory[8191-52] == 5
	assert memory[8191-53] == 8
	assert memory[8191-54] == 0
	assert memory[8191-55] == 0b01000000
	assert memory[8191-56] == 0b10000000
	assert memory[8191-57] == 0b01000000
	assert memory[8191-58] == 0b10000000
	assert memory[8191-59] == 0
	assert memory[8191-60] == 1
	assert memory[8191-61] == 2
	assert memory[8191-62] == 3
	assert memory[8191-63] == 4
	assert memory[8191-64] == 5
	assert memory[8191-65] == 6
	assert memory[8191-66] == 16
	assert memory[8191-67] == 15
	assert memory[8191-68] == 7
	assert memory[8191-69] == 6
	assert memory[8191-70] == 40
	assert memory[8191-71] == 40
	assert memory[8191-72] == 100
	assert memory[8191-73] == 200
