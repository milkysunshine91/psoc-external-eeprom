;  Generated by PSoC Designer 5.4.2946
;
;
;  PSoCGPIOINT.inc
;
;  Data: 29 October, 2001
;  Copyright (c) Cypress Semiconductor 2013. All Rights Reserved.
;
;  This file is generated by the Device Editor on Application Generation.
;  It contains equates that are useful in writing code relating to GPIO
;  related interrupts.
;  
;  DO NOT EDIT THIS FILE MANUALLY, AS IT IS OVERWRITTEN!!!
;  Edits to this file will not be preserved.
;
; Button2 address and mask equates
Button2_Data_ADDR:	equ	4h
Button2_DriveMode_0_ADDR:	equ	104h
Button2_DriveMode_1_ADDR:	equ	105h
Button2_DriveMode_2_ADDR:	equ	7h
Button2_GlobalSelect_ADDR:	equ	6h
Button2_IntCtrl_0_ADDR:	equ	106h
Button2_IntCtrl_1_ADDR:	equ	107h
Button2_IntEn_ADDR:	equ	5h
Button2_MASK:	equ	2h
; Button3 address and mask equates
Button3_Data_ADDR:	equ	4h
Button3_DriveMode_0_ADDR:	equ	104h
Button3_DriveMode_1_ADDR:	equ	105h
Button3_DriveMode_2_ADDR:	equ	7h
Button3_GlobalSelect_ADDR:	equ	6h
Button3_IntCtrl_0_ADDR:	equ	106h
Button3_IntCtrl_1_ADDR:	equ	107h
Button3_IntEn_ADDR:	equ	5h
Button3_MASK:	equ	1h
; Button1 address and mask equates
Button1_Data_ADDR:	equ	4h
Button1_DriveMode_0_ADDR:	equ	104h
Button1_DriveMode_1_ADDR:	equ	105h
Button1_DriveMode_2_ADDR:	equ	7h
Button1_GlobalSelect_ADDR:	equ	6h
Button1_IntCtrl_0_ADDR:	equ	106h
Button1_IntCtrl_1_ADDR:	equ	107h
Button1_IntEn_ADDR:	equ	5h
Button1_MASK:	equ	4h
; I2CmSDA_Pin address and mask equates
I2CmSDA_Pin_Data_ADDR:	equ	0h
I2CmSDA_Pin_DriveMode_0_ADDR:	equ	100h
I2CmSDA_Pin_DriveMode_1_ADDR:	equ	101h
I2CmSDA_Pin_DriveMode_2_ADDR:	equ	3h
I2CmSDA_Pin_GlobalSelect_ADDR:	equ	2h
I2CmSDA_Pin_IntCtrl_0_ADDR:	equ	102h
I2CmSDA_Pin_IntCtrl_1_ADDR:	equ	103h
I2CmSDA_Pin_IntEn_ADDR:	equ	1h
I2CmSDA_Pin_MASK:	equ	1h
; I2CmSDA_Pin_Data access macros
;   GetI2CmSDA_Pin_Data macro, return in a
macro GetI2CmSDA_Pin_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 1h
endm
;   SetI2CmSDA_Pin_Data macro
macro SetI2CmSDA_Pin_Data
	or		[Port_0_Data_SHADE], 1h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[I2CmSDA_Pin_Data_ADDR], a
endm
;   ClearI2CmSDA_Pin_Data macro
macro ClearI2CmSDA_Pin_Data
	and		[Port_0_Data_SHADE], ~1h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[I2CmSDA_Pin_Data_ADDR], a
endm

; I2CmSDA_Pin_DriveMode_0 access macros
;   GetI2CmSDA_Pin_DriveMode_0 macro, return in a
macro GetI2CmSDA_Pin_DriveMode_0
	mov		a,[Port_0_DriveMode_0_SHADE]
	and		a, 1h
endm
;   SetI2CmSDA_Pin_DriveMode_0 macro
macro SetI2CmSDA_Pin_DriveMode_0
	or		[Port_0_DriveMode_0_SHADE], 1h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[I2CmSDA_Pin_Data_ADDR], a
endm
;   ClearI2CmSDA_Pin_DriveMode_0 macro
macro ClearI2CmSDA_Pin_DriveMode_0
	and		[Port_0_DriveMode_0_SHADE], ~1h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[I2CmSDA_Pin_Data_ADDR], a
endm

