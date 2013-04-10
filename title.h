; Title: ロマンシング サ・ガ 2 - バトル
; Composer: 伊藤賢治
; Maker: Maker
; Programer: 1

	;; .bank	0
	.if TOTAL_SONGS > 1
song_addr_table:
	dw	song_000_track_table
	.if (ALLOW_BANK_SWITCH)
song_bank_table:
	dw	song_000_bank_table
	.endif ; ALLOW_BANK_SWITCH
	.endif ; TOTAL_SONGS > 1
song_000_track_table:
	dw	song_000_00
	dw	song_000_01
	dw	song_000_02
	dw	song_000_03
	dw	song_000_04
	.if (ALLOW_BANK_SWITCH)
song_000_bank_table:
	db	bank(song_000_00)*2
	db	bank(song_000_01)*2
	db	bank(song_000_02)*2
	db	bank(song_000_03)*2
	db	bank(song_000_04)*2
	.endif

song_000_00:	;Trk A
	db	$fe,$82,$fd,$01,$f8,$01,$2b,$06	;Trk A; title.mml: 8
	db	$26,$05,$2b,$06,$32,$06,$36,$05	;Trk A; title.mml: 8
	db	$32,$06,$36,$05,$3b,$06,$29,$06	;Trk A; title.mml: 8
	db	$24,$05,$29,$06,$31,$06,$34,$05	;Trk A; title.mml: 8
	db	$31,$06,$34,$05,$39,$06,$2b,$06	;Trk A; title.mml: 8
	db	$27,$05,$2b,$06,$32,$06,$37,$05	;Trk A; title.mml: 8
	db	$32,$06,$37,$05,$3b,$06,$31,$06	;Trk A; title.mml: 8
	db	$2a,$05,$31,$06,$36,$06,$3a,$05	;Trk A; title.mml: 8
	db	$36,$06,$3a,$05,$41,$06,$3b,$9e	;Trk A; title.mml: 8
	db	$fc,$16
song_000_00_lp:
	db	$fe,$80,$fd,$00,$f8,$00,$31,$38	;Trk A; title.mml: 10
	db	$2b,$0c,$26,$0b,$2b,$0b,$31,$17	;Trk A; title.mml: 10
	db	$34,$2d,$32,$16,$31,$06,$32,$05	;Trk A; title.mml: 10
	db	$31,$06,$2b,$06,$26,$43,$fe,$82	;Trk A; title.mml: 10
	db	$fd,$01,$f8,$01,$2b,$06,$26,$05	;Trk A; title.mml: 10
	db	$2b,$06,$32,$06,$36,$05,$32,$06	;Trk A; title.mml: 10
	db	$36,$05,$3b,$06,$36,$06,$3b,$05	;Trk A; title.mml: 10
	db	$36,$06,$32,$06,$2b,$05,$32,$06	;Trk A; title.mml: 10
	db	$2b,$05,$26,$06,$fe,$80,$fd,$00	;Trk A; title.mml: 10
	db	$f8,$00,$2b,$38,$31,$0c,$32,$0b	;Trk A; title.mml: 11
	db	$34,$0b,$32,$17,$31,$2d,$29,$16	;Trk A; title.mml: 11
	db	$31,$06,$32,$05,$31,$06,$2b,$06	;Trk A; title.mml: 11
	db	$36,$43,$fe,$82,$fd,$01,$f8,$01	;Trk A; title.mml: 11
	db	$22,$17,$29,$16,$28,$17,$25,$16	;Trk A; title.mml: 11
	db	$fe,$80,$fd,$00,$f8,$00,$31,$38	;Trk A; title.mml: 12
	db	$2b,$0c,$26,$0b,$2b,$0b,$31,$17	;Trk A; title.mml: 12
	db	$34,$2d,$32,$16,$31,$06,$32,$05	;Trk A; title.mml: 12
	db	$31,$06,$2b,$06,$26,$43,$fe,$82	;Trk A; title.mml: 12
	db	$fd,$01,$f8,$01,$2b,$06,$26,$05	;Trk A; title.mml: 12
	db	$2b,$06,$32,$06,$36,$05,$32,$06	;Trk A; title.mml: 12
	db	$36,$05,$3b,$06,$36,$06,$3b,$05	;Trk A; title.mml: 12
	db	$36,$06,$32,$06,$2b,$05,$32,$06	;Trk A; title.mml: 12
	db	$2b,$05,$26,$06,$fe,$80,$fd,$00	;Trk A; title.mml: 12
	db	$f8,$00,$2b,$38,$31,$0c,$32,$0b	;Trk A; title.mml: 13
	db	$34,$0b,$36,$17,$31,$16,$fc,$0b	;Trk A; title.mml: 13
	db	$31,$06,$32,$06,$34,$05,$31,$06	;Trk A; title.mml: 13
	db	$29,$05,$31,$06,$2b,$44,$fe,$82	;Trk A; title.mml: 13
	db	$fd,$01,$f8,$01,$32,$05,$2b,$06	;Trk A; title.mml: 13
	db	$32,$05,$36,$06,$3b,$06,$3b,$05	;Trk A; title.mml: 13
	db	$3b,$06,$fc,$43,$fc,$06,$fe,$82	;Trk A; title.mml: 13
	db	$fd,$01,$f8,$01,$fc,$17,$2b,$16	;Trk A; title.mml: 14
	db	$31,$17,$32,$16,$34,$17,$32,$16	;Trk A; title.mml: 14
	db	$31,$17,$32,$16,$31,$17,$24,$16	;Trk A; title.mml: 14
	db	$26,$17,$27,$16,$19,$0b,$fe,$80	;Trk A; title.mml: 14
	db	$fd,$00,$f8,$00,$29,$0c,$28,$0b	;Trk A; title.mml: 14
	db	$29,$0b,$30,$11,$2b,$11,$29,$0b	;Trk A; title.mml: 14
	db	$27,$17,$fe,$82,$fd,$01,$f8,$01	;Trk A; title.mml: 15
	db	$2b,$16,$31,$17,$32,$16,$34,$17	;Trk A; title.mml: 15
	db	$32,$16,$31,$17,$32,$16,$34,$17	;Trk A; title.mml: 15
	db	$31,$16,$32,$17,$34,$16,$19,$0b	;Trk A; title.mml: 15
	db	$fe,$80,$fd,$00,$f8,$00,$26,$0c	;Trk A; title.mml: 15
	db	$25,$0b,$26,$0b,$29,$11,$2b,$11	;Trk A; title.mml: 15
	db	$29,$0b,$27,$22,$26,$05,$27,$06	;Trk A; title.mml: 15
	db	$28,$11,$24,$11,$28,$0b,$29,$22	;Trk A; title.mml: 16
	db	$28,$05,$29,$06,$2a,$11,$26,$11	;Trk A; title.mml: 16
	db	$2a,$0b,$2b,$11,$31,$11,$32,$0b	;Trk A; title.mml: 16
	db	$34,$11,$32,$11,$31,$0b,$fc,$17	;Trk A; title.mml: 16
	db	$2b,$5a,$fe,$82,$fd,$01,$f8,$01	;Trk A; title.mml: 16
	db	$39,$16,$38,$17,$35,$16,$36,$87	;Trk A; title.mml: 17
	db	$fc,$2d,$ee
	db	bank(song_000_00_lp)*2
	dw	song_000_00_lp



	;; .bank	1
	;; .org	$a000

