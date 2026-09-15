;;; 先頭で宣言したいアセンブラのマクロなど
	
.macro load mem,v
	lda v
	sta mem
.endmacro

.macro loadw mem,v
	lda #.LOBYTE(v)
	sta mem+0
	lda #.HIBYTE(v)
	sta mem+1
.endmacro
	

;;; mmc3_cbank select
;;;   select: 0-5
;;;   x     : 2KB bank number
;;; use 11cycle
.macro mmc3_cbank bank
	lda #(bank | 128)
	sta _mmc3_MMC3_BANK_SELECT
	stx _mmc3_MMC3_BANK_DATA
.endmacro

;;; wait N
;;; use N*5+1 cycle
.macro xwait _1
	ldx _1
	dex
	bne *-1
.endmacro

;;; irq_set counter
;;; set IRQ for MMC3.
;;; use 18cycle( if \1 is zeropage )
.macro irq_set _1
	lda _1
	sta _mmc3_MMC3_IRQ_LATCH
	sta _mmc3_MMC3_IRQ_RELOAD
	sta _mmc3_MMC3_IRQ_DISABLE
	sta _mmc3_MMC3_IRQ_ENABLE
.endmacro
