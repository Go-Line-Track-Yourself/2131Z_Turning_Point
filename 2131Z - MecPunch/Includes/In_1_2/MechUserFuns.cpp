
//------Manual Drive Mech Controll------------//
void IsFippedControll(){
    if(Controller1.ButtonX.pressing() && DriveDirConBtnPressed==false){
        DriveDirConBtnPressed=true;
        DriveDirInverted=!DriveDirInverted;
    }
    if(!Controller1.ButtonX.pressing() && DriveDirConBtnPressed==true){
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
    if(Controller1.ButtonB.pressing() && DriveLockConBtnPressed==false){
        DriveLockConBtnPressed=true;
        DriveLockInverted=!DriveLockInverted;
    }
    if(!Controller1.ButtonB.pressing() && DriveLockConBtnPressed==true){
        DriveLockConBtnPressed=false;
    }
    
    if(DriveLockInverted || Controller1.ButtonDown.pressing()) driveLock();
    else if(!DriveLockInverted) {
        setDriveBrakeCoast();
        ManualMechDriveCont();
    }
}
/*
void setPuncherPower(int power){
    PuncherMotor.spin(vex::directionType::rev, power, vex::velocityUnits::pct);
}

void PuncherControl(){
    if(Controller1.ButtonA.pressing()) {
        setPuncherPower(100);
    }  
    else {
        PuncherMotor.stop(vex::brakeType::coast);
    }
}
*/
void setPuncherPower(int degrees){
    PuncherMotor.rotateFor(vex::directionType::rev, degrees, vex::rotationUnits::deg, 100, vex::velocityUnits::pct);
}

void PuncherControl(){
    if(Controller1.ButtonA.pressing()) {
        setPuncherPower(360);
    }  
    else PuncherMotor.stop(vex::brakeType::coast);
}


void AdjustMove(){
    if(Controller1.ButtonL1.pressing()){
        AdjustPMotor.rotateTo(120,vex::rotationUnits::deg);
      }
    else if(Controller1.ButtonL2.pressing()){
        AdjustPMotor.rotateTo(0,vex::rotationUnits::deg);
      }
}

void IntakeVoid(){
    if(Controller1.ButtonR1.pressing()) {
        IntakerMotor.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
    }
    else if(Controller1.ButtonR2.pressing()) {
        IntakerMotor.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
    }
    else {
        IntakerMotor.stop();
    }
}