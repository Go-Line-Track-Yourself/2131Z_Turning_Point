#include "Custom/MechSetMotors.hpp"


pros::Controller Master_Controller(pres::E_CONTROLLER_MASTER);

pros::Motor FRMotor(5,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor FRMotor(10,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor FRMotor(2,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor FRMotor(1,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor FRMotor(9,pros::MECH_SET_MOTOR_GEARSET_6,true,pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor FRMotor(3,pros::MECH_SET_MOTOR_GEARSET_36,true,pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor FRMotor(7,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor FRMotor(8,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);

pros::ADIPotentiometer AutonSelectOne(B);
pros::ADIPotentiometer AutonSelectTwo(C);
pros::ADILineSensor BallSenseBottom(E);
pros::ADILineSensor BallSenseTop(D);
pros::ADILineSensor BallSenseMiddle(F);
pros::ADILineSensor BallSenseNope(G);
