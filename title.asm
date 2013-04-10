_title_irq_setup:
	irq_set #127
	mmc3_cbank #2, #(_TITLE_BANK+0)
	mmc3_cbank #3, #(_TITLE_BANK+1)
	mmc3_cbank #4, #(_TITLE_BANK+2)
	mmc3_cbank #5, #(_TITLE_BANK+3)
	loadw _irq_next, title_irq_2
	
	lda _vsync_flag				; if( vsync_flag == 1 ){
	cmp #1
	bne .end

.end:							; }
	rts


title_irq_1:
	rts

;;; VRAMに4byte書きだす
title_write_palx4 .macro
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
	.endm
	
;;; IRQ割り込み(タイトルの下辺)
title_irq_2:
	irq_set #7
	load _PPU_CTRL2, #%00010000

	xwait #0
	
	;; パレットの転送
	;; MEMO: タイミングによっては、PPU_ADDRがPPUによって変更されるっぽいので注意
	.if 0
	load _PPU_ADDR, #HIGH(_PPU_ADDR_PALLET)
	load _PPU_ADDR, #LOW(_PPU_ADDR_PALLET)
	ldx #0
	title_write_palx4
	title_write_palx4
	title_write_palx4
	title_write_palx4
	.endif
	
	mmc3_cbank #2, #(_BASE_BANK+0)
	mmc3_cbank #3, #(_BASE_BANK+1)

	loadw _irq_next, title_irq_3
	rts

;;; IRQ割り込み(下部の上辺)
title_irq_3:
	sta _MMC3_IRQ_DISABLE
	xwait #2
	
	ldx #0
	ldy #135
	jsr scroll
	
	load _PPU_CTRL2, _ppu_ctrl2_bak
	rts
