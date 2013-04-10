;;; function bcd_set( to:int*, size:int, n:int16 ):int*;
;;; to=[2,3] size=[4] n=[5,6]
_bcd_set:
	lda S+2,x
	sta reg+10
	lda S+3,x
	sta reg+11
	
	dec S+4,x					; size = size - 1
	
	lda S+5,x					; setup n
	sta reg+0
	lda S+6,x
	sta reg+1
	lda #10						; setup 10
	sta reg+2
	lda #0
	sta reg+3
	
.loop							; while( size ){
	jsr __div_16				; 

	lda reg+4					; n = n / 10
	sta reg+0
	lda reg+5
	sta reg+1

	lda reg+6					; to[size] = n % 10 + 48
	ldy S+4,x
	clc
	adc #48
	sta	[reg+10],y

	dec S+4,x					;   size-=1;
	bpl .loop					; }

	lda S+2,x
	sta S+0,x
	lda S+3,x
	sta S+1,x
	
	rts

;;; function bcd_add( to:int*, size:int, n:int* ):int*;
;;; to=[2,3] size=[4] n=[5,6]
;; {
;; 	var i = size-1;
;; 	var carry = 0;
;; 	while( size ){
;; 		var c = carry + to[size] + n[size] - 96;
;; 		carry = 0;
;; 		if( c >= 10 ){
;; 			carry = 1;
;; 			c -= 10;
;; 		}
;; 		to[i] = c + 48;
;; 		size -= 1;
;; 	}
;; 	return to;
;; }
_bcd_add:
	lda S+2,x
	sta reg+2
	lda S+3,x
	sta reg+3
	lda S+5,x
	sta reg+5
	lda S+6,x
	sta reg+6
	
	ldy S+4,x					; size = size - 1;
	dey
	load reg+7,#0				; var carry = 0;
	
.loop:							; while( size ){
	clc							;   var c = carry + to[size] + n[size] - 48;
	lda reg+7
	adc [reg+2],y
	adc [reg+5],y
	sec
	sbc #48

	sta	[reg+2],y				;   to[i] = c;
	
	cmp #58						;   if( c >= 58 ){
	bpl .else
	load reg+7,#0
	jmp .end
.else:							;   }else{
	sec							;     to[i] = c - 10;
	sbc #10
	sta	[reg+2],y				
	load reg+7,#1				;     carry = 1
.end:							;   }
	
	dey
	bpl .loop					; }

	lda reg+2
	sta S+0,x
	lda reg+3
	sta S+1,x
	rts
	