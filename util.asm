;;; function ppu_put( to:int16, from:int*, size:int ):void
;;; ただし、size=0の場合、256byte転送する
ppu_put_sub:
        lda _ppu_put_to+1
        sta _PPU_ADDR
        lda _ppu_put_to+0
        sta _PPU_ADDR
        ldy #0
.loop:
        lda [_ppu_put_from],y
        sta _PPU_DATA
        iny
        cpy _ppu_put_size
        bne .loop
        rts
		
;;; function ppu_put( to:int16, from:int*, size:int ):void
_ppu_put:
		lda S+0,x
		sta _ppu_put_to+0
		lda S+1,x
		sta _ppu_put_to+1
		lda S+2,x
		sta _ppu_put_from+0
		lda S+3,x
		sta _ppu_put_from+1
		lda S+4,x
		sta _ppu_put_size
		jmp ppu_put_sub

;;; function ppu_put( to:int16, from:int*, size:uint16 ):void
_ppu_put16:
	lda S+0,x
	sta _ppu_put_to+0
	lda S+1,x
	sta _ppu_put_to+1
	lda S+2,x
	sta _ppu_put_from+0
	lda S+3,x
	sta _ppu_put_from+1

.loop:	
	lda S+5,x
	beq .end
	lda #0
	sta _ppu_put_size
	jsr ppu_put_sub
	inc _ppu_put_from+1
	inc _ppu_put_to+1
	dec S+5,x
	bne .loop
.end:	

	lda S+4,x
	beq .end2
	sta _ppu_put_size
	jsr ppu_put_sub
.end2:
	rts

;;; function ppu_fill( to:int16, pat:int, size:int16 ):void;
_ppu_fill:
	lda S+1,x
	sta _PPU_ADDR
	lda S+0,x
	sta _PPU_ADDR
	
.loop:
	lda S+4,x					; while( HIGH(size) ){
	beq .end
	dec S+4,x					;   HIGH(size)--;
	ldy #0
.loop2:							;   for( y, 0, 256 ){ PPU_DATA = pat; }
	lda S+2,x
	sta _PPU_DATA
	dey
	bne .loop2
.end2:	
	jmp .loop					; }
.end:	
	
	lda S+3,x					;   for( y, 0, LOW(size) ){ PPU_DATA = pat; }
	tay
.loop3:							
	lda S+2,x
	sta _PPU_DATA
	dey
	bne .loop3
.end3:	
	
	rts

	
;;; function gr_pos( x:int, y:int ):int16
_gr_pos:
	lda S+3,x					; if( y < 0 ) y += 30;
	bpl .end2
	clc
	adc #30
	sta S+3,x
.end2:	
	lda S+3,x					; if( y > 30 ) y -= 30;
	cmp #30
	bmi .end
	sec
	sbc #30
	sta S+3,x
.end:	
	lda S+3,x		; result[0] = x + y * 32
	asl a
	asl a
	asl a
	asl a
	asl a
	clc
	adc S+2,x
	sta S+0,x
	lda S+3,x       ; result[1] = 0x20 + y / 8
	lsr a
	lsr a
	lsr a
	clc
	adc #$20
	sta S+1,x
	rts

;; function gr_sprite( x:int, y:int, pat:int, mode:int ):void options (extern:true) {}
;; {
;;   if( gr_sprite_idx >= 252 ){ return; }
;;   var p:int = gr_sprite_idx;
;;   gr_sprite_buf[p] = y;
;;   gr_sprite_buf[p+1] = pat;
;;   gr_sprite_buf[p+2] = mode;
;;   gr_sprite_buf[p+3] = x;
;;   gr_sprite_idx += 4;
;; }
;; USING: X
_gr_sprite:
	ldy _gr_sprite_idx      ; if( gr_sprite_idx >= 252 ){ return; } var p:int = gr_sprite_idx;
	cpy #252
	bcs .end
	lda S+1,x      ; gr_sprite_buf[p] = y;
	sta _gr_sprite_buf,y   
	iny                     ; gr_sprite_buf[p+1] = pat;
	lda S+2,x
	clc
	adc	#1
	sta _gr_sprite_buf,y
	iny                     ; gr_sprite_buf[p+2] = mode;
	lda S+3,x
	sta _gr_sprite_buf,y
	iny                     ; gr_sprite_buf[p+3] = x;
	lda S+0,x
	sta _gr_sprite_buf,y
	iny                     ; gr_sprite_idx += 4;
	sty _gr_sprite_idx
.end:
	rts
        
;;; function gr_sprites( spr_x:int, spr_y:int, data:int* ):void
_gr_sprites:
	lda S+0,x
	sta reg+2
	lda S+1,x
	sta reg+3
	lda S+2,x
	sta reg+0
	lda S+3,x
	sta reg+1
	txa							; push x
	pha
	ldy #0
	
.loop:							; while(1){
	ldx _gr_sprite_idx			;   x = gr_sprite_idx
	cpx #252					;   if( x == 252 ) break;
	beq .end
	lda [reg],y					;   a = *reg[y];
	beq .end					;   if( a == 0 ) break;
	clc							;   gr_sprite_buf[x] = a + spr_y
	adc reg+3
	bcc .else					;   if( $carry ){ y+=4; continue; }
	iny
	iny
	iny
	iny
	jmp .loop
.else:
	sta _gr_sprite_buf,x
	iny							;   y++; x++;
	inx

	lda [reg],y					;   gr_sprite_buf[x] = reg[y]
	clc
	adc #1
	sta _gr_sprite_buf,x
	iny							;   y++; x++;
	inx

	lda [reg],y					;   gr_sprite_buf[x] = reg[y]
	sta _gr_sprite_buf,x
	iny							;   y++; x++;
	inx

	lda [reg],y					;   gr_sprite_buf[x] = reg[y] + spr_x
	clc
	adc reg+2
	bcc .else2					;   if( $carry ){ y+=1; continue; }
	iny
	jmp .loop
.else2:
	sta _gr_sprite_buf,x
	iny							;   y++; x++;
	inx
	
	stx _gr_sprite_idx			;   gr_sprite_idx = x;
	jmp .loop					; }
.end:
	stx $20
	pla							; pop x;
	tax
	rts
	
;;; function memcpy(to:int*, from:int*, size:int):void
;;; USING Y
_memcpy:
		lda S+0,x
		sta reg+0
		lda S+1,x
		sta reg+1
		lda S+2,x
		sta reg+2
		lda S+3,x
		sta reg+3
		lda S+4,x
		sta reg+4
        ldy #0
.loop:
        lda [reg+2],y
        sta [reg],y
        iny
        cpy reg+4
        bne .loop
        rts
        
;;; function memset(p:int*, c:int, size:int):void
;;; USING Y
_memset:
	lda S+0,x
	sta reg+0
	lda S+1,x
	sta reg+1
	lda S+3,x
	sta reg+3
	lda S+2,x
	ldy #0
.loop:
	sta [reg+0],y
	iny
	cpy reg+3
	bne .loop
	rts

;;; function memset(p:int*, size:int):void
;;; USING Y
_memzero:
		lda S+0,x
		sta reg+0
		lda S+1,x
		sta reg+1
		lda S+2,x
		sta reg+2
        ldy #0
		lda #0
.loop:
        sta [reg+0],y
        iny
        cpy reg+2
        bne .loop
        rts
	