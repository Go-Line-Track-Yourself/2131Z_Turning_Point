#include "Custom/Intake.hpp"
#include "Custom/Global.hpp"
#include "main.h"

namespace Intake{
    bool AutoIntakeEnabled = true;
    bool AutoIntakeTaskEnabled = false;
    bool AutoIntakeOff = false;
    bool AutoFlip=false;

    bool IntakeEnabledBtnPressed;
    bool IntakeEnabledInverted = true;
    ///////////////////////SetMotors//////////////////////
    void SetIntakerPower(int power){
        IntakerMotor.moveVelocity(power);
    }

    void SetTFeederPower(int power){
        TFeederMotor.moveVelocity(power);
    }
    /////////////////////User////////////////////////
    void IntakeVoid(){
            if(ManuIn.ispressing()) {
                TFeederMotor.moveVelocity(-100);
                IntakerMotor.moveVelocity(-100);
            }
            else if(ManuOut.ispressing()) {
                TFeederMotor.moveVelocity(100);
                IntakerMotor.moveVelocity(100);
            }
            else {
                TFeederMotor.moveVelocity(0);
                IntakerMotor.moveVelocity(0);
            }

    }
    void AutoIntakeCont(){
        if(AutoIn.ispressing() && IntakeEnabledBtnPressed==false){
            IntakeEnabledBtnPressed=true;
            IntakeEnabledInverted=!IntakeEnabledInverted;
        }
        if(!AutoIn.ispressing() && IntakeEnabledBtnPressed==true){
            IntakeEnabledBtnPressed=false;
        }

        if(IntakeEnabledInverted){
            AutoIntakeTaskEnabled=false;
            IntakeVoid();
        }
        if(!IntakeEnabledInverted) {
            vex::task AutoIn(Auto_Intaking);
            //AutoIntakeEnabled=false;

        }
    }
  ///////////////////Autonomous//////////////////////
    void AutonIntk(bool ON, bool In){
        if(ON){
            if(In){
                SetIntakerPower(-100);
            }
            if(!In){
                SetIntakerPower(100);
            }
        }
        if(!ON){
            IntakerMotor.stop();
        }
    }
    void AutonBelt(bool ON, bool In){
        if(ON){
            if(In){
                SetTFeederPower(-100);
            }
            if(!In){
                SetTFeederPower(100);
            }
        }
        if(!ON){
            TFeederMotor.stop();
        }
    }
    int	BottomLightValue;
    int TopLightValue;
    int MiddleLightValue;
    int NopeLightValue;
    int BottomBallInMax = 50;
    int TopBallInMax = 50;
    int NopeBallInMax = 70;
    bool BallInBottom;
    bool BallInTop;
    bool BallInNope;
    void Auto_Intake() {
        BottomLightValue = BallSenseBottom.value(vex::percentUnits::pct);
        MiddleLightValue = BallSenseMiddle.value(vex::percentUnits::pct);
        NopeLightValue = BallSenseNope.value(vex::percentUnits::pct);
        TopLightValue = BallSenseTop.value(vex::percentUnits::pct);

        if (BottomLightValue < BottomBallInMax || MiddleLightValue < BottomBallInMax) BallInBottom = true;
        else BallInBottom = false;
        if (TopLightValue < TopBallInMax) BallInTop = true;
        else BallInTop = false;
        if (NopeLightValue < NopeBallInMax) BallInNope = true;
        else BallInNope = false;

        if(AutoFlip.ispressing()){
                SetIntakerPower(100);
            }
        else if(AutoIntakeOff){
            SetIntakerPower(0);
            if(AutoFlip) SetIntakerPower(100);
            SetTFeederPower(0);

        }
        else if(BallInTop && BallInNope){
                SetTFeederPower(100);
        }
        else if(BallInBottom && BallInTop){
            SetTFeederPower(0);
            SetIntakerPower(10);
            if(AutoFlip.ispressing()){
                SetIntakerPower(100);
            }
            else {
                SetIntakerPower(0);
            }
        }
        else{
            SetIntakerPower(-100);
            SetTFeederPower(-100);
        }
    }
    int Auto_Intaking(){
        AutoIntakeTaskEnabled = true;
        // AutoIntakeEnabled = true;
        while(AutoIntakeTaskEnabled){
            if(AutoIntakeEnabled){Auto_Intake();}
            else if(!AutoIntakeEnabled){}
            vex::task::sleep(20);
        }
        SetIntakerPower(0);
        return 1;
    }

}
