#include "Custom/Drive.hpp"
#include "Custom/Global.hpp"
#include "main.h"


namespace Drive {
  bool DriveRampingEnabled;
  bool MechDriveRampingEnabled;

  bool DriveLockConBtnPressed;
  bool DriveLockInverted = false;

  bool DriveDirConBtnPressed;
  bool DriveDirInverted = false;

  int DriveEndWait=100;
  int TurnEndWait=250;
  ///////////////////////SetMotors///////////////////////
    void SDMP(int LPower, int RPower){
         FLMotor.moveVelocity(LPower);
         BLMotor.moveVelocity(LPower);
         FRMotor.moveVelocity(RPower);
         BRMotor.moveVelocity(RPower);
    }

    void setDriveBrakeCoast(){
        BLMotor.setBrakeMode(okapi::AbstractMotor::coast);
        BRMotor.setBrakeMode(okapi::AbstractMotor::coast);
        FLMotor.setBrakeMode(okapi::AbstractMotor::coast);
        FRMotor.setBrakeMode(okapi::AbstractMotor::coast);
    }
    void stopDriveHold(){
        BLMotor.moveVelocity(0);
        BRMotor.moveVelocity(0);
        FLMotor.moveVelocity(0);
        FRMotor.moveVelocity(0);
    }
    void setMechFLPower(int pct){
        if(pct==0)   FLMotor.moveVelocity(0);
        else{
            FLMotor.moveVelocity(pct);
        }
    }
    void setMechBLPower(int pct){
        if(pct==0)   BLMotor.moveVelocity(0);
        else{
            BLMotor.moveVelocity(pct);
        }
    }
    void setMechFRPower(int pct){
        if(pct==0)   FRMotor.moveVelocity(0);
        else{
            FRMotor.moveVelocity(pct);
        }
    }
    void setMechBRPower(int pct){
        if(pct==0)   BRMotor.moveVelocity(0);
        else{
            BRMotor.moveVelocity(pct);
        }
    }
    void setMechDrivePower(int LF,int LB,int RF,int RB){
        setMechFLPower(LF);
        setMechBLPower(LB);
        setMechFRPower(RF);
        setMechBRPower(RB);
    }
    void DriveMechPowerSend(int j1,int j2,int j3=0,int j4=0){//left,right,side1,side2
        int LF=j1;//left
        int RF=j2;//right
        int SD=(j3+j4)/2;//side

        setMechDrivePower(//left go apart && right go into when going right
            LF+SD,
            LF-SD,
            RF-SD,
            RF+SD);
    }
    void setDrivePower(int left, int right){
        setMechFLPower(left);
        setMechBLPower(left);
        setMechFRPower(right);
        setMechBRPower(right);
    }