; I2CmSDA_Pin_DriveMode_1 access macros
;   GetI2CmSDA_Pin_DriveMode_1 macro, return in a
macro GetI2CmSDA_Pin_DriveMode_1
	mov		a,[Port_0_DriveMode_1_SHADE]
	and		a, 1h
endm
;   SetI2CmSDA_Pin_DriveMode_1 macro
macro SetI2CmSDA_Pin_DriveMode_1
	or		[Port_0_DriveMode_1_SHADE], 1h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[I2CmSDA_Pin_Data_ADDR], a
endm
;   ClearI2CmSDA_Pin_DriveMode_1 macro
macro ClearI2CmSDA_Pin_DriveMode_1
	and		[Port_0_DriveMode_1_SHADE], ~1h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[I2CmSDA_Pin_Data_ADDR], a
endm

; I2CmSDA_Pin_DriveMode_2 access macros
;   GetI2CmSDA_Pin_DriveMode_2 macro, return in a
macro GetI2CmSDA_Pin_DriveMode_2
	mov		a,[Port_0_DriveMode_2_SHADE]
	and		a, 1h
endm
;   SetI2CmSDA_Pin_DriveMode_2 macro
macro SetI2CmSDA_Pin_DriveMode_2
	or		[Port_0_DriveMode_2_SHADE], 1h
	mov		a, [Port_0_DriveMode_2_SHADE]
	mov		reg[I2CmSDA_Pin_Data_ADDR], a
endm
;   ClearI2CmSDA_Pin_DriveMode_2 macro
macro ClearI2CmSDA_Pin_DriveMode_2
	and		[Port_0_DriveMode_2_SHADE], ~1h
	mov		a, [Port_0_DriveMode_2_SHADE]
	mov		reg[I2CmSDA_Pin_Data_ADDR], a
endm

; I2CmSCL_Pin address and mask equates
I2CmSCL_Pin_Data_ADDR:	equ	0h
I2CmSCL_Pin_DriveMode_0_ADDR:	equ	100h
I2CmSCL_Pin_DriveMode_1_ADDR:	equ	101h
I2CmSCL_Pin_DriveMode_2_ADDR:	equ	3h
I2CmSCL_Pin_GlobalSelect_ADDR:	equ	2h
I2CmSCL_Pin_IntCtrl_0_ADDR:	equ	102h
I2CmSCL_Pin_IntCtrl_1_ADDR:	equ	103h
I2CmSCL_Pin_IntEn_ADDR:	equ	1h
I2CmSCL_Pin_MASK:	equ	2h
; I2CmSCL_Pin_Data access macros
;   GetI2CmSCL_Pin_Data macro, return in a
macro GetI2CmSCL_Pin_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 2h
endm
;   SetI2CmSCL_Pin_Data macro
macro SetI2CmSCL_Pin_Data
	or		[Port_0_Data_SHADE], 2h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[I2CmSCL_Pin_Data_ADDR], a
endm
;   ClearI2CmSCL_Pin_Data macro
macro ClearI2CmSCL_Pin_Data
	and		[Port_0_Data_SHADE], ~2h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[I2CmSCL_Pin_Data_ADDR], a
endm

; I2CmSCL_Pin_DriveMode_0 access macros
;   GetI2CmSCL_Pin_DriveMode_0 macro, return in a
macro GetI2CmSCL_Pin_DriveMode_0
	mov		a,[Port_0_DriveMode_0_SHADE]
	and		a, 2h
endm
;   SetI2CmSCL_Pin_DriveMode_0 macro
macro SetI2CmSCL_Pin_DriveMode_0
	or		[Port_0_DriveMode_0_SHADE], 2h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[I2CmSCL_Pin_Data_ADDR], a
endm
;   ClearI2CmSCL_Pin_DriveMode_0 macro
macro ClearI2CmSCL_Pin_DriveMode_0
	and		[Port_0_DriveMode_0_SHADE], ~2h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[I2CmSCL_Pin_Data_ADDR], a
endm

; I2CmSCL_Pin_DriveMode_1 access macros
;   GetI2CmSCL_Pin_DriveMode_1 macro, return in a
macro GetI2CmSCL_Pin_DriveMode_1
	mov		a,[Port_0_DriveMode_1_SHADE]
	and		a, 2h
endm
;   SetI2CmSCL_Pin_DriveMode_1 macro
macro SetI2CmSCL_Pin_DriveMode_1
	or		[Port_0_DriveMode_1_SHADE], 2h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[I2CmSCL_Pin_Data_ADDR], a
