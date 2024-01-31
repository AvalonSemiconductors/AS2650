.. _bus-interface:

Bus Interface
=============

On top of the on-die RAM, the AS2650v2 also provides an interface for attaching memory and IO devices externally, though an address/data bus.

16-bit addresses and 8-bit data is multiplexed on the ``ADB`` pins for this purpose. The control lines ``LE_LO``, ``LE_HI``, ``OE``, ``WE``, ``IOC`` and ``IOD`` control any address latches or memory and IO devices connected to this bus.

Bus transactions can be split into two categories: memory transactions and IO transactions. Memory transactions are used to access any byte as addressed by a 16-bit address which is multiplexed out of the processor. IO transactions do not emitt any address. Instead, the ``IOD`` and ``IOC`` pins are used to indicate if the transferred byte is a command or regular data. The intended way to use these is to latch the byte sent using ``IOC`` and use it as a separate 8-bit IO address before ``IOD`` is used to actually interface with the addressed IO device.

Every memory transaction begins with the target address being latched one byte at a time using ``LE_LO`` and ``LE_HI`` while the relevant part of the full address is presented on the ``ADB`` lines. Of note is that the processor internally keeps track of the state the external address latches should be in, and only emits ``LE_HI`` if the most-significant byte of the address has indeed changed. ``LE_LO`` is always generated.

After the address is set, ``OE`` and ``WE`` indicate if the transfer is from or to a memory device. IO transactions skip directly to this step, asserting either ``IOC`` or ``IOD`` and then ``OE`` or ``WE``.

**Memory Read transaction**

.. wavedrom::

	{signal: [
	  {name: 'clk', wave: 'p......', period: 2},
	  {name: 'LE_HI', wave: '0.10..........'},
	  {name: 'LE_LO', wave: '0...10..10....'},
	  {name: 'OE', wave: '1.....0.1.0.1.'},
	  {name: 'ADB[7:0]', wave: 'z.5.5.7.5.7.z.', data: ['addr[15:8]', 'addr[7:0]', 'data in', 'addr[7:0]', 'data in']},
	  {name: 'bus_dir', wave: '1.0...1.0.1...'}
	]}

**Memory Write transaction**

.. wavedrom::

	{signal: [
	  {name: 'clk', wave: 'p......', period: 2},
	  {name: 'LE_HI', wave: '0.10..........'},
	  {name: 'LE_LO', wave: '0...10..10....'},
	  {name: 'WE', wave: '1.....0.1.0.1.'},
	  {name: 'ADB[7:0]', wave: 'z.5.5.7.5.7.z.', data: ['addr[15:8]', 'addr[7:0]', 'data out', 'addr[7:0]', 'data out']},
	  {name: 'bus_dir', wave: '1.0.........1.'}
	]}

**IO Read transaction**

.. wavedrom::

	{signal: [
	  {name: 'clk', wave: 'p....', period: 2},
	  {name: 'OE', wave: '1.0.....1.'},
	  {name: 'IOD', wave: '0...1...0.'},
	  {name: 'IOC', wave: '0.........'},
	  {name: 'ADB[7:0]', wave: 'z.x.5...z.', data: ['data in']},
	  {name: 'bus_dir', wave: '1.........'}
	]}

**IO Write transaction**

.. wavedrom::

	{signal: [
	  {name: 'clk', wave: 'p....', period: 2},
	  {name: 'WE', wave: '1.0.1.....'},
	  {name: 'IOD', wave: '0.........'},
	  {name: 'IOC', wave: '0.1...0...'},
	  {name: 'ADB[7:0]', wave: 'z.5...z...', data: ['data out']},
	  {name: 'bus_dir', wave: '1.0...1...'}
	]}