song_000_01:	;Trk B
	db	$fe,$82,$fd,$01,$f8,$01,$22,$0b	;Trk B; title.mml: 19
	db	$26,$0c,$2b,$0b,$32,$0b,$21,$0b	;Trk B; title.mml: 20
	db	$24,$0c,$29,$0b,$31,$0b,$22,$0b	;Trk B; title.mml: 20
	db	$27,$0c,$2b,$0b,$32,$0b,$26,$0b	;Trk B; title.mml: 20
	db	$2a,$0c,$31,$0b,$36,$0b,$32,$9e	;Trk B; title.mml: 20
	db	$fc,$16
song_000_01_lp:
	db	$1b,$06,$19,$05,$1b,$06,$22,$06	;Trk B; title.mml: 22
	db	$1b,$05,$19,$06,$1b,$05,$22,$06	;Trk B; title.mml: 22
	db	$1b,$06,$19,$05,$1b,$06,$22,$06	;Trk B; title.mml: 22
	db	$1b,$05,$19,$06,$1b,$05,$22,$06	;Trk B; title.mml: 22
	db	$1b,$06,$19,$05,$1b,$06,$16,$06	;Trk B; title.mml: 22
	db	$1b,$05,$19,$06,$1b,$05,$16,$06	;Trk B; title.mml: 22
	db	$1b,$06,$19,$05,$1b,$06,$16,$06	;Trk B; title.mml: 22
	db	$1b,$05,$19,$06,$1b,$05,$16,$06	;Trk B; title.mml: 22
	db	$1b,$06,$19,$05,$1b,$06,$22,$06	;Trk B; title.mml: 22
	db	$1b,$05,$19,$06,$1b,$05,$22,$06	;Trk B; title.mml: 22
	db	$1b,$06,$19,$05,$1b,$06,$22,$06	;Trk B; title.mml: 22
	db	$1b,$05,$19,$06,$1b,$05,$22,$06	;Trk B; title.mml: 22
	db	$22,$0b,$26,$0c,$2b,$0b,$32,$0b	;Trk B; title.mml: 22
	db	$2b,$0b,$26,$0c,$22,$0b,$1b,$0b	;Trk B; title.mml: 22
	db	$17,$06,$16,$05,$17,$06,$12,$06	;Trk B; title.mml: 23
	db	$17,$05,$16,$06,$17,$05,$12,$06	;Trk B; title.mml: 23
	db	$17,$06,$16,$05,$17,$06,$12,$06	;Trk B; title.mml: 23
	db	$17,$05,$16,$06,$17,$05,$12,$06	;Trk B; title.mml: 23
	db	$19,$06,$17,$05,$19,$06,$14,$06	;Trk B; title.mml: 23
	db	$19,$05,$17,$06,$19,$05,$14,$06	;Trk B; title.mml: 23
	db	$19,$06,$17,$05,$19,$06,$14,$06	;Trk B; title.mml: 23
	db	$19,$05,$17,$06,$19,$05,$14,$06	;Trk B; title.mml: 23
	db	$1b,$06,$19,$05,$1b,$06,$22,$06	;Trk B; title.mml: 23
	db	$1b,$05,$19,$06,$1b,$05,$22,$06	;Trk B; title.mml: 23
	db	$36,$06,$3b,$05,$36,$06,$32,$06	;Trk B; title.mml: 23
	db	$2b,$05,$32,$06,$2b,$05,$26,$06	;Trk B; title.mml: 23
	db	$1b,$17,$22,$16,$1b,$17,$18,$16	;Trk B; title.mml: 23
	db	$1b,$06,$19,$05,$1b,$06,$22,$06	;Trk B; title.mml: 24
	db	$1b,$05,$19,$06,$1b,$05,$22,$06	;Trk B; title.mml: 24
	db	$1b,$06,$19,$05,$1b,$06,$22,$06	;Trk B; title.mml: 24
	db	$1b,$05,$19,$06,$1b,$05,$22,$06	;Trk B; title.mml: 24
	db	$1b,$06,$19,$05,$1b,$06,$16,$06	;Trk B; title.mml: 24
	db	$1b,$05,$19,$06,$1b,$05,$16,$06	;Trk B; title.mml: 24
	db	$1b,$06,$19,$05,$1b,$06,$16,$06	;Trk B; title.mml: 24
	db	$1b,$05,$19,$06,$1b,$05,$16,$06	;Trk B; title.mml: 24
	db	$1b,$06,$19,$05,$1b,$06,$22,$06	;Trk B; title.mml: 24
	db	$1b,$05,$19,$06,$1b,$05,$22,$06	;Trk B; title.mml: 24
	db	$1b,$06,$19,$05,$1b,$06,$22,$06	;Trk B; title.mml: 24
	db	$1b,$05,$19,$06,$1b,$05,$22,$06	;Trk B; title.mml: 24
	db	$22,$0b,$26,$0c,$2b,$0b,$32,$0b	;Trk B; title.mml: 24
	db	$2b,$0b,$26,$0c,$22,$0b,$1b,$0b	;Trk B; title.mml: 24
	db	$17,$06,$16,$05,$17,$06,$12,$06	;Trk B; title.mml: 25
	db	$17,$05,$16,$06,$17,$05,$12,$06	;Trk B; title.mml: 25
	db	$17,$06,$16,$05,$17,$06,$12,$06	;Trk B; title.mml: 25
	db	$17,$05,$16,$06,$17,$05,$12,$06	;Trk B; title.mml: 25
	db	$19,$06,$17,$05,$19,$06,$14,$06	;Trk B; title.mml: 25
	db	$19,$05,$17,$06,$19,$05,$14,$06	;Trk B; title.mml: 25
	db	$19,$06,$17,$05,$19,$06,$14,$06	;Trk B; title.mml: 25
	db	$19,$05,$17,$06,$19,$05,$14,$06	;Trk B; title.mml: 25
	db	$1b,$06,$19,$05,$1b,$06,$22,$06	;Trk B; title.mml: 25
	db	$1b,$05,$19,$06,$1b,$05,$22,$06	;Trk B; title.mml: 25
	db	$26,$06,$22,$05,$26,$06,$2b,$06	;Trk B; title.mml: 25
	db	$26,$0b,$2b,$0b,$32,$06,$32,$05	;Trk B; title.mml: 25
	db	$32,$06,$fc,$43,$fc,$06,$22,$2d	;Trk B; title.mml: 25
	db	$24,$17,$26,$16,$27,$17,$26,$16	;Trk B; title.mml: 26
	db	$24,$17,$26,$16,$24,$17,$17,$16	;Trk B; title.mml: 26
	db	$19,$17,$1b,$16,$26,$17,$25,$0b	;Trk B; title.mml: 26
	db	$26,$0b,$29,$2d,$22,$2d,$24,$17	;Trk B; title.mml: 26
	db	$26,$16,$27,$17,$26,$16,$24,$17	;Trk B; title.mml: 27
	db	$26,$16,$27,$17,$24,$16,$26,$17	;Trk B; title.mml: 27
	db	$27,$16,$36,$17,$35,$0b,$36,$0b	;Trk B; title.mml: 27
	db	$39,$06,$36,$05,$33,$06,$2b,$06	;Trk B; title.mml: 27
	db	$33,$05,$2b,$06,$26,$05,$23,$06	;Trk B; title.mml: 27
	db	$27,$06,$24,$05,$27,$06,$2b,$06	;Trk B; title.mml: 28
	db	$34,$16,$2b,$11,$28,$11,$24,$0b	;Trk B; title.mml: 28
	db	$29,$06,$26,$05,$29,$06,$31,$06	;Trk B; title.mml: 28
	db	$36,$16,$31,$11,$2a,$11,$26,$0b	;Trk B; title.mml: 28
	db	$22,$11,$24,$11,$27,$0b,$29,$11	;Trk B; title.mml: 28
	db	$27,$11,$24,$0b,$fc,$17,$22,$1c	;Trk B; title.mml: 28
	db	$1b,$05,$22,$06,$26,$06,$2b,$05	;Trk B; title.mml: 29
	db	$26,$06,$22,$05,$26,$06,$22,$06	;Trk B; title.mml: 29
	db	$1b,$05,$22,$06,$26,$06,$2b,$05	;Trk B; title.mml: 29
	db	$26,$06,$22,$05,$26,$06,$22,$06	;Trk B; title.mml: 29
	db	$1b,$05,$22,$06,$26,$06,$2b,$05	;Trk B; title.mml: 29
	db	$26,$06,$22,$05,$26,$06,$22,$06	;Trk B; title.mml: 29
	db	$1b,$05,$22,$06,$26,$06,$2b,$05	;Trk B; title.mml: 29
	db	$26,$06,$22,$05,$26,$06,$22,$06	;Trk B; title.mml: 29
	db	$1b,$05,$22,$06,$26,$06,$2b,$05	;Trk B; title.mml: 29
	db	$26,$06,$2b,$05,$32,$06,$36,$06	;Trk B; title.mml: 29
	db	$3b,$05,$36,$06,$32,$06,$2b,$05	;Trk B; title.mml: 29
	db	$32,$06,$2b,$05,$26,$06,$22,$17	;Trk B; title.mml: 29
	db	$fc,$16,$ee
	db	bank(song_000_01_lp)*2
	dw	song_000_01_lp


