#ifndef CONTROLLER_CONFIG.HPP
#define CONTROLLER_CONFIG.HPP
#include "okapi/api.h"

extern okapi::Controller Master_Controller;

namespace Drive{
  extern okapi::ControllerButton FlipDrive;
  extern okapi::ControllerButton DriveLock;
}
namespace Intake{
  extern okapi::ControllerButton ManuIn;
  extern okapi::ControllerButton ManuOut;
  extern okapi::ControllerButton AutoIn;
  extern okapi::ControllerButton AutoFlip;
}
namespace Lift{
  extern okapi::ControllerButton LiftMove;
}
namespace Puncher{
  extern okapi::ControllerButton LoadNShoot;
}


#endif /* end of include guard: CONTROLLER_CONFIG.HPP */
