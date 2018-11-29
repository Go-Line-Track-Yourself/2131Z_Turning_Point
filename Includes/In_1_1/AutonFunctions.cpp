void AutonDrive(double Distance,int Pct=100, int FinalWait=250, int Correction=2){
    //Local Variables
    double WheelSize=4*3.1415926535;
    double Vector=sgn(Distance);
    double Revolutions= abs(Distance)/WheelSize;
    int LeftPowSend=0;
    int RightPowSend=0;
    //Clear it
    BLeftMotor.resetRotation();
    BRightMotor.resetRotation();
    //Moving to position
    while(abs(BRightMotor.rotation(vex::rotationUnits::rev))<abs(Revolutions)){
        double BLeftMotorValue=BLeftMotor.rotation(vex::rotationUnits::deg);
        double BRightMotorValue=BRightMotor.rotation(vex::rotationUnits::deg);
        //Auto Straightening
        if(abs(BLeftMotorValue)>abs(BRightMotorValue)){
            LeftPowSend=Pct-Correction;
            RightPowSend=Pct;
        }
        else if(abs(BLeftMotorValue)<abs(BRightMotorValue)){
            LeftPowSend=Pct;
            RightPowSend=Pct-Correction;
        }
        else if(abs(BLeftMotorValue)==abs(BRightMotorValue)){
            LeftPowSend=Pct;
            RightPowSend=Pct;
        }
        //Using Auto Straightening to Drive
        LeftPowSend=LeftPowSend*Vector;
        RightPowSend=RightPowSend*Vector;
        //Send it to Driving Power
        SDMP(LeftPowSend,RightPowSend);
        vex::task::sleep(1);
    }
    SDMP(0,0);
    vex::task::sleep(FinalWait);
}
void AutonTurn(double deg, int LeftPowSend=50, int RightPowSend=50, int FinalWait=25){
    int Direction=sgn(deg);
    deg=abs(deg)/12.56;
    LeftPowSend=LeftPowSend*Direction;
    RightPowSend=RightPowSend*Direction;
    while(abs(BRightMotor.rotation(vex::rotationUnits::rev))<deg){
       SDMP(LeftPowSend,-RightPowSend);
       vex::task::sleep(1); 
    }
    SDMP(0,0);
    FLeftMotor.setStopping(vex::brakeType::brake);
    BLeftMotor.setStopping(vex::brakeType::brake);
    FRightMotor.setStopping(vex::brakeType::brake);
    BRightMotor.setStopping(vex::brakeType::brake);

    vex::task::sleep(FinalWait);
    SDMP(0,0);
}

