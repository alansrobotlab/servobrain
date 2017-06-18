avrdude -Cavrdude.conf -v -pattiny85 -carduino -PCOM4 -b19200 -U flash:w:%1:i -U lfuse:w:0xc2:m -U hfuse:w:0xd6:m -U efuse:w:0xfe:m


pause