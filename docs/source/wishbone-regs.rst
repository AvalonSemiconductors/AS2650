.. _wishbone-regs:

Wishbone Registers
==================

There are several registers accessible via the caravel management controller’s wishbone interface that provide debugging data or control the AS2650v2’s operating modes. These registers are all described in this section.

wb_counter
----------

Address: 0x30400000

.. wavedrom::

	{ "reg": [
	  {"name": "Count", "bits": 32}],
	 "config": {"hspace": 700}
	}

Simple 32-bit counter that increments with every clock cycle. Can be written and read.

wb_debug_opts
-------------

Address: 0x30200000

.. wavedrom::

	{ "reg": [
	  {"name": "debug_cc", "bits": 1},
	  {"name": "debug_carry", "bits": 1},
	  {"name": "web_behavior", "bits": 2},
	  {"name": "rst_ovr_en", "bits": 1},
	  {"name": "rst_ovr", "bits": 1},
	  {"name": "io3_test", "bits": 1},
	  {"name": "io3_state", "bits": 1},
	  {"name": "ram_en", "bits": 1}],
	 "config": {"hspace": 700}
	}

``debug_cc`` and ``debug_carry``, if set, will replace the ``IOD`` and ``IOC`` outputs with bits taken from the PSW as follows (only one of these bits may be set at a time):

``debug_cc``: ``IOD`` becomes ``CC0`` and ``IOC`` becomes ``CC1``.

``debug_carry``: ``IOD`` becomes ``C`` and ``IOC`` becomes ``IDC``.

``web_behavior`` modifies the way the signal on the ``WE`` pin is generated. With the default value of 0, it always stretches a full pulse width and all timing diagrams within this documentation assume this default is set. However, timing requirements with external memory or IO devices may be easier to meet with a differently shaped ``WE``. These additional two options exist:

``1``: ``WE`` is only active when the clock is low.

``2``: ``WE`` is only active when the clock is high.

``rst_ovr_en`` and ``rst_ovr`` allow overriding of the AS2650v2’s reset signal. This may be required if other wishbone registers need to be configured before the CPU can run, i.e. when using the boot ROM. It can also technically be used to eliminate the need of an external reset signal alltogether.
Setting ``rst_ovr_en`` enables the override, at which point the value in ``rst_ovr`` will become the AS2650v2’s new reset signal. The reset is active when ``rst_ovr`` is set.

``io3_test`` and ``io3_state`` only exist to experimentally determine if ``mprj_io[3]`` is usable as an output by the user design, as it behaves oddly in simulations.

``ram_en`` determines wether the internal 4KiB of SRAM are enabled or not.

wb_rom_opts_1
-------------

Address: 0x30100000

.. wavedrom::

	{ "reg": [
	  {"name": "start_addr", "bits": 16},
	  {"name": "end_addr", "bits": 16}],
	 "config": {"hspace": 700}
	}

This register is used to set the range of addresses that will be loaded by the boot ROM. The range is inclusive. For example, if the intended effect is it to load the contents of the entire internal SRAM, set ``start_addr`` to 0 and ``end_addr`` to 4095.

wb_rom_opts_2
-------------

Address: 0x30180000

.. wavedrom::

	{ "reg": [
	  {"name": "cs_port", "bits": 3},
	  {"type": 1, bits: 28},
	  {"name": "rom_enable", "bits": 1}],
	 "config": {"hspace": 1400}
	}

``cs_port`` determines which of the 8 bits of PORTB the boot ROM should use as the spiflash’s chip select line.

``rom_enable`` enables the internal boot ROM. Once set, releasing the AS2650v2’s reset will cause it to start executing the boot ROM’s code.
