.. _isa:

Instruction Set Architecture
============================

-------
Summary
-------

The following table summarizes the ISA of the AS2650-2. Hover over table entries for more detailed description and affected flags.

.. raw:: html

    <h3>Base Instructions</h3>
    <table title="isa" class="isa-table">
        <tbody>
            <tr>
                <td></td>
                <th>0</th>
                <th>1</th>
                <th>2</th>
                <th>3</th>
                <th>4</th>
                <th>5</th>
                <th>6</th>
                <th>7</th>
                <th>8</th>
                <th>9</th>
                <th>A</th>
                <th>B</th>
                <th>C</th>
                <th>D</th>
                <th>E</th>
                <th>F</th>
            </tr>
            <tr>
                <th>0</th>
                <td desc="---1|1|F|F|_|Loads r0 into r0.">lodz,r0</td>
                <td desc="---1|1|F|F|_|Loads r1 into r0.">lodz,r1</td>
                <td desc="---1|1|F|F|_|Loads r2 into r0.">lodz,r2</td>
                <td desc="---1|1|F|F|_|Loads r3 into r0.">lodz,r3</td>
                <td desc="---1|2|F|F|_|Loads Immediate into r0.">lodi,r0</td>
                <td desc="---1|2|F|F|_|Loads Immediate into r1.">lodi,r1</td>
                <td desc="---1|2|F|F|_|Loads Immediate into r2.">lodi,r2</td>
                <td desc="---1|2|F|F|_|Loads Immediate into r3.">lodi,r3</td>
                <td desc="---1|2|T|F|_|Loads from memory at PC+Immediate into r0. Immediate is signed value -64 -> 63.">lodr,r0</td>
                <td desc="---1|2|T|F|_|Loads from memory at PC+Immediate into r1. Immediate is signed value -64 -> 63.">lodr,r1</td>
                <td desc="---1|2|T|F|_|Loads from memory at PC+Immediate into r2. Immediate is signed value -64 -> 63.">lodr,r2</td>
                <td desc="---1|2|T|F|_|Loads from memory at PC+Immediate into r3. Immediate is signed value -64 -> 63.">lodr,r3</td>
                <td desc="---1|3|T|T|_|Loads from memory using Immediate Address into r0. Immediate is unsigned value 0 -> 8191.">loda,r0</td>
                <td desc="---1|3|T|T|_|Loads from memory using Immediate Address into r1. Immediate is unsigned value 0 -> 8191.">loda,r1</td>
                <td desc="---1|3|T|T|_|Loads from memory using Immediate Address into r2. Immediate is unsigned value 0 -> 8191.">loda,r2</td>
                <td desc="---1|3|T|T|_|Loads from memory using Immediate Address into r3. Immediate is unsigned value 0 -> 8191.">loda,r3</td>
            </tr>
            <tr>
                <th>1</th>
                <td desc="----|1|F|F|_|Pushes r0 (LSB), r1 (MSB) onto the internal stack.">push</td>
                <td desc="----|1|F|F|_|Pops from the internal stack into r0 (LSB), r1 (MSB).">pop</td>
                <td desc="---1|1|F|F|_|Stores PSU into r0.">spsu</td>
                <td desc="---1|1|F|F|_|Stores PSL into r0.">spsl</td>
                <td desc="----|1|F|F|_|Pops a return address from the internal stack into PC if the CC equals to 00.">retc,eq</td>
                <td desc="----|1|F|F|_|Pops a return address from the internal stack into PC if the CC equals to 01.">retc,gt</td>
                <td desc="----|1|F|F|_|Pops a return address from the internal stack into PC if the CC equals to 10.">retc,lt</td>
                <td desc="----|1|F|F|_|Unconditionally pops a return address from the internal stack into PC.">retc,un</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the CC equals to 00. Immediate is signed value -64 -> 63.">bctr,eq</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the CC equals to 01. Immediate is signed value -64 -> 63.">bctr,gt</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the CC equals to 10. Immediate is signed value -64 -> 63.">bctr,lt</td>
                <td desc="----|2|T|F|_|Unconditionally branches to PC+Immediate. Immediate is signed value -64 -> 63.">bctr,un</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC equals to 00. Immediate is unsigned value 0 -> 32767.">bcta,eq</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC equals to 01. Immediate is unsigned value 0 -> 32767.">bcta,gt</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC equals to 10. Immediate is unsigned value 0 -> 32767.">bcta,lt</td>
                <td desc="----|3|T|F|_|Unconditionally branches to address specified by Immediate. Immediate is unsigned value 0 -> 32767.">bcta,un</td>
            </tr>
            <tr>
                <th>2</th>
                <td desc="---1|1|F|F|_|Exclusive-ORs r0 with r0, result in r0.">eorz,r0</td>
                <td desc="---1|1|F|F|_|Exclusive-ORs r0 with r1, result in r0.">eorz,r1</td>
                <td desc="---1|1|F|F|_|Exclusive-ORs r0 with r2, result in r0.">eorz,r2</td>
                <td desc="---1|1|F|F|_|Exclusive-ORs r0 with r3, result in r0.">eorz,r3</td>
                <td desc="---1|2|F|F|_|Logical Exclusive-ORs r0 with Immediate value.">eori,r0</td>
                <td desc="---1|2|F|F|_|Logical Exclusive-ORs r1 with Immediate value.">eori,r1</td>
                <td desc="---1|2|F|F|_|Logical Exclusive-ORs r2 with Immediate value.">eori,r2</td>
                <td desc="---1|2|F|F|_|Logical Exclusive-ORs r3 with Immediate value.">eori,r3</td>
                <td desc="---1|2|T|F|_|Logical Exclusive-ORs r0 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">eorr,r0</td>
                <td desc="---1|2|T|F|_|Logical Exclusive-ORs r1 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">eorr,r1</td>
                <td desc="---1|2|T|F|_|Logical Exclusive-ORs r2 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">eorr,r2</td>
                <td desc="---1|2|T|F|_|Logical Exclusive-ORs r3 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">eorr,r3</td>
                <td desc="---1|3|T|T|_|Logical Exclusive-ORs r0 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">eora,r0</td>
                <td desc="---1|3|T|T|_|Logical Exclusive-ORs r1 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">eora,r1</td>
                <td desc="---1|3|T|T|_|Logical Exclusive-ORs r2 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">eora,r2</td>
                <td desc="---1|3|T|T|_|Logical Exclusive-ORs r3 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">eora,r3</td>
            </tr>
            <tr>
                <th>3</th>
                <td desc="---1|1|F|F|_|Reads one byte from the databus into r0 with IOC-Flag asserted.">redc,r0</td>
                <td desc="---1|1|F|F|_|Reads one byte from the databus into r1 with IOC-Flag asserted.">redc,r1</td>
                <td desc="---1|1|F|F|_|Reads one byte from the databus into r2 with IOC-Flag asserted.">redc,r2</td>
                <td desc="---1|1|F|F|_|Reads one byte from the databus into r3 with IOC-Flag asserted.">redc,r3</td>
                <td desc="----|1|F|F|_|Pops a return address from the internal stack into PC and enables interrupts if the CC equals to 00.">rete,eq</td>
                <td desc="----|1|F|F|_|Pops a return address from the internal stack into PC and enables interrupts if the CC equals to 01.">rete,gt</td>
                <td desc="----|1|F|F|_|Pops a return address from the internal stack into PC and enables interrupts if the CC equals to 10.">rete,lt</td>
                <td desc="----|1|F|F|_|Unconditionally pops a return address from the internal stack into PC and enables interrupts.">rete,un</td>
                <td desc="---|2|T|F|_|Branches to PC+Immediate if the CC equals to 00 and pushes a return address onto the internal stack. Immediate is signed value -64 -> 63.">bstr,eq</td>
                <td desc="---|2|T|F|_|Branches to PC+Immediate if the CC equals to 01 and pushes a return address onto the internal stack. Immediate is signed value -64 -> 63.">bstr,gt</td>
                <td desc="---|2|T|F|_|Branches to PC+Immediate if the CC equals to 10 and pushes a return address onto the internal stack. Immediate is signed value -64 -> 63.">bstr,lt</td>
                <td desc="---|2|T|F|_|Unconditionally branches to PC+Immediate and pushes a return address onto the internal stack. Immediate is signed value -64 -> 63.">bstr,un</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC equals to 00 and pushes a return address onto the stack. Immediate is unsigned value 0 -> 32767.">bsta,eq</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC equals to 01 and pushes a return address onto the stack. Immediate is unsigned value 0 -> 32767.">bsta,gt</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC equals to 10 and pushes a return address onto the stack. Immediate is unsigned value 0 -> 32767.">bsta,lt</td>
                <td desc="----|3|T|F|_|Unconditionally branches to address specified by Immediate and pushes a return address onto the stack. Immediate is unsigned value 0 -> 32767.">bsta,un</td>
            </tr>
            <tr>
                <th>4</th>
                <td desc="----|1|F|F|_|Stops the processor from executing any further instructions unless an interrupt occours, after which the halt will be released.">halt</td>
                <td desc="---1|1|F|F|_|Logical ANDs r0 with r1, result in r0.">andz,r1</td>
                <td desc="---1|1|F|F|_|Logical ANDs r0 with r2, result in r0.">andz,r2</td>
                <td desc="---1|1|F|F|_|Logical ANDs r0 with r3, result in r0.">andz,r3</td>
                <td desc="---1|2|F|F|_|Logical ANDs r0 with Immediate value.">andi,r0</td>
                <td desc="---1|2|F|F|_|Logical ANDs r1 with Immediate value.">andi,r1</td>
                <td desc="---1|2|F|F|_|Logical ANDs r2 with Immediate value.">andi,r2</td>
                <td desc="---1|2|F|F|_|Logical ANDs r3 with Immediate value.">andi,r3</td>
                <td desc="---1|2|T|F|_|Logical ANDs r0 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">andr,r0</td>
                <td desc="---1|2|T|F|_|Logical ANDs r1 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">andr,r1</td>
                <td desc="---1|2|T|F|_|Logical ANDs r2 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">andr,r2</td>
                <td desc="---1|2|T|F|_|Logical ANDs r3 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">andr,r3</td>
                <td desc="---1|3|T|T|_|Logical ANDs r0 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">anda,r0</td>
                <td desc="---1|3|T|T|_|Logical ANDs r1 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">anda,r1</td>
                <td desc="---1|3|T|T|_|Logical ANDs r2 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">anda,r2</td>
                <td desc="---1|3|T|T|_|Logical ANDs r3 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">anda,r3</td>
            </tr>
            <tr>
                <th>5</th>
                <td desc="1111|1|F|F|T|Rotates r0 right. C and IDC only affected if WC is set.">rrr,r0</td>
                <td desc="1111|1|F|F|T|Rotates r1 right. C and IDC only affected if WC is set.">rrr,r1</td>
                <td desc="1111|1|F|F|T|Rotates r2 right. C and IDC only affected if WC is set.">rrr,r2</td>
                <td desc="1111|1|F|F|T|Rotates r3 right. C and IDC only affected if WC is set.">rrr,r3</td>
                <td desc="---1|2|F|F|_|Reads one byte from an internal I/O device at provided Immediate address into r0.">rede,r0</td>
                <td desc="---1|2|F|F|_|Reads one byte from an internal I/O device at provided Immediate address into r1.">rede,r1</td>
                <td desc="---1|2|F|F|_|Reads one byte from an internal I/O device at provided Immediate address into r2.">rede,r2</td>
                <td desc="---1|2|F|F|_|Reads one byte from an internal I/O device at provided Immediate address into r3.">rede,r3</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the value of r0 does not equals to 0. Immediate is signed value -64 -> 63.">brnr,r0</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the value of r1 does not equals to 0. Immediate is signed value -64 -> 63.">brnr,r1</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the value of r2 does not equals to 0. Immediate is signed value -64 -> 63.">brnr,r2</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the value of r3 does not equals to 0. Immediate is signed value -64 -> 63.">brnr,r3</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the value of r0 does not equals to 0. Immediate is unsigned value 0 -> 32767.">brna,r0</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the value of r1 does not equals to 0. Immediate is unsigned value 0 -> 32767.">brna,r1</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the value of r2 does not equals to 0. Immediate is unsigned value 0 -> 32767.">brna,r2</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the value of r3 does not equals to 0. Immediate is unsigned value 0 -> 32767.">brna,r3</td>
            </tr>
            <tr>
                <th>6</th>
                <td desc="---1|1|F|F|_|Logical Inclusive-ORs r0 with r0, result in r0.">iorz,r0</td>
                <td desc="---1|1|F|F|_|Logical Inclusive-ORs r0 with r1, result in r0.">iorz,r1</td>
                <td desc="---1|1|F|F|_|Logical Inclusive-ORs r0 with r2, result in r0.">iorz,r2</td>
                <td desc="---1|1|F|F|_|Logical Inclusive-ORs r0 with r3, result in r0.">iorz,r3</td>
                <td desc="---1|2|F|F|_|Logical Inclusive-ORs r0 with Immediate value.">iori,r0</td>
                <td desc="---1|2|F|F|_|Logical Inclusive-ORs r1 with Immediate value.">iori,r1</td>
                <td desc="---1|2|F|F|_|Logical Inclusive-ORs r2 with Immediate value.">iori,r2</td>
                <td desc="---1|2|F|F|_|Logical Inclusive-ORs r3 with Immediate value.">iori,r3</td>
                <td desc="---1|2|T|F|_|Logical Inclusive-ORs r0 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">iorr,r0</td>
                <td desc="---1|2|T|F|_|Logical Inclusive-ORs r1 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">iorr,r1</td>
                <td desc="---1|2|T|F|_|Logical Inclusive-ORs r2 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">iorr,r2</td>
                <td desc="---1|2|T|F|_|Logical Inclusive-ORs r3 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">iorr,r3</td>
                <td desc="---1|3|T|T|_|Logical Inclusive-ORs r0 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">iora,r0</td>
                <td desc="---1|3|T|T|_|Logical Inclusive-ORs r1 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">iora,r1</td>
                <td desc="---1|3|T|T|_|Logical Inclusive-ORs r2 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">iora,r2</td>
                <td desc="---1|3|T|T|_|Logical Inclusive-ORs r3 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">iora,r3</td>
            </tr>
            <tr>
                <th>7</th>
                <td desc="---1|1|F|F|_|Reads one byte from the databus into r0 with IOD-Flag asserted.">redd,r0</td>
                <td desc="---1|1|F|F|_|Reads one byte from the databus into r1 with IOD-Flag asserted.">redd,r1</td>
                <td desc="---1|1|F|F|_|Reads one byte from the databus into r2 with IOD-Flag asserted.">redd,r2</td>
                <td desc="---1|1|F|F|_|Reads one byte from the databus into r3 with IOD-Flag asserted.">redd,r3</td>
                <td desc="----|2|F|F|_|Clears individual bits in the PSU by Logical ANDing it with the complemented contents of a mask in its Immediate.">cpsu</td>
                <td desc="1114|2|F|F|_|Clears individual bits in the PSL by Logical ANDing it with the complemented contents of a mask in its Immediate.">cpsl</td>
                <td desc="----|2|F|F|_|Sets individual bits in the PSU by Logical Inclusive-ORing it with the contents of a mask in its Immediate.">ppsu</td>
                <td desc="1114|2|F|F|_|Sets individual bits in the PSL by Logical Inclusive-ORing it with the contents of a mask in its Immediate.">ppsl</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the value of r0 does not equals to 0 and pushes a return address onto the internal stack. Immediate is signed value -64 -> 63.">bsnr,r0</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the value of r1 does not equals to 0 and pushes a return address onto the internal stack. Immediate is signed value -64 -> 63.">bsnr,r1</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the value of r2 does not equals to 0 and pushes a return address onto the internal stack. Immediate is signed value -64 -> 63.">bsnr,r2</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the value of r3 does not equals to 0 and pushes a return address onto the internal stack. Immediate is signed value -64 -> 63.">bsnr,r3</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the value of r0 does not equals to 0 and pushes a return value onto the internal stack. Immediate is unsigned value 0 -> 32767.">bsna,r0</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the value of r1 does not equals to 0 and pushes a return value onto the internal stack. Immediate is unsigned value 0 -> 32767.">bsna,r1</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the value of r2 does not equals to 0 and pushes a return value onto the internal stack. Immediate is unsigned value 0 -> 32767.">bsna,r2</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the value of r3 does not equals to 0 and pushes a return value onto the internal stack. Immediate is unsigned value 0 -> 32767.">bsna,r3</td>
            </tr>
            <tr>
                <th>8</th>
                <td desc="1111|1|F|F|T|Adds r0 onto r0.">addz,r0</td>
                <td desc="1111|1|F|F|T|Adds r1 onto r0.">addz,r1</td>
                <td desc="1111|1|F|F|T|Adds r2 onto r0.">addz,r2</td>
                <td desc="1111|1|F|F|T|Adds r3 onto r0.">addz,r3</td>
                <td desc="1111|2|F|F|T|Adds Immediate value onto r0.">addi,r0</td>
                <td desc="1111|2|F|F|T|Adds Immediate value onto r1.">addi,r1</td>
                <td desc="1111|2|F|F|T|Adds Immediate value onto r2.">addi,r2</td>
                <td desc="1111|2|F|F|T|Adds Immediate value onto r3.">addi,r3</td>
                <td desc="1111|2|T|F|T|Adds value from memory at PC+Immediate onto r0. Immediate is signed value -64 -> 63.">addr,r0</td>
                <td desc="1111|2|T|F|T|Adds value from memory at PC+Immediate onto r1. Immediate is signed value -64 -> 63.">addr,r1</td>
                <td desc="1111|2|T|F|T|Adds value from memory at PC+Immediate onto r2. Immediate is signed value -64 -> 63.">addr,r2</td>
                <td desc="1111|2|T|F|T|Adds value from memory at PC+Immediate onto r3. Immediate is signed value -64 -> 63.">addr,r3</td>
                <td desc="1111|3|T|T|T|Adds value from memory using Immediate Address onto r0. Immediate is unsigned value 0 -> 8191.">adda,r0</td>
                <td desc="1111|3|T|T|T|Adds value from memory using Immediate Address onto r1. Immediate is unsigned value 0 -> 8191.">adda,r1</td>
                <td desc="1111|3|T|T|T|Adds value from memory using Immediate Address onto r2. Immediate is unsigned value 0 -> 8191.">adda,r2</td>
                <td desc="1111|3|T|T|T|Adds value from memory using Immediate Address onto r3. Immediate is unsigned value 0 -> 8191.">adda,r3</td>
            </tr>
            <tr>
                <th>9</th>
                <td desc="---1|1|F|F|_|Multiplies r0 by r1, 16-bit result in r0 (LSB), r1 (MSB).">mul</td>
                <td desc="----|1|F|F|_|Exchanges values of r0 and r1 without affecting flags.">xchg</td>
                <td desc="----|1|F|F|_|Loads r0 into PSU.">lpsu</td>
                <td desc="1114|1|F|F|_|Loads r0 into PSL.">lpsl</td>
                <td desc="----|1|F|F|_|Conditionally adds 10 onto the high and/or low nibble of r0 based on the values of C and IDC.">dar,r0</td>
                <td desc="----|1|F|F|_|Conditionally adds 10 onto the high and/or low nibble of r1 based on the values of C and IDC.">dar,r1</td>
                <td desc="----|1|F|F|_|Conditionally adds 10 onto the high and/or low nibble of r2 based on the values of C and IDC.">dar,r2</td>
                <td desc="----|1|F|F|_|Conditionally adds 10 onto the high and/or low nibble of r3 based on the values of C and IDC.">dar,r3</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the CC does NOT equals to 00. Immediate is signed value -64 -> 63.">bcfr,eq</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the CC does NOT equals to 01. Immediate is signed value -64 -> 63.">bcfr,gt</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the CC does NOT equals to 10. Immediate is signed value -64 -> 63.">bcfr,lt</td>
                <td desc="----|2|T|F|_|Branches to an address specified using a signed Immediate -64 -> 63. Negative values cause a branch to address 8192+Immediate.">zbrr</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC does NOT equals to 00. Immediate is unsigned value 0 -> 32767.">bcfa,eq</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC does NOT equals to 01. Immediate is unsigned value 0 -> 32767.">bcfa,gt</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC does NOT equals to 10. Immediate is unsigned value 0 -> 32767.">bcfa,lt</td>
                <td desc="----|3|T|R|_|Performs an absolute, indexed branch. Indexing is forced and register used for indexing is always r3.">bxa</td>
            </tr>
            <tr>
                <th>A</th>
                <td desc="1111|1|F|F|T|Subtracts r0 from r0.">subz,r0</td>
                <td desc="1111|1|F|F|T|Subtracts r1 from r0.">subz,r1</td>
                <td desc="1111|1|F|F|T|Subtracts r2 from r0.">subz,r2</td>
                <td desc="1111|1|F|F|T|Subtracts r3 from r0.">subz,r3</td>
                <td desc="1111|2|F|F|T|Substracts Immediate value from r0.">subi,r0</td>
                <td desc="1111|2|F|F|T|Substracts Immediate value from r1.">subi,r1</td>
                <td desc="1111|2|F|F|T|Substracts Immediate value from r2.">subi,r2</td>
                <td desc="1111|2|F|F|T|Substracts Immediate value from r3.">subi,r3</td>
                <td desc="1111|2|T|F|T|Subtracts value from memory at PC+Immediate from r0. Immediate is signed value -64 -> 63.">subr,r0</td>
                <td desc="1111|2|T|F|T|Subtracts value from memory at PC+Immediate from r1. Immediate is signed value -64 -> 63.">subr,r1</td>
                <td desc="1111|2|T|F|T|Subtracts value from memory at PC+Immediate from r2. Immediate is signed value -64 -> 63.">subr,r2</td>
                <td desc="1111|2|T|F|T|Subtracts value from memory at PC+Immediate from r3. Immediate is signed value -64 -> 63.">subr,r3</td>
                <td desc="1111|3|T|T|T|Subtracts value from memory using Immediate Address from r0. Immediate is unsigned value 0 -> 8191.">suba,r0</td>
                <td desc="1111|3|T|T|T|Subtracts value from memory using Immediate Address from r1. Immediate is unsigned value 0 -> 8191.">suba,r1</td>
                <td desc="1111|3|T|T|T|Subtracts value from memory using Immediate Address from r2. Immediate is unsigned value 0 -> 8191.">suba,r2</td>
                <td desc="1111|3|T|T|T|Subtracts value from memory using Immediate Address from r3. Immediate is unsigned value 0 -> 8191.">suba,r3</td>
            </tr>
            <tr>
                <th>B</th>
                <td desc="----|1|F|F|_|Writes r0 onto the databus with the IOC-Flag asserted.">wrtc,r0</td>
                <td desc="----|1|F|F|_|Writes r1 onto the databus with the IOC-Flag asserted.">wrtc,r1</td>
                <td desc="----|1|F|F|_|Writes r2 onto the databus with the IOC-Flag asserted.">wrtc,r2</td>
                <td desc="----|1|F|F|_|Writes r3 onto the databus with the IOC-Flag asserted.">wrtc,r3</td>
                <td desc="---3|2|F|F|_|Tests bits in the PSU using r0 as a mask.">tpsu</td>
                <td desc="---3|2|F|F|_|Tests bits in the PSL using r0 as a mask.">tpsl</td>
                <td desc=""></td>
                <td desc="----|1|F|F|_|Instruction prefix for extended ISA." class="ext-isa">EXTD</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the CC does NOT equals to 00 and pushes a return address onto the internal stack. Immediate is signed value -64 -> 63.">bsfr,eq</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the CC does NOT equals to 01 and pushes a return address onto the internal stack. Immediate is signed value -64 -> 63.">bsfr,gt</td>
                <td desc="----|2|T|F|_|Branches to PC+Immediate if the CC does NOT equals to 10 and pushes a return address onto the internal stack. Immediate is signed value -64 -> 63.">bsfr,lt</td>
                <td desc="----|2|T|F|_|Branches to an address specified using a signed Immediate -64 -> 63 and pushes a return address onto the internal stack. Negative values for Immediate cause a branch to address 8192+Immediate.">zbsr</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC does NOT equals to 00 and pushes a return address onto the internal stack. Immediate is unsigned value 0 -> 32767.">bsfa,eq</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC does NOT equals to 01 and pushes a return address onto the internal stack. Immediate is unsigned value 0 -> 32767.">bsfa,gt</td>
                <td desc="----|3|T|F|_|Branches to address specified by Immediate if the CC does NOT equals to 10 and pushes a return address onto the internal stack. Immediate is unsigned value 0 -> 32767.">bsfa,lt</td>
                <td desc="----|3|T|R|_|Performs an absolute, indexed branch. Indexing is forced and register used for indexing is always r3. Pushes a return address onto the internal stack.">bsxa</td>
            </tr>
            <tr>
                <th>C</th>
                <td desc="----|1|F|F|_|No operation is performed.">nop</td>
                <td desc="---1|1|F|F|_|Stores r0 into r1.">strz,r1</td>
                <td desc="---1|1|F|F|_|Stores r0 into r2.">strz,r2</td>
                <td desc="---1|1|F|F|_|Stores r0 into r3.">strz,r3</td>
                <td desc="----|1|F|F|_|Clear r0 to 0 without affecting flags.">clr r0</td>
                <td desc="----|1|F|F|_|Clear r1 to 0 without affecting flags.">clr r1</td>
                <td desc="----|1|F|F|_|Clear r2 to 0 without affecting flags.">clr r2</td>
                <td desc="----|1|F|F|_|Clear r3 to 0 without affecting flags.">clr r3</td>
                <td desc="----|2|T|F|_|Stores r0 into memory at PC+Immediate. Immediate is signed value -64 -> 63.">strr,r0</td>
                <td desc="----|2|T|F|_|Stores r1 into memory at PC+Immediate. Immediate is signed value -64 -> 63.">strr,r1</td>
                <td desc="----|2|T|F|_|Stores r2 into memory at PC+Immediate. Immediate is signed value -64 -> 63.">strr,r2</td>
                <td desc="----|2|T|F|_|Stores r3 into memory at PC+Immediate. Immediate is signed value -64 -> 63.">strr,r3</td>
                <td desc="----|3|T|T|_|Stores r0 into memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">stra,r0</td>
                <td desc="----|3|T|T|_|Stores r1 into memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">stra,r1</td>
                <td desc="----|3|T|T|_|Stores r2 into memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">stra,r2</td>
                <td desc="----|3|T|T|_|Stores r3 into memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">stra,r3</td>
            </tr>
            <tr>
                <th>D</th>
                <td desc="1111|1|F|F|T|Rotates r0 left. C and IDC only affected if WC is set.">rrl,r0</td>
                <td desc="1111|1|F|F|T|Rotates r1 left. C and IDC only affected if WC is set.">rrl,r1</td>
                <td desc="1111|1|F|F|T|Rotates r2 left. C and IDC only affected if WC is set.">rrl,r2</td>
                <td desc="1111|1|F|F|T|Rotates r3 left. C and IDC only affected if WC is set.">rrl,r3</td>
                <td desc="----|2|F|F|_|Writes r0 to an internal I/O device at provided Immediate address.">wrte,r0</td>
                <td desc="----|2|F|F|_|Writes r1 to an internal I/O device at provided Immediate address.">wrte,r1</td>
                <td desc="----|2|F|F|_|Writes r2 to an internal I/O device at provided Immediate address.">wrte,r2</td>
                <td desc="----|2|F|F|_|Writes r3 to an internal I/O device at provided Immediate address.">wrte,r3</td>
                <td desc="----|2|T|F|_|Increments r0, then Branches to PC+Immediate if the new register value does not equals to 0. Immediate is signed value -64 -> 63.">birr,r0</td>
                <td desc="----|2|T|F|_|Increments r1, then Branches to PC+Immediate if the new register value does not equals to 0. Immediate is signed value -64 -> 63.">birr,r1</td>
                <td desc="----|2|T|F|_|Increments r2, then Branches to PC+Immediate if the new register value does not equals to 0. Immediate is signed value -64 -> 63.">birr,r2</td>
                <td desc="----|2|T|F|_|Increments r3, then Branches to PC+Immediate if the new register value does not equals to 0. Immediate is signed value -64 -> 63.">birr,r3</td>
                <td desc="----|3|T|F|_|Increments r0, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 32767.">bira,r0</td>
                <td desc="----|3|T|F|_|Increments r1, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 32767.">bira,r1</td>
                <td desc="----|3|T|F|_|Increments r2, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 32767.">bira,r2</td>
                <td desc="----|3|T|F|_|Increments r3, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 32767.">bira,r3</td>
            </tr>
            <tr>
                <th>E</th>
                <td desc="---2|1|F|F|C|Compares r0 with r0.">comz,r0</td>
                <td desc="---2|1|F|F|C|Compares r0 with r1.">comz,r1</td>
                <td desc="---2|1|F|F|C|Compares r0 with r2.">comz,r2</td>
                <td desc="---2|1|F|F|C|Compares r0 with r3.">comz,r3</td>
                <td desc="---5|2|F|F|C|Compares r0 with Immediate value.">comi,r0</td>
                <td desc="---5|2|F|F|C|Compares r1 with Immediate value.">comi,r1</td>
                <td desc="---5|2|F|F|C|Compares r2 with Immediate value.">comi,r2</td>
                <td desc="---5|2|F|F|C|Compares r3 with Immediate value.">comi,r3</td>
                <td desc="---5|2|T|F|C|Compares r0 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">comr,r0</td>
                <td desc="---5|2|T|F|C|Compares r1 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">comr,r1</td>
                <td desc="---5|2|T|F|C|Compares r2 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">comr,r2</td>
                <td desc="---5|2|T|F|C|Compares r3 with value from memory at PC+Immediate. Immediate is signed value -64 -> 63.">comr,r3</td>
                <td desc="---5|3|T|T|C|Compares r0 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">coma,r0</td>
                <td desc="---5|3|T|T|C|Compares r1 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">coma,r1</td>
                <td desc="---5|3|T|T|C|Compares r2 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">coma,r2</td>
                <td desc="---5|3|T|T|C|Compares r3 with value from memory using Immediate Address. Immediate is unsigned value 0 -> 8191.">coma,r3</td>
            </tr>
            <tr>
                <th>F</th>
                <td desc="----|1|F|F|_|Writes r0 onto the databus with the IOD-Flag asserted.">wrtd,r0</td>
                <td desc="----|1|F|F|_|Writes r1 onto the databus with the IOD-Flag asserted.">wrtd,r1</td>
                <td desc="----|1|F|F|_|Writes r2 onto the databus with the IOD-Flag asserted.">wrtd,r2</td>
                <td desc="----|1|F|F|_|Writes r3 onto the databus with the IOD-Flag asserted.">wrtd,r3</td>
                <td desc="---3|2|F|F|_|Tests bits in r0 using a mask provided in the Immediate value.">tmi,r0</td>
                <td desc="---3|2|F|F|_|Tests bits in r1 using a mask provided in the Immediate value.">tmi,r1</td>
                <td desc="---3|2|F|F|_|Tests bits in r2 using a mask provided in the Immediate value.">tmi,r2</td>
                <td desc="---3|2|F|F|_|Tests bits in r3 using a mask provided in the Immediate value.">tmi,r3</td>
                <td desc="----|2|T|F|_|Decrements r0, then Branches to PC+Immediate if the new register value does not equals to 0. Immediate is signed value -64 -> 63.">bdrr,r0</td>
                <td desc="----|2|T|F|_|Decrements r1, then Branches to PC+Immediate if the new register value does not equals to 0. Immediate is signed value -64 -> 63.">bdrr,r1</td>
                <td desc="----|2|T|F|_|Decrements r2, then Branches to PC+Immediate if the new register value does not equals to 0. Immediate is signed value -64 -> 63.">bdrr,r2</td>
                <td desc="----|2|T|F|_|Decrements r3, then Branches to PC+Immediate if the new register value does not equals to 0. Immediate is signed value -64 -> 63.">bdrr,r3</td>
                <td desc="----|3|T|F|_|Decrements r0, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 32767.">bdra,r0</td>
                <td desc="----|3|T|F|_|Decrements r1, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 32767.">bdra,r1</td>
                <td desc="----|3|T|F|_|Decrements r2, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 32767.">bdra,r2</td>
                <td desc="----|3|T|F|_|Decrements r3, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 32767.">bdra,r3</td>
            </tr>
        </tbody>
    </table>
    <br>
    <h4>Table colorization:</h4>
    <fieldset id="coloration-changer">
        <div style="display: inline-block; margin-right: 20px;">
            <input type="radio" id="coloration-none" name="coloration" value="None" checked />
            <label for="coloration-none">None</label>
        </div>
        <div style="display: inline-block; margin-right: 20px;">
            <input type="radio" id="coloration-size" name="coloration" value="Size" />
            <label for="coloration-size">Length (bytes)</label>
        </div>
        <div style="display: inline-block; margin-right: 20px;">
            <input type="radio" id="coloration-addressing" name="coloration" value="Addressing" />
            <label for="coloration-addressing">Indir/Indexed Addressing Support</label>
        </div>
        <div style="display: inline-block; margin-right: 20px;">
            <input type="radio" id="coloration-cc" name="coloration" value="ConditionCode" />
            <label for="coloration-cc">Condition Code Change</label>
        </div>
    </fieldset>
    <br>
    <h3>Extended Instructions</h3>
    <table title="isa-ext" class="isa-table">
        <tbody>
            <tr>
                <td></td>
                <th>0</th>
                <th>1</th>
                <th>2</th>
                <th>3</th>
                <th>4</th>
                <th>5</th>
                <th>6</th>
                <th>7</th>
                <th>8</th>
                <th>9</th>
                <th>A</th>
                <th>B</th>
                <th>C</th>
                <th>D</th>
                <th>E</th>
                <th>F</th>
            </tr>
            <tr>
                <th>0</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc="---1|3|F|F|_|Loads r0 from far address in Immediate. Immediate is unsigned value 0 -> 65535.">lodf,r0</td>
                <td desc="---1|3|F|F|_|Loads r1 from far address in Immediate. Immediate is unsigned value 0 -> 65535.">lodf,r1</td>
                <td desc="---1|3|F|F|_|Loads r2 from far address in Immediate. Immediate is unsigned value 0 -> 65535.">lodf,r2</td>
                <td desc="---1|3|F|F|_|Loads r3 from far address in Immediate. Immediate is unsigned value 0 -> 65535.">lodf,r3</td>
                <td desc="---1|3|F|G|_|Loads r0 from far address in Immediate indexed by r0. Immediate is unsigned value 0 -> 65535.">ldfi,r0</td>
                <td desc="---1|3|F|G|_|Loads r0 from far address in Immediate indexed by r1. Immediate is unsigned value 0 -> 65535.">ldfi,r0</td>
                <td desc="---1|3|F|G|_|Loads r0 from far address in Immediate indexed by r2. Immediate is unsigned value 0 -> 65535.">ldfi,r0</td>
                <td desc="---1|3|F|G|_|Loads r0 from far address in Immediate indexed by r3. Immediate is unsigned value 0 -> 65535.">ldfi,r0</td>
            </tr>
            <tr>
                <th>1</th>
                <td desc="----|1|F|F|_|Pushes both program status words onto internal stack.">pshs</td>
                <td desc="1116|1|F|F|_|Pops both program status words from internal stack.">pops</td>
                <td desc="----|1|F|F|_|Set Vector Base. Sets interrupt vector table base address from r0 (LSB) and r1 (MSB).">svb</td>
                <td desc="----|1|F|F|_|For testing purposes ; do not use">chrp</td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC equals to 00. Immediate is unsigned value 0 -> 65535.">bctf,eq</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC equals to 01. Immediate is unsigned value 0 -> 65535.">bctf,gt</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC equals to 10. Immediate is unsigned value 0 -> 65535.">bctf,lt</td>
                <td desc="----|3|F|F|_|Unconditionally branches to address specified by Immediate. Immediate is unsigned value 0 -> 65535.">bctf,un</td>
            </tr>
            <tr>
                <th>2</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
            </tr>
            <tr>
                <th>3</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC equals to 00 and pushes a return address onto the stack. Immediate is unsigned value 0 -> 65535.">bstf,eq</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC equals to 01 and pushes a return address onto the stack. Immediate is unsigned value 0 -> 65535.">bstf,gt</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC equals to 10 and pushes a return address onto the stack. Immediate is unsigned value 0 -> 65535.">bstf,lt</td>
                <td desc="----|3|F|F|_|Unconditionally branches to address specified by Immediate and pushes a return address onto the stack. Immediate is unsigned value 0 -> 65535.">bstf,un</td>
            </tr>
            <tr>
                <th>4</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
            </tr>
            <tr>
                <th>5</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the value of r0 does not equals to 0. Immediate is unsigned value 0 -> 65535.">brnf,r0</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the value of r1 does not equals to 0. Immediate is unsigned value 0 -> 65535.">brnf,r1</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the value of r2 does not equals to 0. Immediate is unsigned value 0 -> 65535.">brnf,r2</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the value of r3 does not equals to 0. Immediate is unsigned value 0 -> 65535.">brnf,r3</td>
            </tr>
            <tr>
                <th>6</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
            </tr>
            <tr>
                <th>7</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the value of r0 does not equals to 0 and pushes a return value onto the internal stack. Immediate is unsigned value 0 -> 65535.">bsnf,r0</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the value of r1 does not equals to 0 and pushes a return value onto the internal stack. Immediate is unsigned value 0 -> 65535.">bsnf,r1</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the value of r2 does not equals to 0 and pushes a return value onto the internal stack. Immediate is unsigned value 0 -> 65535.">bsnf,r2</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the value of r3 does not equals to 0 and pushes a return value onto the internal stack. Immediate is unsigned value 0 -> 65535.">bsnf,r3</td>
            </tr>
            <tr>
                <th>8</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
            </tr>
            <tr>
                <th>9</th>
                <td desc="----|1|F|F|_|Sets the internal trap flag to trigger software interrupt.">trap</td>
                <td desc="----|1|F|F|_|Clears internal trap flag. Interrupt request clear for trap interrupt.">clrt</td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC does NOT equals to 00. Immediate is unsigned value 0 -> 65535.">bcff,eq</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC does NOT equals to 01. Immediate is unsigned value 0 -> 65535.">bcff,gt</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC does NOT equals to 10. Immediate is unsigned value 0 -> 65535.">bcff,lt</td>
                <td desc="----|3|F|R|_|Performs an absolute, indexed branch. Indexing is forced and register used for indexing is always r3.">bxf</td>
            </tr>
            <tr>
                <th>A</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
            </tr>
            <tr>
                <th>B</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC does NOT equals to 00 and pushes a return address onto the internal stack. Immediate is unsigned value 0 -> 65535.">bsff,eq</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC does NOT equals to 01 and pushes a return address onto the internal stack. Immediate is unsigned value 0 -> 65535.">bsff,gt</td>
                <td desc="----|3|F|F|_|Branches to address specified by Immediate if the CC does NOT equals to 10 and pushes a return address onto the internal stack. Immediate is unsigned value 0 -> 65535.">bsff,lt</td>
                <td desc="----|3|F|R|_|Performs an absolute, indexed branch. Indexing is forced and register used for indexing is always r3. Pushes a return address onto the internal stack.">bsxf</td>
            </tr>
            <tr>
                <th>C</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc="---1|3|F|F|_|Stores r0 to far address in Immediate. Immediate is unsigned value 0 -> 65535.">strf,r0</td>
                <td desc="---1|3|F|F|_|Stores r1 to far address in Immediate. Immediate is unsigned value 0 -> 65535.">strf,r1</td>
                <td desc="---1|3|F|F|_|Stores r2 to far address in Immediate. Immediate is unsigned value 0 -> 65535.">strf,r2</td>
                <td desc="---1|3|F|F|_|Stores r3 to far address in Immediate. Immediate is unsigned value 0 -> 65535.">strf,r3</td>
                <td desc="---1|3|F|G|_|Stores r0 to far address in Immediate indexed by r0. Immediate is unsigned value 0 -> 65535.">stfi,r0</td>
                <td desc="---1|3|F|G|_|Stores r0 to far address in Immediate indexed by r1. Immediate is unsigned value 0 -> 65535.">stfi,r0</td>
                <td desc="---1|3|F|G|_|Stores r0 to far address in Immediate indexed by r2. Immediate is unsigned value 0 -> 65535.">stfi,r0</td>
                <td desc="---1|3|F|G|_|Stores r0 to far address in Immediate indexed by r3. Immediate is unsigned value 0 -> 65535.">stfi,r0</td>
            </tr>
            <tr>
                <th>D</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc="----|3|F|F|_|Increments r0, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 65535.">birf,r0</td>
                <td desc="----|3|F|F|_|Increments r1, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 65535.">birf,r1</td>
                <td desc="----|3|F|F|_|Increments r2, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 65535.">birf,r2</td>
                <td desc="----|3|F|F|_|Increments r3, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 65535.">birf,r3</td>
            </tr>
            <tr>
                <th>E</th>
                <td desc="----|1|F|F|_|Complements r0 without affecting flags.">cpl r0</td>
                <td desc="----|1|F|F|_|Complements r1 without affecting flags.">cpl r1</td>
                <td desc="----|1|F|F|_|Complements r2 without affecting flags.">cpl r2</td>
                <td desc="----|1|F|F|_|Complements r3 without affecting flags.">cpl r3</td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
            </tr>
            <tr>
                <th>F</th>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc=""></td>
                <td desc="----|3|F|F|_|Decrements r0, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 65535.">bdrf,r0</td>
                <td desc="----|3|F|F|_|Decrements r1, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 65535.">bdrf,r1</td>
                <td desc="----|3|F|F|_|Decrements r2, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 65535.">bdrf,r2</td>
                <td desc="----|3|F|F|_|Decrements r3, then branches to address specified by Immediate if the new register value does not equals to 0. Immediate is unsigned value 0 -> 65535.">bdrf,r3</td>
            </tr>
        </tbody>
    </table>
    <br>