song_000_02:	;Trk C
	db	$fe,$8f,$fc,$0b,$22,$04,$fc,$02	;Trk C; title.mml: 6
	db	$fc,$06,$1b,$14,$fc,$02,$fc,$0b	;Trk C; title.mml: 32
	db	$21,$04,$fc,$02,$fc,$06,$19,$14	;Trk C; title.mml: 32
	db	$fc,$02,$fc,$0b,$1b,$04,$fc,$02	;Trk C; title.mml: 32
	db	$fc,$06,$17,$14,$fc,$02,$fc,$17	;Trk C; title.mml: 32
	db	$f8,$05,$26,$14,$fc,$02,$f8,$ff	;Trk C; title.mml: 32
	db	$1b,$09,$fc,$02,$19,$0a,$fc,$02	;Trk C; title.mml: 32
	db	$1b,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 32
	db	$1b,$09,$fc,$02,$19,$0a,$fc,$02	;Trk C; title.mml: 32
	db	$1b,$09,$fc,$02,$16,$09,$fc,$02	;Trk C; title.mml: 32
	db	$1b,$09,$fc,$02,$19,$0a,$fc,$02	;Trk C; title.mml: 32
	db	$1b,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 32
	db	$1b,$09,$fc,$02,$19,$0a,$fc,$02	;Trk C; title.mml: 32
	db	$1b,$09,$fc,$02,$16,$09,$fc,$02	;Trk C; title.mml: 32

