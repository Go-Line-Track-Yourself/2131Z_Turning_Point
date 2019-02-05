// Autonomous Drive and Ramping
int DriveRamping(){
    DriveRampingEnabled=true;
    while(DriveRampingEnabled){
        LDR.TaskRun();
        RDR.TaskRun();
        SDMP(LDR.Pct,RDR.Pct);
        vex::task::sleep(LDR.ChangeMsec);
    }
    return 1;
}
void DI(int L,int R){
    LDR.RequestedPct=L;
    RDR.RequestedPct=R;
    LDR.Pct=L;
    RDR.Pct=R;
    SDMP(LDR.Pct,RDR.Pct);
}

void SetDRpower(int Lpower,int Rpower){ //DR
    LDR.RequestedPct=Lpower;
    RDR.RequestedPct=Rpower;
}

void AutonMove(double Distance,int Pct=75, int FinalWait=200, int Correction=2){
    //Local Variables
    double WheelSize=4*3.1415926535;
    double Vector=sgn(Distance);
    double Revolutions=std::abs(Distance)/WheelSize;
    int LPowSend=0;
    int RPowSend=0;
    
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
        SetDRpower(LPowSend,RPowSend);
        vex::task::sleep(1);
    }
    SetDRpower(0,0);
    vex::task::sleep(FinalWait);
}
// Autonomous Turn

void AutonTurn(double Dis, int LPowSend=40 , int RPowSend=40, int FinalWait=25){    
    int Direction=sgn(Dis);
    Dis=std::abs(Dis)/12.56;
    LPowSend=LPowSend*Direction;
    RPowSend=RPowSend*Direction;
    FLMotor.resetRotation();
    while(std::abs(FLMotor.rotation(vex::rotationUnits::rev))<std::abs(Dis)){
       DI(LPowSend,-RPowSend);
       vex::task::sleep(1); 
    }
    DI(0,0);
    vex::task::sleep(FinalWait);
}

// Autonomous Intake 
void AutonIntk(bool ON, bool In){
    if(ON){
        if(In){
            SetIntakerPower(-100);
        } 
        if(!In){
            SetIntakerPower(100);
        } 
    }
    if(!ON){
        IntakerMotor.stop();
    }
}

void AutonBelt(bool ON, bool In){
    if(ON){
        if(In){
            SetTFeederPower(-100);
        } 
        if(!In){
            SetTFeederPower(100);
        } 
    }
    if(!ON){
        TFeederMotor.stop();
    }
}

// Autonomous Puncher
void AutonFire(){
    PuncherMotor.rotateFor(vex::directionType::rev, 360, vex::rotationUnits::deg, 100, vex::velocityUnits::pct);
}

// Autonomous Puncher Adjust
void AutonAjUp(){
    AdjustPMotor.rotateTo(120,vex::rotationUnits::deg,100,vex::velocityUnits::pct);
}

void AutonAjDn(){
    AdjustPMotor.rotateTo(0,vex::rotationUnits::deg,100,vex::velocityUnits::pct);
}

// Autonomous Drive Lock
void AutonLock(){
        BLMotor.stop(vex::brakeType::hold);
        BRMotor.stop(vex::brakeType::hold);
        FLMotor.stop(vex::brakeType::hold);
        FRMotor.stop(vex::brakeType::hold);
}

void AutonNLck(){
        BLMotor.stop(vex::brakeType::coast);
        BRMotor.stop(vex::brakeType::coast);
        FLMotor.stop(vex::brakeType::coast);
        FRMotor.stop(vex::brakeType::coast);
}

// Wait
void Wait(double w){
    vex::task::sleep(w);
}

// Automatic Intake
int	BottomLightValue;
int TopLightValue;
int BottomBallInMax = 40;
int TopBallInMax = 40   
bool BallInBottom;
bool BallInTop  
void Auto_Intake() {
    BottomLightValue = BallSenseBottom.value(vex::percentUnits::pct);
    TopLightValue = BallSenseTop.value(vex::percentUnits::pct);
    
    if (BottomLightValue < BottomBallInMax) BallInBottom = true;
    else BallInBottom = false   
    if (TopLightValue < TopBallInMax) BallInTop = true;
    else BallInTop = false  
    if(AutoIntakeOff){
        setIntakePower(-5);
        if(AutoFlip) setIntakerPower(-100);
        //if(AutoMan) setIntakePower(100);
    }
    /*else if(!Charged){
        setIntakePower(100);
    }
    else if(Charged){*/
        else if(BallInBottom && BallInTop) setIntakerPower(0);
        else setIntakerPower(100);
    // }
}
    int Auto_Intaking(){
AutoIntakeTaskEnabled = true;
// AutoIntakeEnabled = true;
while(AutoIntakeTaskEnabled){
    if(AutoIntakeEnabled){Auto_Intake();}
    else if(!AutoIntakeEnabled){/*intakeControll();*/}
    vex::task::sleep(20);
}
setIntakePower(0);
return 1;
}