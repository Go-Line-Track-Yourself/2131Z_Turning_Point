#include "Custom/Configs/Motors-Config.hpp"
#include "main.h"

namespace Drive {
  okapi::Motor FRMotor(5,true,okapi::AbstractMotor::gearset::green,okapi::AbstractMotor::encoderUnits::degrees);
  okapi::Motor BRMotor(10,true,okapi::AbstractMotor::gearset::green,okapi::AbstractMotor::encoderUnits::degrees);
  okapi::Motor FLMotor(2,false,okapi::AbstractMotor::gearset::green,okapi::AbstractMotor::encoderUnits::degrees);
  okapi::Motor BLMotor(1,false,okapi::AbstractMotor::gearset::green,okapi::AbstractMotor::encoderUnits::degrees);
}
namespace Intake {
  okapi::Motor TFeederMotor(9,false,okapi::AbstractMotor::gearset::green,okapi::AbstractMotor::encoderUnits::degrees);
  okapi::Motor IntakerMotor(3,false,okapi::AbstractMotor::gearset::green,okapi::AbstractMotor::encoderUnits::degrees);
}
namespace Puncher {
  okapi::Motor PuncherMotor(7,false,okapi::AbstractMotor::gearset::red,okapi::AbstractMotor::encoderUnits::degrees);
}
namespace Lift {
  okapi::Motor LiftMotor(8,false,okapi::AbstractMotor::gearset::green,okapi::AbstractMotor::encoderUnits::degrees);
}
