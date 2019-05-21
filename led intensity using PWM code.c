/*
 *led intensity using PWM code.c
 *
 * Created: 16-May-19 11:24:18 AM
 * Author : lenovo
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <inttypes.h>
#include <util/delay.h>
voidPWM_init()
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB|=(1<<PB3);
}
int main()
{
	unsigned char duty;
	PWM_init();
	while (1) 
    {
	for(duty=0;duty<255;duty++)
	{
		OCR0=duty;
		delay_ms(8);
	}
	for(duty=255;duty>1;duty--)
	{
		OCR0=duty;
		delay_ms(8);
	}
	}
}

