void AutonMove(double Distance,int Pct=100, int FinalWait=250, int Correction=2){
    //Local Variables
    double WheelSize=4*3.1415926535;
    double Vector=sgn(Distance);
    double Revolutions=std::abs(Distance)/WheelSize;
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
    while(std::abs(BRMotor.rotation(vex::rotationUnits::rev))<std::abs(Revolutions)){
        double BLMotorValue=BLMotor.rotation(vex::rotationUnits::deg);
        double BRMotorValue=BRMotor.rotation(vex::rotationUnits::deg);
        
        //Auto Straightening
        if(std::abs(BLMotorValue)>std::abs(BRMotorValue)){
            LPowSend=Pct-Correction;
            RPowSend=Pct;
        }
        else if(std::abs(BLMotorValue)<std::abs(BRMotorValue)){
            LPowSend=Pct;
            RPowSend=Pct-Correction;
        }
        else if(std::abs(BLMotorValue)==std::abs(BRMotorValue)){
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

void AutonTurn(double deg, int LPowSend=50, int RPowSend=50, int FinalWait=25){
    int Direction=sgn(deg);
    deg=std::abs(deg);
    LPowSend=LPowSend*Direction;
    RPowSend=RPowSend*Direction;

    Brain.Screen.print("Amount Turned = ");
    Brain.Screen.print(deg);
    Brain.Screen.newLine();

    while(std::abs(BRMotor.rotation(vex::rotationUnits::rev))<deg){
       SDMP(LPowSend,-RPowSend);
       vex::task::sleep(1); 
    }
    SDMP(0,0);

    vex::task::sleep(FinalWait);
    SDMP(0,0);
}

void AutonIntk(bool ON, bool In){
    if(ON){
        if(In){
            SetIntakePower(100);
            Brain.Screen.print("Intake feeding in ");
            Brain.Screen.print(ON);
            Brain.Screen.newLine();
        } 
        if(!In){
            SetIntakePower(-100);
            Brain.Screen.print("Intake feeding out ");
            Brain.Screen.newLine();
        } 
    }
    if(!ON){
        IntakeMotor.stop();
        Brain.Screen.print("Intake stopped");
        Brain.Screen.newLine();
    }
}

void AutonFlyC(bool Go){
    if(Go){
        SetFlyPower(600);
        Brain.Screen.print("FlyWheel is on ");
        Brain.Screen.newLine();
    }
    if(!Go){
        FlyWheelMotor.stop();
        Brain.Screen.print("FlyWheel is off ");
        Brain.Screen.newLine();
    }
}

void AutonFlip(){
        FlipMotor.startRotateTo(-90,vex::rotationUnits::deg,50,vex::velocityUnits::pct);
        FlipMotor.startRotateTo(90,vex::rotationUnits::deg,50,vex::velocityUnits::pct);
            Brain.Screen.print("Flipped!");
            Brain.Screen.newLine();
}

