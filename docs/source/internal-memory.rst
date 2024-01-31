.. _internal-memory:

Internal Memory
===============

The AS2650v2 contains two primary internal memories: 4KiB of SRAM and a 170 byte boot ROM.

Both memories are disabled by default and must be enabled by setting certain configuration register values over wishbone using the caravel management controller.

Once enabled, the 4KiB SRAM is always mapped to addresses 0 - 4095. Any memory transactions to these addresses will still generate all relevant control and data signals on the chip’s pins, but writes will also be applied to the internal RAM and read data overriden with that fetched from the internal memory. This only occurs for these addresses. Accessing addresses >= 4096 will once again access external memory.

As the CPU also begins executing at address 0 after reset, the SRAM needs to be initialized with valid bytecode first. The boot ROM was designed to accomplish this. It contains a simple program that brings up the AS2650v2’s SPI port and attempts to send a 03h read command to any connected spiflash. If successful, it will read data from the beginning of the spliflash memory into an address range defined by the user, usually the internal SRAM addresses. Once this is done, the CPU branches execution back to address 0, permanently disabling the boot ROM at the same time, now executing the user’s program.

The boot ROM can also be used to initialize external memory.
