double sgn(double Var) {
	if (Var > 0)   Var = 1;
	else        Var = -1;
	return Var;
}
// User Function Variables 
bool DriveRampingEnabled;
bool MechDriveRampingEnabled;

bool DriveLockConBtnPressed;
bool DriveLockInverted = false;

bool DriveDirConBtnPressed;
bool DriveDirInverted = false;

bool AutoIntakeEnabled = false;
bool AutoIntakeTaskEnabled = false;
bool AutoIntakeOff = false;
bool AutoFlip=false;

bool IntakeEnabledBtnPressed;
bool IntakeEnabledInverted = true;

// Mech Autonomous Function Variables
int DriveEndWait=100;
int TurnEndWait=250;

bool AdjustMotorBool;
bool AdjustMotorSwitch = false;