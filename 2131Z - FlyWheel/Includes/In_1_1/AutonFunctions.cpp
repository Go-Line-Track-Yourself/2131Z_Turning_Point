/*
int DriveRamping(){
    DriveRampingEnabled=true;
    while(DriveRampingEnabled){
        RDR.TaskRun();
        DriveSMS(LDR.Pct,RDR.Pct);
        vex::task::sleep(LDR.ChangeMsec);
    }
    return 1;
}
void DR(int L,int R){
    LDR.RequestedPct=L;
    RDR.RequestedPct=R;
}
void QDRS(int CMS=2){//quick drive ramp stop
    //save old ramping Change Msec
    int LDRCMS=LDR.ChangeMsec;
    int RDRCMS=RDR.ChangeMsec;
    //set new ramping Change Msec
    LDR.ChangeMsec=CMS;
    RDR.ChangeMsec=CMS;
    //set drive to stop
    DR(0,0);
    //wait for drive to stop
    while(LDR.Pct!=0 || RDR.Pct!=0){EndTimeSlice();}
    //Revert drive ramping Change Msec
    LDR.ChangeMsec=LDRCMS;
    RDR.ChangeMsec=RDRCMS;
}
void DI(int L,int R){
    LDR.RequestedPct=L;
    RDR.RequestedPct=R;
    LDR.Pct=L;
    RDR.Pct=R;
    DriveSMS(LDR.Pct,RDR.Pct);
}
*/
void AutonMove(double Distance,int Pct=75, int FinalWait=DriveEndWait, int Correction=2){
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
        SDMP(LPowSend,RPowSend);
        vex::task::sleep(1);
    }
    SDMP(0,0);
    /*
    if(FinalWait==-1){

    }
    else if(FinalWait>0){
        SDMP(0,0);
        while(LDR.Pct!=0 || RDR.Pct!=0){EndTimeSlice(LDR.ChangeMsec);}
        vex::task::sleep(FinalWait);        
    }
        else{//>=0,!=-1; set stop dont wait;                                        Stop
        DR(0,0);
    }
    */
}
/*
void DriveRecon(int Pct,int Wait,int FinalWait=250){
    DR(Pct,Pct);
    vex::task::sleep(Wait);
    if(FinalWait>0){
        DR(0,0);
        while(LDR.Pct!=0 || RDR.Pct!=0){EndTimeSlice(LDR.ChangeMsec);}
        Controller1.Screen.clearLine();
        Controller1.Screen.print("RECONED");
    }
    else if(FinalWait==0){
        Controller1.Screen.clearLine();
        Controller1.Screen.print("RECONED!END");
    }
}
*/
void AutonTurn(double Dis, int LPowSend=40 , int RPowSend=40, int FinalWait=25){    
    int Direction=sgn(Dis);
    Dis=std::abs(Dis)/12.56;
    LPowSend=LPowSend*Direction;
    RPowSend=RPowSend*Direction;
    FLMotor.resetRotation();
    while(std::abs(FLMotor.rotation(vex::rotationUnits::rev))<std::abs(Dis)){
       SDMP(LPowSend,-RPowSend);
       vex::task::sleep(1); 
    }
    SDMP(0,0);
    Brain.Screen.print("Amount Turned = ");
    Brain.Screen.print(Dis);
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
        SetFlyPower(-600);
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
        SetIndexerPower(-50);
        Brain.Screen.print("Indexer is on ");
        Brain.Screen.newLine();
    }
    if(!Go){
        IndexerMotor.stop();
        Brain.Screen.print("Indexer is off ");
        Brain.Screen.newLine();
    }
}

void AutonFlip(double DEG,int Wait=20){
    FlipMotor.rotateTo(DEG,vex::rotationUnits::deg,100,vex::velocityUnits::pct);
    vex::task::sleep(Wait);
    FlipMotor.startRotateTo(0,vex::rotationUnits::deg,100,vex::velocityUnits::pct);
            Brain.Screen.print("Flipped!");
            Brain.Screen.newLine();
}

void AutonHold(bool on){
    if(on){
        BLMotor.stop(vex::brakeType::hold);
        BRMotor.stop(vex::brakeType::hold);
        FLMotor.stop(vex::brakeType::hold);
        FRMotor.stop(vex::brakeType::hold);
    }
    if(!on){
        BLMotor.stop(vex::brakeType::brake);
        BRMotor.stop(vex::brakeType::brake);
        FLMotor.stop(vex::brakeType::brake);
        FRMotor.stop(vex::brakeType::brake);        
    }
}
/*
void DriveWait(bool stop){
    if(stop)    DR(0,0);
    while(LDR.Pct!=0 || RDR.Pct!=0){EndTimeSlice(LDR.ChangeMsec);}
}

//need to do forward def
void StopAllMotors(){
    DI(0,0);//set drive ramping to 0
    DriveSMS(0,0);
}