endm
;   ClearI2CmSCL_Pin_DriveMode_1 macro
macro ClearI2CmSCL_Pin_DriveMode_1
	and		[Port_0_DriveMode_1_SHADE], ~2h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[I2CmSCL_Pin_Data_ADDR], a
endm

; I2CmSCL_Pin_DriveMode_2 access macros
;   GetI2CmSCL_Pin_DriveMode_2 macro, return in a
macro GetI2CmSCL_Pin_DriveMode_2
	mov		a,[Port_0_DriveMode_2_SHADE]
	and		a, 2h
endm
;   SetI2CmSCL_Pin_DriveMode_2 macro
macro SetI2CmSCL_Pin_DriveMode_2
	or		[Port_0_DriveMode_2_SHADE], 2h
	mov		a, [Port_0_DriveMode_2_SHADE]
	mov		reg[I2CmSCL_Pin_Data_ADDR], a
endm
;   ClearI2CmSCL_Pin_DriveMode_2 macro
macro ClearI2CmSCL_Pin_DriveMode_2
	and		[Port_0_DriveMode_2_SHADE], ~2h
	mov		a, [Port_0_DriveMode_2_SHADE]
	mov		reg[I2CmSCL_Pin_Data_ADDR], a
endm

; LCDD4 address and mask equates
LCDD4_Data_ADDR:	equ	8h
LCDD4_DriveMode_0_ADDR:	equ	108h
LCDD4_DriveMode_1_ADDR:	equ	109h
LCDD4_DriveMode_2_ADDR:	equ	bh
LCDD4_GlobalSelect_ADDR:	equ	ah
LCDD4_IntCtrl_0_ADDR:	equ	10ah
LCDD4_IntCtrl_1_ADDR:	equ	10bh
LCDD4_IntEn_ADDR:	equ	9h
LCDD4_MASK:	equ	1h
; LCDD4_Data access macros
;   GetLCDD4_Data macro, return in a
macro GetLCDD4_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 1h
endm
;   SetLCDD4_Data macro
macro SetLCDD4_Data
	or		[Port_2_Data_SHADE], 1h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDD4_Data_ADDR], a
endm
;   ClearLCDD4_Data macro
macro ClearLCDD4_Data
	and		[Port_2_Data_SHADE], ~1h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDD4_Data_ADDR], a
endm

; LCDD4_DriveMode_0 access macros
;   GetLCDD4_DriveMode_0 macro, return in a
macro GetLCDD4_DriveMode_0
	mov		a,[Port_2_DriveMode_0_SHADE]
	and		a, 1h
endm
;   SetLCDD4_DriveMode_0 macro
macro SetLCDD4_DriveMode_0
	or		[Port_2_DriveMode_0_SHADE], 1h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDD4_Data_ADDR], a
endm
;   ClearLCDD4_DriveMode_0 macro
macro ClearLCDD4_DriveMode_0
	and		[Port_2_DriveMode_0_SHADE], ~1h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDD4_Data_ADDR], a
endm

; LCDD4_DriveMode_1 access macros
;   GetLCDD4_DriveMode_1 macro, return in a
macro GetLCDD4_DriveMode_1
	mov		a,[Port_2_DriveMode_1_SHADE]
	and		a, 1h
endm
;   SetLCDD4_DriveMode_1 macro
macro SetLCDD4_DriveMode_1
	or		[Port_2_DriveMode_1_SHADE], 1h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDD4_Data_ADDR], a
endm
;   ClearLCDD4_DriveMode_1 macro
macro ClearLCDD4_DriveMode_1
	and		[Port_2_DriveMode_1_SHADE], ~1h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDD4_Data_ADDR], a
endm

; LCDD5 address and mask equates
LCDD5_Data_ADDR:	equ	8h
LCDD5_DriveMode_0_ADDR:	equ	108h
LCDD5_DriveMode_1_ADDR:	equ	109h
LCDD5_DriveMode_2_ADDR:	equ	bh
LCDD5_GlobalSelect_ADDR:	equ	ah
LCDD5_IntCtrl_0_ADDR:	equ	10ah
LCDD5_IntCtrl_1_ADDR:	equ	10bh
LCDD5_IntEn_ADDR:	equ	9h
LCDD5_MASK:	equ	2h
; LCDD5_Data access macros
;   GetLCDD5_Data macro, return in a
macro GetLCDD5_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 2h
endm
;   SetLCDD5_Data macro
macro SetLCDD5_Data
	or		[Port_2_Data_SHADE], 2h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDD5_Data_ADDR], a
endm
;   ClearLCDD5_Data macro
macro ClearLCDD5_Data
	and		[Port_2_Data_SHADE], ~2h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDD5_Data_ADDR], a
