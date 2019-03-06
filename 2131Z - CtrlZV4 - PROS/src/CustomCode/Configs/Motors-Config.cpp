#include "Custom/Configs/Motors-Config.hpp"

namespace DriveMotors {
  pros::Motor FRMotor(5,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
  pros::Motor BRMotor(10,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
  pros::Motor FLMotor(2,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
  pros::Motor BLMotor(1,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
}
namespace IntakeMotors{
  pros::Motor TFeederMotor(9,pros::MECH_SET_MOTOR_GEARSET_6,true,pros::E_MOTOR_ENCODER_DEGREES);
  pros::Motor IntakerMotor(3,pros::MECH_SET_MOTOR_GEARSET_36,true,pros::E_MOTOR_ENCODER_DEGREES);
}
namespace PuncherMotors {
  pros::Motor PuncherMotor(7,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
}
namespace LiftMotors {
  pros::Motor LiftMotor(8,pros::MECH_SET_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
}
