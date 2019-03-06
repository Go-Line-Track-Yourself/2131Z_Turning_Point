#ifndef INTAKE_HPP
#define INTAKE_HPP

namespace Intake{

    //SetMotors
    void SetIntakerPower(int power);
    void SetTFeederPower(int power);
    //User
    void IntakeVoid();
    void AutoIntakeCont();
    //Autonomous
    void AutonIntk(bool ON, bool In);
    void AutonBelt(bool ON, bool In);
    void Auto_Intake();
    int Auto_Intaking();
}

#endif /* end of include guard: INTAKE.HPP */
