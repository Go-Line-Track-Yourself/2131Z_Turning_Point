void BackRBread(){
    // This is the back Red Auton when we are teamed up with P-Team
    AutonIntk(true, true);
    AutonMove(41,75);
    vex::task::sleep(100);
    AutonIntk(false, false);
    AutonMove(-41,70);
    AutonMove(-3,25);
    vex::task::sleep(300);
    AutonMove(3,25);
    AutonTurn(-9.1,30,30);
    AutonMove(43, 70);
    AutonFire();
    AutonAjUp();
    AutonIntk(true, true);
    vex::task::sleep(200);
    AutonIntk(false, false); 
    AutonFire();
    AutonAjDn();
    AutonTurn(-.5,30,30);
    AutonMove(40,70);
    AutonMove(-20,80);
    AutonTurn(8,30,30);
}

void FrntBPark(){
    AutonMove(42,70); 
    vex::task::sleep(300);
    AutonIntk(false, false); 
    AutonMove(-41,70);
    AutonMove(-3,25);
    vex::task::sleep(200);
    AutonMove(3,25);
    AutonTurn(8.75,25,25);
    AutonFire();
    AutonAjUp();
    AutonIntk(true, true);
    vex::task::sleep(200);
    AutonIntk(false, false); 
    AutonFire();
    AutonAjDn();
    AutonIntk(false, false);
    AutonTurn(.5,25,25);
    AutonMove(40,90);
    AutonMove(-66,70);
    AutonTurn(-10);
    AutonLock();
    AutonMove(40,80);
    vex::task::sleep(2000);
    AutonNLck();
}

void BackBPark(){                                                   
    AutonIntk(true, true);
    AutonMove(43,75);
    vex::task::sleep(500);
    AutonIntk(false, false);
    AutonMove(-12,60);
    AutonTurn(9,25,25);
    AutonMove(-15,80);
    AutonMove(-3,25);
    AutonLock();
    AutonMove(55,80);
    vex::task::sleep(1300);
    AutonNLck();
}
void BackR(){                                                   
    AutonIntk(true, true); 
    AutonMove(40,80);
    vex::task::sleep(200);
    AutonIntk(false, false);
    AutonMove(-12,70);
    AutonTurn(-9, 25,25);
    AutonMove(-15,50);
    AutonMove(-3,25);
    AutonLock();
    AutonMove(55,100);
    vex::task::sleep(3000);
    AutonNLck();

}

void FrntB(){                                                   
    AutonIntk(true, true);  
    AutonMove(42,70); 
    vex::task::sleep(300);
    AutonIntk(false, false); 
    AutonMove(-41,70);
    AutonMove(-3,25);
    AutonMove(3,25);
    AutonTurn(8.9,25,25);
    AutonMove(1,25);
    AutonFire();
    AutonAjUp();
    AutonIntk(true, true);
    vex::task::sleep(200);
    AutonIntk(false, false); 
    AutonFire();
    AutonAjDn();
    AutonIntk(false, false);
    AutonTurn(.5,25,25);
    AutonMove(40,70);
    AutonMove(-16,80);
    AutonIntk(true, false);
    AutonTurn(-12);
    AutonMove(16,70);
    AutonIntk(false, false);
}
void FrntR(){
    AutonIntk(true, true);  
    AutonMove(40,70);
    vex::task::sleep(200); 
    AutonIntk(false, false); 
    AutonMove(-39,70);
    AutonMove(-3,25);
    AutonMove(3,25);
    AutonTurn(-9,30,30);
    AutonMove(1,25);  
    AutonFire();
    AutonAjUp();
    AutonIntk(true, true);
    vex::task::sleep(200);
    AutonIntk(false, false); 
    AutonFire();
    AutonAjDn();
    AutonTurn(-.5,25,25); 
    AutonMove(40,80);
    AutonMove(-18,80);
    AutonIntk(true, false);
    AutonTurn(9,25,25);
    AutonMove(20,60);
    AutonIntk(false, false);
}

void Skillz(){                                                 

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
            
        }
        else if(SelectValueTwo >= 0){
            BackBPark();
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
            Brain.Screen.print(" ");
        }
        else if(SelectValueTwo >= 0){
            //BackBPark();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Parking");
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