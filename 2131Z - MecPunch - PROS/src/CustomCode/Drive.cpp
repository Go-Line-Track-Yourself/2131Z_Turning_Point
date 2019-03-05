#inlcude "Custom/Drive.cpp"
#include "Custom/Global.cpp"


namespace Drive{
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
         FLMotor.spin(vex::directionType::fwd, LPower, vex::velocityUnits::pct);
         BLMotor.spin(vex::directionType::fwd, LPower, vex::velocityUnits::pct);
         FRMotor.spin(vex::directionType::fwd, RPower, vex::velocityUnits::pct);
         BRMotor.spin(vex::directionType::fwd, RPower, vex::velocityUnits::pct);
    }

    void setDriveBrakeCoast(){
        BLMotor.setStopping(vex::brakeType::coast);
        BRMotor.setStopping(vex::brakeType::coast);
        FLMotor.setStopping(vex::brakeType::coast);
        FRMotor.setStopping(vex::brakeType::coast);
    }
    void stopDriveHold(){
        BLMotor.stop(vex::brakeType::hold);
        BRMotor.stop(vex::brakeType::hold);
        FLMotor.stop(vex::brakeType::hold);
        FRMotor.stop(vex::brakeType::hold);
    }
    void setMechFLPower(int pct){
        if(pct==0)   FLMotor.stop();
        else{
            FLMotor.spin(vex::directionType::fwd,pct,vex::velocityUnits::pct);
        }
    }
    void setMechBLPower(int pct){
        if(pct==0)   BLMotor.stop();
        else{
            BLMotor.spin(vex::directionType::fwd,pct,vex::velocityUnits::pct);
        }
    }
    void setMechFRPower(int pct){
        if(pct==0)   FRMotor.stop();
        else{
            FRMotor.spin(vex::directionType::fwd,pct,vex::velocityUnits::pct);
        }
    }
    void setMechBRPower(int pct){
        if(pct==0)   BRMotor.stop();
        else{
            BRMotor.spin(vex::directionType::fwd,pct,vex::velocityUnits::pct);
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
      int LeftVirtJoy=Controller1.Axis3.value();
      int RightVirtJoy=Controller1.Axis2.value();
      int LeftHorJoy=Controller1.Axis4.value();
      int RightHorJoy=Controller1.Axis1.value();

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
            vex::task::sleep(LDR.ChangeMsec);
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
            vex::task::sleep(1);
        }
        SetDRpower(0,0);
        vex::task::sleep(FinalWait);
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
           vex::task::sleep(1);
        }
        DI(0,0);
        vex::task::sleep(FinalWait);
    }
    void AutonLock(){
        BLMotor.stop(vex::brakeType::hold);
        BRMotor.stop(vex::brakeType::hold);
        FLMotor.stop(vex::brakeType::hold);
        FRMotor.stop(vex::brakeType::hold);
    }
    void AutonNLck(){
            BLMotor.stop(vex::brakeType::coast);
            BRMotor.stop(vex::brakeType::coast);
            FLMotor.stop(vex::brakeType::coast);
            FRMotor.stop(vex::brakeType::coast);
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