-----------------
Programming Model
-----------------

The AS2650v2 CPU is an 8-bit CPU core that can directly address 65,536 bytes of memory organized in 8,192 byte large pages. It contains 7 total general-purpose registers, of which 4 are accessible at any time. R0, or the accumulator, is always the same, while R1 - R3 can be instantly banked with a second set of registers, R1' - R3'.

There is also an internal 16x16-bit large stack memory that can be used to store program variables, but is intended to be used as the subroutine and interrupt call stack.

There is also a register to hold processor status and flags, the Program Status Word (PSW). As it is 16-bits wide, it is split into the PSL (Program Status Lower) and PSU (Program Status Upper).

Lastly, there is a 16-bit Instruction Pointer which is split into the Page Control and Program Counter registers.

The Interrupt Vector Base (IVB) register is used as part of the interrupt configuration.

.. raw:: html

	<table class="regbox">
	<tbody>
		<tr>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
			<th></th>
		</tr>
		<tr>
			<td style="width: 6.25%;">2¹⁵</td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;">2⁸</td>
			<td style="width: 6.25%;">2⁷</td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;"></td>
			<td style="width: 6.25%;">2⁰</td>
		</tr>
		<tr><td colspan="16"><b>General-Purpose</b></td></tr>
		<tr><td colspan="8" class="regbox-type1"></td><td colspan="8">R3'</td>
		<tr><td colspan="8" class="regbox-type1"></td><td colspan="8">R2'</td>
		<tr><td colspan="8" class="regbox-type1"></td><td colspan="8">R1'</td>
		<tr><td colspan="16"></td></tr>
		<tr><td colspan="8" class="regbox-type1"></td><td colspan="8">R3</td>
		<tr><td colspan="8" class="regbox-type1"></td><td colspan="8">R2</td>
		<tr><td colspan="8" class="regbox-type1"></td><td colspan="8">R1</td>
		<tr><td colspan="16"></td></tr>
		<tr><td colspan="8" class="regbox-type1"></td><td colspan="8">R0</td>
		<tr><td colspan="16"><b>Stack</b></td></tr>
		<tr><td colspan="16">S[15]</td></tr>
		<tr><td colspan="16">[...]</td></tr>
		<tr><td colspan="16">S[0]</td></tr>
		<tr><td colspan="16"><b>Instruction Pointer</b></td></tr>
		<tr><td colspan="3">Page Control</td><td colspan="13">Program Counter</td></tr>
		<tr><td colspan="16"><b>Program Status</b></td></tr>
		<tr><td colspan="8">PSU</td><td colspan="8">PSL</td></tr>
		<tr><td colspan="16"><b>Interrupts</b></td></tr>
		<tr><td colspan="12">IVB</td><td colspan="4" class="regbox-type1"></td></tr>
	</tbody>
	</table>

