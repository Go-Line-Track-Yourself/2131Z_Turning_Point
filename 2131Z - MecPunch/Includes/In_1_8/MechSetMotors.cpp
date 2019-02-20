void SDMP(int LPower, int RPower){
         FLMotor.spin(vex::directionType::fwd, LPower, vex::velocityUnits::pct);
         BLMotor.spin(vex::directionType::fwd, LPower, vex::velocityUnits::pct);
         FRMotor.spin(vex::directionType::fwd, RPower, vex::velocityUnits::pct);
         BRMotor.spin(vex::directionType::fwd, RPower, vex::velocityUnits::pct); 
}

void SetIntakerPower(int power){
    IntakerMotor.spin(vex::directionType::fwd, power, vex::velocityUnits::pct);
}

void SetTFeederPower(int power){
    TFeederMotor.spin(vex::directionType::fwd, power, vex::velocityUnits::pct);
}

void setPuncherPower(int degrees){
    PuncherMotor.rotateFor(vex::directionType::fwd, degrees, vex::rotationUnits::deg, 100, vex::velocityUnits::pct);
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
/*
void setPunchFor(int degs){
    PuncherMotor.startRotateFor(degs,vex::rotationUnits::deg,100,vex::velocityUnits::pct);
}
*/