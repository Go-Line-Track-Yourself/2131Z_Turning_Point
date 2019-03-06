#ifndef MOTORS_CONFIG_HPP
#define MOTORS_CONFIG_HPP
#include "api.h"


namespace DriveMotors {
  extern pros::Motor FRMotor;
  extern pros::Motor BRMotor;
  extern pros::Motor FLMotor;
  extern pros::Motor BLMotor;
}
 namespace IntakeMotors {
    extern pros::Motor TFeederMotor;
    extern pros::Motor IntakerMotor;
}
 namespace PuncherMotors {
    extern pros::Motor PuncherMotor;
}
namespace LiftMotors {
    extern pros::Motor LiftMotor;
}

#endif /* end of include guard: MOTORS_CONFIG.HPP */