Program Status Word
-------------------

**Program Status Upper**

.. wavedrom::

	{ "reg": [
      {"name": "SP", "bits": 4},
      {"type": 1, "bits": 1},
      {"name": "II", "bits": 1},
      {"name": "F", "bits": 1},{"name": "S", "bits": 1}],
	 "config": {"hspace": 600}
	}

The PSU primarily contains the Stack Pointer ``SP`` for the internal stack as well as the global Interrupt Inhibit ``II``. The pointer increments when values are pushed onto the stack and decrements when values are popped. It always points to where the next value will go, so the TOS is actually at ``SP - 1``.

This register also contains the bits that control the two digital input/output lines ``Sense`` and ``Flag``. The ``F`` bit sets the state (high or low) of ``Flag`` and the current state of the ``Sense`` input can be read out of the ``F`` bit.

Bit 4 of the PSU is not wired up to any hardware functionality, but is physically present and can be read and writen by a user program.

The PSU is reset to 20h on reset, meaning the ``II`` bit is set.

**Program Status Lower**

.. wavedrom::

	{ "reg": [
      {"name": "C", "bits": 1},
      {"name": "COM", "bits": 1},
      {"name": "OVF", "bits": 1},
      {"name": "WC", "bits": 1},{"name": "RS", "bits": 1},
      {"name": "IDC", "bits": 1},
      {"name": "CC", "bits": 2}],
	 "config": {"hspace": 600}
	}

