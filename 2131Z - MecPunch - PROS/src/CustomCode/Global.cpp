#include "Custom/Global.hpp"

bool DriveRampingEnabled;
void set_DriveRampingEnabled(bool d){
    DriveRampingEnabled=d();
}
bool get_DriveRampingEnabled(){
    return DriveRampingEnabled:
}
//---//
bool MechDriveRampingEnabled;
void set_MechDriveRampingEnabled(bool e){
    MechDriveRampingEnabled=e();
}
bool get_MechDriveRampingEnabled(){
    return MechDriveRampingEnabled;
}
//---//
bool DriveLockConBtnPressed();
void set_DriveLockConBtnPressed(bool dl){
    DriveLockConBtnPressed=dl();
}
bool get_DriveLockConBtnPressed(){
    return DriveLockConBtnPressed;
}
//---//
bool DriveLockInverted();
void set_DriveLockInverted(bool i){
    DriveLockInverted=i();
}
bool get_DriveLockInverted(){
    return DriveLockInverted;
}
//---//
bool DriveDirConBtnPressed();
void set_DriveDirConBtnPressed(bool DDir){
    DriveDirConBtnPressed=DDir();
}
bool get_DriveDirConBtnPressed(){
    return DriveDirConBtnPressed;
}
//---//
bool DriveDirInverted();
void set_DriveDirInverted(bool DriveIn){
    DriveDirInverted-DriveIn();
}
bool get_DriveDirInverted(){
    return DriveDirInverted;
}
//---//
bool AutoIntakeEnabled();
void set_AutoIntakeEnabled(bool ai){
    AutoIntakeEnabled=ai();
}
bool get_AutoIntakeEnabled(){
    return AutoIntakeEnabled;
}
//---//
bool AutoIntakeTaskEnabled();
void set_AutoIntakeTaskEnabled(bool aiT){
    AutoIntakeTaskEnabled=aiT();
}
bool get_AutoIntakeTaskEnabled(){
    return AutoIntakeTaskEnabled;
}
//---//
bool AutoIntakeOff();
void set_AutoIntakeOff(bool aiO){
    AutoIntakeOff=aiO();
}
bool get_AutoIntakeOff(){
    return AutoIntakeOff;
}
//---//
bool IntakeEnabledBtnPressed();
void set_IntakeEnabledBtnPressed(bool eiP){
    IntakeEnabledBtnPressed=eiP();
}
bool get_IntakeEnabledBtnPressed(){
    return IntakeEnabledBtnPressed;
}
//---//
bool IntakeEnabledInverted();
void set_IntakeEnabledInverted(bool eiI){
    IntakeEnabledInverted=eiI();
}
bool get_IntakeEnabledInverted(){
    return IntakeEnabledInverted;
}
//---//
