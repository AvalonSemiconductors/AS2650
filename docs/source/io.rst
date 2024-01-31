.. _io:

Input / Output
==============

The AS2650v2 contains a wide variety of IO and peripheral capabilities. These include GPIO, UART, SPI, timers and PWM generators.

----------------------------
Accessing IO and peripherals
----------------------------

On-die IO and peripherals are not memory-mapped. Instead, a set of special CPU instructions, ``wrte`` and ``rede`` are used. These instructions always have an argument of an 8-bit address. This address is used to select a register inside a IO or peripheral to read or write. The rest of this chapter describes register locations in terms of this IO address.

This IO address is internally decoded by splitting it into a device and register address. The most-significant two bits of the address are used to select one of four macros on the die, while the remaining 6 bits are used to address a particular register within that macro.

.. list-table:: Macro addresses
    :name: macro-addr
    :header-rows: 1
    
    * - Address
      - Macro
    * - ``0b00``
      - GPIO Ports
    * - ``0b01``
      - Timers/Counters
    * - ``0b10``
      - Serial Ports
    * - ``0b11``
      - SID - Sound Interface Device

----------------------------------
GPIO ports and alternate functions
----------------------------------

Most IO functionality of the AS2650v2 is exposed through its two 8-bit GPIO ports PORTA and PORTB. By default, both ports act as bi-directional inputs/output ports who’s direction and state can be set by the processor. However, each pin can also be individually set to expose the functionality of another IO peripheral, as described in the following tables.

.. list-table:: PORTA alternate functions
    :name: portb-alt
    :header-rows: 1

    * - Port #
      - Alt. pin name
      - Direction
      - Alt. function
    * - ``PA0``
      - ``IRQ0``
      - I
      - Lowest-priority external interrupt
    * - ``PA1``
      - ``TXD``
      - O
      - UART data out
    * - ``PA2``
      - ``RXD``
      - I
      - UART data in
    * - ``PA3``
      - ``TO0``
      - O
      - Timer Output of Timer/Counter 0
    * - ``PA4``
      - ``PA1``
      - O
      - Timer Output of Timer/Counter 1
    * - ``PA5``
      - ``PWM0``
      - O
      - Output of PWM channel 0
    * - ``PA6``
      - ``PWM1``
      - O
      - Output of PWM channel 1
    * - ``PA7``
      - ``IRQ7``
      - I
      - Highest-priority external interrupt

.. list-table:: PORTB alternate functions
    :name: porta-alt
    :header-rows: 1

    * - Port #
      - Alt. pin name
      - Direction
      - Alt. function
    * - ``PB0``
      - ``IRQ6``
      - I
      - Priority 6 interrupt
    * - ``PB1``
      - ``PWM2``
      - O
      - Output of PWM channel 2
    * - ``PB2``
      - ``T0CLK``
      - I
      - External clock input for Timer/Counter 0
    * - ``PB3``
      - ``T1CLK``
      - I
      - External clock input for Timer/Counter 1
    * - ``PB4``
      - ``DAC1 DAT``
      - O
      - SID DAC data #1
    * - ``PB5``
      - ``DAC0 DAT``
      - O
      - SID DAC data #0
    * - ``PB6``
      - ``DAC LE``
      - O
      - SID DAC Latch Enable
    * - ``PB7``
      - ``DAC CLK``
      - O
      - SID DAC Serial Clock

Register descriptions
---------------------

**DDRA/DDRB - Data Direction Register A/B**

These registers set the direction of each individual port in PORTA and PORTB. A one equals an output port while a zero equals an input port.

Address: 0x00

