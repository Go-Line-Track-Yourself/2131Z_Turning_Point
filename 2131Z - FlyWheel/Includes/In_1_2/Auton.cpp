    //--------- Guide ---------//
    //AutonMove(Distance in Inches);   
    //AutonTurn(Turning Degrees); 
    //AutonIntk(ON or !ON, In or !In);
    //AutonFlyC(Go or !Go);
    //AutonFlip();
    //AutonIndx(Go or !Go);
    
void FrntRTopF(){
    //////////////////// Top Center Flag ////////////////////

    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(40);
    vex::task::sleep(200); 
    AutonIntk(false, false); 
    AutonMove(-39.5);
    AutonTurn(-8.85);
    AutonMove(1);  
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(15);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false);  
    AutonTurn(-1); 
    AutonMove(17);
    AutonMove(-12);
    AutonTurn(7);
    AutonIndx(true);

}

void BackRPark(){
    AutonHold(false);
    AutonFlyC(true);
    AutonIntk(true, true);
    AutonMove(42);
    vex::task::sleep(60);
    AutonMove(-40);
}

void FrntBPark(){
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(42);
    vex::task::sleep(50);
    AutonMove(-39);
    AutonIntk(false, false);
    AutonTurn(8.05);
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(18);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false); 
    AutonFlyC(false); 
    AutonIntk(false, false);
    AutonTurn(2);
    AutonMove(25);
    AutonMove(-65);
    AutonTurn(-10);
    AutonLock();
    AutonMove(40);
    vex::task::sleep(2000);
    AutonNLck();
}

void BackBPark(){                                           
    AutonHold(false);
    AutonIntk(true, true);
    AutonFlyC(true);
    AutonMove(43);
    AutonIntk(false, false);
    AutonMove(-5);
    AutonTurn(7.65);
    AutonMove(-9);
    AutonIndx(true);
    vex::task::sleep(1300);
    AutonIndx(false);
    AutonTurn(6.5);
    AutonMove(-1);
    AutonFlip(300);
    AutonFlyC(false);
}

void BackB(){                                                   
    AutonHold(false);
    AutonIntk(true, true);
    AutonFlyC(true);
    AutonMove(43);
    AutonIntk(false, false);
    AutonMove(-5);
    AutonTurn(7.65);
    AutonMove(-9);
    AutonIndx(true);
    vex::task::sleep(1300);
    AutonIndx(false);
    AutonFlyC(false);
}
void BackR(){                                                   
    AutonHold(false);
    AutonIntk(true, true); 
    AutonFlyC(true);
    AutonMove(40);
    vex::task::sleep(50);
    AutonIntk(false, false);
    AutonTurn(-9.5);
    AutonMove(-8);
    AutonFlip(350);
    AutonMove(3);
    AutonTurn(1.75);
    AutonIndx(true);
    vex::task::sleep(1300);
    AutonFlyC(false);
    AutonIndx(false);
}

void FrntB(){                                                   
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(42);  
    AutonMove(-39);
    AutonIntk(false, false);
    AutonTurn(8);
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(18);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false); 
    AutonFlyC(false); 
    AutonIntk(false, false);
    AutonTurn(2);
    AutonMove(13);
    AutonMove(-16);
    AutonIntk(true, false);
    AutonTurn(-12);
    AutonMove(15);
    AutonIntk(false, false);
}
void FrntR(){
    ///////////////////// Flip Cap ///////////////////////
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(40);
    vex::task::sleep(200); 
    AutonIntk(false, false); 
    AutonMove(-39.5);
    AutonTurn(-8.85);
    AutonMove(1);  
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(15);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false);  
    AutonTurn(-1); 
    AutonMove(17);
    AutonMove(-18);
    AutonTurn(-9);
    AutonMove(-9);
    AutonFlip(300);
}

void Skillz(){                                                 
    AutonHold(false);
    AutonIntk(true, true);  //Turn on Intake
    AutonFlyC(true);
    AutonMove(44);  //Go forward 46 Inches
    AutonMove(-1.5);
    AutonIntk(false, false);
    AutonTurn(-8.75);
    AutonIndx(true);
    vex::task::sleep(1300);
    AutonIndx(false);
    AutonTurn(.25);
    AutonMove(-9);
    AutonFlip(500);
    AutonMove(6);
    AutonTurn(-4.5);
    AutonMove(-25);
    AutonFlip(500);
}

void AutonPots(){
    int SelectValue = AutonSelect.value(vex::percentUnits::pct);
    int SelectValueTwo = AutonSelectTwo.value(vex::percentUnits::pct);
    if(SelectValue > 98){
        if(SelectValueTwo > 80){
            FrntBPark();
        }
        else if(SelectValueTwo > 50){
            BackBPark();
        }
        else if(SelectValueTwo > 30){
            FrntRTopF();
        }
        else if(SelectValueTwo >= 0){
            BackRPark();
        }
    }
    else if(SelectValue > 80){
        Skillz();
    }
    else if(SelectValue > 60) {
        FrntB();
    }
    else if(SelectValue > 40){
        BackB();
    }
    else if(SelectValue > 20){
        FrntR();
    }
    else if(SelectValue >= 0){
        BackR();
    }
}
void AtonUpdator(){
    int SelectValue = AutonSelect.value(vex::percentUnits::pct);
    int SelectValueTwo = AutonSelectTwo.value(vex::percentUnits::pct);
    Brain.Screen.clearScreen();

    if(SelectValue > 98){
        if(SelectValueTwo > 80){
            // FrntBPark();
        Brain.Screen.clearLine(1,vex::color::blue);
        Brain.Screen.clearLine();
        Brain.Screen.print("Front Blue Parking Mode");
        }
        else if(SelectValueTwo > 50){
            // BackBPark();
        Brain.Screen.clearLine(1,vex::color::blue);
        Brain.Screen.clearLine();
        Brain.Screen.print("Back Blue Parking Mode");
        }
        else if(SelectValueTwo > 30){
            // FrntRTopF();
        Brain.Screen.clearLine(1,vex::color::red);
        Brain.Screen.clearLine();
        Brain.Screen.print("Front Red with the Top Middle Flag");
        }
        else if(SelectValueTwo >= 0){
            // BackRPark();
        Brain.Screen.clearLine(1,vex::color::red);
        Brain.Screen.clearLine();
        Brain.Screen.print("Back Red Parking Mode");
        }
    }
    else if(SelectValue > 80){
        // Skillz();
        Brain.Screen.clearLine(1,vex::color::purple);
        Brain.Screen.clearLine();
        Brain.Screen.print("Skillz Mode");
    }
    else if(SelectValue > 60) {
        // FrntB();
        Brain.Screen.clearLine(1,vex::color::blue);
        Brain.Screen.clearLine();
        Brain.Screen.print("Front Blue with Cap");
    }
    else if(SelectValue > 40){
        // BackB();
        Brain.Screen.clearLine(1,vex::color::blue);
        Brain.Screen.clearLine();
        Brain.Screen.print("Back Blue Caps");
    }
    else if(SelectValue > 20){
        // FrntR();
        Brain.Screen.clearLine(1,vex::color::red);
        Brain.Screen.clearLine();
        Brain.Screen.print("Front Red with Cap");
    }
    else if(SelectValue >= 0){
        // BackR();
        Brain.Screen.clearLine(1,vex::color::red);
        Brain.Screen.clearLine();
        Brain.Screen.print("Back Red Caps");
    }
}

int WhatAuton(){
    while(true){
        AtonUpdator();
        Brain.Screen.render();
        vex::task::sleep(20);
    }
    return 1;
}