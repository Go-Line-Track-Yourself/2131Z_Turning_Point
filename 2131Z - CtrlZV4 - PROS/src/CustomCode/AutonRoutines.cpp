#include "Custom/AutonRoutines.hpp"
#include "Custom/Drive.hpp"
#include "Custom/Intake.hpp"
#include "Custom/Lift.hpp"
#include "Custom/Puncher.hpp"
#include "Custom/Global.hpp"
#include "main.h"

namespace AutonRoutines{

    //Back Blue
    void BackBPark(){
        Drive::AutonMove(33,60);
        Wait(200);
        Drive::AutonTurn(-13.5,40,40);
        //AutoIntakeOff = true;
        //AutoFlip = true;
        Drive::AutonMove(20,70);
        Drive::AutonTurn(-21,70,70);
        Drive::AutonMove(3,50);
        //AutoFlip = false;
        Drive::AutonTurn(18,40,40);
        Drive::StrafeRecon(160,70,1);
        Drive::AutonMove(8,40);
        Drive::AutonLock();
        Drive::AutonMove(-64,80);
        Wait(3000);
        Drive::AutonNLck();
    }
    void BackBParkShot(){
        //AutoIntakeOff = true;
        Drive::AutonMove(39,80);
        Wait(200);
        //AutoIntakeOff = false;
        Wait(200);
        Drive::AutonMove(-4,70);
        //AutoIntakeOff = true;
        Drive::AutonTurn(-16,50,50);
        //AutoFlip = true;
        Drive::AutonMove(5,80);
        Drive::AutonTurn(-16,70,70);
        Drive::AutonMove(5,70);
        //AutoFlip = false;
        Drive::AutonTurn(-3,40,40);
        Drive::AutonMove(8,50);
        Drive::AutonTurn(19,50,50);
        Drive::AutonMove(15,40,40);
        Drive::AutonLock();
        Drive::AutonMove(-65,100);
        //AutoIntakeOff = false;
        //AutonPSet();
        Drive::AutonTurn(-33.5,40,40);
        Puncher::AutonAjUp();
        Puncher::AutonFire();
        Wait(300);
        Lift::AutonAjDn();
        Drive::AutonNLck();
    }
    void BackB(){
        Drive::AutonMove(33,60);
        Wait(200);
        Drive::AutonTurn(-14,40,40);
        //AutoIntakeOff = true;
        //AutoFlip = true;
        Drive::AutonMove(20,70);
        Drive::AutonTurn(-21,70,70);
        Drive::AutonMove(8,50);
        //AutoFlip = false;
    }
    void BackBBread(){
        //AutoIntakeOff = true;
        Drive::AutonMove(41,70);
        Wait(100);
        //AutoIntakeOff = false;
        Wait(300);
        Drive::AutonMove(-43,70);
        Drive::AutonMove(-3,25);
        Drive::AutonMove(3,25);
        Drive::AutonTurn(15.5,40,40);
        //AutonPSet();
        Drive::AutonMove(43,70);
        Wait(150);
        Puncher::AutonFire();
        Lift::AutonAjUp();
        Wait(200);
        //AutonRFire();
        Lift::AutonAjDn();
        Drive::AutonTurn(1,25,25);
        Drive::AutonMove(42,70);
        Drive::StrafeRecon(300,70,-1);
        Drive::AutonMove(5.5,70);
        Drive::AutonMove(-38,80);
        Drive::AutonTurn(16,60,60);
        Drive::AutonLock();
        Drive::AutonMove(-40,70);
        Drive::AutonNLck();
    }