endm

; LCDD5_DriveMode_0 access macros
;   GetLCDD5_DriveMode_0 macro, return in a
macro GetLCDD5_DriveMode_0
	mov		a,[Port_2_DriveMode_0_SHADE]
	and		a, 2h
endm
;   SetLCDD5_DriveMode_0 macro
macro SetLCDD5_DriveMode_0
	or		[Port_2_DriveMode_0_SHADE], 2h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDD5_Data_ADDR], a
endm
;   ClearLCDD5_DriveMode_0 macro
macro ClearLCDD5_DriveMode_0
	and		[Port_2_DriveMode_0_SHADE], ~2h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDD5_Data_ADDR], a
endm

; LCDD5_DriveMode_1 access macros
;   GetLCDD5_DriveMode_1 macro, return in a
macro GetLCDD5_DriveMode_1
	mov		a,[Port_2_DriveMode_1_SHADE]
	and		a, 2h
endm
;   SetLCDD5_DriveMode_1 macro
macro SetLCDD5_DriveMode_1
	or		[Port_2_DriveMode_1_SHADE], 2h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDD5_Data_ADDR], a
endm
;   ClearLCDD5_DriveMode_1 macro
macro ClearLCDD5_DriveMode_1
	and		[Port_2_DriveMode_1_SHADE], ~2h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDD5_Data_ADDR], a
endm

; LCDD6 address and mask equates
LCDD6_Data_ADDR:	equ	8h
LCDD6_DriveMode_0_ADDR:	equ	108h
LCDD6_DriveMode_1_ADDR:	equ	109h
LCDD6_DriveMode_2_ADDR:	equ	bh
LCDD6_GlobalSelect_ADDR:	equ	ah
LCDD6_IntCtrl_0_ADDR:	equ	10ah
LCDD6_IntCtrl_1_ADDR:	equ	10bh
LCDD6_IntEn_ADDR:	equ	9h
LCDD6_MASK:	equ	4h
; LCDD6_Data access macros
;   GetLCDD6_Data macro, return in a
macro GetLCDD6_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 4h
endm
;   SetLCDD6_Data macro
macro SetLCDD6_Data
	or		[Port_2_Data_SHADE], 4h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDD6_Data_ADDR], a
endm
;   ClearLCDD6_Data macro
macro ClearLCDD6_Data
	and		[Port_2_Data_SHADE], ~4h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDD6_Data_ADDR], a
endm

; LCDD6_DriveMode_0 access macros
;   GetLCDD6_DriveMode_0 macro, return in a
macro GetLCDD6_DriveMode_0
	mov		a,[Port_2_DriveMode_0_SHADE]
	and		a, 4h
endm
;   SetLCDD6_DriveMode_0 macro
macro SetLCDD6_DriveMode_0
	or		[Port_2_DriveMode_0_SHADE], 4h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDD6_Data_ADDR], a
endm
;   ClearLCDD6_DriveMode_0 macro
macro ClearLCDD6_DriveMode_0
	and		[Port_2_DriveMode_0_SHADE], ~4h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDD6_Data_ADDR], a
endm

; LCDD6_DriveMode_1 access macros
;   GetLCDD6_DriveMode_1 macro, return in a
macro GetLCDD6_DriveMode_1
	mov		a,[Port_2_DriveMode_1_SHADE]
	and		a, 4h
endm
;   SetLCDD6_DriveMode_1 macro
macro SetLCDD6_DriveMode_1
	or		[Port_2_DriveMode_1_SHADE], 4h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDD6_Data_ADDR], a
endm
;   ClearLCDD6_DriveMode_1 macro
macro ClearLCDD6_DriveMode_1
	and		[Port_2_DriveMode_1_SHADE], ~4h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDD6_Data_ADDR], a
endm

; LCDD7 address and mask equates
LCDD7_Data_ADDR:	equ	8h
LCDD7_DriveMode_0_ADDR:	equ	108h
LCDD7_DriveMode_1_ADDR:	equ	109h
LCDD7_DriveMode_2_ADDR:	equ	bh
LCDD7_GlobalSelect_ADDR:	equ	ah
LCDD7_IntCtrl_0_ADDR:	equ	10ah
LCDD7_IntCtrl_1_ADDR:	equ	10bh
LCDD7_IntEn_ADDR:	equ	9h
LCDD7_MASK:	equ	8h
; LCDD7_Data access macros
;   GetLCDD7_Data macro, return in a
macro GetLCDD7_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 8h
endm
;   SetLCDD7_Data macro
macro SetLCDD7_Data
	or		[Port_2_Data_SHADE], 8h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDD7_Data_ADDR], a
