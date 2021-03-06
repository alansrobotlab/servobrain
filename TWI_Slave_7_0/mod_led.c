/*
 * The MIT License (MIT)
 * 
 * Copyright (c) 2016 Nels D. "Chip" Pearson (aka CmdrZin)
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * mod_led.c
 *
 * Created: 5/18/2015		v0.01	ndp
 *  Author: Chip
 * revision:	9/12/2016	v0.02	ndp	mod for FaceBoard
 */ 

#include <avr/io.h>

#include "mod_led.h"

void mod_led_init()
{
	DEV_LED_DDR |= (1<<DEV_LED_OUT_PIN);			// set HIGH for output

	return;
}

/*
 * Turn LED OFF
 */
void mod_led_on()
{
	// Reverse logic for demo board use.
	DEV_LED_PORT |= (1<<DEV_LED_OUT_PIN);			// set HIGH

	return;
}

/*
 * Turn LED ON
 */
void mod_led_off()
{
	// Reverse logic for demo board use.
	DEV_LED_PORT &= ~(1<<DEV_LED_OUT_PIN);			// set LOW

	return;
}

/*
 * Toggle LED ON n times.
 */
void mod_led_toggle(uint8_t val)
{
	for(uint8_t i=0; i<val; ++i)
	{
		mod_led_on();
		asm("nop");
		asm("nop");
		asm("nop");
		mod_led_off();
		asm("nop");
		asm("nop");
		asm("nop");
	}
}
