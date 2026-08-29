	.import scroll

_title_title_irq_setup:
	irq_set #127
	ldx #(_main_TITLE_BANK+0)
	mmc3_cbank 2
	ldx #(_main_TITLE_BANK+1)
	mmc3_cbank 3
	ldx #(_main_TITLE_BANK+2)
	mmc3_cbank 4
	ldx #(_main_TITLE_BANK+3)
	mmc3_cbank 5
	loadw _common_irq_next, title_irq_2
	
	lda _util_vsync_flag				; if( vsync_flag == 1 ){
	cmp #1
	bne @end

@end:							; }
	rts


title_irq_1:
	rts

;;; VRAMに4byte書きだす
.macro title_write_palx4
	lda _TITLE_PALLET,x
	sta _PPU_DATA
	inx
	lda _TITLE_PALLET,x
	sta _PPU_DATA
	inx
	lda _TITLE_PALLET,x
	sta _PPU_DATA
	inx
	lda _TITLE_PALLET,x
	sta _PPU_DATA
	inx
.endmacro
	
;;; IRQ割り込み(タイトルの下辺)
title_irq_2:
	irq_set #7
	load _nes_PPU_CTRL2, #%00010000

	xwait #0
	
	ldx #(_main_BASE_BANK+0)
	mmc3_cbank 2
	ldx #(_main_BASE_BANK+1)
	mmc3_cbank 3

	loadw _common_irq_next, title_irq_3
	rts

;;; IRQ割り込み(下部の上辺)
title_irq_3:
	sta _mmc3_MMC3_IRQ_DISABLE
	xwait #2
	
	ldx #0
	ldy #135
	jsr scroll
	
	load _nes_PPU_CTRL2, _util_ppu_ctrl2_bak
	rts
