#
#  呼吸灯 
#
#  姚飞
#

#for Fedora use 
PREFIX=sdcc-
#
CC=$(PREFIX)sdcc
PACKIHX=$(PREFIX)packihx

# for STC15F104E or STC15F104W
STC15FLAGS =  --iram-size 128 --no-xinit-opt 


all: huxi.ihx

huxi.ihx: huxi.c
	$(CC) $(STC15FLAGS) -o $@ $^
	$(PACKIHX) $@ > huxi.hex

log:
	git pull
	git log --format=short --graph > ChangeLog

clean:
	-rm -f *.ihx *.hex *.asm *.lnk *.lst *.map *.mem *.rel *.o  *.sym *.rst *~ *.lk *.bin

