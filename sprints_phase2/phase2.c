/*
 * main.c
 *
 *  Created on: Feb 2, 2020
 *      Author: Hatem
 */

#include "ultrasonic.h"
#include "motor.h"
#include "timer.h"

extern volatile uint8_t g_tick;
extern volatile uint16_t Distance;

int main()
{
	SET_BIT(DDRB, PIN4);
//	SET_BIT(DDRB, PIN5);
//	CLEAR_BIT(PORTB, PIN4);
//	Ultrasonic_init();
//	Ultrasonic_en_interrupt();
	SET_BIT(PORTB,PIN4);
timer0_init();
	while(1)
	{

//		if(g_tick == 0)
//		{
//			Ultrasonic_start();
//		}
//		if(Distance < 10)
//		{
//			CLEAR_BIT(PORTB, PIN4);
//		}
//		else
//		{
//			SET_BIT(PORTB, PIN4);
//		}
	}
}
