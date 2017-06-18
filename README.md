# ServoBrain

Everything posted here is currently *alpha* quality but here is the ghist...

ServoBrain is an ATTiny85 carrier board designed to fit under the cover of a standard or giant servo.  

ServoBrain is set up to take over all servo communications and to communicate to the host via i2c.  It also leverages Chip's incredible rewrite of Microchip App Note AVR112 which provides for an ATTiny85 bootloader and allows loading of programs over i2c!
https://github.com/CmdrZin/chips_avr_examples/tree/master/AT85_I2C_Bootloader

It can also be used an a generic IOT device, and exposes all 6 output pins for your use.  The current board accepts +6v, and runs at 3.3v.  It's important to limit inputs to 3.3v or less.

Generally speaking, here are the cliff notes for use:
 - use an Arduino Ino, and Arduino as ISP to program the fuses, and load the bootloader onto the board, there's batch files and sample hex files in the arduino directory
   - set up a daughterboard / shield by following the hookup diagram and instructions here:  http://www.instructables.com/id/Program-an-ATtiny-with-Arduino/
 - Once the bootloader is loaded, you can load the TWI_Master .hex onto the arduino Uno
   - set up another daughterboard / shield (schematic tbd) to program the ServoBrain over i2c
   - note that at present the master and slave must be powered up at the same time,  this will be updated eventually to allow hotplugging
 - Look at the sample batch file in the avrdude folder for the proper way to load binaries over i2c
 - Wiring Diagram TBD for how to hook up the board into a Servo
