#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "lcd.h"	/* Include LCD header file */
#include "icu.h"    /* Include ICU header file */
#include "std_types.h"
#include "Ultrasonic.h" /* Include Ultrasonic header file */
int main(void)
{
 uint16 distance;
 LCD_init();
 Ultrasonic_init();
 sei(); //enable interrupts
while(1)
{
	distance=(uint16)(Ultrasonic_readDistance())/(58);
	LCD_moveCursor(0,1);
	LCD_displayString("Distance= ");
	if(distance>100)
	{
    LCD_intgerToString(distance);
	}
	else
	{
		LCD_intgerToString(distance);
		LCD_displayCharacter(' ');
	}
	LCD_displayString("cm");
    _delay_ms(100);
}
}