The PSL contains all processor flags and settings.

``C`` is the carry flag defined by arithmatic operations.

``COM`` is a processor setting that modifies the behavior of the compare instructions. If clear, they will compare values as two’s-complement signed bytes. If set, they will compare values as unsigned bytes.

``OVF`` if set, indicates that the last addition or subtraction operation resulted in an arithmatic overflow, meaning the result could not be represented by a signed byte.

``WC`` is a processor setting that modifies the behavior of addition and subtraction instructions, as well as left- and right-rotate.

``IDC`` is the Interdigit Carry, that is the carry from bit 3 to bit 4 during an addition, subtraction of bitshift operation. It is used in combination with the ``dar`` instruction to perform arithmatic on packed BCD values.

``CC`` is the Condition Code. This code is set either by any instruction that modifies a general purpose register (unless otherwise specified) and compare and bit-test instructions. This code can be tested by software or conditional branch instructions.

This PSL is initialized to 0 on reset.

Unless otherwise specified, any instruction listed in this documentation that is described as affecting CC will do according to the new value in whichever register it modifies as listed in this table:

.. list-table:: Condition Codes
    :name: condition-codes
    :header-rows: 1
    
    * - Register Contents
      - CC
    * - Positive
      - ``01``
    * - Zero
      - ``00``
    * - Negative
      - ``10``

