void SDMP(int LPower, int RPower){
         FLMotor.spin(vex::directionType::fwd, LPower, vex::velocityUnits::pct);
         BLMotor.spin(vex::directionType::fwd, LPower, vex::velocityUnits::pct);
         FRMotor.spin(vex::directionType::fwd, RPower, vex::velocityUnits::pct);
         BRMotor.spin(vex::directionType::fwd, RPower, vex::velocityUnits::pct); 
}