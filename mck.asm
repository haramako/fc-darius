
_mck_init:
	load $4015, #0
	load _mck_enable, #0
	rts


_mck_play:
	lda S+1,x
	jsr	sound_init
	load _mck_enable, #1
	rts

_mck_stop:
	load _mck_enable, #0
	load $4015, #0
	rts
