class c_variable {
public:
	bool active = true;
	bool enableAutoCode = false;
	bool sendCodeKeys = false;
	int codeNum1 = 1;
	int codeNum2 = 2;
	int codeNum3 = 3;
	int codeNum4 = 4;
	int delayBetweenKeypress = 100;
	int delayprintkill = 250;
	int printkillnumber = 250;

	int selectedTab = 0;

	bool enableAutoKill = false;

	bool enableAntiAfk = false;
	bool antiafk = 0;
	int number = 0;

} variable;

class keys {
public:
	int enableBind = 0;
	int enableCodeBind = 0;
	int enablekill = 0;
} keys;