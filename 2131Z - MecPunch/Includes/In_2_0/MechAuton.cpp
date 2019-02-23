///////---------Guide----------///////
                    //AutonMove(Amount in Inches, speed percentage); 
                        // Move Robot Set Amount
                    //AutonTurn(Amount in Inches, speed percentage, speed percentage);
                        // Turns Robot Set Amount
                        // 90 Degree turns are usually around 16
                    //AutonLock();
                        // Locks Wheels on Drive
                    //AutonNLck();
                        // Unlocks Wheels on Drive
                    //Wait(wait amount in milliseconds);
                        // Pauses Code for specified time
                    ////AutonPSet();
                        // Cocks puncher into fire ready position
                    //AutonFire();
                        // Rotates to fire
                        // Must act after PSet
                    ////AutonRFire();
                        // Fires once from non-cocked position
                    //StrafeRecon(time in milliseconds, speed percentage, direction);
                        // direction is either -1 or 1. Left or Right. Respectively.
                    //AutonIntk(on or off, direction);
                        // both are done by either true or false.
                        // true meaning on, false meaning off. true meaning in, false meaning out.
                    //AutonBelt(on or off, direction);
                        // both are done by either true or false.
                        // true meaning on, false meaning off. true meaning in, false meaning out.
                    //AutonAjUp();
                        // Moves Puncher Up
                    //AutonAjDn();
                        // Moves Puncher Down



