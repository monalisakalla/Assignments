#include<iostream>

class PowerState
{
	public:
	int currentPowerState();
};

class PowerModing
{
	public:
	PowerModing(PowerState *currentpower);
	int currentPowerMode();
	PowerState* m_pwrState;
};

