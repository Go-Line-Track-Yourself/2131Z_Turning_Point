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
int MiddleLightValue;
int BottomBallInMax = 40;
int TopBallInMax = 40;
bool BallInBottom;
bool BallInTop;
void Auto_Intake() {
    BottomLightValue = BallSenseBottom.value(vex::percentUnits::pct);
    MiddleLightValue = BallSenseMiddle.value(vex::percentUnits::pct);
    TopLightValue = BallSenseTop.value(vex::percentUnits::pct);

    if (BottomLightValue < BottomBallInMax || MiddleLightValue < BottomBallInMax) BallInBottom = true;
    else BallInBottom = false;
    if (TopLightValue < TopBallInMax) BallInTop = true;
    else BallInTop = false;
    if(Controller1.ButtonL2.pressing()){
            SetIntakerPower(100);
        }
    else if(AutoIntakeOff){
        SetIntakerPower(100);
        if(AutoFlip) SetIntakerPower(100);
        SetTFeederPower(0);

    }
    else if(BallInBottom && BallInTop){
        SetTFeederPower(0);
        if(Controller1.ButtonL2.pressing()){
            SetIntakerPower(100);
        }
        else {
            SetIntakerPower(0);
        }
    } 
    else{
        SetIntakerPower(-100);
        SetTFeederPower(-100);
    } 
}
int Auto_Intaking(){
    AutoIntakeTaskEnabled = true;
    // AutoIntakeEnabled = true;
    while(AutoIntakeTaskEnabled){
        if(AutoIntakeEnabled){Auto_Intake();}
        else if(!AutoIntakeEnabled){}
        vex::task::sleep(20);
    }
    SetIntakerPower(0);
    return 1;
}
int DeBug(){
    Brain.Screen.render(true,false);
    while(1){
        Brain.Screen.print(AutoIntakeEnabled);
        Brain.Screen.render();
        vex::task::sleep(20);
    }
}
void StrafeRecon(int time, int power, int dir){
    DriveRampingEnabled=false;
    setMechFLPower(power*dir);
    setMechBLPower(-power*dir);
    setMechFRPower(-power*dir);
    setMechBRPower(power*dir);

    Wait(time);

    setMechFLPower(0);
    setMechBLPower(0);
    setMechFRPower(0);
    setMechBRPower(0);
    vex::task AtonDrive(DriveRamping);
}