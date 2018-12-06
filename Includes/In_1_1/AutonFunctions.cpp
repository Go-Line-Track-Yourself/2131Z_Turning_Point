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

void AutonTurn(double deg, bool Rel=true, int LPowSend=50 , int RPowSend=50, int FinalWait=25){
    if(Rel) Deg+=Gyro.value(vex::rotationUnits::deg);

    int Direction=sgn(deg);
    LPowSend=std::abs(LPowSend)*Direction;
    RPowSend=std::abs(RPowSend)*Direction;

    while(std::abs(Gyro.value(vex::rotationUnits::deg)-deg)>2){
       SDMP(LPowSend,-RPowSend);
       vex::task::sleep(1); 
    }
    SDMP(0,0);
    Brain.Screen.print("Amount Turned = ");
    Brain.Screen.print(deg);
    Brain.Screen.newLine();

    vex::task::sleep(FinalWait);
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

void AutonIndx(bool Go){
    if(Go){
        SetIndexerPower(200);
        Brain.Screen.print("Indexer is on ");
        Brain.Screen.newLine();
    }
    if(!Go){
        IndexerMotor.stop();
        Brain.Screen.print("Indexer is off ");
        Brain.Screen.newLine();
    }
}

void AutonFlip(){
        FlipMotor.startRotateTo(-90,vex::rotationUnits::deg,50,vex::velocityUnits::pct);
        FlipMotor.startRotateTo(90,vex::rotationUnits::deg,50,vex::velocityUnits::pct);
            Brain.Screen.print("Flipped!");
            Brain.Screen.newLine();
}

