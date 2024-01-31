.. _pinout:

Pinout
======

The following diagram and table visualize the AS2650v2 pinout and mapping to caravel mprj_io lines.

For more information on caravel, see `here <https://caravel-harness.readthedocs.io/en/latest/index.html>`__.

.. image:: _static/images/pinout.drawio.svg

.. list-table:: Pin description
    :name: pin-description
    :header-rows: 1
    
    * - Pin #
      - Name
      - Type
      - Summary
    * - ``mprj_io[0]``
      - RST
      - I
      - Active low reset
    * - ``mprj_io[1]``
      - BDIR
      - O
      - Indicates current direction of bus lines (0 = outputs, 1 = inputs)
    * - ``mprj_io[2]``
      - FLAG
      - O
      - Digital output port setable using PSW
    * - ``mprj_io[3]``
      - NC
      - NC
      - Unused
    * - ``mprj_io[4]``
      - SENSE
      - I
      - Digital input port, state readable in PSW
    * - ``mprj_io[12:5]``
      - ADB[7:0]
      - IO
      - Bi-directional bus multiplexing address and data
    * - ``mprj_io[13]``
      - LE_LO
      - O
      - Latch Enable for low address byte, active high
    * - ``mprj_io[14]``
      - LE_HI
      - O
      - Latch Enable for high address byte, active high
    * - ``mprj_io[15]``
      - OE
      - O
      - Output Enable to memory and IO Device, active low
    * - ``mprj_io[16]``
      - WE
      - O
      - Write Enable to memory and IO Device, active low
    * - ``mprj_io[17]``
      - IOD
      - O
      - Select external IO Data port, active high
    * - ``mprj_io[18]``
      - IOC
      - O
      - Select external IO Command port, active high
    * - ``mprj_io[26:19]``
      - PA[7:0]
      - IO
      - Built-in GPIO Port A and alternative functions
    * - ``mprj_io[34:27]``
      - PB[7:0]
      - IO
      - GPIO Port B and alternative functions
    * - ``mprj_io[35]``
      - SCLK
      - O
      - SPI port clock output
    * - ``mprj_io[36]``
      - SDO
      - O
      - SPI port serial data output
    * - ``mprj_io[37]``
      - SDI
      - O
      - SPI port serial data input
