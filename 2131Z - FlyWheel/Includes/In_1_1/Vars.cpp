int IntakeIn = 100;
int IntakeOut = -100;
bool InvertDrive = false;
bool WasPressedDrive = false;
double sgn(double Var) {
	if (Var > 0)   Var = 1;
	else        Var = -1;
	return Var;
}