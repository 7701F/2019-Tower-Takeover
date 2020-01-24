#include "main.h"

// Driving Motors
pros::Motor left_mtr(12,MOTOR_GEARSET_18,false,MOTOR_ENCODER_ROTATIONS);
pros::Motor right_mtr(11,MOTOR_GEARSET_18,true,MOTOR_ENCODER_ROTATIONS);    
// Arm Motors
pros::Motor arm0_mtr(18,MOTOR_GEARSET_36,false,MOTOR_ENCODER_ROTATIONS);
pros::Motor arm1_mtr(19,MOTOR_GEARSET_36,false,MOTOR_ENCODER_ROTATIONS);
pros::Motor arm2_mtr(20,MOTOR_GEARSET_36,false,MOTOR_ENCODER_ROTATIONS);

// Claw Motor
pros::Motor claw_mtr(14,MOTOR_GEARSET_36,false,MOTOR_ENCODER_ROTATIONS);