song_000_02_lp:
	db	$1b,$09,$fc,$02,$1b,$0a,$fc,$02	;Trk C; title.mml: 34
	db	$1b,$09,$fc,$02,$19,$09,$fc,$02	;Trk C; title.mml: 34
	db	$1b,$09,$fc,$02,$1b,$0a,$fc,$02	;Trk C; title.mml: 34
	db	$1b,$09,$fc,$02,$16,$09,$fc,$02	;Trk C; title.mml: 34
	db	$1b,$09,$fc,$02,$1b,$0a,$fc,$02	;Trk C; title.mml: 34
	db	$1b,$09,$fc,$02,$19,$09,$fc,$02	;Trk C; title.mml: 34
	db	$fc,$0b,$16,$0a,$fc,$02,$f8,$05	;Trk C; title.mml: 34
	db	$26,$14,$fc,$02,$f8,$ff,$1b,$09	;Trk C; title.mml: 34
	db	$fc,$02,$19,$0a,$fc,$02,$1b,$09	;Trk C; title.mml: 34
	db	$fc,$02,$22,$09,$fc,$02,$1b,$09	;Trk C; title.mml: 34
	db	$fc,$02,$19,$0a,$fc,$02,$1b,$09	;Trk C; title.mml: 34
	db	$fc,$02,$16,$09,$fc,$02,$1b,$09	;Trk C; title.mml: 34
	db	$fc,$02,$19,$0a,$fc,$02,$1b,$09	;Trk C; title.mml: 34
	db	$fc,$02,$22,$09,$fc,$02,$1b,$09	;Trk C; title.mml: 34
	db	$fc,$02,$2b,$04,$fc,$02,$fc,$06	;Trk C; title.mml: 34
	db	$19,$03,$fc,$02,$29,$0f,$fc,$02	;Trk C; title.mml: 34
	db	$17,$09,$fc,$02,$17,$0a,$fc,$02	;Trk C; title.mml: 35
	db	$17,$09,$fc,$02,$16,$09,$fc,$02	;Trk C; title.mml: 35
	db	$17,$09,$fc,$02,$17,$0a,$fc,$02	;Trk C; title.mml: 35
	db	$17,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 35
	db	$19,$09,$fc,$02,$19,$0a,$fc,$02	;Trk C; title.mml: 35
	db	$19,$09,$fc,$02,$17,$09,$fc,$02	;Trk C; title.mml: 35
	db	$fc,$0b,$19,$0a,$fc,$02,$f8,$05	;Trk C; title.mml: 35
	db	$26,$14,$fc,$02,$f8,$ff,$1b,$09	;Trk C; title.mml: 35
	db	$fc,$02,$19,$0a,$fc,$02,$1b,$09	;Trk C; title.mml: 35
	db	$fc,$02,$22,$09,$fc,$02,$1b,$09	;Trk C; title.mml: 35
	db	$fc,$02,$19,$0a,$fc,$02,$1b,$09	;Trk C; title.mml: 35
	db	$fc,$02,$16,$09,$fc,$02,$1b,$15	;Trk C; title.mml: 35
	db	$fc,$02,$1b,$14,$fc,$02,$1b,$09	;Trk C; title.mml: 35
	db	$fc,$02,$2b,$04,$fc,$02,$26,$04	;Trk C; title.mml: 35
	db	$fc,$02,$1b,$03,$fc,$02,$2b,$09	;Trk C; title.mml: 35
	db	$fc,$02,$26,$04,$fc,$02,$1b,$09	;Trk C; title.mml: 35
	db	$fc,$02,$1b,$0a,$fc,$02,$1b,$09	;Trk C; title.mml: 36
	db	$fc,$02,$19,$09,$fc,$02,$1b,$09	;Trk C; title.mml: 36
	db	$fc,$02,$1b,$0a,$fc,$02,$1b,$09	;Trk C; title.mml: 36
	db	$fc,$02,$16,$09,$fc,$02,$1b,$09	;Trk C; title.mml: 36
	db	$fc,$02,$1b,$0a,$fc,$02,$1b,$09	;Trk C; title.mml: 36
	db	$fc,$02,$19,$09,$fc,$02,$fc,$0b	;Trk C; title.mml: 36
	db	$16,$0a,$fc,$02,$f8,$05,$26,$14	;Trk C; title.mml: 36
	db	$fc,$02,$f8,$ff,$1b,$09,$fc,$02	;Trk C; title.mml: 36
	db	$19,$0a,$fc,$02,$1b,$09,$fc,$02	;Trk C; title.mml: 36
	db	$22,$09,$fc,$02,$1b,$09,$fc,$02	;Trk C; title.mml: 36
	db	$19,$0a,$fc,$02,$1b,$09,$fc,$02	;Trk C; title.mml: 36
	db	$16,$09,$fc,$02,$1b,$09,$fc,$02	;Trk C; title.mml: 36
	db	$19,$0a,$fc,$02,$1b,$09,$fc,$02	;Trk C; title.mml: 36
	db	$22,$09,$fc,$02,$1b,$09,$fc,$02	;Trk C; title.mml: 36
	db	$2b,$04,$fc,$02,$fc,$06,$19,$03	;Trk C; title.mml: 36
	db	$fc,$02,$29,$0f,$fc,$02,$17,$09	;Trk C; title.mml: 36
	db	$fc,$02,$17,$0a,$fc,$02,$17,$09	;Trk C; title.mml: 37
	db	$fc,$02,$16,$09,$fc,$02,$17,$09	;Trk C; title.mml: 37
	db	$fc,$02,$17,$0a,$fc,$02,$17,$09	;Trk C; title.mml: 37
	db	$fc,$02,$22,$09,$fc,$02,$19,$09	;Trk C; title.mml: 37
	db	$fc,$02,$19,$0a,$fc,$02,$19,$09	;Trk C; title.mml: 37
	db	$fc,$02,$17,$09,$fc,$02,$19,$09	;Trk C; title.mml: 37
	db	$fc,$02,$19,$0a,$fc,$02,$19,$09	;Trk C; title.mml: 37
	db	$fc,$02,$24,$09,$fc,$02,$1b,$09	;Trk C; title.mml: 37
	db	$fc,$02,$19,$0a,$fc,$02,$1b,$09	;Trk C; title.mml: 37
	db	$fc,$02,$22,$09,$fc,$02,$1b,$09	;Trk C; title.mml: 37
	db	$fc,$02,$19,$0a,$fc,$02,$1b,$09	;Trk C; title.mml: 37
	db	$fc,$02,$16,$09,$fc,$02,$1b,$04	;Trk C; title.mml: 37
	db	$fc,$02,$1b,$03,$fc,$02,$1b,$04	;Trk C; title.mml: 37
	db	$fc,$02,$fc,$11,$29,$05,$2b,$06	;Trk C; title.mml: 37
	db	$24,$04,$fc,$02,$26,$03,$fc,$02	;Trk C; title.mml: 37
	db	$24,$04,$fc,$02,$19,$04,$fc,$02	;Trk C; title.mml: 37
	db	$1b,$03,$fc,$02,$19,$0f,$fc,$02	;Trk C; title.mml: 37
	db	$17,$09,$fc,$02,$16,$0a,$fc,$02	;Trk C; title.mml: 38
	db	$17,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 38
	db	$17,$09,$fc,$02,$16,$0a,$fc,$02	;Trk C; title.mml: 38
	db	$17,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 38
	db	$17,$09,$fc,$02,$16,$0a,$fc,$02	;Trk C; title.mml: 38
	db	$17,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 38
	db	$17,$09,$fc,$02,$16,$0a,$fc,$02	;Trk C; title.mml: 38
	db	$17,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 38
	db	$19,$09,$fc,$02,$17,$0a,$fc,$02	;Trk C; title.mml: 38
	db	$19,$09,$fc,$02,$24,$09,$fc,$02	;Trk C; title.mml: 38
	db	$19,$09,$fc,$02,$17,$0a,$fc,$02	;Trk C; title.mml: 38
	db	$19,$09,$fc,$02,$24,$09,$fc,$02	;Trk C; title.mml: 38
	db	$22,$09,$fc,$02,$21,$0a,$fc,$02	;Trk C; title.mml: 38
	db	$22,$09,$fc,$02,$29,$09,$fc,$02	;Trk C; title.mml: 38
	db	$22,$09,$fc,$02,$32,$04,$fc,$02	;Trk C; title.mml: 38
	db	$22,$04,$fc,$02,$20,$03,$fc,$02	;Trk C; title.mml: 38
	db	$30,$0f,$fc,$02,$17,$09,$fc,$02	;Trk C; title.mml: 38
	db	$16,$0a,$fc,$02,$17,$09,$fc,$02	;Trk C; title.mml: 39
	db	$22,$09,$fc,$02,$17,$09,$fc,$02	;Trk C; title.mml: 39
	db	$16,$0a,$fc,$02,$17,$09,$fc,$02	;Trk C; title.mml: 39
	db	$22,$09,$fc,$02,$17,$09,$fc,$02	;Trk C; title.mml: 39
	db	$16,$0a,$fc,$02,$17,$09,$fc,$02	;Trk C; title.mml: 39
	db	$22,$09,$fc,$02,$17,$09,$fc,$02	;Trk C; title.mml: 39
	db	$16,$0a,$fc,$02,$17,$09,$fc,$02	;Trk C; title.mml: 39
	db	$22,$09,$fc,$02,$19,$09,$fc,$02	;Trk C; title.mml: 39
	db	$17,$0a,$fc,$02,$19,$09,$fc,$02	;Trk C; title.mml: 39
	db	$24,$09,$fc,$02,$19,$09,$fc,$02	;Trk C; title.mml: 39
	db	$17,$0a,$fc,$02,$19,$09,$fc,$02	;Trk C; title.mml: 39
	db	$24,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 39
	db	$21,$0a,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 39
	db	$29,$09,$fc,$02,$1b,$0f,$fc,$02	;Trk C; title.mml: 39
	db	$23,$0f,$fc,$02,$1b,$09,$fc,$02	;Trk C; title.mml: 39
	db	$14,$0f,$fc,$02,$24,$0f,$fc,$02	;Trk C; title.mml: 40
	db	$22,$05,$24,$06,$14,$04,$fc,$02	;Trk C; title.mml: 40
	db	$24,$03,$fc,$02,$1b,$04,$fc,$02	;Trk C; title.mml: 40
	db	$14,$1a,$fc,$02,$16,$0f,$fc,$02	;Trk C; title.mml: 40
	db	$26,$0f,$fc,$02,$24,$05,$26,$06	;Trk C; title.mml: 40
	db	$16,$04,$fc,$02,$26,$03,$fc,$02	;Trk C; title.mml: 40
	db	$21,$04,$fc,$02,$16,$1a,$fc,$02	;Trk C; title.mml: 40
	db	$17,$2b,$fc,$02,$19,$2b,$fc,$02	;Trk C; title.mml: 40
	db	$f8,$05,$26,$15,$fc,$02,$f8,$ff	;Trk C; title.mml: 40
	db	$1b,$1f,$fc,$02,$19,$0a,$fc,$02	;Trk C; title.mml: 40
	db	$1b,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 41
	db	$1b,$09,$fc,$02,$19,$0a,$fc,$02	;Trk C; title.mml: 41
	db	$1b,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 41
	db	$1b,$09,$fc,$02,$19,$0a,$fc,$02	;Trk C; title.mml: 41
	db	$1b,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 41
	db	$1b,$09,$fc,$02,$19,$0a,$fc,$02	;Trk C; title.mml: 41
	db	$1b,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 41
	db	$1b,$09,$fc,$02,$19,$0a,$fc,$02	;Trk C; title.mml: 41
	db	$1b,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 41
	db	$1b,$09,$fc,$02,$19,$0a,$fc,$02	;Trk C; title.mml: 41
	db	$1b,$09,$fc,$02,$22,$09,$fc,$02	;Trk C; title.mml: 41
	db	$16,$2b,$fc,$02,$ee
	db	bank(song_000_02_lp)*2
	dw	song_000_02_lp


