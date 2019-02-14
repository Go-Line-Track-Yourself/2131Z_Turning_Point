
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
void setPuncherPower(int degrees){
    PuncherMotor.rotateFor(vex::directionType::rev, degrees, vex::rotationUnits::deg, 100, vex::velocityUnits::pct);
}
void PuncherControl(){
    if(punchPressing == false && Controller1.ButtonR2.pressing()) {
        //setPunchTo(330);
        PunchPlace=PunchPlace+1;
        punchPressing=true;
    }
    if(punchPressing == true && Controller1.ButtonR2.pressing()) {
        punchPressing=false;
    }

    if(PunchPlace==0) {//reset encoder assuming its at its first inital position
        PuncherMotor.stop(vex::brakeType::coast);
    }
    else if(PunchPlace==1) {
        setPunchFor(330);
    }

    else if(PunchPlace==2){
        //rotate to fire and reset to resting position
        PunchPlace=0;
        setPunchFor(30);
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