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