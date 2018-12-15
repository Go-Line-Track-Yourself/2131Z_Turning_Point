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
    AutonTurn(7.2);
    AutonMove(-3);
    AutonIndx(true);
    vex::task::sleep(1300);
    AutonIndx(false);
    AutonTurn(1.6);
    AutonMove(-4);
    AutonFlip(300);
    AutonFlyC(false);
}
void BackR(){                                                   //fix
    Brain.Screen.print("BackR");
    Brain.Screen.newLine();
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
    Brain.Screen.print("FrntB");
    Brain.Screen.newLine();
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(44);  
    AutonIntk(false, false);
    AutonMove(-39.5);
    AutonTurn(9.1);
    AutonMove(10); 
    AutonTurn(-1.5); 
    AutonIndx(true); 
    vex::task::sleep(1400);
    AutonIndx(false);
    AutonMove(21.5);   
    AutonIndx(true);
    AutonTurn(.25);
    AutonIntk(true, true);  
    vex::task::sleep(1500);
    AutonTurn(1.5);
    AutonIndx(false); 
    AutonFlyC(false); 
    AutonIntk(false, false); 
    AutonMove(15);
//    AutonTurn(1);
    AutonMove(-18);
    AutonTurn(-4);
    AutonMove(-4);
    AutonTurn(-7);
    AutonIntk(true, false);
    AutonMove(30);
    AutonIntk(false, false);
}
void FrntR(){
    Brain.Screen.print("FrntR");
    Brain.Screen.newLine();
    AutonHold(false);
    AutonFlyC(true);  
    AutonIntk(true, true);  
    AutonMove(44);  
    AutonIntk(false, false); 
    AutonMove(-39.5);
    AutonTurn(-7.75);
    AutonMove(1);  
    AutonIndx(true); 
    vex::task::sleep(1400);
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
/*    AutonMove(-36);
    AutonTurn(9);
    AutonIntk(true, false);
    AutonMove(36);
    AutonMove(-40);
    AutonIntk(false, false);
    AutonMove(7);
    AutonTurn(9);
*/
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