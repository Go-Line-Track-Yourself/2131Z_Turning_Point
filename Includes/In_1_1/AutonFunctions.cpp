void AutonMove(double Distance,int Pct=100, int FinalWait=250, int Correction=2){
    //Local Variables
    double WheelSize=4*3.1415926535;
    double Vector=sgn(Distance);
    double Revolutions= abs(Distance)/WheelSize;
    int LPowSend=0;
    int RPowSend=0;

    Brain.Screen.print("Inches Driven Forward = ");
    Brain.Screen.print(Distance);
    Brain.Screen.newLine();
    Brain.Screen.print("Direction Driven Forward = ");
    Brain.Screen.print(Vector);
    Brain.Screen.newLine();

    //Clear it
    BLMotor.resetRotation();
    BRMotor.resetRotation();
    //Moving to position
    while(abs(BRMotor.rotation(vex::rotationUnits::rev))<abs(Revolutions)){
        double BLMotorValue=BLMotor.rotation(vex::rotationUnits::deg);
        double BRMotorValue=BRMotor.rotation(vex::rotationUnits::deg);
        
        //Auto Straightening
        if(abs(BLMotorValue)>abs(BRMotorValue)){
            LPowSend=Pct-Correction;
            RPowSend=Pct;
        }
        else if(abs(BLMotorValue)<abs(BRMotorValue)){
            LPowSend=Pct;
            RPowSend=Pct-Correction;
        }
        else if(abs(BLMotorValue)==abs(BRMotorValue)){
            LPowSend=Pct;
            RPowSend=Pct;
        }
        //Using Auto Straightening to Drive
        LPowSend=LPowSend*Vector;
        RPowSend=RPowSend*Vector;
        //Send it to Driving Power
        SDMP(LPowSend,RPowSend);
        vex::task::sleep(1);
    }
    SDMP(0,0);
    while(BRMotor.isSpinning() || BLMotor.isSpinning()){
        vex::task::sleep(1);
    }
    vex::task::sleep(FinalWait);
}

void AutonTurn(double deg, int LPowSend=10, int RPowSend=10, int FinalWait=25){
    int Direction=sgn(deg);
    deg=abs(deg);
    LPowSend=LPowSend*Direction;
    RPowSend=RPowSend*Direction;

    Brain.Screen.print("Amount Turned = ");
    Brain.Screen.print(deg);
    Brain.Screen.newLine();

    while(abs(BRMotor.rotation(vex::rotationUnits::rev))<deg){
       SDMP(LPowSend,-RPowSend);
       vex::task::sleep(1); 
    }
    SDMP(0,0);

    vex::task::sleep(FinalWait);
    SDMP(0,0);
}

void AutonIntk(bool ON, bool direction){
    if(ON){
        if(direction) SetIntakePower(100);
        if(!direction) SetIntakePower(-100);
    }
    if(!ON){
        IntakeMotor.stop();
    }
}

void AutonFlyW(){
    SetFlyPower(600);
    while()
}
