# Avalon Semiconductors AS2650 8-bit micro-processor

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0) [![UPRJ_CI](https://github.com/efabless/caravel_project_example/actions/workflows/user_project_ci.yml/badge.svg)](https://github.com/efabless/caravel_project_example/actions/workflows/user_project_ci.yml) [![Caravel Build](https://github.com/efabless/caravel_project_example/actions/workflows/caravel_build.yml/badge.svg)](https://github.com/efabless/caravel_project_example/actions/workflows/caravel_build.yml)

This is a partial implementation of the abandoned Signetics 2650 CPU architecture from 1975.

Only a subset of the full feature set is implemented here. The following features are part of the S2650, but missing from the SA2650:
- Interrupts
- Decimal Adjust Register (`dar`) instructions
- Extended I/O (`wrte`, `rede`) instructions
- Memory paging (address space limited to 8192 bytes, emulating a S2650 that is 'stuck' on page 0)

Please see [this repository](https://github.com/89Mods/S2650-tools) for Documentation on the CPU architecture, as well as an assembler, emulator and example programs.
