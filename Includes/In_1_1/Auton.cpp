    //--------- Guide ---------//
    //AutonMove(Distance in Inches);   
    //AutonTurn(Turning Degrees); 
    //AutonIntk(ON or !ON, In or !In);
    //AutonFlyC(Go or !Go);
    //AutonFlip();
    //AutonIndx(Go or !Go);
    
void FrntRPark(){
    AutonMove(20);
    AutonTurn(-9);
    AutonMove(36);
    AutonHold(true);
}

void BackRPark(){
    AutonMove(20);
    AutonTurn(9);
    AutonMove(36);
    AutonHold(true);
}

void FrntBPark(){
    AutonMove(20);
    AutonTurn(9);
    AutonMove(36);
    AutonHold(true);
}

void BackBPark(){
    AutonMove(20);
    AutonTurn(-9);
    AutonMove(36);
    AutonHold(true);
}

void BackB(){
    AutonHold(false);
    AutonIntk(true, true);  //Turn on Intake
    AutonFlyC(true);
    AutonMove(43);  //Go forward 46 Inches
    AutonMove(-2);
    AutonIntk(false, false);
    AutonTurn(8.75);
    AutonIndx(true);
    vex::task::sleep(1300);
    AutonIndx(false);
    AutonTurn(-.25);
    AutonMove(-9);
    AutonFlip(500);
    AutonFlyC(false);
}
void BackR(){
    AutonHold(false);
    AutonIntk(true, true);  //Turn on Intake
    AutonFlyC(true);
    AutonMove(43);  //Go forward 46 Inches
    AutonMove(-2);
    AutonIntk(false, false);
    AutonTurn(-8.75);
    AutonIndx(true);
    vex::task::sleep(1300);
    AutonIndx(false);
    AutonTurn(.25);
    AutonMove(-9);
    AutonFlip(500);
    AutonFlyC(false);
    
}

void FrntB(){
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(44);  
    AutonIntk(false, false); 
    AutonMove(-39.5);
    AutonTurn(7.75);
    AutonMove(1);  
    AutonIndx(true); 
    vex::task::sleep(1300);
    AutonIndx(false);
    AutonMove(21.5);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false); 
    AutonFlyC(false); 
    AutonIntk(false, false); 
    AutonTurn(1);
    AutonMove(24);
    AutonMove(-36);
    AutonTurn(-9);
    AutonIntk(true, false)
    AutonMove(36);
    AutonMove(-40);
    AutonIntk(false, false);
    AutonMove(7);
    AutonTurn(-9);
}
void FrntR(){
    AutonStop(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(44);  
    AutonIntk(false, false); 
    AutonMove(-39.5);
    AutonTurn(-7.75);
    AutonMove(1);  
    AutonIndx(true); 
    vex::task::sleep(1300);
    AutonIndx(false);
    AutonMove(21.5);   
    AutonIndx(true);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonIndx(false); 
    AutonFlyC(false); 
    AutonIntk(false, false); 
    AutonTurn(-1);
    AutonMove(24);
    AutonMove(-36);
    AutonTurn(9);
    AutonIntk(true, false)
    AutonMove(36);
    AutonMove(-40);
    AutonIntk(false, false);
    AutonMove(7);
    AutonTurn(9);
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