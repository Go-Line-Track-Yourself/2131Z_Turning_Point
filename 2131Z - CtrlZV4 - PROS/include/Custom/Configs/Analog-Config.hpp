#ifndef ANALOG_CONFIG_HPP
#define ANALOG_CONFIG_HPP
#include "api.h"

namespace BallSensors {
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
