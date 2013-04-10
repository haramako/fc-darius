;; // 敵の弾の処理
;; function en_bul_process():void
_en_bul_process:
    ldy #0						; i = 0
.loop:							; while(...

    lda _en_bul_type,y			; if( en_bul_type[i] ){
    bne .then4
    jmp .end4
.then4:
    lda _en_bul_vy,y			;   en_bul_y[i] += en_bul_vy[i] + giff16 / 16;
	clc
	adc _giff16
	cmp #$80
    ror a
	cmp #$80
    ror a
	cmp #$80
    ror a
	cmp #$80
    ror a
    clc
    adc _en_bul_y,y
    sta _en_bul_y,y

    lda _en_bul_vx,y       ; en_bul_x[i] += en_bul_vx[i] + giff16 / 16;
	clc
	adc _giff16
	cmp #$80
    ror a
	cmp #$80
    ror a
	cmp #$80
    ror a
	cmp #$80
    ror a
    clc
    adc _en_bul_x,y
    sta _en_bul_x,y
    lda _en_bul_x,y        ; gr_sprite( en_bul_x[i]-4, en_bul_y[i]-8, SPR_EN_BUL+anim*2, 1 );
    sec
    sbc #4
    sta S+0,x
    lda _en_bul_y,y        
    sec
    sbc #8
    sta S+1,x
    lda #$e8
    sta S+2,x
    lda #2
    sta S+3,x
	tya
	pha
    jsr _gr_sprite
	pla
	tay
    lda _my_muteki         ; if( my_muteki == 0 && my_x + 8 - en_bul_x[i] < 16 && my_y + 8 - en_bul_y[i] < 16 ){
    bne .end3
    lda _my_x              
    clc
    adc #8
    sec
    sbc _en_bul_x,y
    cmp #16
    bcs .end3
    lda _my_y
    clc
    adc #8
    sec
    sbc _en_bul_y,y
    cmp #16
    bcs .end3
    lda #1					; my_bang = 1;
    sta _my_bang
	jsr .killed
	jmp .loop_end			; break;
.end3:
    lda _en_bul_y,y			; if( en_bul_y[i] < 40 || en_bul_y[i] > 224 || en_bul_x[i] < 8 || en_bul_x[i] > 232 ){
    cmp #40
    bcc .kill
    cmp #216
    bcs .kill
    lda _en_bul_x,y
    cmp #8
    bcc .kill
    cmp #240
    bcs .kill
    jmp .loop_end
.kill:
	jsr .killed
.end4:
.loop_end:        
    iny						; i += 2;
    cpy #_EN_BUL_MAX		; while( i<EN_BUL_MAX ){
    bcs .loop_end2          
    jmp .loop
.loop_end2:
    rts
	
.killed:
    lda #0                  ; en_bul_type[i] = 0;
    sta _en_bul_type,y
	lda _en_bul_free		; en_bul_x[i] = _en_bul_free
	sta _en_bul_x,y
	sty _en_bul_free		; en_bul_free = i
	rts
