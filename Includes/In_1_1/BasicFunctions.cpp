void IntakeMotorSMS(int t){
    IntakeMotor.spin(vex::directionType::fwd,t,vex::velocityUnits::pct);
}

void DownButtonPressing(void){
    if(InvertDrive == true) {
        InvertDrive = false;
    }
    else {
        InvertDrive = true;
    }
}

void DriveVoid(){
    if(Controller1.ButtonDown.pressing() && !WasPressedDrive){
        WasPressedDrive = true;
        InvertDrive = !InvertDrive;
    }
    if(!Controller1.ButtonDown.pressing()){
        WasPressedDrive = false;
    }
    if(InvertDrive == false){
        FLMotor.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::pct);
        BLMotor.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::pct);
        FRMotor.spin(vex::directionType::fwd, Controller1.Axis2.value(), vex::velocityUnits::pct);
        BRMotor.spin(vex::directionType::fwd, Controller1.Axis2.value(), vex::velocityUnits::pct); 
    } 
    else{
        FLMotor.spin(vex::directionType::rev, Controller1.Axis2.value(), vex::velocityUnits::pct);
        BLMotor.spin(vex::directionType::rev, Controller1.Axis2.value(), vex::velocityUnits::pct);
        FRMotor.spin(vex::directionType::rev, Controller1.Axis3.value(), vex::velocityUnits::pct);
        BRMotor.spin(vex::directionType::rev, Controller1.Axis3.value(), vex::velocityUnits::pct);
    }
}

void IntakeVoid(){
    if(Controller1.ButtonR1.pressing()) {
        IntakeMotorSMS(IntakeIn);
    }
    else if(Controller1.ButtonR2.pressing()) {
        IntakeMotorSMS(IntakeOut);
    }
    else {
        IntakeMotor.stop();
    }
}

void IndexerVoid(){
    if(Controller1.ButtonA.pressing()) {
        IndexerMotor.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
    }
    else {
        IndexerMotor.stop();
    }
}

void FlyWheelVoid(){
    if(Controller1.ButtonX.pressing()) {
        FlyWheelMotor.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
    }
    else if(Controller1.ButtonLeft.pressing()) {
        FlyWheelMotor.stop();
    }
}

void FlipRodVoid(){
    if(Controller1.ButtonL1.pressing()) {
        FlipMotor.spin(vex::directionType::fwd,100,vex::velocityUnits::pct);
    }
    else if(Controller1.ButtonL2.pressing()) {
        FlipMotor.spin(vex::directionType::rev,100,vex::velocityUnits::pct);
    }
    else {
        FlipMotor.stop();
    }
}