    //Back Red
    void BackRPark(){
        //AutoIntakeOff = true;
        Drive::AutonMove(39,80);
        Wait(200);
        //AutoIntakeOff = false;
        Wait(200);
        Drive::AutonMove(-4,70);
        //AutoIntakeOff = true;
        Drive::AutonTurn(16,50,50);
        //AutoFlip = true;
        Drive::AutonMove(5,80);
        Drive::AutonTurn(16,70,70);
        Drive::AutonMove(5,70);
        //AutoFlip = false;
        Drive::AutonTurn(3,40,40);
        Drive::AutonMove(8,50);
        Drive::AutonTurn(-19,50,50);
        Drive::AutonMove(15,40,40);
        Drive::AutonLock();
        Drive::AutonMove(-65,100);
        //AutoIntakeOff = false;
        Drive::AutonNLck();
    }
    void BackRParkShot(){
        //AutoIntakeOff = true;
        Drive::AutonMove(39,80);
        Wait(200);
        //AutoIntakeOff = false;
        Wait(200);
        Drive::AutonMove(-4,70);
        //AutoIntakeOff = true;
        Drive::AutonTurn(16,50,50);
        //AutoFlip = true;
        Drive::AutonMove(5,80);
        Drive::AutonTurn(16,70,70);
        Drive::AutonMove(5,70);
        //AutoFlip = false;
        Drive::AutonTurn(3,40,40);
        Drive::AutonMove(8,50);
        Drive::AutonTurn(-19,50,50);
        Drive::AutonMove(15,40,40);
        Drive::AutonLock();
        Drive::AutonMove(-65,100);
        //AutoIntakeOff = false;
        //AutonPSet();
        Drive::AutonTurn(33.5,40,40);
        Lift::AutonAjUp();
        Puncher::AutonFire();
        Wait(300);
        Lift::AutonAjDn();
        Drive::AutonNLck();
    }
    void BackRBread(){
        //AutoIntakeOff = true;
        Drive::AutonMove(40,70);
        Wait(100);
        //AutoIntakeOff = false;
        Wait(200);
        Drive::AutonMove(-40,70);
        Drive::AutonMove(-3,25);
        Drive::AutonMove(4,25);
        Drive::AutonTurn(-15.3,40,40);
        //AutonPSet();
        Drive::AutonMove(43,70);
        Puncher::AutonFire();
        Lift::AutonAjUp();
        Wait(200);
        //AutonRFire();
        Lift::AutonAjDn();
        Drive::AutonTurn(-0.5,25,25);
        Drive::AutonMove(40,80);
        Drive::StrafeRecon(500,80,1);
        Drive::AutonMove(5.5,60);
        Drive::AutonMove(-38,80);
        //AutoIntakeOff = true;
        Drive::AutonTurn(-16,50,50);
        Drive::AutonLock();
        Drive::AutonMove(-40,60);
        Drive::AutonNLck();
    }
    void BackR(){
        //AutoIntakeOff = true;
        Drive::AutonMove(39,80);
        Wait(200);
        //AutoIntakeOff = false;
        Wait(200);
        Drive::AutonMove(-4,70);
        //AutoIntakeOff = true;
        Drive::AutonTurn(16,50,50);
        //AutoFlip = true;
        Drive::AutonMove(5,80);
        Drive::AutonTurn(16,70,70);
        Drive::AutonMove(5,70);
        //AutoFlip = false;
        Drive::AutonTurn(3,40,40);
        Drive::AutonMove(8,50);
        Drive::AutonTurn(-19,50,50);
        Drive::AutonMove(15,40,40);
    }





