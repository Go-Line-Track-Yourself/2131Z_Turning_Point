void PAutonStart(){
    Brain.Screen.render(true,false);
    WhatAuton();
    FlyWheelMotor.setStopping(vex::brakeType::coast);
    IndexerMotor.setStopping(vex::brakeType::coast);
    IntakeMotor.setStopping(vex::brakeType::coast);
    FlipMotor.setStopping(vex::brakeType::brake);
}

void UserCoStart(){
    Brain.Screen.render(false,false);
    Brain.Screen.clearScreen();

    DriveRampingEnabled=false;
    FLMotor.setStopping(vex::brakeType::coast);
    BLMotor.setStopping(vex::brakeType::coast);
    FRMotor.setStopping(vex::brakeType::coast);
    BRMotor.setStopping(vex::brakeType::coast);
    FlipMotor.setStopping(vex::brakeType::brake);
}