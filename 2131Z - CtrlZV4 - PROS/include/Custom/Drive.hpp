#ifndef DRIVE_HPP
#define DRIVE_HPP
namespace Drive{
    //SetMotors
    void SDMP(int LPower, int RPower);
    void setDriveBrakeCoast()
    void stopDriveHold()
    void setMechFLPower(int pct)
    void setMechBLPower(int pct)
    void setMechFRPower(int pct)
    void setMechBRPower(int pct)
    void setMechDrivePower(int LF,int LB,int RF,int RB)
    void DriveMechPowerSend(int j1,int j2,int j3=0,int j4=0)
    void setDrivePower(int left, int right)
    //User
    void IsFippedControll();
    void ManualMechDriveCont();
    void driveLock();
    void DriveCont_LockContM();
    //Autonomous
    void DriveRamping();
    void DI(int L,int R);
    void SetDRpower(intLpower,int Rpower);
    void AutonMove(double Distance,int Pct=75, int FinalWait=200, int Correction=2);
    void AutonTurn(double Dis, int LPowSend=40 , int RPowSend=40, int FinalWait=25);
    void AutonLock();
    void AutonNLck();
    void StrafeRecon(int time, int power, int dir);

}


#endif /* end of include guard: DRIVE.HPP */