    //Front Blue
    void FrntB(){
        Drive::AutonMove(33,60);
        Wait(300);
        Drive::AutonMove(-35,70);
        Drive::AutonMove(-3,25);
        Drive::AutonMove(4,25);
        Puncher::AutonFire();
        Drive::AutonTurn(15.5,40,40);
        Puncher::AutonFire();
        Lift::AutonAjUp();
        Puncher::AutonFire();
        Wait(200);
        Puncher::AutonFire();
        Lift::AutonAjDn();
        Drive::AutonTurn(0.5,25,25);
        Drive::AutonMove(42,70);
        Drive::StrafeRecon(300,70,-1);
        Drive::AutonMove(5,70);
        Drive::AutonMove(-19,80);
        Puncher::AutonFire();
        Drive::AutonTurn(-11,40,40);
        Drive::AutonMove(3,25);
    //    Wait(2600);
        Puncher::AutonFire();
        Wait(600);
        if(BallInTop){
            Puncher::AutonFire();
            Lift::AutonAjUp();
            Puncher::AutonFire();
            Lift::AutonAjDn();
        }
        //AutoIntakeOff = true;
        Drive::AutonTurn(-4,60,60);
        //AutoFlip = true;
        Drive::AutonMove(7,70);
    }
    void FrntBPark(){
        //AutoIntakeOff = true;
        Drive::AutonMove(41,70);
        Wait(100);
        //AutoIntakeOff = false;
        Wait(300);
        Drive::AutonMove(-43,70);
        Drive::AutonMove(-3,25);
        Drive::AutonMove(3,25);
        //AutonPSet();
        Drive::AutonTurn(15.5,40,40);
        Puncher::AutonFire();
        Lift::AutonAjUp();
        Wait(200);
        //AutonRFire();Drive::
        Lift::AutonAjDn();
        Drive::AutonTurn(1,25,25);
        Drive::AutonMove(42,70);
        Drive::StrafeRecon(300,70,-1);
        Drive::AutonMove(5.5,70);
        Drive::AutonMove(-38,80);
        Drive::AutonTurn(16,60,60);
        Drive::AutonLock();
        Drive::AutonMove(-40,70);
        Drive::AutonNLck();
    }





    //Front Red
    void FrntR(){
        //AutoIntakeOff = true;
        Drive::AutonMove(32,70);
        Wait(100);
        //AutoIntakeOff = false;
        Wait(200);
        Drive::AutonMove(-33,70);
        Drive::AutonMove(-4,25);
        Drive::AutonMove(4,25);
        Puncher::AutonFire();
        Drive::AutonTurn(-15.1,40,40);
        Puncher::AutonFire();
        Lift::AutonAjUp();
        Puncher::AutonFire();
        Wait(200);
        Puncher::AutonFire();
        Lift::AutonAjDn();
        Drive::AutonTurn(-0.75,25,25);
        Drive::AutonMove(40,80);
        Drive::StrafeRecon(500,80,1);
        Drive::AutonMove(5.5,40);
        Drive::AutonMove(-19,80);
        //AutoIntakeOff = true;
        Drive::AutonTurn(9.5,50,50);
        Puncher::AutonFire();
        Drive::AutonMove(3,50);
        Puncher::AutonFire();
        Drive::AutonTurn(10,50,50);
        //AutoFlip = true;
        Drive::AutonMove(15,60);
        Wait(50);
        Drive::AutonMove(-3,80);
        //AutoFlip = false;
    }
    void FrntRPark(){
        //AutoIntakeOff = true;
        Drive::AutonMove(32,70);
        Wait(100);
        //AutoIntakeOff = false;
        Wait(200);
        Drive::AutonMove(-33,70);
        Drive::AutonMove(-3,25);
        Drive::AutonMove(4,25);
        Puncher::AutonFire();
        Drive::AutonTurn(-15.3,40,40);
        Puncher::AutonFire();
        Lift::AutonAjUp();
        Puncher::AutonFire();
        Wait(200);
        Puncher::AutonFire();
        Lift::AutonAjDn();
        Drive::AutonTurn(-0.5,25,25);
        Drive::AutonMove(40,80);
        Drive::StrafeRecon(500,80,1);
        Drive::AutonMove(5.5,60);
        Drive::AutonMove(1,25);
        Drive::AutonMove(-65,80);
        //AutoIntakeOff = true;
        Drive::AutonTurn(-18,50,50);
        Drive::AutonLock();
        Drive::AutonMove(-40,80);
        Drive::AutonNLck();
    }





