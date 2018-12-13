    //--------- Guide ---------//
    //AutonMove(Distance in Inches);   
    //AutonTurn(Turning Degrees); 
    //AutonIntk(ON or !ON, In or !In);
    //AutonFlyC(Go or !Go);
    //AutonFlip();
    //AutonIndx(Go or !Go);

void FrntB(){
    AutonFlyC(true);  //Turn on Flywheel
    AutonIntk(true, true);  //Turn on Intake
    AutonMove(44);  //Go forward 46 Inches
    AutonTurn(-4);  //Turn right 45 degrees
    AutonIntk(false, false); //Turn off Intake
    AutonMove(-18); //Go backwards 19 Inches
    AutonFlip(500);    //Flip Cap
    AutonTurn(4); //Turn left 45 degrees
    AutonMove(-28.5); //Go backwards 28 Inches
    AutonTurn(9.75); //Turn left 90 degrees
    AutonMove(30);  //Go forwards 10 Inches
//    AutonTurn(.5);
//    AutonMove(-4);
//    AutonTurn(-.25);
    AutonMove(-16);   //Go back to Middle Flag Shot Spot
    AutonIndx(true);  //Turn on Indexer
    vex::task::sleep(1300);
    AutonIndx(false);  //Turn off Indexer  
    AutonTurn(-.5);  
    AutonMove(-37);   //Go back to Top Flad Shot Spot
//    AutonTurn(-.5);
    AutonIndx(true);
    AutonIntk(true, true);  //Turn on Intake to Move Ball into Indexer and Shoot it
//    AutonMove(-);   //Go backwards to be Parallel with Platform
    vex::task::sleep(3000);
    AutonIndx(false); //Turn off Indexer
    AutonFlyC(false); //Turn off Flywheel
    AutonIntk(false, false); //Turn off Intake
}

void BackB(){
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

void FrntR(){
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
    AutonTurn(-9);
    AutonMove(20);
    AutonTurn(-9);
    AutonMove(36);
}

void Skillz(){
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