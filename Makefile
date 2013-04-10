
all:
	../bin/fc -o darius.nes -d -t nes main.fc

.PHONY: clean
clean:
	rm -f darius.nes darius.lst darius.html darius.asm darius*.zip darius.nes

.PHONY: archive
archive:
	zip darius`date +%Y%m%d`.zip darius.nes
