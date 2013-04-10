TOTAL_SONGS	equ	$01
SOUND_GENERATOR	equ	$00
PTRDPCM		equ	 4
PTRFDS		equ	 5
PTRVRC7		equ	 5
PTRVRC6		equ	 5
PTRN106		equ	 5
PTRFME7		equ	 5
PTRMMC5		equ	 5
PTR_TRACK_END		equ	 5
PITCH_CORRECTION		equ	 0
DPCM_RESTSTOP		equ	 0
DPCM_BANKSWITCH		equ	 0
DPCM_EXTRA_BANK_START		equ	 2
BANK_MAX_IN_4KB		equ	(1 + 0)*2+1
ALLOW_BANK_SWITCH		equ	0
TITLE	.macro
	db	$e3, $83, $ad, $e3, $83, $9e, $e3, $83
	db	$b3, $e3, $82, $b7, $e3, $83, $b3, $e3
	db	$82, $b0, $20, $e3, $82, $b5, $e3, $83
	db	$bb, $e3, $82, $ac, $20, $32, $20, $2d
	.endm
COMPOSER	.macro
	db	$e4, $bc, $8a, $e8, $97, $a4, $e8, $b3
	db	$a2, $e6, $b2, $bb, $00, $00, $00, $00
	db	$00, $00, $00, $00, $00, $00, $00, $00
	db	$00, $00, $00, $00, $00, $00, $00, $00
	.endm
MAKER	.macro
	db	$4d, $61, $6b, $65, $72, $00, $00, $00
	db	$00, $00, $00, $00, $00, $00, $00, $00
	db	$00, $00, $00, $00, $00, $00, $00, $00
	db	$00, $00, $00, $00, $00, $00, $00, $00
	.endm


