dutyenve_table:
dutyenve_lp_table:


softenve_table:
	dw	softenve_000
	dw	softenve_001
	dw	0
	dw	0
	dw	0
	dw	softenve_005
	dw	softenve_006
	dw	softenve_007
softenve_lp_table:
	dw	softenve_lp_000
	dw	softenve_lp_001
	dw	0
	dw	0
	dw	0
	dw	softenve_lp_005
	dw	softenve_lp_006
	dw	softenve_lp_007

softenve_000:
	db	$09,$0a,$0a
softenve_lp_000:
	db	$09,$ff
softenve_001:
	db	$03,$04,$05,$06
softenve_lp_001:
	db	$07,$ff
softenve_005:
	db	$06,$01
softenve_lp_005:
	db	$00,$ff
softenve_006:
	db	$08,$07,$06,$05,$02,$01
softenve_lp_006:
	db	$00,$ff
softenve_007:
	db	$0a,$09,$09,$08,$08,$08,$07,$07
	db	$07,$07,$06,$06,$06,$06,$06,$05
	db	$05,$05,$05,$05,$05,$04,$04,$04
	db	$04,$04,$04,$04,$03,$03,$03,$03
	db	$03,$03,$03,$03,$02,$02,$02,$02
	db	$02,$02,$02,$02,$02,$01,$01,$01
	db	$01,$01,$01,$01,$01,$01,$01
softenve_lp_007:
	db	$00,$ff

pitchenve_table:
	dw	pitchenve_000
	dw	pitchenve_001
	dw	0
	dw	0
	dw	0
	dw	pitchenve_005
pitchenve_lp_table:
	dw	pitchenve_lp_000
	dw	pitchenve_lp_001
	dw	0
	dw	0
	dw	0
	dw	pitchenve_lp_005

pitchenve_000:
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00
pitchenve_lp_000:
	db	$81,$00,$00,$01,$00,$00,$01,$00
	db	$00,$81,$00,$00,$ff
pitchenve_001:
	db	$00,$00,$00,$00,$00,$00
pitchenve_lp_001:
	db	$81,$00,$00,$00,$00,$00,$01,$00
	db	$00,$00,$00,$00,$ff
pitchenve_005:
pitchenve_lp_005:
	db	$04,$ff

arpeggio_table:
arpeggio_lp_table:


lfo_data:
fds_data_table:
fds_effect_select:
fds_4088_data:


n106_channel:
	db	0
n106_wave_init:
n106_wave_table:


vrc7_data_table:


dpcm_data:

; begin DPCM samples

; end DPCM samples


	.include	"title.h"