The value ``11`` will never be generated in the CC by any instruction.

------------
Memory Model
------------

The AS2650v2 segments its view of the 65,536 byte memory space into 8,192 pages. There is always one "current" page set by the 3 bit Page Control. This is combined with the 13 bit Program Counter to form the address of the next instruction to be executed. The Page Control can only be changed by a far branch or indirect addressed branch changing the Instruction Pointer to a different page.

All absolute and relative addressed instructions can only directly reach memory within the current page, essentially allowing faster access to local data. Indirect addressing and far addressing can access bytes anywhere within the complete 65,536 byte memory space.

Notably, the Program Counter reaching its maximum value and wrapping to 0 does not cause the Instruction Pointer to be advanced into the following page. Only branch instructions can change the current page.

The 4KiB of on-die SRAM lie entirely within the first half of page 0.

----------------------------
Instruction Addressing Modes
----------------------------

Implied
-------

The instruction consists only of a 8-bit opcode. All operands are implied.

.. wavedrom::

	{ "reg": [
      {"name": "Opcode", "bits": 8}],
	 "config": {"hspace": 600}
	}

Register Addressing
-------------------

All instructions that operate on a single register in-place are encoded in a single byte with a 6-bit opcode and 2-bit register index.

.. wavedrom::

	{ "reg": [
      {"name": "Reg", "bits": 2},
      {"name": "Opcode", "bits": 6}],
	 "config": {"hspace": 600}
	}

Zero Addressing
---------------

This is a special form of Register Addressing that is identical in encoding but operates on a pair of registers, the second of which is always implied to be R0.

With the exception of ``strz`` or unless otherwise specified, R0 is also the destination for the instruction result with the specified register index only used as a source.

Immediate Addressing
--------------------

Immediate addressed instructions operate on a register and immediate value. The operation and register are encoded as in Register Addressing and followed by a second byte containing the immediate value.

