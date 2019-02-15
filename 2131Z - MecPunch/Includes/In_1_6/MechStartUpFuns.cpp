void PAutonStart(){
    Brain.Screen.render(true,false);
    WhatAuton();

    IntakerMotor.setStopping(vex::brakeType::brake);
    TFeederMotor.setStopping(vex::brakeType::brake);
    DriveRampingEnabled=true;

    vex::task AutoIn(Auto_Intaking);
    AutoIntakeOff = false;
}

void UserCoStart(){
    Brain.Screen.render(false,false);
    Brain.Screen.clearScreen();
//    vex::task Debug(DeBug);

    DriveRampingEnabled=false;
    FLMotor.setStopping(vex::brakeType::coast);
    BLMotor.setStopping(vex::brakeType::coast);
    FRMotor.setStopping(vex::brakeType::coast);
    BRMotor.setStopping(vex::brakeType::coast);

    PuncherMotor.rotateFor(vex::directionType::rev, 300, vex::rotationUnits::deg, 100, vex::velocityUnits::pct);
    vex::task AutoIn(Auto_Intaking);
    AutoIntakeOff = false;
}