song_000_03:	;Trk D
	db	$fe,$8f,$fc,$17,$fd,$07,$03,$2d	;Trk D; title.mml: 6
	db	$05,$16,$f4,$17,$03,$43,$fd,$05	;Trk D; title.mml: 43
	db	$00,$06,$00,$05,$00,$06,$00,$06	;Trk D; title.mml: 43
	db	$00,$05,$00,$06,$fd,$06,$03,$05	;Trk D; title.mml: 43
	db	$fd,$05,$00,$06,$fd,$06,$03,$06	;Trk D; title.mml: 43
	db	$fd,$05,$00,$05,$00,$06,$fd,$06	;Trk D; title.mml: 43
	db	$03,$06,$fd,$05,$00,$05,$00,$06	;Trk D; title.mml: 43
	db	$00,$05,$00,$06,$fd,$05,$00,$06	;Trk D; title.mml: 43
	db	$00,$05,$00,$06,$00,$06,$00,$05	;Trk D; title.mml: 43
	db	$00,$06,$fd,$06,$03,$05,$fd,$05	;Trk D; title.mml: 43
	db	$00,$06,$fd,$06,$03,$06,$fd,$05	;Trk D; title.mml: 43
	db	$00,$05,$00,$06,$fd,$06,$03,$06	;Trk D; title.mml: 43
	db	$fc,$16
