/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Back Blue
void BackBPark(){
    AutoIntakeOff = true;
    AutonMove(33,60);
    AutoIntakeOff = false;
    Wait(200);
    AutonTurn(-13.5,40,40);
    AutoIntakeOff = true;
    AutoFlip = true;
    AutonMove(20,70);
    AutonTurn(-21,70,70);
    AutonMove(3,50);
    AutoFlip = false;
    AutonTurn(18,40,40);
    StrafeRecon(160,70,1);
    AutonMove(8,40);
    AutonLock();
    AutonMove(-64,80);
    Wait(3000);
    AutonNLck();
}
void BackBShot(){
    AutoIntakeOff = true;
    AutonMove(32,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(400);
    AutonMove(-3,50);
    AutonTurn(9.4,40,40);
    AutonFire();
    AutonLift(100);
    //Wait(3000);
    AutonFire();
    AutonFire();
    AutonLiftMid();
    Wait(200);
    AutonFire();
    AutonLiftDn();
    AutonTurn(14.2,50,50);
    AutonMove(-14.5,60);
    AutoIntakeOff = true;
    AutonLift(400);
    Wait(200);
    AutonLiftDn();
    AutoIntakeOff = false;
    AutonMove(0.4,20);
    AutonLift(130);
    AutonMove(-1,80);
    AutonMove(8,60,60);
    AutonTurn(-2.5,60,60);
    AutonFire();
    AutonLift(100);
    AutonFire();
    AutonFire();
    AutonLiftMid();
    Wait(200);
    AutonFire();
    AutoIntakeOff = true;
    AutonLiftDn();
}
void BackB(){ //Tuned
    AutoIntakeOff = true;
    AutonMove(32,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(400);
    AutonMove(-3.2,50);
    AutoIntakeOff = true;
    AutonTurn(24.9,50,50);
    AutonMove(-14.5,60);
    AutonLift(110);
    AutonFire();
    AutonMove(10,60);
    AutonLift(180);
    AutonTurn(-7.45,40,40);
    AutoIntakeOff = false;
    AutonFire();
    AutonLift(300);
    AutonFire();
    Wait(150);
    AutonFire();
    AutoIntakeOff = true;
    AutonTurn(21.5,35,35);
    AutonMove(27,80);
    AutonMove(2.5,20);
    AutonLiftUp();
    AutonMove(-.25,50);
    AutonLiftDn();
    AutonMove(-1,50);
    AutonTurn(33.5,100,100);
    StrafeRecon(430,80,1);
    AutonMove(-6,60);
    AutonMove(-1,30);
}
void BackBBread(){
    AutoIntakeOff = true;
    AutonMove(33,70); 
    AutoIntakeOff = false;
    Wait(300);
    AutonMove(-29,60);
    AutonFire();
    AutonTurn(15.3,40,40);
    AutonMove(30,600);
    AutonTurn(-8,50,50);
    AutonFire();
    Wait(80);
    AutonFire();
    AutonLiftMid();
    Wait(200);
    AutonFire();
    AutonLiftDn();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Back Red
void BackRPark(){
    AutoIntakeOff = true;
    AutonMove(32,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(200);
    AutonMove(-3,70);
    AutoIntakeOff = true;
    AutonTurn(-22,60,60);
    AutonMove(-12,60);
    AutonLift(100);
    AutonMove(-1,60);
    AutonMove(1,60);
    Wait(50);
    AutonLiftDn();
    AutonMove(6,70);
    AutonTurn(-20,60,60);
    AutonLift(100);
    AutonLock();
    AutonMove(-46,100);
    AutonLiftDn();
    AutonNLck();
}
void BackRParkShot(){
}
void BackRBread(){
    AutoIntakeOff = true;
    AutonMove(40,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(200); 
    AutonMove(-40,70);
    AutonMove(-3,25);
    AutonMove(4,25);
    AutonTurn(-15.3,40,40);
    //AutonPSet();
    AutonMove(43,70);
    AutonFire();
     
    Wait(200);
    //AutonRFire();
     
    AutonTurn(-0.5,25,25); 
    AutonMove(40,80);
    StrafeRecon(500,80,1);
    AutonMove(5.5,60);
    AutonMove(-38,80);
    AutoIntakeOff = true;
    AutonTurn(-16,50,50);
    AutonLock();
    AutonMove(-40,60);
    AutonNLck();
}
void BackR(){ //Tuned
    AutoIntakeOff = true;
    AutonMove(31,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(200);
    AutonMove(-3,70);
    AutonTurn(-23.75,60,60);
    AutonMove(-14.6,55);
    Wait(50);
    AutonLift(200);
    AutonFire();
    AutonMove(4.5,60);
    AutonTurn(8.77,50,50);
    AutonMove(3,50);
    AutonFire();
    AutonFire();
    AutonLift(300);
    Wait(100);
    AutonFire();
    AutonMove(-3,70);
    AutonTurn(-20.25,50,50);
    AutonMove(29,80);
    AutonMove(1,40);
    AutonLiftUp();
    AutonMove(-.25,50);
    AutonLiftDn();
    AutonMove(-2,50);
    AutonTurn(30,100,100);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Front Blue
void FrntB(){ //Tuned
    AutoIntakeOff = true;
    AutonMove(33,70); 
    AutoIntakeOff = false;
    Wait(300);
    AutonMove(-29,60);
    AutonFire();
    AutonTurn(15.2,70,70);
    AutonMove(7,30);
    AutonFire();
    Wait(80);
    AutonFire();
    AutonLiftMid();
    Wait(200);
    AutonFire();
    AutonLiftDn();
    AutonTurn(1.1,25,25);
    StrafeRecon(90,70,1);
    AutonMove(33.5,70);
    StrafeRecon(300,70,-1);
    AutonMove(2.5,60);
    AutonMove(-21,80);
    AutonFire();
    AutonTurn(-9.5,70,70);
    AutonMove(1,70);
    AutonLift(130);
    AutonFire();
    AutonFire();
    AutonLiftMid();
    Wait(80);
    AutonFire();
    AutonLiftDn();
    AutoIntakeOff = true;
    Wait(600);
}
void FrntBMixUp(){ //Theory
    AutoIntakeOff = true;
    AutonMove(33,70); 
    AutoIntakeOff = false;
    Wait(300);
    AutonFire();
    AutonMove(-4,50,50);
    AutonTurn(8,70,70);
    AutonLift(150);
    AutonFire();
    AutonLiftMid();
    AutonFire();
    AutonFire();
    Wait(50);
    AutonLiftDn();
    AutonTurn(2,70,70);
    AutonMove(25,60,60);
    AutonTurn(-8,60,60);
    AutonMove(-7,60,60);
    AutonLift(302);
    AutonMove(-13,60,60);
    AutonLiftDn();
    AutonTurn(10,60,60);
    AutonMove(-3,30);
    AutonFire();
    Wait(80);
    AutonFire();
    AutonLiftMid();
    Wait(200);
    AutonFire();
    AutonLiftDn();
}
void FrntBPark(){
    AutoIntakeOff = true;
    AutonMove(41,70); 
    Wait(100);
    AutoIntakeOff = false;
    Wait(300);
    AutonMove(-43,70);
    AutonMove(-3,25);
    AutonMove(3,25);
    //AutonPSet();
    AutonTurn(15.5,40,40);
    AutonFire();
     
    Wait(200);
    //AutonRFire();
     
    AutonTurn(1,25,25);
    AutonMove(42,70);
    StrafeRecon(300,70,-1);
    AutonMove(5.5,70);
    AutonMove(-38,80);
    AutonTurn(16,60,60);
    AutonLock();
    AutonMove(-40,70);
    AutonNLck();
}
void FrntBFarSide(){ //Tuned
    AutoIntakeOff = true;
    AutonMove(33,70); 
    AutoIntakeOff = false;
    Wait(300);
    AutonMove(-29,60);
    AutonFire();
    AutonTurn(15.2,70,70);
    AutonMove(5,30);
    AutonFire();
    Wait(80);
    AutonFire();
    AutonLiftMid();
    Wait(200);
    AutonFire();
    AutonLiftDn();
    AutonTurn(.2,25,25);
    StrafeRecon(100,70,1);
    AutonMove(35.7,70);
    StrafeRecon(400,70,-1);
    AutonMove(3,60);
    Wait(40);
    AutonMove(-11.9,80);
    AutonFire();
    AutonTurn(-14.32,50,50);
    AutonMove(1.2,70);
    AutonLift(150);
    AutonFire();
    AutonFire();
    AutonLift(300);
    AutonFire();
    AutoIntakeOff = true;
    AutonLiftDn();
    Wait(600);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Front Red
void FrntR(){ //Tuned
    AutoIntakeOff = true;
    AutonMove(33,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(300); 
    AutonMove(-29,55);
    AutonFire();
    AutonTurn(-16,70,70);
    AutonMove(7,40);
    AutonFire();
    AutonLiftMid();
    AutonFire();
    Wait(200);
    AutonFire();
    AutonLiftDn();
    Wait(50);
    AutonTurn(-0.5,25,25); 
    AutonMove(40,80);
    StrafeRecon(500,80,1);
    AutonMove(5.5,40);
    StrafeRecon(100,25,-1);
    AutonMove(-21,80);
    AutonFire();
    AutonTurn(9.5,70,70);
    AutonMove(0.5,70);
    AutonLift(130);
    AutonFire();
    AutonFire();
    AutonLift(300);
    Wait(80);
    AutonFire();
    AutonLiftDn();
    AutoIntakeOff = true;
    Wait(600);
}
void FrntRFarSide(){
    AutoIntakeOff = true;
    AutonMove(33,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(400); 
    AutonMove(-29,60);
    AutonFire();
    AutonTurn(-16,60,60);
    AutonMove(5,40);
    AutonFire();
    AutonLiftMid();
    AutonFire();
    Wait(200);
    AutonFire();
    AutonLiftDn();
    Wait(50);
    AutonTurn(-0.5,25,25); 
    AutonMove(40,80);
    StrafeRecon(500,80,1);
    AutonMove(5.5,40);
    StrafeRecon(100,25,-1);
    AutonMove(-19,80);
    AutonTurn(12.7,60,60);
    AutonMove(2,30);
    AutonFire();
    AutonLiftMid();
    AutonFire();
    AutonLiftDn();
    AutoIntakeOff = true;
    AutonTurn(5,80,80);
    AutoFlip = true;
    AutonMove(18,60);
    Wait(50);
    AutonMove(-3,80);
    AutoFlip = false;
}
void FrntRPark(){
    AutoIntakeOff = true;
    AutonMove(32,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(200); 
    AutonMove(-33,70);
    AutonMove(-3,25);
    AutonMove(4,25);
    AutonFire();
    AutonTurn(-15.3,40,40);
    AutonFire();
     
    AutonFire();
    Wait(200);
    AutonFire();
     
    AutonTurn(-0.5,25,25); 
    AutonMove(40,80);
    StrafeRecon(500,80,1);
    AutonMove(5.5,60);
    AutonMove(1,25);
    AutonMove(-65,80);
    AutoIntakeOff = true;
    AutonTurn(-18,50,50);
    AutonLock();
    AutonMove(-40,80);
    AutonNLck();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Skills
void Skillz(){
    AutoIntakeOff = true;
    AutoFlip = false;  
    AutonMove(39,80);
    AutoIntakeOff = false;
    Wait(500);
    AutonMove(-44,70);
    AutonMove(-4,15);
    AutonMove(4.5,30);
    AutonTurn(-15.1,40,40);
    AutonFire();
    AutonMove(29,70);
    AutonTurn(0.1,25,25);
    AutonLift(100);
    AutonFire();
    Wait(20);
    AutonFire();
    AutonLiftMid();
    Wait(500);
    AutonFire();
    AutonLiftDn();
    AutonTurn(-0.4,60);
    StrafeRecon(130,30,-1);
    AutonMove(47,90);
    StrafeRecon(400,90,1);
    AutonMove(5,40);
    StrafeRecon(100,25,-1);
    AutoIntakeOff = true;
    AutonMove(-43,80);
    AutonTurn(16,40,40);
    AutonMove(-8,40);
    AutonMove(-3,30);
    AutonMove(43,80);
    AutoIntakeOff = false;
    Wait(500);
    AutonMove(-6,70);
    AutonFire();
    AutonTurn(-12,40,40);
    AutonLift(110);
    AutonFire();
    Wait(1000);
    if (BallInTop){
        AutonLiftMid();
        AutonFire();
        Wait(300); 
        AutonFire();
        HitFlag = true;
        Wait(100);
    }
    AutonLiftDn();
    AutonTurn(-0.75,60,60);
    AutonMove(45,80);
    StrafeRecon(400,80,1);
    AutonMove(6,40);
    StrafeRecon(100,25,-1);
    AutonMove(-18,70);
    Wait(200);  
    if (BallInTop && HitFlag == false){
        AutonFire();
        AutonTurn(0.75,25,25);
        AutonFire();
        HitFlag = true;
        AutonTurn(-0.75,25,25);
        Wait(100);
    }
    AutonTurn(-16.5,40,40);
    AutoIntakeOff = true;
    AutoFlip = true;
    AutonMove(17,70);
    Wait(300);
    AutoFlip = false;
    AutonMove(-71,80);
    StrafeRecon(1000,80,-1);
    StrafeRecon(300,80,1);
    AutoIntakeOff = true;
    AutonMove(20,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(1000);
    AutoIntakeOff = true;
    AutoFlip = true;
    AutonMove(3,50);
    AutonMove(-5,80);
    StrafeRecon(500,80,-1);
    StrafeRecon(150,25,1);
    AutoFlip = false;
    AutoIntakeOff = false;
    AutonMove(-40,80);
    StrafeRecon(200,80,1);
    AutonMove(-4,25);
    AutonMove(16,60);
    AutonFire();
    AutonTurn(16.3,40,40);
    HitFlag = false;
    AutonLift(130);
    AutonFire();
    Wait(700);
    if (BallInTop){
        AutonFire();
        AutonLiftMid();
        Wait(300);
        AutonFire();
        HitFlag = true;
        Wait(100);
    }
    AutonLiftDn();
    AutonTurn(-0.2);
    StrafeRecon(130,40,-1);
    AutonMove(38,70);
    StrafeRecon(400,80,1);
    AutonMove(6.5,80);
    StrafeRecon(100,80,-1);
    if (BallInTop && HitFlag == false){
        Wait(400);
        AutonFire();
        AutonMove(-13,80);
        AutonFire();
        HitFlag = true;
        Wait(100);
        AutonMove(-26,80);
    }
    else {
        Wait(400);
        AutonMove(-37,80);
    }
    AutonTurn(15,40,40);
    HitFlag = false;
    AutonMove(8,40);
    AutoIntakeOff = true;
    AutoFlip = true;
    StrafeRecon(1150,80,1);
    AutonLift(110);
    AutonMove(-6,60);
    AutoFlip = false;
    AutonMove(5,50);
    AutonLock();
    AutonMove(-80,75);
    AutonLiftDn();
    vex::task::sleep(2000);
    AutonNLck();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Selecting
void AutonPots(){
    int SelectValueOne = AutonSelectOne.value(vex::percentUnits::pct);
    int SelectValueTwo = AutonSelectTwo.value(vex::percentUnits::pct);
    
    if(SelectValueOne > 80){
        Skillz();
    }
    
    else if(SelectValueOne > 60){
        if(SelectValueTwo > 80){
            FrntBMixUp();
        }
        else if(SelectValueTwo > 50){
            FrntBFarSide();
        }
        else if(SelectValueTwo > 30){
            FrntBPark();
        }
        else if(SelectValueTwo >= 0){
            FrntB();
        }
    }
    
    else if(SelectValueOne > 40){
        if(SelectValueTwo > 80){
            BackBBread();
        }
        else if(SelectValueTwo > 50){
            BackBShot();
        }
        else if(SelectValueTwo > 30){
            BackBPark();
        }
        else if(SelectValueTwo >= 0){
            BackB();
        }
    }
    else if(SelectValueOne > 20){
        if(SelectValueTwo > 80){
            
        }
        else if(SelectValueTwo > 50){
            FrntRFarSide();
        }
        else if(SelectValueTwo > 30){
            FrntRPark();
        }
        else if(SelectValueTwo >= 0){
            FrntR();
        }
    }
    else if(SelectValueOne >= 0){
        if(SelectValueTwo > 80){
            BackRBread();
        }
        else if(SelectValueTwo > 50){
            BackRParkShot();
        }
        else if(SelectValueTwo > 30){
            BackRPark();
        }
        else if(SelectValueTwo >= 0){
            BackR();
        }
    }
}
void AutonUpdater(){
    int SelectValueOne = AutonSelectOne.value(vex::percentUnits::pct);
    int SelectValueTwo = AutonSelectTwo.value(vex::percentUnits::pct);
    Brain.Screen.clearScreen();
    if(SelectValueOne > 80){
        //Skillz;
        Brain.Screen.clearLine(1,vex::color::purple);
        Brain.Screen.clearLine();
        Brain.Screen.print("Skillz");
    }

    else if(SelectValueOne > 60){
        if(SelectValueTwo > 80){
            //FrntBMixUp();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Blue Double Row");

        }
        else if(SelectValueTwo > 50){
            //FrntBFarSide();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Blue Far Side Hit Again");

        }
        else if(SelectValueTwo > 30){
            //FrntBPark();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Blue Parking");
        }
        else if(SelectValueTwo >= 0){
            //FrntB();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Blue Caps and Center Middle Flag");
        }
    }
    else if(SelectValueOne > 40){
        if(SelectValueTwo > 80){
            //BackBBread();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Bread");
        }
        else if(SelectValueTwo > 50){
            //BackBShot();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue with Far Flag");
        }
        else if(SelectValueTwo > 30){
            //BackBPark();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Parking");
        }
        else if(SelectValueTwo >= 0){
            //BackB();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Caps");
        }
    }
    else if(SelectValueOne > 20){
        if(SelectValueTwo > 80){
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print(" ");
            
        }
        else if(SelectValueTwo > 50){
            //FrntRFarSide
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Red Far Side Hit Again");

        }
        else if(SelectValueTwo > 30){
            //FrntRPark();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Red Parking");
        }
        else if(SelectValueTwo >= 0){
            //FrntR();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Red Caps");
        }
    }
    else if(SelectValueOne >= 0){
        if(SelectValueTwo > 80){
            //BackRBread();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Red Bread");
            
        }
        else if(SelectValueTwo > 50){
            //BackRParkShot();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Red Parking and Middle Flag");

        }
        else if(SelectValueTwo > 30){
            //BackRPark();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Red Parking");
        }
        else if(SelectValueTwo >= 0){
            //BackR();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Red Caps");
        }
    }
}
int WhatAuton(){
    while(true){
        AutonUpdater();
        Brain.Screen.render();
        vex::task::sleep(20);
    }
    return 1;
}