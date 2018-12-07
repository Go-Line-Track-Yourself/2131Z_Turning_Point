    //--------- Guide ---------//
    //AutonMove(Distance in Inches);   
    //AutonTurn(Turning Degrees); 
    //AutonIntk(ON or !ON, In or !In);
    //AutonFlyC(Go or !Go);
    //AutonFlip();
    //AutonIndx(Go or !Go);
/*
void FrontB(){
    AutonFlyC(Go);  //Turn on Flywheel
    AutonIntk(ON, In);  //Turn on Intake
    AutonMove(46);  //Go forward 46 Inches
    AutonTurn(-45); //Turn left 45 degrees
    AutonIntk(!ON); //Turn off Intake
    AutonMove(-19); //Go backwards 19 Inches
    AutonFlip();    //Flip Cap
    AutonTurn(45);  //Turn right 45 degrees
    AutonMove(-28); //Go backwards 28 Inches
    AutonTurn(90);  //Turn right 90 degrees
    AutonMove(10);  //Go forwards 10 Inches
    AutonMove(-);   //Go back to Middle Flag Shot Spot
    AutonIndx(Go);  //Turn on Indexer
    AutonMove(-);   //Go back to Top Flad Shot Spot
    AutonIntk(ON, In);  //Turn on Intake to Move Ball into Indexer and Shoot it
    AutonMove(-);   //Go backwards to be Parallel with Platform
    AutonIndx(!Go); //Turn off Indexer
    AutonFlyC(!Go); //Turn off Flywheel
    AutonIntk(!ON); //Turn off Intake
    AutonTurn(90);  //Turn right 90
    AutonMove(-38); //Go backwards 38 Inches
    
}
void BackB{

}
void BackR{

}
*/
void FrntR(){
    AutonFlyC(true);  //Turn on Flywheel
    AutonIntk(true, true);  //Turn on Intake
    AutonMove(44);  //Go forward 46 Inches
    AutonTurn(4);  //Turn right 45 degrees
    AutonIntk(false, false); //Turn off Intake
    AutonMove(-19); //Go backwards 19 Inches
    AutonFlip(500);    //Flip Cap
    AutonTurn(-4); //Turn left 45 degrees
    AutonMove(-25); //Go backwards 28 Inches
    AutonTurn(-8); //Turn left 90 degrees
    AutonMove(30);  //Go forwards 10 Inches
    AutonMove(-28);   //Go back to Middle Flag Shot Spot
    AutonIndx(true);  //Turn on Indexer
    vex::task::sleep(1000);
    AutonIndx(false);  //Turn off Indexer    
    AutonMove(-29);   //Go back to Top Flad Shot Spot
/*    AutonIntk(ON);  //Turn on Intake to Move Ball into Indexer and Shoot it
    AutonMove(-);   //Go backwards to be Parallel with Platform
    AutonIndx(!Go); //Turn off Indexer
    AutonFlyC(!Go); //Turn off Flywheel
    AutonIntk(!ON); //Turn off Intake
    AutonTurn(-90); //Turn left 90
    AutonMove(-38); //Go backwards 38 Inches
    */
}