//Back Blue
void BackBPark(){
    AutonMove(33,60);
    Wait(200);
    AutonTurn(-14,40,40);
    AutoIntakeOff = true;
    AutoFlip = true;
    AutonMove(20,70);
    AutonTurn(-21,70,70);
    AutonMove(3,50);
    AutoFlip = false;
    AutonTurn(18,40,40);
    StrafeRecon(170,70,1);
    AutonMove(8,40);
    AutonLock();
    AutonMove(-62);
    Wait(3000);
    AutonNLck();
}
void BackBParkShot(){
    AutoIntakeOff = true;
    AutonMove(39,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(200);
    AutonMove(-4,70);
    AutoIntakeOff = true;
    AutonTurn(-16,50,50);
    AutoFlip = true;
    AutonMove(5,80);
    AutonTurn(-16,70,70);
    AutonMove(5,70);
    AutoFlip = false;
    AutonTurn(-3,40,40);
    AutonMove(8,50);
    AutonTurn(19,50,50);
    AutonMove(15,40,40);
    AutonLock();
    AutonMove(-65,100);
    AutoIntakeOff = false;
    //AutonPSet();
    AutonTurn(-33.5,40,40);
    AutonAjUp();
    AutonFire();
    Wait(300);
    AutonAjDn();
    AutonNLck();
}
void BackB(){
    AutonMove(33,60);
    Wait(200);
    AutonTurn(-14,40,40);
    AutoIntakeOff = true;
    AutoFlip = true;
    AutonMove(20,70);
    AutonTurn(-21,70,70);
    AutonMove(8,50);
    AutoFlip = false;
}
void BackBBread(){
    AutoIntakeOff = true;
    AutonMove(41,70); 
    Wait(100);
    AutoIntakeOff = false;
    Wait(300);
    AutonMove(-43,70);
    AutonMove(-3,25);
    AutonMove(3,25);
    AutonTurn(15.5,40,40);
    //AutonPSet();
    AutonMove(43,70);
    Wait(150);
    AutonFire();
    AutonAjUp();
    Wait(200);
    //AutonRFire();
    AutonAjDn();
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





//Back Red
void BackRPark(){
    AutoIntakeOff = true;
    AutonMove(39,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(200);
    AutonMove(-4,70);
    AutoIntakeOff = true;
    AutonTurn(16,50,50);
    AutoFlip = true;
    AutonMove(5,80);
    AutonTurn(16,70,70);
    AutonMove(5,70);
    AutoFlip = false;
    AutonTurn(3,40,40);
    AutonMove(8,50);
    AutonTurn(-19,50,50);
    AutonMove(15,40,40);
    AutonLock();
    AutonMove(-65,100);
    AutoIntakeOff = false;
    AutonNLck();
}
void BackRParkShot(){
    AutoIntakeOff = true;
    AutonMove(39,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(200);
    AutonMove(-4,70);
    AutoIntakeOff = true;
    AutonTurn(16,50,50);
    AutoFlip = true;
    AutonMove(5,80);
    AutonTurn(16,70,70);
    AutonMove(5,70);
    AutoFlip = false;
    AutonTurn(3,40,40);
    AutonMove(8,50);
    AutonTurn(-19,50,50);
    AutonMove(15,40,40);
    AutonLock();
    AutonMove(-65,100);
    AutoIntakeOff = false;
    //AutonPSet();
    AutonTurn(33.5,40,40);
    AutonAjUp();
    AutonFire();
    Wait(300);
    AutonAjDn();
    AutonNLck();
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
    AutonAjUp();
    Wait(200);
    //AutonRFire();
    AutonAjDn();
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
void BackR(){
    AutoIntakeOff = true;
    AutonMove(39,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(200);
    AutonMove(-4,70);
    AutoIntakeOff = true;
    AutonTurn(16,50,50);
    AutoFlip = true;
    AutonMove(5,80);
    AutonTurn(16,70,70);
    AutonMove(5,70);
    AutoFlip = false;
    AutonTurn(3,40,40);
    AutonMove(8,50);
    AutonTurn(-19,50,50);
    AutonMove(15,40,40);
}





//Front Blue
void FrntB(){
    AutonMove(33,60); 
    Wait(300);
    AutonMove(-35,70);
    AutonMove(-3,25);
    AutonMove(4,25);
    AutonFire();
    AutonTurn(15.5,40,40);
    AutonFire();
    AutonAjUp();
    AutonFire();
    Wait(200);
    AutonFire();
    AutonAjDn();
    AutonTurn(0.5,25,25);
    AutonMove(42,70);
    StrafeRecon(300,70,-1);
    AutonMove(5,70);
    AutonMove(-19,80);
    AutonFire();
    AutonTurn(-11,40,40);
    AutonMove(3,25);
    Wait(2600);
    AutonFire();
    Wait(600);
    if(BallInTop){
        AutonFire();
        AutonAjUp();
        AutonFire();
        AutonAjDn();
    }
    AutoIntakeOff = true;
    AutonTurn(-4,60,60);
    AutoFlip = true;
    AutonMove(7,70);
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
    AutonAjUp();
    Wait(200);
    //AutonRFire();
    AutonAjDn();
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





//Front Red
void FrntR(){
    AutoIntakeOff = true;
    AutonMove(32,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(200); 
    AutonMove(-33,70);
    AutonMove(-4,25);
    AutonMove(4,25);
    AutonFire();
    AutonTurn(-15.1,40,40);
    AutonFire();
    AutonAjUp();
    AutonFire();
    Wait(200);
    AutonFire();
    AutonAjDn();
    AutonTurn(-0.75,25,25); 
    AutonMove(40,80);
    StrafeRecon(500,80,1);
    AutonMove(5.5,40);
    AutonMove(-19,80);
    AutoIntakeOff = true;
    AutonTurn(9.5,50,50);
    AutonFire();
    AutonMove(3,50);
    AutonFire();
    AutonTurn(10,50,50);
    AutoFlip = true;
    AutonMove(18,60);
    Wait(200);
    AutonMove(-3,80);
    Wait(1000);
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
    AutonAjUp();
    AutonFire();
    Wait(200);
    AutonFire();
    AutonAjDn();
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





//Skills
void Skillz(){
    AutoIntakeOff = true;
    AutoFlip = false;  
    AutonMove(40,80);
    AutoIntakeOff = false;
    Wait(500);
    AutonMove(-45,70);
    AutonMove(-4,25);
    AutonMove(4.5,30);
    AutonTurn(-15.1,40,40);
    AutonFire();
    AutonMove(29,70);
    AutonTurn(0.1,25,25);
    Wait(200);
    AutonFire();
    Wait(20);
    AutonFire();
    AutonAjUp();
    Wait(500);
    AutonFire();
    AutonAjDn();
    StrafeRecon(160,30,-1);
    AutonMove(47,90);
    StrafeRecon(400,90,1);
    AutonMove(5,40);
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
    AutonFire();
    Wait(1000);
    if (BallInTop){
        AutonAjUp();  
        AutonFire();
        Wait(300); 
        AutonFire();
        HitFlag = true;
        AutonAjDn();
        Wait(100);
    }
    AutonTurn(-1,60,60);
    AutonMove(45,80);
    StrafeRecon(400,80,1);
    AutonMove(6,40);
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
    AutonMove(-73,80);
    StrafeRecon(800,80,-1);
    StrafeRecon(200,80,1);
    AutoIntakeOff = true;
    AutonMove(20,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(600);
    AutoIntakeOff = true;
    AutoFlip = true;
    AutonMove(3,50);
    AutonMove(-5,80);
    StrafeRecon(500,80,-1);
    AutoFlip = false;
    AutoIntakeOff = false;
    AutonMove(-42,80);
    StrafeRecon(200,80,1);
    AutonMove(-4,25);
    AutonMove(16,60);
    AutonFire();
    AutonTurn(16.5,40,40);
    HitFlag = false;
    AutonFire();
    Wait(700);
    if (BallInTop){
        AutonFire();
        AutonAjUp();
        Wait(300);
        AutonFire();
        HitFlag = true;
        AutonAjDn();
        Wait(100);
    }
    StrafeRecon(175,40,-1);
    AutonMove(41,70);
    StrafeRecon(400,80,1);
    AutonMove(6.5,80);
    StrafeRecon(100,80,1);
    Wait(800);
    if (BallInTop && HitFlag == false){
        AutonFire();
        AutonMove(-16,80);
        AutonFire();
        HitFlag = true;
        Wait(100);
        AutonMove(-23,80);
    }
    else {
        AutonMove(-39,80);
    }
    AutonTurn(15,40,40);
    HitFlag = false;
    AutonMove(12,80);
    AutoIntakeOff = true;
    AutoFlip = true;
    AutonMove(-4,60);
    StrafeRecon(1000,80,1);
    AutonMove(8,60);
    AutoFlip = false;
    AutonLock();
    AutonMove(-75,80);
    vex::task::sleep(2000);
    AutonNLck();
}





//Selecting
void AutonPots(){
    int SelectValueOne = AutonSelectOne.value(vex::percentUnits::pct);
    int SelectValueTwo = AutonSelectTwo.value(vex::percentUnits::pct);
    
    if(SelectValueOne > 80){
        Skillz();
    }
    
    else if(SelectValueOne > 60){
        if(SelectValueTwo > 80){

        }
        else if(SelectValueTwo > 50){

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
            BackBParkShot();
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
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print(" ");

        }
        else if(SelectValueTwo > 50){
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print(" ");

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
            Brain.Screen.print("Front Blue Caps and Top Middle Flag");
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
            //BackBParkShot();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Parking with Middle Flag");
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
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print(" ");

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