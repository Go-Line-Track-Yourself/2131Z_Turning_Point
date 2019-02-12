void BackRBread(){
/*
    AutonIntk(true, true);
    AutonMove(41,75);
    vex::task::sleep(100);
    AutonIntk(false, false);
    AutonMove(-41,70);
    AutonMove(-3,25);
    vex::task::sleep(300);
    AutonMove(3,25);
    AutonTurn(-16,30,30);
    AutonMove(43, 70);
    Wait(100);
    AutonFire();
    AutonAjUp();
    AutonBelt(true, true);
    AutonIntk(true, true);     
    Wait(900);
    AutonBelt(false, false);
    AutonIntk(false, false);
    AutonFire();
    AutonAjDn();
    AutonTurn(-.5,30,30);
    AutonMove(40,70);
    AutonMove(-20,80);
    AutonTurn(8,30,30);
///////////////////////////
    AutonMove(39,80);
    vex::task::sleep(200);
    AutonMove(-4,70);
    
    AutonTurn(16, 40,40);
    AutonMove(18,50);
    AutonMove(3,25);
    AutonLock();
    AutonMove(-65,100);
    AutoIntakeOff = false;
    vex::task::sleep(15000);
    AutonNLck();  
*/
}
void FrntBPark(){
    AutonMove(41,80); 
    vex::task::sleep(300);
    AutonMove(-43,90);
    AutonMove(-3,30);
    AutonMove(3,30);
    AutonTurn(15.5,40,40);
    AutonFire();
    AutonAjUp();
    Wait(300);
    AutonFire();
    AutonAjDn();
    AutonTurn(1,80,80);
    AutonMove(42,70);
//    AutonMove(-16,80);
//    AutonTurn(-18,70,70);
//    AutoIntakeOff = true;
//    AutonMove(19,90);
//    AutonTurn(22,50,50);
    AutonMove(-70,90);
    AutonTurn(16,80,80);
    AutonLock();
    AutonMove(-50,100);
    vex::task::sleep(1300);
    AutonNLck();
}
void BackBPark(){
    AutonMove(41,75);
    Wait(300);
    AutonMove(-7,60);
    AutonTurn(-16,25,25);
    AutonMove(16,80);
    AutonMove(3,25);
    AutonLock();
    AutonMove(-60,80);
    vex::task::sleep(1300);
    AutonNLck();
}
void BackB(){
    AutonMove(41,75);
    Wait(300);
    AutonMove(-10,60);
    StrafeRecon(900,80,-1);
    Wait(500);
    AutoIntakeOff = true;
    AutonMove(5,80);
}
void BackR(){
    AutonMove(39,80);
    vex::task::sleep(200);
    AutonMove(-5,70);
    AutoIntakeOff = true;
    StrafeRecon(950,80,1);
    AutonMove(5,80);
    Wait(300);
    AutonMove(-5,70);
    AutonTurn(16, 40,40);
    AutonMove(3,50);
    AutonLock();
    AutonMove(-65,100);
    AutoIntakeOff = false;
    AutonTurn(33.5,40,40);
    AutonAjUp();
    AutonFire();
    Wait(300);
    AutonAjDn();
    AutonNLck();

}
void FrntB(){
    AutonMove(41,70); 
    vex::task::sleep(300);
    AutonMove(-43,70);
    AutonMove(-3,25);
    AutonMove(3,25);
    AutonTurn(15.5,40,40);
    AutonFire();
    AutonAjUp();
    Wait(200);
    AutonFire();
    AutonAjDn();
    AutonTurn(1,25,25);
    AutonMove(42,70);
    AutonMove(-16,80);
    AutonTurn(-18);
    AutoIntakeOff = true;
    AutonMove(16,70);
}
void FrntR(){
    AutonMove(40,70);
    Wait(200); 
    AutonMove(-40,70);
    AutonMove(-3,25);
    AutonMove(4,25);
    AutonTurn(-15.3,40,40);
    AutonFire();
    AutonAjUp();
    Wait(200);
    AutonFire();
    AutonAjDn();
    AutonTurn(-0.5,25,25); 
    AutonMove(40,80);
    StrafeRecon(500,80,1);
    AutonMove(-18,80);
    AutonTurn(16,50,50);
    AutoIntakeOff = true;
    AutonMove(20,60);
}
void Skillz(){   
    AutoIntakeOff = true;
    AutoFlip = false;  
    AutonMove(41,80);
    AutoIntakeOff = false;
    Wait(500);
    AutonMove(-48,70);
    AutonMove(-4,25);
    AutonMove(5,25);
    AutonTurn(-15.8,40,40);
    AutonMove(30,80);
    Wait(100);
    AutonFire();
    AutonAjUp();
    Wait(300);
    AutonFire();
    AutonAjDn();
    AutonTurn(-1,25,25);
    AutonMove(47,80);
    StrafeRecon(400,90,1);
    AutonMove(6,40);
    AutoIntakeOff = true;
    AutonMove(-45,60);
    AutonTurn(16,40,40);
    AutonMove(-8,60);
    AutonMove(-3,30);
    AutonMove(43,80);
    AutoIntakeOff = false;
    Wait(300);
    AutonMove(-6,70);
    AutonTurn(-13,40,40);
    AutonFire();
    AutonAjUp();    
    Wait(300);
    AutonFire();
    AutonAjDn();
    AutonTurn(-1,60,60);
    AutonMove(45,80);
    StrafeRecon(500,80,1);
    AutonMove(5,40);
    AutonMove(-22,70);
    AutonTurn(16.5,40,40);
    AutoIntakeOff = true;
    AutoFlip = true;
    AutonMove(37,70);
    AutoIntakeOff = false;
    AutoFlip = false;
    AutonTurn(34,60,60);
    StrafeRecon(1000,80,-1);
    StrafeRecon(200,80,1);
    AutoIntakeOff = true;
    AutonMove(20,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(300);
    StrafeRecon(400,80,-1);
    AutonMove(-44,80);
    AutonMove(-4,25);
    AutonMove(15,60);
    AutonTurn(16.3,40,40);
    AutonFire();
    AutonAjUp();
    Wait(300);
    AutonFire();
    AutonAjDn();
    AutonTurn(-1.25,25,25);
    AutonMove(42,70);
    StrafeRecon(400,80,1);
    AutonMove(6,40);
    AutoIntakeOff= true;
    AutonMove(-40,80);
    AutonTurn(-16,40,40);
    AutonMove(-22,80);
    AutonMove(-3,40);
    AutonMove(31,80);
    AutonTurn(16,40,40);
    AutonMove(-30,90);
    AutonTurn(16,30,30);
    AutonLock();
    AutonMove(-38,80);
    vex::task::sleep(2000);
    AutonNLck();
}
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

        }
        else if(SelectValueTwo > 50){

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
            
        }
        else if(SelectValueTwo >= 0){
            FrntR();
        }
    }
    else if(SelectValueOne >= 0){
        if(SelectValueTwo > 80){
            
        }
        else if(SelectValueTwo > 50){

        }
        else if(SelectValueTwo > 30){
            BackRBread();
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
        Brain.Screen.print("Skillz Mode");
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
            Brain.Screen.print("Front Blue Parking Mode (Inch From Right)");
        }
        else if(SelectValueTwo >= 0){
            //FrntB();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Blue with Cap (Inch From Right)");
        }
    }
    else if(SelectValueOne > 40){
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
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Parking");
        }
        else if(SelectValueTwo >= 0){
            //BackBPark();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue with Caps (Center)");
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
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print(" ");
        }
        else if(SelectValueTwo >= 0){
            //FrntR();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Red with Cap (Inch From Right)");
        }
    }
    else if(SelectValueOne >= 0){
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
            //BackRBread();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Red Bread (Center)");
        }
        else if(SelectValueTwo >= 0){
            //BackR();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Red Caps (Center)");
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