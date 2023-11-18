.. _isa:

Instruction Set Architecture
============================

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
                <td desc="----|2|F|F|_|Clears individual bits in the PSU by Logical ANDing it with the complemented contents of r0.">cpsu</td>
                <td desc="1114|2|F|F|_|Clears individual bits in the PSL by Logical ANDing it with the complemented contents of r0.">cpsl</td>
                <td desc="----|2|F|F|_|Sets individual bits in the PSU by Logical Inclusive-ORing it with the contents of r0.">ppsu</td>
                <td desc="1114|2|F|F|_|Sets individual bits in the PSL by Logical Inclusive-ORing it with the contents of r0.">ppsl</td>
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
