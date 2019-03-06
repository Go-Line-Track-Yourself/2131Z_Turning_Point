#include "Custom/Configs/Controller-Config.hpp"

pros::Controller Master_Controller(pros::E_CONTROLLER_MASTER);

namespace Drive{
  okapi::ControllerButton FlipDrive = Master_Controller[okapi::ControllerDigital::X];
  okapi::ControllerButton DriveLock = Master_Controller[okapi::ControllerDigital::B];
}
namespace Intake{
  okapi::ControllerButton ManuIn = Master_Controller[okapi::ControllerDigital::left];
  okapi::ControllerButton ManuOut = Master_Controller[okapi::ControllerDigital::down];
  okapi::ControllerButton AutoIn = Master_Controller[okapi::ControllerDigital::A];
  okapi::ControllerButton AutoFlip = Master_Controller[okapi::ControllerDigital::L2];
}
namespace Lift{
  okapi::ControllerButton LiftMove = Master_Controller[okapi::ControllerDigital::L1];
}
namespace Puncher{
  okapi::ControllerButton LoadNShoot = Master_Controller[okapi::ControllerDigital::R1];
}