  ///////////////////////User//////////////////////////////
  void IsFippedControll(){
      if(FlipDrive.ispressing() && DriveDirConBtnPressed==false){
          DriveDirConBtnPressed=true;
          DriveDirInverted=!DriveDirInverted;
      }
      if(!FlipDrive.ispressing() && DriveDirConBtnPressed==true){
          DriveDirConBtnPressed=false;
      }
  }
  void ManualMechDriveCont(){
      IsFippedControll();
      int LeftVirtJoy=Master_Controller.getAnalong(okapi::ControllerAnalog::leftY)*200;
      int RightVirtJoy=Master_Controller.getAnalong(okapi::ControllerAnalog::rightY)*200;
      int LeftHorJoy=Master_Controller.getAnalong(okapi::ControllerAnalog::leftX)*200;
      int RightHorJoy=Master_Controller.getAnalong(okapi::ControllerAnalog::rightX)*200;

      if(std::abs(LeftVirtJoy)<5)    LeftVirtJoy=0;
      if(std::abs(RightVirtJoy)<5)    RightVirtJoy=0;
      if(std::abs(LeftHorJoy)<15)  LeftHorJoy=0;
      if(std::abs(RightHorJoy)<15)  RightHorJoy=0;

      if(LeftVirtJoy!=0 || RightVirtJoy!=0 || LeftHorJoy!=0 || RightHorJoy!=0){
          if(!DriveDirInverted){
          DriveMechPowerSend(LeftVirtJoy,RightVirtJoy,LeftHorJoy,RightHorJoy);
          }
          if(DriveDirInverted){
          DriveMechPowerSend(-RightVirtJoy,-LeftVirtJoy,-RightHorJoy,-LeftHorJoy);
          }
      }
      else{
          setMechDrivePower(0,0,0,0);//Last loop before disableing; used to release drivemanualcontrol
      }
  }
  void driveLock(){
      stopDriveHold();
  }
  void DriveCont_LockContM(){
      if(DriveLock.ispressing() && DriveLockConBtnPressed==false){
          DriveLockConBtnPressed=true;
          DriveLockInverted=!DriveLockInverted;
      }
      if(!DriveLock.ispressing() && DriveLockConBtnPressed==true){
          DriveLockConBtnPressed=false;
      }

      if(DriveLockInverted || DriveLock.ispressing()) driveLock();
      else if(!DriveLockInverted) {
          setDriveBrakeCoast();
          ManualMechDriveCont();
      }
  }

//////////////////////////Autonomous////////////////////////////

// Autonomous Drive and Ramping
    int DriveRamping(){
        DriveRampingEnabled=true;
        while(DriveRampingEnabled){
            LDR.TaskRun();
            RDR.TaskRun();
            SDMP(LDR.Pct,RDR.Pct);
            pros::delay(LDR.ChangeMsec);
        }
        return 1;
    }
    void DI(int L,int R){
        LDR.RequestedPct=L;
        RDR.RequestedPct=R;
        LDR.Pct=L;
        RDR.Pct=R;
        SDMP(LDR.Pct,RDR.Pct);
    }
    void SetDRpower(int Lpower,int Rpower){ //DR
        LDR.RequestedPct=Lpower;
        RDR.RequestedPct=Rpower;
    }
    void AutonMove(double Distance,int Pct=75, int FinalWait=200, int Correction=2){
        //Local Variables
        double WheelSize=4*3.1415926535;
        double Vector=sgn(Distance);
        double Revolutions=std::abs(Distance)/WheelSize;
        int LPowSend=0;
        int RPowSend=0;

        //Clear it
        BLMotor.resetRotation();
        BRMotor.resetRotation();
        //Moving to position
        while(std::abs(BRMotor.rotation(vex::rotationUnits::rev))<std::abs(Revolutions)){
            double BLMotorValue=BLMotor.rotation(vex::rotationUnits::deg);
            double BRMotorValue=BRMotor.rotation(vex::rotationUnits::deg);

            //Auto Straightening
            if(std::abs(BLMotorValue)>std::abs(BRMotorValue)){
                LPowSend=Pct-Correction;
                RPowSend=Pct;
            }
            else if(std::abs(BLMotorValue)<std::abs(BRMotorValue)){
                LPowSend=Pct;
                RPowSend=Pct-Correction;
            }
            else if(std::abs(BLMotorValue)==std::abs(BRMotorValue)){
                LPowSend=Pct;
                RPowSend=Pct;
            }
            //Using Auto Straightening to Drive
            LPowSend=LPowSend*Vector;
            RPowSend=RPowSend*Vector;
            //Send it to Driving Power
            SetDRpower(LPowSend,RPowSend);
            pros::delay(1);
        }
        SetDRpower(0,0);
        pros::delay(FinalWait);
    }
    // Autonomous Turn
    void AutonTurn(double Dis, int LPowSend=40 , int RPowSend=40, int FinalWait=25){
        int Direction=sgn(Dis);
        Dis=std::abs(Dis)/12.56;
        LPowSend=LPowSend*Direction;
        RPowSend=RPowSend*Direction;
        FLMotor.resetRotation();
        while(std::abs(FLMotor.rotation(vex::rotationUnits::rev))<std::abs(Dis)){
           DI(LPowSend,-RPowSend);
           pros::delay(1);
        }
        DI(0,0);
        pros::delay(FinalWait);
    }
    void AutonLock(){
        BLMotor.setBrakeMode(okapi::AbstractMotor::hold);
        BRMotor.setBrakeMode(okapi::AbstractMotor::hold);
        FLMotor.setBrakeMode(okapi::AbstractMotor::hold);
        FRMotor.setBrakeMode(okapi::AbstractMotor::hold);
    }
    void AutonNLck(){
            BLMotor.setBrakeMode(okapi::AbstractMotor::coast);
            BRMotor.setBrakeMode(okapi::AbstractMotor::coast);
            FLMotor.setBrakeMode(okapi::AbstractMotor::coast);
            FRMotor.setBrakeMode(okapi::AbstractMotor::coast);
    }

    void StrafeRecon(int time, int power, int dir){
        DriveRampingEnabled=false;
        setMechFLPower(power*dir);
        setMechBLPower(-power*dir);
        setMechFRPower(-power*dir);
        setMechBRPower(power*dir);

        Wait(time);

        setMechFLPower(0);
        setMechBLPower(0);
        setMechFRPower(0);
        setMechBRPower(0);
        vex::task AtonDrive(DriveRamping);
    }
}