    //Skills
    void Skillz(){
        //AutoIntakeOff = true;
        //AutoFlip = false;
        Drive::AutonMove(40,80);
        //AutoIntakeOff = false;
        Wait(500);
        Drive::AutonMove(-45,70);
        Drive::AutonMove(-4,15);
        Drive::AutonMove(4.5,30);
        Drive::AutonTurn(-15.1,40,40);
        Puncher::AutonFire();
        Drive::AutonMove(29,70);
        Drive::AutonTurn(0.1,25,25);
        Wait(200);
        Puncher::AutonFire();
        Wait(20);
        Puncher::AutonFire();
        Lift::AutonAjUp();
        Wait(500);
        Puncher::AutonFire();
        Lift::AutonAjDn();
        Drive::AutonTurn(-0.4,60);
        Drive::StrafeRecon(160,30,-1);
        Drive::AutonMove(47,90);
        Drive::StrafeRecon(400,90,1);
        Drive::AutonMove(5,40);
        //AutoIntakeOff = true;
        Drive::AutonMove(-43,80);
        Drive::AutonTurn(16,40,40);
        Drive::AutonMove(-8,40);
        Drive::AutonMove(-3,30);
        Drive::AutonMove(43,80);
        //AutoIntakeOff = false;
        Wait(500);
        Drive::AutonMove(-6,70);
        Puncher::AutonFire();
        Drive::AutonTurn(-12,40,40);
        Puncher::AutonFire();
        Wait(1000);
        if (BallInTop){
            Lift::AutonAjUp();
            Puncher::AutonFire();
            Wait(300);
            Puncher::AutonFire();
            HitFlag = true;
            Lift::AutonAjDn();
            Wait(100);
        }
        Drive::AutonTurn(-1,60,60);
        Drive::AutonMove(45,80);
        Drive::StrafeRecon(400,80,1);
        Drive::AutonMove(6,40);
        Drive::AutonMove(-18,70);
        Wait(200);
        if (BallInTop && HitFlag == false){
            Puncher::AutonFire();
            Drive::AutonTurn(0.75,25,25);
            Puncher::AutonFire();
            HitFlag = true;
            Drive::AutonTurn(-0.75,25,25);
            Wait(100);
        }
        Drive::AutonTurn(-16.5,40,40);
        //AutoIntakeOff = true;
        //AutoFlip = true;
        Drive::AutonMove(17,70);
        Wait(300);
        //AutoFlip = false;
        Drive::AutonTurn(-0.1,25);
        Drive::AutonMove(-71,80);
        Drive::StrafeRecon(750,80,-1);
        Drive::StrafeRecon(200,80,1);
        //AutoIntakeOff = true;
        Drive::AutonMove(20,70);
        Wait(100);
        //AutoIntakeOff = false;
        Wait(1000);
        //AutoIntakeOff = true;
        //AutoFlip = true;
        Drive::AutonMove(3,50);
        Drive::AutonMove(-5,80);
        Drive::StrafeRecon(500,80,-1);
        //AutoFlip = false;
        //AutoIntakeOff = false;
        Drive::AutonMove(-42,80);
        Drive::StrafeRecon(200,80,1);
        Drive::AutonMove(-4,25);
        Drive::AutonMove(16,60);
        Puncher::AutonFire();
        Drive::AutonTurn(16.3,40,40);
        HitFlag = false;
        Puncher::AutonFire();
        Wait(700);
        if (BallInTop){
            Puncher::AutonFire();
            Lift::AutonAjUp();
            Wait(300);
            Puncher::AutonFire();
            HitFlag = true;
            Lift::AutonAjDn();
            Wait(100);
        }
        Drive::AutonTurn(-0.2);
        Drive::StrafeRecon(175,40,-1);
        Drive::AutonMove(41,70);
        Drive::StrafeRecon(400,80,1);
        Drive::AutonMove(6.5,80);
        Drive::StrafeRecon(100,80,1);
        Wait(800);
        if (BallInTop && HitFlag == false){
            Puncher::AutonFire();
            Drive::AutonMove(-16,80);
            Puncher::AutonFire();
            HitFlag = true;
            Wait(100);
            Drive::AutonMove(-23,80);
        }
        else {
            Drive::AutonMove(-37,80);
        }
        Drive::AutonTurn(15,40,40);
        HitFlag = false;
        Drive::AutonMove(8,40);
        //AutoIntakeOff = true;
        //AutoFlip = true;
        Drive::StrafeRecon(1100,80,1);
        Drive::AutonMove(-6,60);
        //AutoFlip = false;
        Drive::AutonMove(5,50);
        Drive::AutonLock();
        Drive::AutonMove(-80,75);
        vex::task::sleep(2000);
        Drive::AutonNLck();
    }