endm
;   ClearLCDD7_Data macro
macro ClearLCDD7_Data
	and		[Port_2_Data_SHADE], ~8h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDD7_Data_ADDR], a
endm

; LCDD7_DriveMode_0 access macros
;   GetLCDD7_DriveMode_0 macro, return in a
macro GetLCDD7_DriveMode_0
	mov		a,[Port_2_DriveMode_0_SHADE]
	and		a, 8h
endm
;   SetLCDD7_DriveMode_0 macro
macro SetLCDD7_DriveMode_0
	or		[Port_2_DriveMode_0_SHADE], 8h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDD7_Data_ADDR], a
endm
;   ClearLCDD7_DriveMode_0 macro
macro ClearLCDD7_DriveMode_0
	and		[Port_2_DriveMode_0_SHADE], ~8h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDD7_Data_ADDR], a
endm

; LCDD7_DriveMode_1 access macros
;   GetLCDD7_DriveMode_1 macro, return in a
macro GetLCDD7_DriveMode_1
	mov		a,[Port_2_DriveMode_1_SHADE]
	and		a, 8h
endm
;   SetLCDD7_DriveMode_1 macro
macro SetLCDD7_DriveMode_1
	or		[Port_2_DriveMode_1_SHADE], 8h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDD7_Data_ADDR], a
endm
;   ClearLCDD7_DriveMode_1 macro
macro ClearLCDD7_DriveMode_1
	and		[Port_2_DriveMode_1_SHADE], ~8h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDD7_Data_ADDR], a
endm

; LCDE address and mask equates
LCDE_Data_ADDR:	equ	8h
LCDE_DriveMode_0_ADDR:	equ	108h
LCDE_DriveMode_1_ADDR:	equ	109h
LCDE_DriveMode_2_ADDR:	equ	bh
LCDE_GlobalSelect_ADDR:	equ	ah
LCDE_IntCtrl_0_ADDR:	equ	10ah
LCDE_IntCtrl_1_ADDR:	equ	10bh
LCDE_IntEn_ADDR:	equ	9h
LCDE_MASK:	equ	10h
; LCDE_Data access macros
;   GetLCDE_Data macro, return in a
macro GetLCDE_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 10h
endm
;   SetLCDE_Data macro
macro SetLCDE_Data
	or		[Port_2_Data_SHADE], 10h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDE_Data_ADDR], a
endm
;   ClearLCDE_Data macro
macro ClearLCDE_Data
	and		[Port_2_Data_SHADE], ~10h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDE_Data_ADDR], a
endm

; LCDE_DriveMode_0 access macros
;   GetLCDE_DriveMode_0 macro, return in a
macro GetLCDE_DriveMode_0
	mov		a,[Port_2_DriveMode_0_SHADE]
	and		a, 10h
endm
;   SetLCDE_DriveMode_0 macro
macro SetLCDE_DriveMode_0
	or		[Port_2_DriveMode_0_SHADE], 10h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDE_Data_ADDR], a
endm
;   ClearLCDE_DriveMode_0 macro
macro ClearLCDE_DriveMode_0
	and		[Port_2_DriveMode_0_SHADE], ~10h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDE_Data_ADDR], a
endm

; LCDE_DriveMode_1 access macros
;   GetLCDE_DriveMode_1 macro, return in a
macro GetLCDE_DriveMode_1
	mov		a,[Port_2_DriveMode_1_SHADE]
	and		a, 10h
endm
;   SetLCDE_DriveMode_1 macro
macro SetLCDE_DriveMode_1
	or		[Port_2_DriveMode_1_SHADE], 10h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDE_Data_ADDR], a
endm
;   ClearLCDE_DriveMode_1 macro
macro ClearLCDE_DriveMode_1
	and		[Port_2_DriveMode_1_SHADE], ~10h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDE_Data_ADDR], a
endm

; LCDRS address and mask equates
LCDRS_Data_ADDR:	equ	8h
LCDRS_DriveMode_0_ADDR:	equ	108h
LCDRS_DriveMode_1_ADDR:	equ	109h
LCDRS_DriveMode_2_ADDR:	equ	bh
LCDRS_GlobalSelect_ADDR:	equ	ah
LCDRS_IntCtrl_0_ADDR:	equ	10ah
LCDRS_IntCtrl_1_ADDR:	equ	10bh
LCDRS_IntEn_ADDR:	equ	9h
LCDRS_MASK:	equ	20h
; LCDRS_Data access macros
;   GetLCDRS_Data macro, return in a
macro GetLCDRS_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 20h
endm
;   SetLCDRS_Data macro
macro SetLCDRS_Data
	or		[Port_2_Data_SHADE], 20h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDRS_Data_ADDR], a
