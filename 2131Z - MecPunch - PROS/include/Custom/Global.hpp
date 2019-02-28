#ifndef GLOBAL_HPP
#define GLOBAL_HPP

double sgn(double Var) {
	if (Var > 0)   Var = 1;
	else        Var = -1;
	return Var;
}
// User Function Variables
void set_DriveRampingEnabled(bool d);
bool get_DriveRampingEnabled();


void set_MechDriveRampingEnabled(bool e);
bool get_MechDriveRampingEnabled();


void set_DriveLockConBtnPressed(bool dl);
bool get_DriveLockConBtnPressed();


void set_DriveLockInverted(bool i);
bool get_DriveLockInverted();


void set_DriveDirConBtnPressed(bool DDir);
bool get_DriveDirConBtnPressed();


void set_DriveDirInverted(bool DriveIn);
bool get_DriveDirInverted();


void set_AutoIntakeEnabled(bool ai);
bool AutoIntakeEnabled();


bool AutoIntakeTaskEnabled = false;
bool AutoIntakeOff = false;
bool AutoFlip=false;

bool IntakeEnabledBtnPressed;
bool IntakeEnabledInverted = true;

bool punchPressing= false;
int PunchPlace = 0;
bool PunchRunOnce = false;

// Puncher Control

bool PuncherCharged = false;
bool R1Pressed = false;
int PuncherDeg = 0;
bool PunchControlPositionEnabled = false;

// Mech Autonomous Function Variables
int DriveEndWait=100;
int TurnEndWait=250;

bool AdjustMotorBool;
bool AdjustMotorSwitch = false;

void Pause(double waittime){
	vex::task::sleep(waittime);
}

// Autonomous
bool HitFlag = false;



#endif /* end of include guard: GLOBAL_HPP */
