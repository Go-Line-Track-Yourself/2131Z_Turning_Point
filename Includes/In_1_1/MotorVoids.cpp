void SDMP(int LPower, int RPower){
         FLeftMotor.spin(vex::directionType::fwd, LPower, vex::velocityUnits::pct);
         BLeftMotor.spin(vex::directionType::fwd, LPower, vex::velocityUnits::pct);
         FRightMotor.spin(vex::directionType::fwd, RPower, vex::velocityUnits::pct);
         BRightMotor.spin(vex::directionType::fwd, RPower, vex::velocityUnits::pct); 
}