song_000_03_lp:
	db	$fd,$07,$03,$5a,$f4,$5a,$fd,$05	;Trk D; title.mml: 45
	db	$00,$0b,$00,$06,$00,$06,$00,$0b	;Trk D; title.mml: 45
	db	$00,$05,$00,$06,$00,$0b,$00,$06	;Trk D; title.mml: 45
	db	$00,$06,$00,$0b,$00,$05,$00,$06	;Trk D; title.mml: 45
	db	$00,$0b,$00,$06,$00,$06,$00,$0b	;Trk D; title.mml: 45
	db	$00,$05,$00,$06,$fc,$2d,$fd,$07	;Trk D; title.mml: 45
	db	$03,$5a,$f4,$5a,$fd,$05,$00,$0b	;Trk D; title.mml: 46
	db	$00,$06,$00,$06,$00,$0b,$00,$05	;Trk D; title.mml: 46
	db	$00,$06,$00,$0b,$00,$06,$00,$06	;Trk D; title.mml: 46
	db	$00,$0b,$00,$05,$00,$06,$fc,$17	;Trk D; title.mml: 46
	db	$fd,$07,$05,$16,$03,$17,$05,$16	;Trk D; title.mml: 46
	db	$fd,$07,$03,$5a,$f4,$5a,$fd,$05	;Trk D; title.mml: 47
	db	$00,$0b,$00,$06,$00,$06,$00,$0b	;Trk D; title.mml: 47
	db	$00,$05,$00,$06,$00,$0b,$00,$06	;Trk D; title.mml: 47
	db	$00,$06,$00,$0b,$00,$05,$00,$06	;Trk D; title.mml: 47
	db	$00,$0b,$00,$06,$00,$06,$00,$0b	;Trk D; title.mml: 47
	db	$00,$05,$00,$06,$fc,$2d,$fd,$07	;Trk D; title.mml: 47
	db	$03,$5a,$f4,$5a,$fd,$05,$00,$0b	;Trk D; title.mml: 48
	db	$00,$06,$00,$06,$00,$0b,$00,$05	;Trk D; title.mml: 48
	db	$00,$06,$00,$0b,$00,$06,$00,$06	;Trk D; title.mml: 48
	db	$00,$0b,$00,$05,$00,$06,$fc,$5a	;Trk D; title.mml: 48
	db	$fd,$05,$00,$0b,$00,$06,$00,$06	;Trk D; title.mml: 49
	db	$00,$0b,$00,$05,$00,$06,$00,$0b	;Trk D; title.mml: 49
	db	$00,$06,$00,$06,$00,$0b,$00,$05	;Trk D; title.mml: 49
	db	$00,$06,$00,$0b,$00,$06,$00,$06	;Trk D; title.mml: 49
	db	$00,$0b,$00,$05,$00,$06,$00,$0b	;Trk D; title.mml: 49
	db	$00,$06,$00,$06,$00,$0b,$00,$05	;Trk D; title.mml: 49
	db	$00,$06,$00,$0b,$00,$06,$00,$06	;Trk D; title.mml: 49
	db	$00,$0b,$00,$05,$00,$06,$00,$0b	;Trk D; title.mml: 49
	db	$00,$06,$00,$06,$00,$0b,$00,$05	;Trk D; title.mml: 49
	db	$00,$06,$00,$0b,$00,$06,$00,$06	;Trk D; title.mml: 49
	db	$00,$0b,$00,$05,$00,$06,$00,$0b	;Trk D; title.mml: 49
	db	$00,$06,$00,$06,$00,$0b,$00,$05	;Trk D; title.mml: 49
	db	$00,$06,$fd,$05,$00,$0b,$00,$06	;Trk D; title.mml: 49
	db	$00,$06,$00,$0b,$00,$05,$00,$06	;Trk D; title.mml: 50
	db	$00,$0b,$00,$06,$00,$06,$00,$0b	;Trk D; title.mml: 50
	db	$00,$05,$00,$06,$00,$0b,$00,$06	;Trk D; title.mml: 50
	db	$00,$06,$00,$0b,$00,$05,$00,$06	;Trk D; title.mml: 50
	db	$00,$0b,$00,$06,$00,$06,$00,$0b	;Trk D; title.mml: 50
	db	$00,$05,$00,$06,$00,$0b,$00,$06	;Trk D; title.mml: 50
	db	$00,$06,$00,$0b,$00,$05,$00,$06	;Trk D; title.mml: 50
	db	$00,$0b,$00,$06,$00,$06,$00,$0b	;Trk D; title.mml: 50
	db	$00,$05,$00,$06,$00,$0b,$00,$06	;Trk D; title.mml: 50
	db	$00,$06,$fc,$16,$fd,$07,$05,$11	;Trk D; title.mml: 50
	db	$03,$11,$05,$0b,$fd,$07,$03,$5a	;Trk D; title.mml: 50
	db	$05,$5a,$fc,$5a,$fc,$17,$fd,$07	;Trk D; title.mml: 51
	db	$03,$16,$f4,$22,$fd,$06,$03,$05	;Trk D; title.mml: 51
	db	$fd,$05,$00,$06,$fd,$06,$03,$06	;Trk D; title.mml: 52
	db	$fd,$05,$00,$05,$00,$06,$fd,$06	;Trk D; title.mml: 52
	db	$03,$06,$fd,$05,$00,$05,$00,$06	;Trk D; title.mml: 52
	db	$fd,$06,$03,$05,$fd,$05,$00,$06	;Trk D; title.mml: 52
	db	$00,$06,$00,$05,$00,$06,$00,$06	;Trk D; title.mml: 52
	db	$00,$05,$00,$06,$00,$05,$00,$06	;Trk D; title.mml: 52
	db	$fd,$06,$03,$06,$fd,$05,$00,$05	;Trk D; title.mml: 52
	db	$00,$06,$fd,$06,$03,$06,$fd,$05	;Trk D; title.mml: 52
	db	$00,$05,$00,$06,$fd,$06,$03,$05	;Trk D; title.mml: 52
	db	$fd,$05,$00,$06,$00,$06,$00,$05	;Trk D; title.mml: 52
	db	$00,$06,$00,$06,$00,$05,$00,$06	;Trk D; title.mml: 52
	db	$00,$05,$00,$06,$fd,$06,$03,$06	;Trk D; title.mml: 52
	db	$fd,$05,$00,$05,$00,$06,$fd,$06	;Trk D; title.mml: 52
	db	$03,$06,$fd,$05,$00,$05,$00,$06	;Trk D; title.mml: 52
	db	$fd,$06,$03,$05,$fd,$05,$00,$06	;Trk D; title.mml: 52
	db	$fc,$2d,$ee
	db	bank(song_000_03_lp)*2
	dw	song_000_03_lp


