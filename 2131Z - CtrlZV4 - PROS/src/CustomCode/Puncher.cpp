#include "Custom/Puncher.hpp"
#include "Custom/Global.hpp"
#include "main.h"

namespace Puncher{
    bool punchPressing= false;
    int PunchPlace = 0;
    bool PunchRunOnce = false;

    bool PuncherCharged = false;
    bool R1Pressed = false;
    int PuncherDeg = 0;
    bool PunchControlPositionEnabled = false;

    ///////////////////////////SetMotors////////////////////////
    void setPunchFor(int degs){
        PuncherMotor.startRotateTo(degs,vex::rotationUnits::deg,100,vex::velocityUnits::pct);
    }

    ///////////////////////////User//////////////////////////

    void PuncherControl(){
      if(LoadNShoot.ispressing() && !R1Pressed){
          R1Pressed = true;
          PunchControlPositionEnabled = true;
          if(!PuncherCharged){
              PuncherDeg+=240;
              PuncherCharged = true;
          }
          else if(PuncherCharged){
              PuncherDeg+=120;
              PuncherCharged = false;
          }
      }
      else if(!LoadNShoot.ispressing() && R1Pressed){
          R1Pressed = false;
      }
      if(PunchControlPositionEnabled == true){
          if(std::abs(PuncherDeg-PuncherMotor.rotation(vex::rotationUnits::deg))<5){
              PuncherMotor.stop();
              PunchControlPositionEnabled = false;
          }
          else {
              PuncherMotor.startRotateTo(PuncherDeg,vex::rotationUnits::deg,100,vex::velocityUnits::pct);
          }
      }
    }
////////////////////////////////Autonomous/////////////////////////////
    void PuncherWait(){
      while(std::abs(PuncherDeg-PuncherMotor.rotation(vex::rotationUnits::deg))>5){
          Wait(5);
      }
    }

    int PuncherSpinFunction(){
      if(std::abs(PuncherDeg-PuncherMotor.rotation(vex::rotationUnits::deg))<5){
          PuncherMotor.stop();
          PunchControlPositionEnabled = false;
      }
      else {
          PuncherMotor.startRotateTo(PuncherDeg,vex::rotationUnits::deg,100,vex::velocityUnits::pct);
      }
      while(std::abs(PuncherDeg-PuncherMotor.rotation(vex::rotationUnits::deg))>5){
          PuncherMotor.startRotateTo(PuncherDeg,vex::rotationUnits::deg,100,vex::velocityUnits::pct);
      }
      PuncherMotor.stop();
      return 0;
    }

    void AutonFire(bool WaitForFire=true){
          PunchControlPositionEnabled = true;
          if(!PuncherCharged){
              PuncherDeg+=250;
              PuncherCharged = true;
          }
          else if(PuncherCharged){
              PuncherDeg+=110;
              PuncherCharged = false;
          }
          vex::task PuncherSpinTask(PuncherSpinFunction);
          if(WaitForFire){
              PuncherWait();
          }
      Wait(5);
    }

}
