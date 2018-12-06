void Auton(){
    //--------- Guide ---------//
    //AutonMove(Distance in Inches);   
    //AutonTurn(Turning Degrees); 
    //AutonIntk(ON or !ON, In or !In);
    //AutonFlyC(Go or !Go);
    //AutonFlip();
}
void FrontB(){
    AutonFlyC(Go);
    AutonIntk(ON);
    AutonMove(46);
    AutonTurn(-45);
    AutonIntk(!ON);
    AutonMove(-19);
    AutonFlip();
    AutonTurn(45);
    AutonMove(-28);
    AutonTurn(90);
    AutonMove(10);
    AutonMove(-);
    AutonIndx(Go);
    AutonMove(-);
    AutonIntk(ON);
    AutonMove(-);
    AutonIndx(!Go);
    AutonFlyC(!Go);
    AutonIntk(!ON);
    AutonTurn(90);
    AutonMove(-38);
}
/*void BackB{

}
void BackR{

}*/
void FrntR{
    AutonFlyC(Go);
    AutonIntk(ON);
    AutonMove(46);
    AutonTurn(45);
    AutonIntk(!ON);
    AutonMove(-19);
    AutonFlip();
    AutonTurn(-45);
    AutonMove(-28);
    AutonTurn(-90);
    AutonMove(10);
    AutonMove(-);
    AutonIndx(Go);
    AutonMove(-);
    AutonIntk(ON);
    AutonMove(-);
    AutonIndx(!Go);
    AutonFlyC(!Go);
    AutonIntk(!ON);
    AutonTurn(-90);
    AutonMove(-38);
}