#ifndef PUNCHER.HPP
#define PUNCHER.HPP

namespace Puncher{

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
