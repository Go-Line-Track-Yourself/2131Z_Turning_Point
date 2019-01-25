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
    AutonMove(40,75);
    vex::task::sleep(200); 
    AutonIntk(false, false); 
    AutonMove(-39.5,70);
    AutonMove(-3,25);
    vex::task::sleep(200);
    AutonMove(3,25);
    AutonTurn(-8.85,25,25);
    AutonMove(1,25);  
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(17,60);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false);  
    AutonTurn(-1,50,50); 
    AutonMove(25,70);
    AutonMove(-40,60);
    AutonTurn(5.8,30,30);
    AutonMove(12,60);
    AutonIndx(true);

}

void BackRBread(){
    // This is the back Red Auton when we are teamed up with P-Team
    AutonHold(false);
    AutonFlyC(true);
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
    AutonIndx(true);
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(18,50);
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false);
    AutonTurn(-1.25,30,30);
    AutonMove(20,70);
    AutonMove(-20,80);
    AutonTurn(8,30,30);
}

void FrntBPark(){
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(42,70); 
    vex::task::sleep(300);
    AutonIntk(false, false); 
    AutonMove(-41,70);
    AutonMove(-3,25);
    AutonMove(3,25);
    AutonTurn(8.75,25,25);
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(16,80);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1400);
    AutonIndx(false); 
    AutonFlyC(false); 
    AutonIntk(false, false);
    AutonTurn(1,25,25);
    AutonMove(20,90);
    AutonMove(-66,70);
    AutonTurn(-10);
    AutonLock();
    AutonMove(40,80);
    vex::task::sleep(2000);
    AutonNLck();
}

void BackBBread(){                                           
    // This is the back Blue Auton when we are teamed up with P-Team
    AutonHold(false);
    AutonFlyC(true);
    AutonIntk(true, true);
    AutonMove(41,75);
    vex::task::sleep(60);
    AutonIntk(false, false);
    AutonMove(-41,70);
    AutonMove(-3,25);
    vex::task::sleep(300);
    AutonMove(2.5,25);
    AutonTurn(8.9,30,30);
    AutonMove(42, 80);
    AutonIndx(true);
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(19,50);
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false);
    AutonTurn(1,30,30);
    AutonMove(16,70);
    AutonMove(-20,80);
    AutonTurn(-9,30,30);
}

void BackBPark(){                                                   
    AutonHold(false);
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
    AutonHold(false);
    AutonIntk(true, true); 
    AutonMove(40,80);
    vex::task::sleep(200);
    AutonIntk(false, false);
    AutonMove(-5.5,70);
    AutonTurn(-9, 25,25);
    AutonMove(-20,50);
    AutonMove(-2,25);
    AutonLock();
    AutonMove(47,100);
    vex::task::sleep(3000);
    AutonNLck();

}

void FrntB(){                                                   
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(42,70); 
    vex::task::sleep(300);
    AutonIntk(false, false); 
    AutonMove(-41,70);
    AutonMove(-3,25);
    AutonMove(3,25);
    AutonTurn(6.5,25);
    AutonMove(1,25);
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(18,50);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false); 
    AutonFlyC(false); 
    AutonIntk(false, false);
    AutonTurn(1,25);
    AutonMove(20,70);
    AutonMove(-16,80);
    AutonIntk(true, false);
    AutonTurn(-12);
    AutonMove(16,70);
    AutonIntk(false, false);
}
void FrntR(){
    ///////////////////// Flip Cap ///////////////////////
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(40,70);
    vex::task::sleep(200); 
    AutonIntk(false, false); 
    AutonMove(-39,70);
    AutonMove(-3,25);
    AutonMove(3,25);
    AutonTurn(-9, 30,30);
    AutonMove(1, 25);  
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(15);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false);  
    AutonTurn(-1,25,25); 
    AutonMove(17,80);
    AutonMove(-18,80);
    AutonIntk(true, false);
    AutonTurn(9,25,25);
    AutonMove(20,60);
    

}

void Skillz(){                                                 
    AutonHold(false);
    AutonFlyC(true);
    AutonIntk(true, true);
    AutonMove(42,75);
    vex::task::sleep(100);
    AutonIntk(false, false);
    AutonMove(-42,70);
    AutonMove(-3,25);
    vex::task::sleep(300);
    AutonMove(3,25);
    AutonTurn(-9.2,30,30);
    AutonMove(43, 70);
    AutonIndx(true);
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(18,50);
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false);
    AutonTurn(-1.25,30,30);
    AutonMove(25,70);
    AutonFlyC(false);
    AutonMove(-45,80);
    AutonTurn(8,25,25);
    AutonMove(-5,30);
    AutonMove(45,70);
    vex::task::sleep(300);
    AutonMove(-8,70);
    AutonTurn(7.5,25,25);
    AutonMove(30);
    AutonLock();
}

void AutonPots(){
    int SelectValue = AutonSelect.value(vex::percentUnits::pct);
    int SelectValueTwo = AutonSelectTwo.value(vex::percentUnits::pct);
    
    if(SelectValue > 80){
        Skillz();
    }
    
    else if(SelectValue > 60){
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
    
    else if(SelectValue > 40){
        if(SelectValueTwo > 80){

        }
        else if(SelectValueTwo > 50){

        }
        else if(SelectValueTwo > 30){
            BackBBread();
        }
        else if(SelectValueTwo >= 0){
            BackBPark();
        }
    }
    else if(SelectValue > 20){
        if(SelectValueTwo > 80){
            
        }
        else if(SelectValueTwo > 50){

        }
        else if(SelectValueTwo > 30){
            FrntRTopF();
        }
        else if(SelectValueTwo >= 0){
            FrntR();
        }
    }
    else if(SelectValue >= 0){
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
    int SelectValue = AutonSelect.value(vex::percentUnits::pct);
    int SelectValueTwo = AutonSelectTwo.value(vex::percentUnits::pct);
    Brain.Screen.clearScreen();
    if(SelectValue > 80){
        //Skillz;
        Brain.Screen.clearLine(1,vex::color::purple);
        Brain.Screen.clearLine();
        Brain.Screen.print("Skillz Mode");
    }

    else if(SelectValue > 60){
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
    else if(SelectValue > 40){
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
            //BackBBread();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Bread");
        }
        else if(SelectValueTwo >= 0){
            //BackBPark();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Parking");
        }
    }
    else if(SelectValue > 20){
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
            //FrntRTopF();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Red with the Top Middle Flag (Center)");
        }
        else if(SelectValueTwo >= 0){
            //FrntR();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Red with Cap (Inch From Right)");
        }
    }
    else if(SelectValue >= 0){
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