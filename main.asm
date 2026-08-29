;; function interrupt():void
_interrupt:
	
	load _mmc3_MMC3_MIRROR, #0		; MMC3_MIRROR = 0;
	
	lda _util_vsync_flag				; if( vsync_flag ){
	beq @end4

	cmp #1						;   if( vsync_flag == 1 ){
	bne @end2
	lda #7						;     SPRITE_DMA = 7;
	sta _nes_SPRITE_DMA
	lda #0						;     gr_sprite_idx = 0;
	sta _util_gr_sprite_idx
@end2:							;   }

	lda #0						;   i = 0;
	sta _util_interrupt_i
@loop:					  
	lda _util_interrupt_i			;   while( i < gr_idx ){
	cmp _util_gr_idx
	bpl @end
	jsr ppu_put3				;     ppu_put3(interrupt_i)
	inc _util_interrupt_i			;     i += 1;
	jmp @loop					;   }
@end:		
	load _util_gr_idx, #0			;   gr_idx = 0;
@end4:							; }

	;; setup ppu registers
	lda _util_ppu_scroll1			; PPU_SCROLL = ppu_scroll1;
	sta _nes_PPU_SCROLL
	lda _util_ppu_scroll2			; PPU_SCROLL = ppu_scroll2;
	sta _nes_PPU_SCROLL
	lda _util_ppu_ctrl1_bak			; PPU_CTRL1 = ppu_ctrl1_bak;
	sta _nes_PPU_CTRL1
	lda _util_ppu_ctrl2_bak			; PPU_CTRL2 = ppu_ctrl2_bak;
	sta _nes_PPU_CTRL2

	;; setup irq
	jsr @jsr_irq_setup

	;; lda _mck_enable
	beq @end3
	;; jsr sound_driver_start ;; cs65に対応してないので無視
@end3:	
	
	load _util_vsync_flag, #0		; vsync_flag = 0;
	
	rts
	
@jsr_irq_setup:
	jmp (_common_irq_setup)

;;; ================================================================
;;; IRQ割り込み
;;; ================================================================
	
_no_effect:
	rts

_main_main_irq:
	irq_set #23
	ldx #8
	mmc3_cbank 2
	ldx #9
	mmc3_cbank 3
	ldx #10
	mmc3_cbank 4
	ldx #11
	mmc3_cbank 5
	loadw _common_irq_next, _irq_1

	lda _util_vsync_flag				; if( vsync_flag == 1 ){
	cmp #1
	bne @end
	load _common_boss_space2, _common_boss_space
	load _common_boss_scroll_x2, _common_boss_scroll_x
	load _common_boss_scroll_y2, _common_boss_scroll_y
	load _common_boss_top_space2, _common_boss_top_space
	load _common_boss_bottom_space2, _common_boss_bottom_space

@end:							; }
	rts

ppu_put3:
	ldx _util_interrupt_i			; ppu_put_size = gr_size_buf[i]
	lda _util_gr_size_buf,x
	sta _util_ppu_put_size

	txa							; (x = i*2 )
	asl a
	tax

	lda _util_gr_to_buf+1,x			; PPU_ADDR = gr_to_buf[i] * 2
	sta _nes_PPU_ADDR
	lda _util_gr_to_buf+0,x
	sta _nes_PPU_ADDR
		
	lda _util_gr_from_buf+0,x		; ppu_put_from = gr_from_buf[i]
	sta _util_ppu_put_from+0
	lda _util_gr_from_buf+1,x
	sta _util_ppu_put_from+1
	ldy #0						; for( y=0; y<ppu_put_size; y++ ){
@loop:							;   _PPU_DATA = ppu_put_from[y]
    lda (_util_ppu_put_from),y
    sta _nes_PPU_DATA
    iny
	cpy _util_ppu_put_size
    bne @loop					; }
    rts