endm
;   ClearLCDRS_Data macro
macro ClearLCDRS_Data
	and		[Port_2_Data_SHADE], ~20h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDRS_Data_ADDR], a
endm

; LCDRS_DriveMode_0 access macros
;   GetLCDRS_DriveMode_0 macro, return in a
macro GetLCDRS_DriveMode_0
	mov		a,[Port_2_DriveMode_0_SHADE]
	and		a, 20h
endm
;   SetLCDRS_DriveMode_0 macro
macro SetLCDRS_DriveMode_0
	or		[Port_2_DriveMode_0_SHADE], 20h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDRS_Data_ADDR], a
endm
;   ClearLCDRS_DriveMode_0 macro
macro ClearLCDRS_DriveMode_0
	and		[Port_2_DriveMode_0_SHADE], ~20h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDRS_Data_ADDR], a
endm

; LCDRS_DriveMode_1 access macros
;   GetLCDRS_DriveMode_1 macro, return in a
macro GetLCDRS_DriveMode_1
	mov		a,[Port_2_DriveMode_1_SHADE]
	and		a, 20h
endm
;   SetLCDRS_DriveMode_1 macro
macro SetLCDRS_DriveMode_1
	or		[Port_2_DriveMode_1_SHADE], 20h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDRS_Data_ADDR], a
endm
;   ClearLCDRS_DriveMode_1 macro
macro ClearLCDRS_DriveMode_1
	and		[Port_2_DriveMode_1_SHADE], ~20h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDRS_Data_ADDR], a
endm

; LCDRW address and mask equates
LCDRW_Data_ADDR:	equ	8h
LCDRW_DriveMode_0_ADDR:	equ	108h
LCDRW_DriveMode_1_ADDR:	equ	109h
LCDRW_DriveMode_2_ADDR:	equ	bh
LCDRW_GlobalSelect_ADDR:	equ	ah
LCDRW_IntCtrl_0_ADDR:	equ	10ah
LCDRW_IntCtrl_1_ADDR:	equ	10bh
LCDRW_IntEn_ADDR:	equ	9h
LCDRW_MASK:	equ	40h
; LCDRW_Data access macros
;   GetLCDRW_Data macro, return in a
macro GetLCDRW_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 40h
endm
;   SetLCDRW_Data macro
macro SetLCDRW_Data
	or		[Port_2_Data_SHADE], 40h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDRW_Data_ADDR], a
endm
;   ClearLCDRW_Data macro
macro ClearLCDRW_Data
	and		[Port_2_Data_SHADE], ~40h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LCDRW_Data_ADDR], a
endm

; LCDRW_DriveMode_0 access macros
;   GetLCDRW_DriveMode_0 macro, return in a
macro GetLCDRW_DriveMode_0
	mov		a,[Port_2_DriveMode_0_SHADE]
	and		a, 40h
endm
;   SetLCDRW_DriveMode_0 macro
macro SetLCDRW_DriveMode_0
	or		[Port_2_DriveMode_0_SHADE], 40h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDRW_Data_ADDR], a
endm
;   ClearLCDRW_DriveMode_0 macro
macro ClearLCDRW_DriveMode_0
	and		[Port_2_DriveMode_0_SHADE], ~40h
	mov		a, [Port_2_DriveMode_0_SHADE]
	mov		reg[LCDRW_Data_ADDR], a
endm

; LCDRW_DriveMode_1 access macros
;   GetLCDRW_DriveMode_1 macro, return in a
macro GetLCDRW_DriveMode_1
	mov		a,[Port_2_DriveMode_1_SHADE]
	and		a, 40h
endm
;   SetLCDRW_DriveMode_1 macro
macro SetLCDRW_DriveMode_1
	or		[Port_2_DriveMode_1_SHADE], 40h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDRW_Data_ADDR], a
endm
;   ClearLCDRW_DriveMode_1 macro
macro ClearLCDRW_DriveMode_1
	and		[Port_2_DriveMode_1_SHADE], ~40h
	mov		a, [Port_2_DriveMode_1_SHADE]
	mov		reg[LCDRW_Data_ADDR], a
endm