.. wavedrom::

	{ "reg": [
      {"name": "Reg", "bits": 2},
      {"name": "Opcode", "bits": 6}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "Immediate", "bits": 8}],
	 "config": {"hspace": 600}
	}

Relative Addressing
-------------------

Relative addressed instructions are either branch instructions or memory reference instructions, in which case they load or store one byte in memory as part of their operation.
Relative instructions reference a memory location relative to the current Program Counter value. The second byte contains a signed 7-bit displacement value that is added to the Program Counter to obtain the effective address.

Indirect addressing may additionally be specified.

There are some exceptions (``zbsr``, ``zbrr``) where the effective address is computed not as relative to the Program Counter, but as relative to address 0, page 0.

This mode applies the same to branch or memory reference instructions.

.. wavedrom::

	{ "reg": [
      {"name": "Reg", "bits": 2},
      {"name": "Opcode", "bits": 6}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "Relative Displacement", "bits": 7},{"name": "I", "bits": 1}],
	 "config": {"hspace": 600}
	}

Absolute Addressing for non-branch instructions
-----------------------------------------------

Absolute addressed instructions encode a complete 13-bit page-relative address in the two bytes following the opcode and register index. This immediate address is the effective address.

Indirect and/or indexed addressing may additionally be specified.

.. wavedrom::

	{ "reg": [
      {"name": "Reg", "bits": 2},
      {"name": "Opcode", "bits": 6}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "addr[12:8]", "bits": 5},{"name": "Index Control", "bits": 2},{"name": "I", "bits": 1}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "addr[7:0]", "bits": 8}],
	 "config": {"hspace": 600}
	}

Absolute Addressing for branch instructions
-------------------------------------------

Absolute addressing for branch instructions differs from regular absolute addressing, not allowing for indexed addressing (but still allowing indirect addressing).

These instructions encode a 15-bit address as the branch target, corresponding to the entire PC and the 2 least-significant bits of Page Control. The most significant bit of Page Control is unchanged.

Additionally, the register index may instead be a Condition Code Mask for conditional branches.

.. wavedrom::

	{ "reg": [
      {"name": "Reg or CC Mask", "bits": 2},
      {"name": "Opcode", "bits": 6}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "addr[14:8]", "bits": 7},{"name": "I", "bits": 1}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "addr[7:0]", "bits": 8}],
	 "config": {"hspace": 600}
	}

Far / Far Indirect addressing
-----------------------------

Far and Far Indirect addressing modes were added in the AS2650v2 to extend the available total address space to 65,536 bytes, as well as make working with the paged memory layout easier.

These instructions encode a full 16-bit address. Unlike the other addressing modes, wether indirect addressing is specified is encoded in the opcode.

This mode applies the same to branch or memory reference instructions.

.. wavedrom::

	{ "reg": [
      {"name": "Reg or CC Mask", "bits": 2},
      {"name": "Opcode", "bits": 6}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "addr[15:8]", "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "addr[7:0]", "bits": 8}],
	 "config": {"hspace": 600}
	}

Indirect Addressing
-------------------

Indirect Addressing may be specified on top of another addressing mode, when supported, by setting the ``I`` bit. When specified, the original effective address of the instruction is no longer the true memory reference. Instead, two successive bytes are read from this location which become the new effective address for the memory reference.

Essentially, this mode implements a pointer dereference. The pointer is stored in big endian format.

Indexed Addressing
------------------

Indexed Addressing may be specified on top of another addressing mode, when supported, by setting the Index Control bits to a value other than zero. Once enabled, the register index in the first instruction byte instead specifies which register to use for indexing. The operation’s actual register index implicitly becomes R0.

The current value of the register chosen for indexing is added onto the original effective address to obtain the new effective address.

If autoincrement or autodecrement are specified, the index register’s value is incremented or decremented **before** the address calculation.

.. list-table:: Index Control
    :name: index-control
    :header-rows: 1
    
    * - Bit 6
      - Bit 5
      - Meaning
    * - ``0``
      - ``0``
      - No indexing
    * - ``0``
      - ``1``
      - Indexed with auto-increment
    * - ``1``
      - ``0``
      - Indexed with auto-decrement
    * - ``1``
      - ``1``
      - Indexed only

Indexed and Indirect Addressing may both be supported on the same instruction. They are not mutually exclusive. If both are specified, the Indirect Addressing takes precedence and the pointer is read from memory and the index added onto it.

Extended Instructions
---------------------

The AS2650v2 contains a series of extended instructions marked by a prefix, B7h. If the processor encounters this opcode, it will skip it and interpret the following byte(s) as an extended instruction. Besides this prefix, extended instructions follow the same rules for their addressing modes.

------------
Instructions
------------

**Note:** for most (but not all) non-extended instructions, the addressing mode is encoded within the least significant two bits of the opcode. This will be refered to as ``m`` from here on out, and is defined as follows:

.. list-table:: Adressing mode encodings
    :name: addr-mode-enc
    :header-rows: 1
    
    * - ``m``
      - Mode
    * - ``00``
      - Zero Addressing
    * - ``01``
      - Immediate Addressing
    * - ``10``
      - Relative Addressing
    * - ``11``
      - Absolute Addressing

Additionally, in these cases, the addressing mode is represented as part of the instruction mnemonic, either as a ``z``, ``i``, ``r``, ``a`` or ``f`` character at the end of the mnemonic.

lodz/lodi/lodr/loda - Load Register value
-----------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m", "bits": 2},
      {"name": 0, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions transfer a byte of data into one of the general purpose registers. The source of the value may be another register, an immediate or a memory reference.

**Affected flags:** ``CC``

eorz/eori/eorr/eora - Logical Exclusive OR
------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m", "bits": 2},
      {"name": 2, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions perform an exclusive OR logic operation on the bits of both operands.

**Affected flags:** ``CC``

andz/andi/andr/anda - Logical AND
---------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m", "bits": 2},
      {"name": 4, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions perform a AND logic operation on the bits of both operands.

**Affected flags:** ``CC``

**Note:** the combination of r == 0 and m == 0 (``andz,r0``) is invalid. This opcode is used for a different instruction.

iorz/iori/iorr/iora - Logical Inclusive OR
------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m", "bits": 2},
      {"name": 6, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions perform a OR logic operation on the bits of both operands.

**Affected flags:** ``CC``

addz/addi/addr/adda - Addition
------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m", "bits": 2},
      {"name": 8, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions perform an arithmatic addition on both operands. If the ``WC`` bit in the PSL is set, the carry flag ``C`` is also added onto the result.

The carry flag will be set to the carry out of the addition. The interdigit carry will be set to the carry from bit 3 to bit 4. The overflow flag is set if a signed overflow occured.

**Affected flags:** ``CC``, ``C``, ``IDC``, ``OVF``

subz/subi/subr/suba - Subtraction
---------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m", "bits": 2},
      {"name": 10, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions perform an arithmatic subtraction of one operand from the other. If the ``WC`` bit in the PSL is set, the inverse of the carry flag ``C`` is also subtracted from the result.

In the case of Zero Addressing, the subtrahend is the value of the register determined by the register index. In the case of Immediate Addressing or a memory reference addressing, the subtrahend is the immediate or value from memory.

Internally, this operation forms the binary complement subtrahend and adds it onto the minuend, and also adds either one (``WC`` == 0) or the carry flag (``WC`` == 1).

The carry flag will be set to the carry out of this addition. The interdigit carry will be set to the carry from bit 3 to bit 4. The overflow flag is set if a signed overflow occured.

**Affected flags:** ``CC``, ``C``, ``IDC``, ``OVF``

strz/strr/stra - Store Register Value
-------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m != 1", "bits": 2},
      {"name": 12, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions store a register value to another register or memory. Immediate Addressing or a combination of r == 0 and m == 0 may not be specified. These opcodes are used for other instructions.

The ``CC`` is not affected unless m == 0 (Zero Addressing), in which case it is affected as normal based on the stored value. In Zero Addressing, the value of R0 is copied into another register.

comz/comi/comr/coma - Compare Values
------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m", "bits": 2},
      {"name": 14, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions compare two values from registers or memory and set the Condition Code according to the following tables. No registers or memory values are modified, only the comparison takes place.

If Zero Addressing is used:

.. list-table:: Condition Codes (Zero Addressing)
    :name: condition-codes-com-zr
    :header-rows: 1
    
    * - Meaning
      - CC
    * - R0 > r
      - ``01``
    * - R0 == r
      - ``00``
    * - R0 < r
      - ``10``

Otherwise, where V is the byte loaded by the memory reference:

.. list-table:: Condition Codes
    :name: condition-codes-com
    :header-rows: 1
    
    * - Meaning
      - CC
    * - r > V
      - ``01``
    * - r == V
      - ``00``
    * - r < V
      - ``10``

The comparison can be either signed or unsigned as set by the ``COM`` bit in PSL (signed if ``COM`` == 0, unsigned if ``COM`` == 1).

**Affected flags:** ``CC``

bctr/bcta - Branch on Condition True
------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "CC Mask", "bits": 2},
      {"name": "m = 2,3", "bits": 2},
      {"name": 1, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions affect a relative or absolute branch only if the Condition Code matches the mask in the opcode, or the mask is equal to ``11``, which always affects an unconditional branch.

In the instruction mnemonic, the mask value can either be defined explicitely, eg. ``bcta,2 [target]`` or according to the following syntax:

.. list-table:: Branch condition syntax
    :name: br-cond-syntax-1
    :header-rows: 1
    
    * - Syntax
      - Mask value
    * - ``eq`` (equal)
      - ``00``
    * - ``gt`` (greater-than)
      - ``01``
    * - ``lt`` (less-than)
      - ``10``
    * - ``un`` (unconditional)
      - ``11``

eg. ``bctr,eq [target]``

**Affected flags:** none

bstr/bsta - Branch to Subroutine on Condition True
--------------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "CC Mask", "bits": 2},
      {"name": "m = 2,3", "bits": 2},
      {"name": 3, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions behave identically to bctr/bcta explained above, except that they additionally push a return address onto the internal stack if the branch is taken. This address is a complete Instruction Pointer and will always point to the instruction immediatly following the branch.

**Affected flags:** none

brnr/brna - Branch if Not Zero
------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m = 2,3", "bits": 2},
      {"name": 5, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions test the specified general purpose register’s value and only affect a branch if it is not zero. The register value is not modified.

**Affected flags:** none

bsnr/bsna - Branch to Subroutine if Not Zero
--------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m = 2,3", "bits": 2},
      {"name": 7, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions behave identically to brnr/brna explained above, except that they additionally push a return address onto the internal stack if the branch is taken. This address is a complete Instruction Pointer and will always point to the instruction immediatly following the branch.

**Affected flags:** none

bcfr/bcfa - Branch on Condition False
-------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "CC Mask != 3", "bits": 2},
      {"name": "m = 2,3", "bits": 2},
      {"name": 9, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions affect a relative or absolute branch only if the Condition Code does **not** match the mask in the opcode.

In the instruction mnemonic, the mask value can either be defined explicitely, eg. ``bcfa,2 [target]`` or according to the following syntax:

.. list-table:: Branch condition syntax
    :name: br-cond-syntax-2
    :header-rows: 1
    
    * - Syntax
      - Mask value
    * - ``eq`` (equal)
      - ``00``
    * - ``gt`` (greater-than)
      - ``01``
    * - ``lt`` (less-than)
      - ``10``
    * - Illegal
      - ``11``

eg. ``bcfr,eq [target]``

The CC mask may not be equal to 3. Those opcodes are used by other instructions.

**Affected flags:** none

bsfr/bsfa - Branch to Subroutine on Condition False
---------------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "CC Mask != 3", "bits": 2},
      {"name": "m = 2,3", "bits": 2},
      {"name": 11, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions behave identically to bcfr/bcfa explained above, except that they additionally push a return address onto the internal stack if the branch is taken. This address is a complete Instruction Pointer and will always point to the instruction immediatly following the branch.

The CC mask may not be equal to 3. Those opcodes are used by other instructions.

**Affected flags:** none

birr/bira - Branch on Incrementing Register Not Zero
----------------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m = 2,3", "bits": 2},
      {"name": 13, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions first increment the specified register, then affect a branch only if the new register value is not equal to zero.

**Affected flags:** none

bdrr/bdra - Branch on Decrementing Register Not Zero
----------------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": "m = 2,3", "bits": 2},
      {"name": 15, "bits": 4}],
	 "config": {"hspace": 600}
	}

These instructions first decrement the specified register, then affect a branch only if the new register value is not equal to zero.

**Affected flags:** none

retc - Return on Condition True
-------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "CC Mask", "bits": 2},
      {"name": 5, "bits": 6}],
	 "config": {"hspace": 600}
	}

These instructions affect a subroutine return if the Condition Code matches the mask in the opcode. When true, a value is popped off of the internal stack and used to load the Page Control and Program Counter to become the new Instruction Pointer.

**Affected flags:** none

rete - Return on Condition True and Enable Interrupts
-----------------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "CC Mask", "bits": 2},
      {"name": 13, "bits": 6}],
	 "config": {"hspace": 600}
	}

These instructions affect a subroutine return if the Condition Code matches the mask in the opcode. When true, a value is popped off of the internal stack and used to load the Page Control and Program Counter to become the new Instruction Pointer.

Additionally, the Interrupt Inhibit bit in the PSU is cleared, enabling interrupts globally.

**Affected flags:** ``II``

rrr - Rotate Register Right
---------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 20, "bits": 6}],
	 "config": {"hspace": 600}
	}

These instructions perform a right-rotate on the specified register in-place. The exact operation depends on the state of the ``WC`` flag in the PSL.

If ``WC`` is clear, the register is right-rotated and the Carry and Interdigit Carry are not changed. Bit 7 of the new register value is set from Bit 0 of the previous value.

If ``WC`` is set, the register is right-rotated through the Carry. The previous Carry is shifted into bit 7 of the result and the previous bit 0 becomes the next Carry. Additionally, the Interdigit Carry is loaded from bit 6 of the old register value.

**Affected flags:** ``CC``, ``C`` (if ``WC``), ``IDC`` (if ``WC``)

rrl - Rotate Register Left
--------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 52, "bits": 6}],
	 "config": {"hspace": 600}
	}

