#include "Lift.hpp"
#include "Custom/Global.hpp"
#include "main.h"

namespace Lift{
  //////////////////////User////////////////////////////
  void AdjustMove(){
    if(Controller1.ButtonL1.pressing() && AdjustMotorBool==false){
        AdjustMotorBool=true;
        AdjustMotorSwitch=!AdjustMotorSwitch;
    }
    if(!Controller1.ButtonL1.pressing() && AdjustMotorBool==true){
        AdjustMotorBool=false;
    }

    if(AdjustMotorSwitch){
        AdjustPMotor.rotateTo(120,vex::rotationUnits::deg);
    }
    if(!AdjustMotorSwitch) {
        AdjustPMotor.rotateTo(0,vex::rotationUnits::deg);
    }
  }
  /////////////////////////Autonomous/////////////////////////
  void AutonAjUp(){
      AdjustPMotor.rotateTo(120,vex::rotationUnits::deg,100,vex::velocityUnits::pct);
  }
  void AutonAjDn(){
      AdjustPMotor.rotateTo(0,vex::rotationUnits::deg,100,vex::velocityUnits::pct);
  }
}
