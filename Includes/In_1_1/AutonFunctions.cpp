void AutonDrive(double Distance,int Pct=100, int FinalWait=250, int Correction=2){
    //Local Variables
    double WheelSize=4*3.1415926535;
    double Vector=sgn(Distance);
    double Revolutions= std::abs(Distance)/WheelSize;
    int LeftPowSend=0;
    int RightPowSend=0;
    //Clear it
    BLeftMotor.resetRotation();
    BRightMotor.resetRotation();
    //Moving to position
    while(std::abs(BRightMotor.rotation(vex::rotationUnits::rev))<std::abs(Revolutions)){
        double BLeftMotorValue=BLeftMotor.rotation(vex::rotationUnits::deg);
        double BRightMotorValue=BRightMotor.rotation(vex::rotationUnits::deg);
        //Auto Straightening
        if(std::abs(BLeftMotorValue)>std::abs(BRightMotorValue)){
            LeftPowSend=Pct-Correction;
            RightPowSend=Pct;
        }
        else if(std::abs(BLeftMotorValue)<std::abs(BRightMotorValue)){
            LeftPowSend=Pct;
            RightPowSend=Pct-Correction;
        }
        else if(std::abs(BLeftMotorValue)==std::abs(BRightMotorValue)){
            LeftPowSend=Pct;
            RightPowSend=Pct;
        }
        //Using Auto Straightening to Drive
        LeftPowSend=LeftPowSend*Vector
        RightPowSend=RightPowSend*Vector
        //Send it to Driving Power
        SDMP(LeftPowSend,RightPowSend);
        vex::task::sleep(1);
    }
    SDMP(0,0);
    vex::task::sleep(FinalWait)
}

