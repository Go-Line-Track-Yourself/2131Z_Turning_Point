void Auton(){
    //--------- Guide ---------//
    //AutonMove(Distance in Inches);   
    //AutonTurn(Turning Degrees); 
    //AutonIntk(ON or !ON, In or !In);
    //AutonFlyC(Go or !Go);
    //AutonFlip();
    //AutonIndx(Go or !Go);
}
void FrontB(){
    AutonFlyC(Go);  //Turn on Flywheel
    AutonIntk(ON);  //Turn on Intake
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
    AutonIntk(ON);  //Turn on Intake to Move Ball into Indexer and Shoot it
    AutonMove(-);   //Go backwards to be Parallel with Platform
    AutonIndx(!Go); //Turn off Indexer
    AutonFlyC(!Go); //Turn off Flywheel
    AutonIntk(!ON); //Turn off Intake
    AutonTurn(90);  //Turn right 90
    AutonMove(-38); //Go backwards 38 Inches
}
/*void BackB{

}
void BackR{

}*/
void FrntR{
    AutonFlyC(Go);  //Turn on Flywheel
    AutonIntk(ON);  //Turn on Intake
    AutonMove(46);  //Go forward 46 Inches
    AutonTurn(45);  //Turn right 45 degrees
    AutonIntk(!ON); //Turn off Intake
    AutonMove(-19); //Go backwards 19 Inches
    AutonFlip();    //Flip Cap
    AutonTurn(-45); //Turn left 45 degrees
    AutonMove(-28); //Go backwards 28 Inches
    AutonTurn(-90); //Turn left 90 degrees
    AutonMove(10);  //Go forwards 10 Inches
    AutonMove(-);   //Go back to Middle Flag Shot Spot
    AutonIndx(Go);  //Turn on Indexer
    AutonMove(-);   //Go back to Top Flad Shot Spot
    AutonIntk(ON);  //Turn on Intake to Move Ball into Indexer and Shoot it
    AutonMove(-);   //Go backwards to be Parallel with Platform
    AutonIndx(!Go); //Turn off Indexer
    AutonFlyC(!Go); //Turn off Flywheel
    AutonIntk(!ON); //Turn off Intake
    AutonTurn(-90); //Turn left 90
    AutonMove(-38); //Go backwards 38 Inches
}