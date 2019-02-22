
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

void PuncherControl(){
    if(Controller1.ButtonR1.pressing() && !R1Pressed){
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
    else if(!Controller1.ButtonR1.pressing() && R1Pressed){
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
void IntakeVoid(){
        if(Controller1.ButtonLeft.pressing()) {
            TFeederMotor.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
            IntakerMotor.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
        }
        else if(Controller1.ButtonDown.pressing()) {
            TFeederMotor.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
            IntakerMotor.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
        }
        else {
            TFeederMotor.stop();
            IntakerMotor.stop();
        }

}
void AutoIntakeCont(){
    if(Controller1.ButtonA.pressing() && IntakeEnabledBtnPressed==false){
        IntakeEnabledBtnPressed=true;
        IntakeEnabledInverted=!IntakeEnabledInverted;
    }
    if(!Controller1.ButtonA.pressing() && IntakeEnabledBtnPressed==true){
        IntakeEnabledBtnPressed=false;
    }

    if(IntakeEnabledInverted){ 
        AutoIntakeTaskEnabled=false;
        IntakeVoid();
    }
    if(!IntakeEnabledInverted) {
        vex::task AutoIn(Auto_Intaking);
        //AutoIntakeEnabled=false;

    }
}