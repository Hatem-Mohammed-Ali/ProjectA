/*
 * MOTOR_INT.h
 *
 *  Created on: Jan 27, 2020
 *      Author: Hatem
 */

#ifndef __MOTOR_INT_H__
#define __MOTOR_INT_H__

#include "bit_math.h"
#include "reg.h"
#include "std_types.h"

#define ControlPort PORTD
#define Motor1_dir1 PIN2
#define Motor1_dir2 PIN3
#define Motor1_EN PIN4
#define Motor2_dir1 PIN6
#define Motor2_dir2 PIN7
#define Motor2_EN PIN5



extern void Motor_init();
extern void Motor_move_forward();
void Motor_move_backward();
void Motor_turn_right();
void Motor_turn_left();
void Motor_slide_right();
void Motor_slide_left();
void Motor_stop();

#endif /* __BIT_MATH_H__ */
