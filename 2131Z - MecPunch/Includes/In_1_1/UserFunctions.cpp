void setMechFLPower(int pct){
    if(pct==0)   FLMotor.stop();
    else{
        FLMotor.spin(vex::directionType::fwd,pct,vex::velocityUnits::pct);
    }
}
void setMechDLPower(int pct){
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
void stopDriveHold(){
    BLMotor.stop(vex::brakeType::hold);
    BRMotor.stop(vex::brakeType::hold);
    FLMotor.stop(vex::brakeType::hold);
    FRMotor.stop(vex::brakeType::hold);
}
void driveLock(){-
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
    
    if(DriveLockInverted || Controller1.ButtonL1.pressing()) driveLock();
    else if(!DriveLockInverted) {
        setDriveBrakeCoast();
        ManualMechDriveCont();
    }
}

void setPuncherPower(int power){
    PuncherMotor.spin(vex::directionType::rev, power, vex::velocityUnits::pct);
}

void puncherControll(){
    if(Controller1.ButtonA.pressing()) {
        setPuncherPower(100);
    }  
    else PuncherMotor.stop(vex::brakeType::coast);
}
/*
/void setPuncherPower(int degrees){
    PuncherMotor.spin(vex::directionType::rev, degrees, vex::velocityUnits::deg);
}

void puncherControll(){
    if(Controller1.ButtonA.pressing()) {
        setPuncherPower(360);
    }  
    else PuncherMotor.stop(vex::brakeType::coast);
}
*/