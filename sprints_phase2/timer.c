/*
 * TIMER.c
 *
 *  Created on: 02 feb, 2020
 *      Author: Hazem
 */


#include"timer.h"

volatile uint8_t pulse_flag = 0;
volatile uint16_t g_tick = 0;


ISR(TIMER0_OVF_vect)
{
//	if(pulse_flag==0){
//		pulse_flag = 1;
//		CLEAR_BIT(PORTA, PIN0);
//	}
//	else{
		g_tick++;
		CLEAR_BIT(PORTB,PIN4);
		if(g_tick > 50000)
		{
			//TOGGLE_BIT(PORTB, PIN4);
			g_tick=0;
		}
//	}
//
}

/* Description : 
 * For clock=16Mhz and pre-scale F_CPU/8 every count will take 0.5us
 * initial timer counter=235
 */

void timer0_init(void)
{
	TCNT0 = 235; //timer initial value
	SET_BIT(TIMSK,TOIE0); //enable overflow interrupt
	SET_BIT(TCCR0,FOC0);
	SET_BIT(TCCR0,CS01);
}

