#ifndef ANALOG_CONFIG.HPP
#define ANALOG_CONFIG.HPP
#include "api.h"

namespace ballSensors {
  extern pros::ADILineSensor BallSenseBottom;
  extern pros::ADILineSensor BallSenseTop;
  extern pros::ADILineSensor BallSenseMiddle;
  extern pros::ADILineSensor BallSenseNope;
}

namespace AutonSelectSensors {
  extern pros::ADIPotentiometer AutonSelectOne;
  extern pros::ADIPotentiometer AutonSelectTwo;
}





#endif /* end of include guard: ANALOG_CONFIG.HPP */
