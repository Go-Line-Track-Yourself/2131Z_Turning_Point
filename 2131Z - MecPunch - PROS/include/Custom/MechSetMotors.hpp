#ifndef MECH_SET_MOTORS.HPP
#define MECH_SET_MOTORS.HPP
#include "api.h"

extern pros::Controller Master_Controller;

extern pros::Motor FRMotor;
extern pros::Motor BRMotor;
extern pros::Motor FLMotor;
extern pros::Motor BLMotor;
extern pros::Motor TFeederMotor;
extern pros::Motor PuncherMotor;
extern pros::Motor IntakerMotor;
extern pros::Motor AdjustMotor;

extern pros::ADIPotentiometer AutonSelectOne;
extern pros::ADIPotentiometer AutonSelectTwo;
extern pros::ADILineSensor BallSenseBottom;
extern pros::ADILineSensor BallSenseTop;
extern pros::ADILineSensor BallSenseMiddle;
extern pros::ADILineSensor BallSenseNope;


#endif /* end of include guard: MECH_SET_MOTORS.HPP */
