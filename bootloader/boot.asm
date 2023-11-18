DDRB equ 1
PORTB equ 3
SERIAL_STATUS equ 0b10000011
SPI_TX equ 0b10000101
SPI_RX equ 0b10000111

org 0
programentry:
	nop
	nop
	bctr,un end_dynamic_data
dynamic_data:
	db 0,0 ; Pointer to start of RAM
	db 0 ; ROM CS Bit
	db 0,0 ; Pointer to end of RAM + 1
end_dynamic_data:
	eorz,r0
	lpsl
	lodi,r0 32
	lpsu
	
	lodr,r0 dynamic_data+2
	wrte,r0 DDRB
	bsta,un spi_desel
	bsta,un spi_sel
	lodi,r0 0xFF
	bsta,un spi_tx_rx
	bsta,un spi_desel
	bsta,un spi_sel
	lodi,r0 0xAB
	bsta,un spi_tx_rx
	bsta,un spi_desel
	bsta,un spi_sel
	lodi,r0 0x03
	bsta,un spi_tx_rx
	lodi,r2 3
zero_addr:
	eorz,r0
	bsta,un spi_tx_rx
	bdrr,r2 zero_addr
	lodi,r3 255
check_loop:
	eorz,r0
	bsta,un spi_tx_rx
	coma,r0 check,r3+
	bcfr,eq failed
	lodz,r0
	bcfr,eq check_loop

	ppsl 8
	loda,r0 dynamic_data+0
	stra,r0 0x1FFE
	loda,r0 dynamic_data+1
	stra,r0 0x1FFF
copy_loop:
	eorz,r0
	bsta,un spi_tx_rx
	stra,r0 *0x1FFE
	cpsl 1
	loda,r0 0x1FFF
	addi,r0 1
	stra,r0 0x1FFF
	loda,r1 0x1FFE
	addi,r1 0
	stra,r1 0x1FFE
	coma,r1 dynamic_data+3
	bcfr,eq copy_loop
	coma,r0 dynamic_data+4
	bcfr,eq copy_loop
	
	bstr,un spi_desel
	bcta,un *dynamic_data ; This specific opcode will also disable the on-die ROM

failed:
	bstr,un spi_desel
	tpsu 64
	ppsu 64
	bcfr,eq failed_del_start
	cpsu 64
failed_del_start:
	lodi,r2 25
failed_del:
	lodi,r3 255
	bstr,un short_del
	bdrr,r2 failed_del
	bctr,un failed

short_del:
	nop
	bdrr,r3 short_del
	retc,un

spi_desel:
	loda,r0 dynamic_data+2
	wrte,r0 PORTB
	lodi,r3 10
	bctr,un short_del

spi_sel:
	loda,r0 dynamic_data+2
	eori,r0 0xFF
	wrte,r0 PORTB
	lodi,r3 11
	bctr,un short_del

spi_tx_rx:
	wrte,r0 SPI_TX
spi_tx_wait:
	rede,r0 SERIAL_STATUS
	andi,r0 3
	bcfr,eq spi_tx_wait
	rede,r0 SPI_RX
	retc,un

check:
	db "CHIRP!"
	db 0
