#ifndef PUNCHER_HPP
#define PUNCHER_HPP

namespace Puncher{
    bool punchPressing;
    int PunchPlace;
    bool PunchRunOnce;

    bool PuncherCharged;
    bool R1Pressed;
    int PuncherDeg;
    bool PunchControlPositionEnabled;

    //SetMotors
    void setPunchFor(int degs);
    //User
    void PuncherControl();
    //Autonomous
    void PuncherWait();
    int PuncherSpinFunction();
    void AutonFire(bool WaitForFire=true);

}


#endif /* end of include guard: PUNCHER.HPP */