These instructions perform a left-rotate on the specified register in-place. The exact operation depends on the state of the ``WC`` flag in the PSL.

If ``WC`` is clear, the register is left-rotated and the Carry and Interdigit Carry are not changed. Bit 0 of the new register value is set from Bit 7 of the previous value.

If ``WC`` is set, the register is left-rotated through the Carry. The previous Carry is shifted into bi t 0 of the result and the previous bit 7 becomes the next Carry. Additionally, the Interdigit Carry is loaded from bit 4 of the old register value.

**Affected flags:** ``CC``, ``C`` (if ``WC``), ``IDC`` (if ``WC``)

dar - Decimal Adjust Register
-----------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 37, "bits": 6}],
	 "config": {"hspace": 600}
	}

These instructions perform a decimal adjust based on the states of the Carry and Interdigit Carry to help perform arithmatic on packed BCD values.

If the Carry is clear, a value of A0h is added to the register’s value.

If the Interdigit Carry is clear, a value of 0Ah is added to the register’s value.

If both are clear, a value of AAh is added to the register’s value.

Packed BCD operations may then be performed according to these algorithms:

To perform addition, add 66h to either term, then add both terms. This instruction will then adjust the sum to its correct BCD value.

To perform subtraction, perform subtraction as normal, then execute this instruction to get the correct BCD result.

**Affected flags:** none

wrtc - Write Command
--------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 44, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction triggers a external IO Write transaction using the value of the specified register as the value written. The ``IOC`` and ``WE`` lines are asserted as part of the transaction.

**Affected flags:** none

wrtd - Write Data
-----------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 60, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction triggers a external IO Write transaction using the value of the specified register as the value written. The ``IOD`` and ``WE`` lines are asserted as part of the transaction.

**Affected flags:** none

redc - Read Command
-------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 12, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction triggers a external IO Read transaction and saves the received value into the specified register. The ``IOC`` and ``OE`` lines are asserted as part of the transaction.

**Affected flags:** CC

redd - Read Data
----------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 28, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction triggers a external IO Read transaction and saves the received value into the specified register. The ``IOD`` and ``OE`` lines are asserted as part of the transaction.

**Affected flags:** ``CC``

wrte - Write Extended IO
------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 53, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction triggers a write to an on-die IO device using the value of the specified register. A immediate 8-bit address follows the opcode which is decoded to address one of the on-die peripheral registers.

**Affected flags:** none

rede - Read Extended IO
-----------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 21, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction triggers a read from an on-die IO device and writes the received value into the specified register. A immediate 8-bit address follows the opcode which is decoded to address one of the on-die perhipheral registers.

**Affected flags:** ``CC``

spsu - Store Program Status Upper
---------------------------------

