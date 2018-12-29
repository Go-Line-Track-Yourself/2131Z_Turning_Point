    //--------- Guide ---------//
    //AutonMove(Distance in Inches);   
    //AutonTurn(Turning Degrees); 
    //AutonIntk(ON or !ON, In or !In);
    //AutonFlyC(Go or !Go);
    //AutonFlip();
    //AutonIndx(Go or !Go);
    
void FrntRPark(){
    Brain.Screen.print("FrntRPark");
    Brain.Screen.newLine();
}

void BackRPark(){                                               //fix
    Brain.Screen.print("BackRPark");
    Brain.Screen.newLine();
}

void FrntBPark(){
    Brain.Screen.print("FrntBPark");
    Brain.Screen.newLine();
}

void BackBPark(){                                               //fix
    Brain.Screen.print("BackBPark");
    Brain.Screen.newLine();
}

void BackB(){                                                   //fix
    Brain.Screen.print("BackB");
    Brain.Screen.newLine();
    AutonHold(false);
    AutonIntk(true, true);  //Turn on Intake
    AutonFlyC(true);
    AutonMove(43);  //Go forward 46 Inches
    AutonIntk(false, false);
    AutonMove(-5);
    AutonTurn(6.95);
    AutonMove(-9);
    AutonIndx(true);
    vex::task::sleep(1300);
    AutonIndx(false);
    AutonTurn(3.75);
    AutonMove(-7.2);
    AutonFlip(300);
    AutonFlyC(false);
}
void BackR(){                                                   
    Brain.Screen.print("BackR");
    Brain.Screen.newLine();
    AutonHold(false);
    AutonIntk(true, true);  //Turn on Intake
    AutonFlyC(true);
    AutonMove(43);  //Go forward 46 Inches
    AutonIntk(false, false);
    AutonMove(-5);
    AutonTurn(-6.95);
    AutonMove(-9);
    AutonIndx(true);
    vex::task::sleep(1300);
    AutonIndx(false);
    AutonTurn(-3.75);
    AutonMove(-7.2);
    AutonFlip(300);
    AutonFlyC(false);
    
}

void FrntB(){                                                   
    Brain.Screen.print("FrntB");
    Brain.Screen.newLine();
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(44);  
    AutonIntk(false, false);
    AutonMove(-39.5);
    AutonTurn(9.3);
    AutonMove(10); 
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(20);   
    AutonIndx(true);
    AutonTurn(.1);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonTurn(1.5);
    AutonIndx(false); 
    AutonFlyC(false); 
    AutonIntk(false, false); 
    AutonMove(15);
    AutonMove(-18);
    AutonTurn(-4);
    AutonMove(-4);
    AutonTurn(-7);
    AutonIntk(true, false);
    AutonMove(16);
    AutonIntk(false, false);
}
void FrntR(){
    //////////////////// Top Center Flag ////////////////////
/*
    Brain.Screen.print("FrntR");
    Brain.Screen.newLine();
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(44);  
    AutonIntk(false, false); 
    AutonMove(-39.5);
    AutonTurn(-8.7);
    AutonMove(1);  
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(22);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false);   
    AutonMove(24);
    AutonMove(-12);
    AutonTurn(7.5);
    AutonIndx(true);
*/
    ///////////////////// Flip Cap ///////////////////////

    Brain.Screen.print("FrntR");
    Brain.Screen.newLine();
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(44);  
    AutonIntk(false, false); 
    AutonMove(-39.5);
    AutonTurn(-8.7);
    AutonMove(1);  
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(22);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false); 
    AutonFlyC(false); 
    AutonIntk(false, false); 
    AutonMove(24);
    AutonMove(-26);
    AutonTurn(-9);
    AutonMove(-12);
    AutonFlip(300);
}

void Skillz(){                                                  //fix
    Brain.Screen.print("Skillz");
    Brain.Screen.newLine();
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
            vex::task::sleep(15000);
        }
        if(SelectValueTwo > 50){
            BackBPark();
            vex::task::sleep(15000);
        }
        if(SelectValueTwo > 30){
            FrntRPark();
            vex::task::sleep(15000);
        }
        if(SelectValueTwo >= 0){
            BackRPark();
            vex::task::sleep(15000);
        }
    }
    if(SelectValue > 80){
        Skillz();
        vex::task::sleep(15000);
    }
    if(SelectValue > 60) {
        FrntB();
        vex::task::sleep(15000);
    }
    if(SelectValue > 40){
        BackB();
        vex::task::sleep(15000);
    }
    if(SelectValue > 20){
        FrntR();
        vex::task::sleep(15000);
    }
    if(SelectValue >= 0){
        BackR();
        vex::task::sleep(15000);
    }
}