song_000_04:	;Trk E
	db	$00,$06,$07,$05,$05,$06,$04,$06	;Trk E; title.mml: 55
	db	$00,$16,$00,$06,$07,$05,$05,$06	;Trk E; title.mml: 55
	db	$04,$06,$00,$16,$00,$06,$07,$05	;Trk E; title.mml: 55
	db	$05,$06,$04,$06,$00,$16,$00,$06	;Trk E; title.mml: 55
	db	$02,$05,$02,$0c,$02,$05,$02,$0b	;Trk E; title.mml: 55
	db	$02,$06,$00,$17,$00,$16,$00,$17	;Trk E; title.mml: 55
	db	$00,$16,$00,$17,$00,$16,$00,$17	;Trk E; title.mml: 55
	db	$02,$05,$02,$06,$02,$05,$02,$06	;Trk E; title.mml: 55

song_000_04_lp:
	db	$00,$17,$00,$16,$00,$17,$00,$16	;Trk E; title.mml: 57
	db	$00,$17,$00,$16,$00,$06,$02,$05	;Trk E; title.mml: 57
	db	$02,$0c,$02,$0b,$07,$05,$05,$06	;Trk E; title.mml: 57
	db	$00,$17,$02,$16,$00,$0b,$00,$0c	;Trk E; title.mml: 57
	db	$02,$16,$00,$17,$02,$16,$00,$06	;Trk E; title.mml: 57
	db	$02,$05,$02,$0c,$02,$05,$02,$0b	;Trk E; title.mml: 57
	db	$02,$06,$00,$17,$00,$16,$00,$17	;Trk E; title.mml: 57
	db	$00,$16,$00,$17,$00,$16,$00,$06	;Trk E; title.mml: 58
	db	$02,$05,$02,$0c,$02,$0b,$07,$05	;Trk E; title.mml: 58
	db	$05,$06,$00,$17,$02,$16,$00,$0b	;Trk E; title.mml: 58
	db	$00,$0c,$02,$16,$07,$06,$07,$05	;Trk E; title.mml: 58
	db	$05,$06,$04,$06,$00,$16,$00,$17	;Trk E; title.mml: 58
	db	$00,$05,$02,$06,$02,$05,$02,$06	;Trk E; title.mml: 58
	db	$00,$17,$00,$16,$00,$17,$00,$16	;Trk E; title.mml: 59
	db	$00,$17,$00,$16,$00,$06,$02,$05	;Trk E; title.mml: 59
	db	$02,$0c,$02,$0b,$07,$05,$05,$06	;Trk E; title.mml: 59
	db	$00,$17,$02,$16,$00,$0b,$00,$0c	;Trk E; title.mml: 59
	db	$02,$16,$00,$17,$02,$16,$00,$06	;Trk E; title.mml: 59
	db	$02,$05,$02,$0c,$02,$05,$02,$0b	;Trk E; title.mml: 59
	db	$02,$06,$00,$17,$00,$16,$00,$17	;Trk E; title.mml: 59
	db	$00,$16,$00,$17,$00,$16,$00,$06	;Trk E; title.mml: 60
	db	$02,$05,$02,$0c,$02,$0b,$07,$05	;Trk E; title.mml: 60
	db	$05,$06,$00,$17,$02,$16,$00,$0b	;Trk E; title.mml: 60
	db	$00,$0c,$02,$16,$02,$06,$02,$05	;Trk E; title.mml: 60
	db	$02,$28,$07,$05,$05,$06,$04,$06	;Trk E; title.mml: 60
	db	$04,$16,$00,$17,$02,$16,$00,$0b	;Trk E; title.mml: 60
	db	$00,$0c,$02,$16,$00,$17,$02,$0b	;Trk E; title.mml: 61
	db	$00,$16,$00,$0c,$02,$16,$00,$17	;Trk E; title.mml: 61
	db	$02,$16,$00,$0b,$00,$0c,$02,$16	;Trk E; title.mml: 61
	db	$00,$17,$02,$0b,$00,$16,$00,$0c	;Trk E; title.mml: 61
	db	$02,$16,$00,$17,$02,$16,$00,$0b	;Trk E; title.mml: 61
	db	$00,$0c,$02,$16,$00,$17,$02,$0b	;Trk E; title.mml: 62
	db	$00,$16,$00,$0c,$02,$16,$00,$17	;Trk E; title.mml: 62
	db	$02,$16,$00,$0b,$00,$0c,$02,$16	;Trk E; title.mml: 62
	db	$00,$17,$02,$0b,$02,$05,$02,$06	;Trk E; title.mml: 62
	db	$00,$11,$00,$11,$00,$0b,$00,$17	;Trk E; title.mml: 62
	db	$02,$05,$02,$06,$02,$05,$02,$06	;Trk E; title.mml: 63
	db	$00,$06,$07,$05,$05,$06,$00,$06	;Trk E; title.mml: 63
	db	$05,$05,$04,$06,$07,$05,$05,$06	;Trk E; title.mml: 63
	db	$00,$17,$02,$05,$02,$06,$02,$05	;Trk E; title.mml: 63
	db	$02,$06,$00,$06,$07,$05,$05,$06	;Trk E; title.mml: 63
	db	$00,$06,$05,$05,$04,$06,$07,$05	;Trk E; title.mml: 63
	db	$05,$06,$00,$5a,$07,$06,$05,$05	;Trk E; title.mml: 63
	db	$04,$06,$04,$06,$00,$2d,$00,$16	;Trk E; title.mml: 63
	db	$00,$17,$00,$16,$00,$17,$00,$16	;Trk E; title.mml: 64
	db	$00,$17,$00,$16,$00,$17,$00,$16	;Trk E; title.mml: 64
	db	$00,$17,$00,$16,$02,$06,$07,$05	;Trk E; title.mml: 64
	db	$05,$06,$02,$06,$05,$05,$04,$06	;Trk E; title.mml: 64
	db	$02,$05,$04,$06,$ee
	db	bank(song_000_04_lp)*2
	dw	song_000_04_lp

