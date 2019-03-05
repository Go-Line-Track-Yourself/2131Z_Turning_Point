#include "Custom/Analog-Config.hpp"

namespace BallSensors {
  pros::ADILineSensor BallSenseBottom(E);
  pros::ADILineSensor BallSenseTop(D);
  pros::ADILineSensor BallSenseMiddle(F);
  pros::ADILineSensor BallSenseNope(G);
}

namespace AutonSelectSensors {
  pros::ADIPotentiometer AutonSelectOne(B);
  pros::ADIPotentiometer AutonSelectTwo(C);
}