;;; IRQ割り込み
;;; 丁度 113-134 サイクルで終わらせる必要あり
;;; ( irqベクタで24cycle使用しているので、実質89-110サイクル)
_interrupt_irq:
	jmp (_common_irq_next)
	
;;; scanline中のスクロールを行う
;;; x: X座標 y: Y座標
;;; See: http://forums.nesdev.com/viewtopic.php?p=64111#p64111
;;; use 56cycle ( jsr含む、最後の'sta _PPU_ADDR'まで )
scroll:
	lda #0
	;; sta _scroll_x+1
	;; sta _scroll_y+1
	
	;; ;; lda _scroll_x+1
	;; lsr a
	;; lda _scroll_y+1
	clc
	rol a
	asl a
	asl a
	sta _nes_PPU_ADDR
	tya
	sta _nes_PPU_SCROLL
	asl a
	asl a
	and #%11100000
	sta _common_scroll_x+0
	txa
	lsr a
	lsr a
	lsr a
	ora _common_scroll_x+0

	;finish setting the scroll during HBlank (11 cycles)
	stx _nes_PPU_SCROLL
	sta _nes_PPU_ADDR
	rts

;;; IRQ割り込み( 上の岩の上辺 )
_irq_1:
	irq_set #15					; irq_set(15)

	xwait #2
	ldx _common_bg_scroll				; scroll(bg_scroll,32)
	ldy #32
	jsr scroll
	
	load _mmc3_MMC3_MIRROR, #1

	lda _common_boss_top_space2
	beq @else
	loadw _common_irq_next, _irq_2		;   irq_next = irq_2
	jmp @end
@else:
	loadw _common_irq_next, _irq_3		;   irq_next = irq_2
@end:

	rts

;;; IRQ割り込み( 上の岩の下辺 )
_irq_2:

	irq_set _common_boss_top_space2

	loadw _common_irq_next, _irq_3		; irq_next = irq_3

	;; xwait #9

	lda #%00010000
	sta _nes_PPU_CTRL2

	load _mmc3_MMC3_MIRROR, #0
	ldx #16
	mmc3_cbank 2
	ldx #17
	mmc3_cbank 3
	ldx _common_cbank4
	mmc3_cbank 4
	ldx _common_cbank5
	mmc3_cbank 5

	rts

;;; IRQ割り込み( ボスの上辺 )
_irq_3:
	
	irq_set _common_boss_space2
	xwait #1
	
	ldx _common_boss_scroll_x2
	ldy _common_boss_scroll_y2
	jsr scroll
	
	load _mmc3_MMC3_MIRROR, #0
	ldx #16
	mmc3_cbank 2
	ldx #17
	mmc3_cbank 3
	ldx _common_cbank4
	mmc3_cbank 4
	ldx _common_cbank5
	mmc3_cbank 5
	
	lda _util_ppu_ctrl2_bak
	sta _nes_PPU_CTRL2

	lda _common_boss_bottom_space2
	beq @else
	loadw _common_irq_next, _irq_4
	jmp @end
@else:
	loadw _common_irq_next, _irq_5
@end:

	rts
	
;;; IRQ割り込み( ボスの下辺 )
_irq_4:
	loadw _common_irq_next, _irq_5
	irq_set _common_boss_bottom_space2

	xwait #3

	load _nes_PPU_CTRL2, #%00010000
	
	rts
	
;;; IRQ割り込み( 下の岩の上辺 )
_irq_5:
	sta _mmc3_MMC3_IRQ_DISABLE
	xwait #4

	;; xwait #9
	ldx _common_bg_scroll				; scroll(bg_scroll,48)
	ldy #48
	jsr scroll

	load _nes_PPU_CTRL2, _util_ppu_ctrl2_bak
	
	ldx #8
	mmc3_cbank 2
	ldx #9
	mmc3_cbank 3
	ldx #10
	mmc3_cbank 4
	ldx #11
	mmc3_cbank 5
	load _mmc3_MMC3_MIRROR, #1
	
	rts

        
        
