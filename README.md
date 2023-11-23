# Avalon Semiconductors AS2650 8-bit micro-processor

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0) [![CI](https://github.com/AvalonSemiconductors/AS2650/actions/workflows/user_project_ci.yml/badge.svg)](https://github.com/AvalonSemiconductors/AS2650/actions/workflows/user_project_ci.yml)

This is a microcontroller / microprocessor architecture submitted to GFMPW-0 and GFMPW-1. It contains an 8-bit CPU core with 4KiB of on-die RAM as well as various I/O capabilities:

* Three 16-bit timers, two usable as frequency generators
* Three PWM channels
* 16 GPIO lines
* UART and SPI serial ports
* External and internal interrupt sources

Additionaly, the amount of memory accessible to the CPU is externally expandable to 64KiB.

Each of these capabilities has been encapsulated in its own macro, connected to the CPU using the same internal bus interface. This should make re-using these components in other projects easy.
