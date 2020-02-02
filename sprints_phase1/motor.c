#include "motor.h"

void Motor_init()
{
	SET_BIT(DDRD, Motor1_dir1);
	SET_BIT(DDRD, Motor1_dir2);
	SET_BIT(DDRD, Motor1_EN);
	CLEAR_BIT(PORTD, Motor1_dir1);
	CLEAR_BIT(PORTD, Motor1_dir2);
	SET_BIT(PORTD, Motor1_EN);
	SET_BIT(DDRD, Motor2_dir1);
	SET_BIT(DDRD, Motor2_dir2);
	SET_BIT(DDRD, Motor2_EN);
	CLEAR_BIT(PORTD, Motor2_dir1);
	CLEAR_BIT(PORTD, Motor2_dir2);
	SET_BIT(PORTD, Motor2_EN);
}

void Motor_move_forward()
{
	CLEAR_BIT(PORTD, Motor1_dir1);
	SET_BIT(PORTD, Motor1_dir2);
	SET_BIT(PORTD, Motor2_dir1);
	CLEAR_BIT(PORTD, Motor2_dir2);
}

void Motor_move_backward()
{
	SET_BIT(PORTD, Motor1_dir1);
	CLEAR_BIT(PORTD, Motor1_dir2);
	CLEAR_BIT(PORTD, Motor2_dir1);
	SET_BIT(PORTD, Motor2_dir2);
}

void Motor_turn_right()
{
	CLEAR_BIT(PORTD, Motor1_dir1);
	SET_BIT(PORTD, Motor1_dir2);
	CLEAR_BIT(PORTD, Motor2_dir1);
	SET_BIT(PORTD, Motor2_dir2);
}

void Motor_turn_left()
{
	SET_BIT(PORTD, Motor1_dir1);
	CLEAR_BIT(PORTD, Motor1_dir2);
	CLEAR_BIT(PORTD, Motor2_dir1);
	SET_BIT(PORTD, Motor2_dir2);
}

void Motor_slide_right()
{
	CLEAR_BIT(PORTD, Motor1_dir1);
	SET_BIT(PORTD, Motor1_dir2);
	CLEAR_BIT(PORTD, Motor2_dir1);
	CLEAR_BIT(PORTD, Motor2_dir2);
}

void Motor_slide_left()
{
	CLEAR_BIT(PORTD, Motor1_dir1);
	CLEAR_BIT(PORTD, Motor1_dir2);
	CLEAR_BIT(PORTD, Motor2_dir1);
	SET_BIT(PORTD, Motor2_dir2);
}

void Motor_stop()
{
	CLEAR_BIT(PORTD, Motor1_dir1);
	CLEAR_BIT(PORTD, Motor1_dir2);
	CLEAR_BIT(PORTD, Motor2_dir1);
	CLEAR_BIT(PORTD, Motor2_dir2);
}