    //Selecting
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
                BackBBread();
            }
            else if(SelectValueTwo > 50){
                BackBParkShot();
            }
            else if(SelectValueTwo > 30){
                BackBPark();
            }
            else if(SelectValueTwo >= 0){
                BackB();
            }
        }
        else if(SelectValueOne > 20){
            if(SelectValueTwo > 80){

            }
            else if(SelectValueTwo > 50){

            }
            else if(SelectValueTwo > 30){
                FrntRPark();
            }
            else if(SelectValueTwo >= 0){
                FrntR();
            }
        }
        else if(SelectValueOne >= 0){
            if(SelectValueTwo > 80){
                BackRBread();
            }
            else if(SelectValueTwo > 50){
                BackRParkShot();
            }
            else if(SelectValueTwo > 30){
                BackRPark();
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
            Brain.Screen.print("Skillz");
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
                Brain.Screen.print("Front Blue Parking");
            }
            else if(SelectValueTwo >= 0){
                //FrntB();
                Brain.Screen.clearLine(1,vex::color::blue);
                Brain.Screen.clearLine();
                Brain.Screen.print("Front Blue Caps and Top Middle Flag");
            }
        }
        else if(SelectValueOne > 40){
            if(SelectValueTwo > 80){
                //BackBBread();
                Brain.Screen.clearLine(1,vex::color::blue);
                Brain.Screen.clearLine();
                Brain.Screen.print("Back Blue Bread");
            }
            else if(SelectValueTwo > 50){
                //BackBParkShot();
                Brain.Screen.clearLine(1,vex::color::blue);
                Brain.Screen.clearLine();
                Brain.Screen.print("Back Blue Parking with Middle Flag");
            }
            else if(SelectValueTwo > 30){
                //BackBPark();
                Brain.Screen.clearLine(1,vex::color::blue);
                Brain.Screen.clearLine();
                Brain.Screen.print("Back Blue Parking");
            }
            else if(SelectValueTwo >= 0){
                //BackB();
                Brain.Screen.clearLine(1,vex::color::blue);
                Brain.Screen.clearLine();
                Brain.Screen.print("Back Blue Caps");
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
                //FrntRPark();
                Brain.Screen.clearLine(1,vex::color::red);
                Brain.Screen.clearLine();
                Brain.Screen.print("Front Red Parking");
            }
            else if(SelectValueTwo >= 0){
                //FrntR();
                Brain.Screen.clearLine(1,vex::color::red);
                Brain.Screen.clearLine();
                Brain.Screen.print("Front Red Caps");
            }
        }
        else if(SelectValueOne >= 0){
            if(SelectValueTwo > 80){
                //BackRBread();
                Brain.Screen.clearLine(1,vex::color::red);
                Brain.Screen.clearLine();
                Brain.Screen.print("Back Red Bread");

            }
            else if(SelectValueTwo > 50){
                //BackRParkShot();
                Brain.Screen.clearLine(1,vex::color::red);
                Brain.Screen.clearLine();
                Brain.Screen.print("Back Red Parking and Middle Flag");

            }
            else if(SelectValueTwo > 30){
                //BackRPark();
                Brain.Screen.clearLine(1,vex::color::red);
                Brain.Screen.clearLine();
                Brain.Screen.print("Back Red Parking");
            }
            else if(SelectValueTwo >= 0){
                //BackR();
                Brain.Screen.clearLine(1,vex::color::red);
                Brain.Screen.clearLine();
                Brain.Screen.print("Back Red Caps");
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
}