.. wavedrom::

	{ "reg": [
	  {"name": "DDRA[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x01

.. wavedrom::

	{ "reg": [
	  {"name": "DDRB[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

**PORTA/PORTB - Output data of PORTA/PORTB**

The states of each port pin configured as an output is set in these registers.

Address: 0x02

.. wavedrom::

	{ "reg": [
	  {"name": "PORTA[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x03

.. wavedrom::

	{ "reg": [
	  {"name": "PORTB[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

**PINA/PINB - Input data of PORTA/PORTB**

Data read from each port pin configured as an input can be accessed by the processor by reading these registers. They may only be read.

Address: 0x05

.. wavedrom::

	{ "reg": [
	  {"name": "PINA[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x06

.. wavedrom::

	{ "reg": [
	  {"name": "PINB[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

**SPA/SPB - Alternate function enable of PORTA/PORTB**

These registers allow selection of the alternate function for each pin of PORTA or PORTB individually. For every bit that is a one in this register, the corresponding pin will cease to respond to configuration in DDRx and PORTx and will instead be connected to an on-die peripheral device. Both pin direction and data will be controlled by the peripheral.

Address: 0x04

.. wavedrom::

	{ "reg": [
	  {"name": "SPA[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x08

.. wavedrom::

	{ "reg": [
	  {"name": "SPB[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

**IRQC - Interrupt Request Clear (for external interrupts)**

Address: 0x07

.. wavedrom::

	{ "reg": [
	  {"name": "IC0", "bits": 1},
	  {"type": 1, "bits": 5},
	  {"name": "IC6", "bits": 1},
	  {"name": "IC7", "bits": 1}],
	 "config": {"hspace": 700}
	}

Writing a one into any of the ``ICx`` bits in this register will clear that external interrupt request latch, removing the pending interrupt.

Additionally, this register can be read, in which case the bits reflect which interrupts are currently pending.

---------------
Timers/Counters
---------------

The AS2650v2 contains a set of three 16-bit up-counters capable of counting up either by a fixed rate driven by the processor clock and a prescaler (timer mode) or by an external clock input (counter mode).

Each timer/counter consists of a 16-bit count register, a 16-bit prescaler and a 16-bit "top" register. The prescaler acts as a clock divider for either the internal or external clock which provides the rate at which the counter is incremented. The counter increments until it reaches the value set in the top register, at which point it resets to 0 and begins counting up again.

Timers/counters 0 and 1 may also be used as frequency generators on the ``TO0`` and ``TO1`` pins by toggling these pins on each time they reach top and reset.
These signals are actually always generated, they must simply be exposed by selecting the alternative function on ``PA3`` or ``PA4``.

Only timers/counters 0 and 1 may use an external clock input or generate an output signal. Timer/counter 2 can only be driven using the internal clock.

All timers/counters may generate interrupts when reaching top.

All timers/counters may be loaded and read by the processor. As neither operation is possible in one pass due to the processor only being able to transfer 8-bits of data at a time, the process for doing so is as follows:

For reading a timer/counter’s value, it must be captured first by writing the Timer Capture Register. The captured value can then be read.

A timer/counter’s value can be loaded by writing into its capture data register LSB first. The first byte written will be buffered internally until the MSB is written. Only then are the LSB and MSB combined and copied into the counter.
The 16-bit prescaler and top registers behave similarly, with the LSB having to be written first before the MSB, as they use the same buffering mechanism to ensure a complete 16-bit value is written.

Register descriptions
---------------------

**TS - Timer Setings**

Address: 0x40

.. wavedrom::

	{ "reg": [
	  {"name": "T0IE", "bits": 1},
	  {"name": "T1IE", "bits": 1},
	  {"name": "T2IE", "bits": 1},
	  {"name": "IC1", "bits": 1},
	  {"name": "IC2", "bits": 1},
	  {"name": "IC5", "bits": 1},
	  {"name": "T0EXT", "bits": 1},
	  {"name": "T1EXT", "bits": 1}],
	 "config": {"hspace": 700}
	}

``T0IE``, ``T1IE`` and ``T2IE`` are the interrupt enables for timers/counters 0, 1 and 2 respectively. If set to a one and that timer reaches top, an interrupt is generated.

The priorities for these interrupts are:

Timer/Counter 0: ``1``

Timer/Counter 1: ``2``

Timer/Counter 2: ``5``

``IC1``, ``IC2``, ``IC5`` are the interrupt resets for the timer/counter interrupts. These bits must be all zero for the setting bits to be changed. If any of these bits are not zero during a write operation, only the interrupt reset(s) will occur. No settings will be changed, making the remaining 5 bits don’t-care.

``T0EXT``, ``T1EXT`` are the external clock input enables for timers/counters 0 and 1. Setting either bit will put that timer/counter into "counter" mode, switching its clock source from the processor clock to an external clock input. The alternative function selects on PORTB must also be set to expose these clock inputs.

**TCR - Timer Capture Register**

Timer/counter values may be captured by writing into this register, a which point every timer/counter’s current value will be copied into its corresponding Capture Data Register. The value written is discarded. The action of attempting to write to this IO address is what triggers the capture.

Address: 0x41

**TxPRE - Timer 0/1/2 Prescaler**

Address: 0x42

.. wavedrom::

	{ "reg": [
	  {"name": "T0PRE[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x43

.. wavedrom::

	{ "reg": [
	  {"name": "T0PRE[15:8]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x44

.. wavedrom::

	{ "reg": [
	  {"name": "T1PRE[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x45

.. wavedrom::

	{ "reg": [
	  {"name": "T1PRE[15:8]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x46

.. wavedrom::

	{ "reg": [
	  {"name": "T2PRE[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x47

.. wavedrom::

	{ "reg": [
	  {"name": "T1PRE[15:8]", "bits": 8}],
	 "config": {"hspace": 700}
	}

**TxTOP - Timer 0/1/2 Top**

Address: 0x48

.. wavedrom::

	{ "reg": [
	  {"name": "T0TOP[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x49

.. wavedrom::

	{ "reg": [
	  {"name": "T0TOP[15:8]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x4A

.. wavedrom::

	{ "reg": [
	  {"name": "T1TOP[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x4B

.. wavedrom::

	{ "reg": [
	  {"name": "T1TOP[15:8]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x4C

.. wavedrom::

	{ "reg": [
	  {"name": "T2TOP[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x4D

.. wavedrom::

	{ "reg": [
	  {"name": "T2TOP[15:8]", "bits": 8}],
	 "config": {"hspace": 700}
	}

**TxCD - Timer 0/1/2 Capture Data**

Address: 0x4E

.. wavedrom::

	{ "reg": [
	  {"name": "T0CD[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x4F

.. wavedrom::

	{ "reg": [
	  {"name": "T0CD[15:8]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x50

.. wavedrom::

	{ "reg": [
	  {"name": "T1CD[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x51

.. wavedrom::

	{ "reg": [
	  {"name": "T1CD[15:8]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x52

.. wavedrom::

	{ "reg": [
	  {"name": "T2CD[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x53

.. wavedrom::

	{ "reg": [
	  {"name": "T2CD[15:8]", "bits": 8}],
	 "config": {"hspace": 700}
	}

---
PWM
---

There are a total of three PWM channels integrated on the AS2650v2 which are driven by an independent timer using the processor clock. Only the pulse-width is adjustable.
The PWM signals are always generated. Using them only requires selecting them in the alternate function selection for PORTA/PORTB.

Register descriptions
---------------------

**PWx - Pulse Width 0/1/2**

The registers inversely adjust the pulse width of each channel from 0 (longest) to 254 (shortest). Setting a value of 255 will cause the output to be always on.

Address: 0x54

.. wavedrom::

	{ "reg": [
	  {"name": "PW0[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x55

.. wavedrom::

	{ "reg": [
	  {"name": "PW1[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x56

.. wavedrom::

	{ "reg": [
	  {"name": "PW2[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

------------
Serial Ports
------------

There are two kinds of serial ports present on the AS2650v2: a UART and a SPI master port. The SPI port is the only IO peripheral with dedicated pins, but the UART must be exposed by activating the relevant alternate functions on PORTA.

Both have independent prescalers, with the UART additionally able to trigger a CPU interrupt on receipt of a complete character.

Register descriptions
---------------------

**UIE - UART Interrupt Enable**

Address: 0x80

.. wavedrom::

	{ "reg": [
	  {"name": "UIE", "bits": 1},
      {"type": "1", "bits": 7}],
	 "config": {"hspace": 700}
	}

Writing a one to this register enables the UART to trigger an interrupt whenever it has received a full character.

**UDIV - UART Clock Divider**

Address: 0x81

.. wavedrom::

	{ "reg": [
      {"name": "UDIV[7:0]", "bits": 8}],
	 "config": {"hspace": 700}
	}

Address: 0x82

.. wavedrom::

	{ "reg": [
      {"name": "UDIV[15:8]", "bits": 8}],
	 "config": {"hspace": 700}
	}

This register defines the amount by which the processor clock is divided to arrive at the UART bitclock. The UART bitclock will be equal to CPU clock / (UDIV + 1).

**STAT - Serial Status**

Address: 0x83

.. wavedrom::

	{ "reg": [
      {"name": "UBUSY", "bits": 1},
      {"name": "SBUSY", "bits": 1},
      {"name": "UHB", "bits": 1},
      {"type": 1, "bits": 5}],
	 "config": {"hspace": 700}
	}

This is the combined status register for all serial ports.

``UBUSY`` is set if the UART is busy sending a character and cannot accept a new character at this time.

``SBUSY`` is set if the SPI port is busy exchanging a byte.

``UHB`` is set if the UART has received a complete character which is ready to be read by processor. This bit is cleared once the processor reads UDR.

**SDIV - SPI Clock Divider**

Address: 0x84

.. wavedrom::

	{ "reg": [
      {"name": "SDIV", "bits": 8}],
	 "config": {"hspace": 700}
	}

This register defines the amount by which the processor clock is divided to arrive at the SPI serial clock. The SPI serial clock will be equal to CPU clock / (SDIV * 2 + 1).

**UDR - UART Data Register**

Address: 0x85

.. wavedrom::

	{ "reg": [
      {"name": "UDR", "bits": 8}],
	 "config": {"hspace": 700}
	}

This register is used to transfer characters in and out of the UART. Writing this register immediately begins a UART transfer. ``UBUSY`` is set and the written character is sent out serially over ``TXD`` at the rate defined in ``UDIV``.

If this register is read, the last character received by the UART on the ``RXD`` line is retreived. This also clears the ``UHB`` flag and any pending UART interrupt.

**SDR - SPI Data Register**

Address: 0x86

.. wavedrom::

	{ "reg": [
      {"name": "SDR", "bits": 8}],
	 "config": {"hspace": 700}
	}

This register is used to transfer bytes in and out of the SPI port. Writing this register immediately begins a SPI full-duplex transfer. ``SBUSY`` is set and the written byte is sent out serially over ``SDO`` at the rate defined in ``SDIV``. Simultaneously, a byte is received over ``SDI``. Once the transfer is complete and ``SBUSY`` is cleared, the ``SDR`` will contain the received byte, which can now be read by the processor.