.. wavedrom::

	{ "reg": [
	  {"name": 18, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction copies the value of the PSU into R0. Flags are not affected until after the copy.

**Affected flags:** ``CC``

spsl - Store Program Status Lower
---------------------------------

.. wavedrom::

	{ "reg": [
	  {"name": 19, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction copies the value of the PSL into R0. Flags are not affected until after the copy.

**Affected flags:** ``CC``

lpsu - Load Program Status Upper
--------------------------------

.. wavedrom::

	{ "reg": [
	  {"name": 146, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction copies the value in R0 into the PSU.

**Affected flags:** ``S``, ``F``, ``II``, ``SP``

lpsl - Load Program Status Lower
--------------------------------

.. wavedrom::

	{ "reg": [
	  {"name": 147, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction copies the value in R0 into the PSL.

**Affected flags:** ``CC``, ``IDC``, ``RS``, ``WC``, ``OVF``, ``COM``, ``C``

halt - Halt
-----------

.. wavedrom::

	{ "reg": [
	  {"name": 64, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction pauses program execution until an interrupt occurs. The Program Counter will become stuck in place until the servicing of an interrupt routine. Once the interrupt routine returns, execution resumes from the first instruction following the halt.

**Affected flags:** none

cpsu - Clear bits in Program Status Upper
-----------------------------------------

.. wavedrom::

	{ "reg": [
	  {"name": 116, "bits": 8}],
	 "config": {"hspace": 600}
	}

This immediate-addressed instruction clears specific bits in the PSU according to the mask in its immediate argument. All bits in the PSU for which the corresponding bit in the mask is a one will be cleared to zero.

**Affected flags:** ``S``, ``F``, ``II``, ``SP``

cpsl - Clear bits in Program Status Lower
-----------------------------------------

.. wavedrom::

	{ "reg": [
	  {"name": 117, "bits": 8}],
	 "config": {"hspace": 600}
	}

This immediate-addressed instruction clears specific bits in the PSL according to the mask in its immediate argument. All bits in the PSL for which the corresponding bit in the mask is a one will be cleared to zero.

**Affected flags:** ``CC``, ``IDC``, ``RS``, ``WC``, ``OVF``, ``COM``, ``C``

ppsu - Preset bits in Program Status Upper
------------------------------------------

.. wavedrom::

	{ "reg": [
	  {"name": 118, "bits": 8}],
	 "config": {"hspace": 600}
	}

This immediate-addressed instruction sets specific bits in the PSU according to the mask in its immediate argument. The mask is simply inclusive-OR’d onto the PSU.

**Affected flags:** ``S``, ``F``, ``II``, ``SP``

ppsl - Preset bits in Program Status Lower
------------------------------------------

.. wavedrom::

	{ "reg": [
	  {"name": 119, "bits": 8}],
	 "config": {"hspace": 600}
	}

This immediate-addressed instruction sets specific bits in the PSL according to the mask in its immediate argument. The mask is simply inclusive-OR’d onto the PSL.

**Affected flags:** ``CC``, ``IDC``, ``RS``, ``WC``, ``OVF``, ``COM``, ``C``

tpsu - Test Program Status Upper
--------------------------------

.. wavedrom::

	{ "reg": [
	  {"name": 180, "bits": 8}],
	 "config": {"hspace": 600}
	}

This immediate-addressed instruction tests bits in the PSU according to the mask in its immediate argument. Every bit in the PSU for which there is a one in the mask is checked. The test succeeds if all checked bits are one.

.. list-table:: Condition Codes
    :name: condition-codes-tpsu
    :header-rows: 1
    
    * - Meaning
      - CC
    * - All of the selected bits are one
      - ``00``
    * - Not all of the selected bits are one
      - ``10``

**Affected flags:** ``CC``

tpsl - Test Program Status Lower
--------------------------------

.. wavedrom::

	{ "reg": [
	  {"name": 181, "bits": 8}],
	 "config": {"hspace": 600}
	}

This immediate-addressed instruction tests bits in the PSL according to the mask in its immediate argument. Every bit in the PSL for which there is a one in the mask is checked. The test succeeds if all checked bits are one.

.. list-table:: Condition Codes
    :name: condition-codes-tpsl
    :header-rows: 1
    
    * - Meaning
      - CC
    * - All of the selected bits are one
      - ``00``
    * - Not all of the selected bits are one
      - ``10``

**Affected flags:** ``CC``

nop - No Operation
------------------

.. wavedrom::

	{ "reg": [
	  {"name": 192, "bits": 8}],
	 "config": {"hspace": 600}
	}

No operation is performed and the following instruction executed.

**Affected flags:** none

tmi - Test Under Mask Immediate
-------------------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 61, "bits": 6}],
	 "config": {"hspace": 600}
	}

This immediate-addressed instruction tests bits in the value of the specified register according to the mask in its immediate argument. Every bit in the register value for which there is a one in the mask is checked. The test succeeds if all checked bits are ones.

.. list-table:: Condition Codes
    :name: condition-codes-tmi
    :header-rows: 1
    
    * - Meaning
      - CC
    * - All of the selected bits are one
      - ``00``
    * - Not all of the selected bits are one
      - ``10``

**Affected flags:** ``CC``

zbrr - Zero-Branch Relative
---------------------------

.. wavedrom::

	{ "reg": [
      {"name": 155, "bits": 8}],
	 "config": {"hspace": 600}
	}

This relative-addressed instruction performs a unconditional branch to a location relative to page 0, byte 0. The displacement in the argument is interpreted as being relative to this address and negative values cause a wrap-around to page 0, byte 8191 - 8128.

**Affected flags:** ``CC``

zbsr - Zero-Branch to Subroutine Relative
-----------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 187, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction behaves identically to zbrr explained above, except that it additionally pushes a return address onto the internal stack. This address is a complete Instruction Pointer and will always point to the instruction immediatly following the branch.

**Affected flags:** ``CC``

bxa - Branch Indexed, Absolute
------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 159, "bits": 8}],
	 "config": {"hspace": 600}
	}

This absolute-addressed instruction is encoded the same as an unconditionally, absolute branch instruction but has indexing implicitely enabled. The index register is always R3, however.

**Affected flags:** ``CC``

bsxa - Branch to Subroutine Indexed, Absolute
---------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 191, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction behaves identically to bxa explained above, except that it additionally pushes a return address onto the internal stack. This address is a complete Instruction Pointer and will always point to the instruction immediatly following the branch.

**Affected flags:** ``CC``

---------------------
Extended Instructions
---------------------

Extended Instructions, in this case, refers to all instructions that were added in the AS2650v2 on top of the original 2650’s instruction set. Not all of these use the extension prefix. Some use opcodes that went unused in the 2650. Which instructions use the prefix will be indicated as part of their opcode.

push - Push to Internal Stack
-----------------------------

.. wavedrom::

	{ "reg": [
      {"name": 16, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction pushes a 16-bit wide value pair onto the internal stack. These values are taken from registers R0 (LSB, bits 0 - 7) and R1 (MSB, bits 8 - 15).

**Affected flags:** none

pop - Pop from Internal Stack
-----------------------------

.. wavedrom::

	{ "reg": [
      {"name": 17, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction pops a 16-bit wide value pair from the internal stack into registers R0 (LSB, bits 0 - 7) and R1 (MSB, bits 8 - 15). No flags are affected despite the register writes.

push and pop are intended to allow the call stack to be spilled over into memory if necesarry and are not meant to be used to store program data.

**Affected flags:** none

mul - Unsigned multiply of R0 and R1
------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 144, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction multiplies the value of R0 by the value of R1. This produces a 16-bit result that is written back into R0 (LSB, bits 0 - 7) and R1 (MSB, bits 8 - 15). The Condition Code is set according to the full 16-bit value.

**Affected flags:** ``CC``

xchg - Exchange R0 and R1
-------------------------

.. wavedrom::

	{ "reg": [
      {"name": 145, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction exchanges the values in R0 and R1 in-place without affecting flags.

**Affected flags:** none

clr - Clear Register
--------------------

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 49, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction sets the value of the specified register to zero. No flags are affected despite the register change.

**Affected flags:** none

trap - Software Trap
--------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": 144, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction sets the trap interrupt (priority 4) as pending. This does not mean that the interrupt is immediately served as any incoming higher-priority interrupts will be served first.
Additionally, the instruction has no effect if the global Interrupt Inhibit flag is set. The trap will remain pending until the flag is cleared.

**Affected flags:** none

clrt - Clear Trap Pending Flag
------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": 145, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction serves as the pending interrupt clear for the software trap. It will always clear any pending trap interrupt even if that interrupt hasn’t been served yet.

**Affected flags:** none

cpl - Complement Register
-------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": 240, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction complements all the bits of the specified register’s value. Notably, this operation does not affect any flags.

**Affected flags:** none

pshs - Push Program Status
--------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": 16, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction pushes the whole PSW onto the internal stack. It is meant to only be used at the start of interrupt routines.

**Affected flags:** none

pops - Pop Program Status
-------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": 17, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction pops a value from the internal stack and loads it into the PSW. It is meant to only be used at the end of interrupt routines.

**Affected flags:** ``S``, ``F``, ``II``, ``SP``, ``CC``, ``IDC``, ``RS``, ``WC``, ``OVF``, ``COM``, ``C``

svb - Set Interrupt Vector Base
-------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": 18, "bits": 8}],
	 "config": {"hspace": 600}
	}

This instruction sets the value of the IVB register by copying the combined value of R0 (LSB, bits 4 - 7) and R1 (MSB, bits 8 - 15). Bits 0 - 3 are always zero.

**Affected flags:** none

lodf - Load Register value, Far
-------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 2, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction performs a register load from memory same as lodr/loda, but using Far Addressing.

**Affected flags:** ``CC``

ldfi - Load Register value, Far Indirect
----------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 3, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction performs a register load from memory same as lodr/loda but using Far Addressing plus Indirect Addressing.

**Affected flags:** ``CC``

strf - Store Register value, Far
--------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 50, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction performs a register store to memory same as strr/stra, but using Far Addressing.

**Affected flags:** none

stfi - Store Register value, Far Indirect
-----------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 51, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction performs a register store to memory same as strr/stra, but using Far Addressing plus Indirect Addressing.

**Affected flags:** none

bctf - Branch on Condition True, Far
------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "CC Mask", "bits": 2},
      {"name": 7, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction behaves the same as bcta, branching only if the Condition Code value matches the Mask in the opcode, but using Far Addressing. This sets all 3 bits of Page Control as well as all 13 bits of the Program Counter.

**Affected flags:** none

bstf - Branch to Subroutine on Condition True, Far
--------------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "CC Mask", "bits": 2},
      {"name": 15, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction behaves the same as bctf, except that it additionally pushes a return address onto the internal stack if the branch is taken. This address is a complete Instruction Pointer and will always point to the instruction immediatly following the branch.

**Affected flags:** none

brnf - Branch on Not Zero, Far
------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 23, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction behaves the same as brna, branching only if the specified register’s value is not zero, but using Far Addressing. This sets all 3 bits of Page Control as well as all 13 bits of the Program Counter.

**Affected flags:** none

bsnf - Branch to Subroutine on Not Zero, Far
--------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 31, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction behaves the same as brnf, except that it additionally pushes a return address onto the internal stack if the branch is taken. This address is a complete Instruction Pointer and will always point to the instruction immediatly following the branch.

**Affected flags:** none

bcff - Branch on Condition False, Far
-------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "CC Mask != 3", "bits": 2},
      {"name": 39, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction behaves the same as bcfa, branching only if the Condition Code does **not** match the Mask in the opcode, but using Far Addressing. This sets all 3 bits of Page Control as well as all 13 bits of the Program Counter.

The CC mask may not be equal to 3. This opcode is used by another instruction.

**Affected flags:** none

bsff - Branch to Subroutine on Condition False, Far
---------------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "CC Mask != 3", "bits": 2},
      {"name": 47, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction behaves the same as bcff, except that it additionally pushes a return address onto the internal stack if the branch is taken. This address is a complete Instruction Pointer and will always point to the instruction immediatly following the branch.

The CC mask may not be equal to 3. This opcode is used by another instruction.

**Affected flags:** none

birf - Branch on Incrementing Register Not Zero, Far
----------------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 55, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction behaves the same as bira, branching only if the value of the specified register after it is incremented is not zero, but using Far Addressing. This sets all 3 bits of Page Control as well as all 13 bits of the Program Counter.

**Affected flags:** none

bdrf - Branch on Decrementing Register Not Zero, Far
----------------------------------------------------

.. wavedrom::

	{ "reg": [
      {"name": 183, "bits": 8}],
	 "config": {"hspace": 600}
	}

.. wavedrom::

	{ "reg": [
      {"name": "r", "bits": 2},
      {"name": 63, "bits": 6}],
	 "config": {"hspace": 600}
	}

This instruction behaves the same as bira, branching only if the value of the specified register after it is decremented is not zero, but using Far Addressing. This sets all 3 bits of Page Control as well as all 13 bits of the Program Counter.

**Affected flags:** none
