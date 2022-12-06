PSL_CC1          equ 0b10000000
PSL_CC0          equ 0b01000000
PSL_IDC          equ 0b00100000
PSL_BANK         equ 0b00010000
PSL_WITH_CARRY   equ 0b00001000
PSL_OVERFLOW     equ 0b00000100
PSL_LOGICAL_COMP equ 0b00000010
PSL_CARRY_FLAG   equ 0b00000001

mem_end equ 8191

org 0
programentry:
	lodi,r0 0x16
	strz,r1
	
	stra,r1 mem_end
	
	lodi,r3 0xFF
	stra,r3 mem_end-1
	
	lodi,r2 2
	stra,r0 mem_end-4,r2
	
	lodi,r0 data>>8%256
	stra,r0 mem_end-6
	lodi,r0 data%256
	stra,r0 mem_end-5
	loda,r2 *mem_end-6
	lodz,r2
	lodi,r1 4
	stra,r0 mem_end-10,r1-
	lodz,r1
	stra,r0 mem_end-10,r1-
	eorz,r0
	strz,r3
	loda,r0 *mem_end-6,r3+
	strz,r1
	stra,r1 mem_end-9
	
relative_data_0:
	nop
	nop
	lodi,r1 66
	strr,r1 relative_data_0
	eorz r0
	lodr,r3 relative_data_0
	stra,r3 mem_end-10
	
	lodi,r0 data+2>>8%256
	strr,r0 relative_data_0
	lodi,r0 data+2%256
	strr,r0 relative_data_0+1
	lodr,r3 *relative_data_0
	stra,r3 mem_end-11
	
	lodi,r0 0xFF
	eora,r0 data+3
	stra,r0 mem_end-12
	
	lodi,r3 0b10001010
	iori,r3 0b10000101
	stra,r3 mem_end-13
	
relative_data_1:
	nop
	lodi,r0 16
	strr,r0 relative_data_1
	lodi,r2 8
	addr,r2 relative_data_1
	stra,r2 mem_end-14
	
	lodi,r1 0xFF
	addi,r1 3
	stra,r1 mem_end-15
	eorz,r0
	addi,r0 1
	stra,r0 mem_end-16
	
	ppsl PSL_WITH_CARRY
	lodi,r1 0xFF
	addi,r1 3
	stra,r1 mem_end-17
	eorz,r0
	addi,r0 1
	stra,r0 mem_end-18
	cpsl PSL_WITH_CARRY
	lodi,r1 0xFF
	addi,r1 3
	stra,r1 mem_end-19
	eorz,r0
	addi,r0 1
	stra,r0 mem_end-20
	
	lodi,r0 16
	suba,r0 data+4
	stra,r0 mem_end-21
	
	lodi,r3 5
	subi,r3 8
	stra,r3 mem_end-22
	lodi,r0 15
	lodi,r1 0
	subz,r1
	stra,r0 mem_end-23
	
	ppsl PSL_WITH_CARRY
	ppsl PSL_CARRY_FLAG
	lodi,r3 5
	subi,r3 8
	stra,r3 mem_end-24
	lodi,r0 15
	lodi,r1 0
	subz,r1
	stra,r0 mem_end-25
	
	cpsl PSL_CARRY_FLAG
	lodi,r0 5
	addi,r0 5
	stra,r0 mem_end-26
	addz,r0
	stra,r0 mem_end-27
	cpsl PSL_WITH_CARRY
	
	redd,r0
	redd,r1
	redd,r2
	redd,r3
	addz,r1
	addz,r2
	addz,r3
	
	stra,r0 mem_end-28
	
	lodi,r0 100
	redc,r3
	redc,r3
	redc,r3
	subz,r3
	
	stra,r0 mem_end-29
	
	lodi,r1 55
	lodi,r2 66
	lodi,r3 10
	wrtd,r1
	wrtd,r2
	wrtd,r3
	
	lodi,r1 12
	lodi,r2 38
	lodi,r3 33
	wrtc,r1
	wrtc,r2
	wrtc,r3
	
	lodi,r0 0b00001111
	rrr,r0
	stra,r0 mem_end-30
	rrl,r0
	stra,r0 mem_end-31
	
	ppsl PSL_WITH_CARRY
	cpsl PSL_CARRY_FLAG
	rrr,r0
	stra,r0 mem_end-32
	rrr,r0
	stra,r0 mem_end-33
	eorz,r0
	rrl,r0
	stra,r0 mem_end-34
	rrl,r0
	stra,r0 mem_end-35
	
	lodi,r1 128
	rrl,r1
	spsl
	stra,r0 mem_end-36
	strz,r2
	andi,r0 0b11110110
	lpsl
	spsl
	stra,r0 mem_end-37
	lodz,r2
	lpsl
	tpsl 0b00001001
	spsl
	andi,r0 0b11000000
	stra,r0 mem_end-38
	tpsl 2
	spsl
	andi,r0 0b11000000
	stra,r0 mem_end-39
	cpsl PSL_WITH_CARRY
	
	lodi,r0 0b00001011
	strz,r1
	strz,r2
	db 0xF6 ; tmi,r2 (not recognized by my assembler yet)
	db 0b00000001
	spsl
	andi,r0 0b11000000
	stra,r0 mem_end-40
	db 0xF5 ; tmi,r1 (not recognized by my assembler yet)
	db 0b11100001
	spsl
	andi,r0 0b11000000
	stra,r0 mem_end-41
	
	lodi,r0 55
	bctr,un skip_1
	eorz,r0
