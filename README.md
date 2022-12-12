# Avalon Semiconductors AS2650 8-bit micro-processor

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0) [![CI](https://github.com/AvalonSemiconductors/AS2650/actions/workflows/user_project_ci.yml/badge.svg)](https://github.com/AvalonSemiconductors/AS2650/actions/workflows/user_project_ci.yml)

This is a partial implementation of the abandoned Signetics 2650 CPU architecture from 1975.

Only a subset of the full feature set is implemented here. The following features are part of the S2650, but missing from the SA2650:
- Interrupts
- Extended I/O (`wrte`, `rede`) instructions
- Memory paging (address space limited to 8192 bytes, emulating a S2650 that is 'stuck' on page 0)

Some **additional** funcionality is also present, utilizing opcodes that went unused in the original S2650 to add new instructions:
- `mul` (opcode `'h90`, no arguments) - Multiplies r0 and r1, and stores the 16-bit result in r2 (LSB) and r3 (MSB)
- `xchg` (opcode `'h91`, no arguments) - Exchanges the values of r0 and r1
- `push` (opcode `'h10`, no arguments) - Pops the value on top of the call stack into r0 (LSB) and r1 (MSB)
- `pop` (opcode `'h11`, no arguments) - Pushes the values from r0 (LSB) and r1 (MSB) onto the stack

Please see [this repository](https://github.com/89Mods/S2650-tools) for Documentation on the CPU architecture, as well as an assembler, emulator and example programs.
