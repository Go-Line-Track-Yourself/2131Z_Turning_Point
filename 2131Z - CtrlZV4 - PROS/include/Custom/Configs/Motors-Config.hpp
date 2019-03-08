#ifndef MOTORS_CONFIG_HPP
#define MOTORS_CONFIG_HPP


namespace Drive{
  extern okapi::Motor FRMotor;
  extern okapi::Motor BRMotor;
  extern okapi::Motor FLMotor;
  extern okapi::Motor BLMotor;
}
 namespace Intake{
    extern okapi::Motor TFeederMotor;
    extern okapi::Motor IntakerMotor;
}
 namespace Puncher{
    extern okapi::Motor PuncherMotor;
}
namespace Lift{
    extern okapi::Motor LiftMotor;
}

#endif /* end of include guard: MOTORS_CONFIG.HPP */
