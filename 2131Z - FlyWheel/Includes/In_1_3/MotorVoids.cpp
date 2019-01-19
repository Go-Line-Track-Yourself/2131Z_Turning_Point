void SDMP(int LPower, int RPower){
         FLMotor.spin(vex::directionType::fwd, LPower, vex::velocityUnits::pct);
         BLMotor.spin(vex::directionType::fwd, LPower, vex::velocityUnits::pct);
         FRMotor.spin(vex::directionType::fwd, RPower, vex::velocityUnits::pct);
         BRMotor.spin(vex::directionType::fwd, RPower, vex::velocityUnits::pct); 
}
void SetIntakePower(int power){
    IntakeMotor.spin(vex::directionType::fwd, power, vex::velocityUnits::pct);
}

void SetFlyPower(int rpm){
    FlyWheelMotor.spin(vex::directionType::fwd,rpm,vex::velocityUnits::rpm);
}

void SetIndexerPower(int rpm){
    IndexerMotor.spin(vex::directionType::fwd,rpm,vex::velocityUnits::rpm);
}