skip_1:
	stra,r0 mem_end-42

	lodi,r1 6
	stra,r0 mem_end-444,r1-
	stra,r1 mem_end-43
	stra,r0 mem_end-444,r1-
	stra,r1 mem_end-44
	stra,r0 mem_end-444,r1-
	stra,r1 mem_end-45
loop:
	stra,r0 mem_end-444,r1-
	brnr,r1 loop
	
	lodi,r3 2
	lodi,r0 55
back_1:
	bcfa,1 skip_2
	lodi,r0 103
skip_2:
	stra,r0 mem_end-47,r3-
	lodi,r0 180
	brna,r3 back_1

	lodi,r3 99
	lodi,r0 200
	subz,r3
	spsl
	andi,r0 0b11000000
	stra,r0 mem_end-48
	
	lodi,r2 120
	adda,r2 data+7
	bcta,2 skip_3
	lodi,r2 0
skip_3:
	stra,r2 mem_end-49
	
	lodi,r0 5
	lodi,r3 0
loop_2:
	addi,r3 1
	bdra,r0 loop_2
	stra,r3 mem_end-50
	
	lodi,r1 248
	lodi,r2 0
loop_3:
	addi,r2 1
	bira,r1 loop_3
	stra,r2 mem_end-51
	
	lodi,r0 5
	lodi,r3 0
loop_4:
	addi,r3 1
	bdrr,r0 loop_4
	stra,r3 mem_end-52
	
	lodi,r1 248
	lodi,r2 0
loop_5:
	addi,r2 1
	birr,r1 loop_5
	stra,r2 mem_end-53
	
	lodi,r2 55
	comi,r2 55
	spsl
	andi,r0 0b11000000
	stra,r0 mem_end-54
	
	lodi,r3 7
	coma,r3 data+8
	spsl
	andi,r0 0b11000000
	stra,r0 mem_end-55
	
	ppsl PSL_LOGICAL_COMP
	lodi,r3 7
	coma,r3 data+8
	spsl
	andi,r0 0b11000000
	stra,r0 mem_end-56
	cpsl PSL_LOGICAL_COMP
	
	loda,r2 data+8
	eorz,r0
	comz,r2
	spsl
	andi,r0 0b11000000
	stra,r0 mem_end-57
	
	ppsl PSL_LOGICAL_COMP
	comz,r2
	spsl
	andi,r0 0b11000000
	stra,r0 mem_end-58
	
	lodz,r2
	comz,r2
	spsl
	andi,r0 0b11000000
	stra,r0 mem_end-59
	cpsl PSL_LOGICAL_COMP
	
	lodi,r1 1
	lodi,r2 2
	lodi,r3 3
	ppsl PSL_BANK
	lodi,r1 4
	lodi,r2 5
	lodi,r3 6
	cpsl PSL_BANK
	
	stra,r1 mem_end-60
	stra,r2 mem_end-61
	stra,r3 mem_end-62
	ppsl PSL_BANK
	stra,r1 mem_end-63
	stra,r2 mem_end-64
	stra,r3 mem_end-65
	cpsl PSL_BANK
	
	bcta,un sub_1_end
a_subroutine_1:
	lodi,r0 5
	addi,r0 10
	addz,r1
	retc,un
sub_1_end:
	lodi,r1 1
	bstr,un a_subroutine_1
	stra,r0 mem_end-66
	eorz,r0
	strz,r1
	bsta,un a_subroutine_1
	stra,r0 mem_end-67
	bctr,un sub_2_end
a_subroutine_2:
	lodi,r3 6
	comi,r2 0
	retc,eq
	lodi,r3 7
	retc,un
sub_2_end:
	lodi,r2 5
	bstr,un a_subroutine_2
	stra,r3 mem_end-68
	lodi,r2 0
	bsta,un a_subroutine_2
	stra,r3 mem_end-69
	
	lodi,r2 5
	lodi,r3 8
	bsta,un mul_8x8_8
	stra,r0 mem_end-70
	
	lodi,r0 5
	lodi,r1 8
	db 0x90
	stra,r2 mem_end-71
	
	halt
	
mul_8x8_8:
	spsl
	lodi,r1 8
	eorz r0
	ppsl PSL_WITH_CARRY
mul_8x8_8_loop:
	rrr,r2
	;tpsl PSL_CARRY_FLAG
	db 183 ;Same instruction, but alternative encoding
	db 1
	bcfr,0 mul_8x8_8_no_carry
	cpsl PSL_CARRY_FLAG
	addz r3
mul_8x8_8_no_carry:
	rrl,r3
	andi,r3 254
	bdrr,r1 mul_8x8_8_loop
	strz r1
	lpsl
	lodz r1
	retc,un
	
data:
	db 70
	db 6
	db 11
	db 0xAA
	db 8
	db 0
	db 0
	db 100
	db 200
