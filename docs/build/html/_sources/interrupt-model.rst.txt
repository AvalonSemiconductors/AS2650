.. _interrupt-model:

Interrupt Model
===============

Interrupts on the AS2650v2 can be triggered through one of 8 Interrupt Request (IRQ) lines. These interrupts are prioritized in ascending order, so IRQ0 is the least-prioritized interrupt and IRQ7 is the most-prioritized interrupt.

All 8 IRQ lines are actually latches, which remember if an interrupt of a given priority is still pending. Once the CPU enables interrupts globally by clearing the ``II`` bit in the PSU, any IRQ line becoming set will trigger an interrupt service at the completion of the current CPU instruction.
If multiple IRQ lines are active at one time, the line with the highest priority will be chosen to be serviced.

A interrupt service behaves similar to a subroutine branch, moving program execution to a different location in memory while pushing a return address onto the internal stack. However, additionally, the ``II`` bit will be set, preventing another interrupt from being recognized immediately.
However, interrupts may stack if the interrupt routine chooses to clear ``II`` again. Returning from an interrupt routine is usually accomplished by the ``rete`` instruction which, in addition to the normal subroutine return, also clears ``II`` to allow further interrupts to be handled.

Of note is that an interrupt’s IRQ line is not cleared automatically by the interrupt being serviced. It must be done in software by writing to that IRQ’s "Interrupt Clear" bit, located in one of the on-die peripheral registers.
This has the added effect of allowing the IRQs to be cleared outside of their respective interrupt routines, meaning pending interrupts can effectively be cancelled in software.

The two exceptions to this are the software trap, in which case the ``clrt`` instruction will clear it, and the UART receive interrupt (IRQ3) which is cleared by reading the received byte from the UDR.

Lastly, disabling a peripheral’s interrupt enable also always has the side-effect of clearing all of its pending IRQs.

The following table summarizes all 8 IRQ sources:

.. list-table:: IRQ Sources
    :name: irq-sources
    :header-rows: 1
    
    * - IRQ
      - Source
      - Clear bit location
    * - IRQ0
      - External, PA0 alternate function
      - GPIO register "IRQC"
    * - IRQ1
      - Timer 0 overflow interrupt
      - Timer/Counter register "TS"
    * - IRQ2
      - Timer 1 overflow interrupt
      - Timer/Counter register "TS"
    * - IRQ3
      - UART receive interrupt
      - Serial Port register "UDR"
    * - IRQ4
      - ``trap`` instruction
      - ``clrt`` instruction
    * - IRQ5
      - Timer 2 overflow interrupt
      - Timer/Counter register "TS"
    * - IRQ6
      - External, PB0 alternate function
      - GPIO register "IRQC"
    * - IRQ7
      - External, PA7 alternate function
      - GPIO register "IRQC"

**Note:** if a interrupt routine chooses to re-enable interrupts by clearing ``II``, the CPU will not remember the priority of the currently serviced interrupt. The next pending interrupt will be handled, even if it is of lower priority.

To determine the location of the interrupt routines, the CPU contains a register named the Interrupt Vector Base (IVB), which is 16-bits long and can be loaded with the ``svb`` instruction. However, the least-significant 4 bits are hard-wired to zero, so the value in the IVB has to be a multiple of 16.

The IVB points to a location in memory that contains a address table where each entry points to the first instruction of an IRQ’s interrupt routine. The addresses are ordered in ascending order of interrupt priority. IRQ0 will look up its address at IVB + 0, and IRQ7 will look up its address at IVB + 14. The addresses are stored in big-endian format.
