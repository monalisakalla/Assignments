#include"../inc/strategypattern.h"

int PowerState::currentPowerState()
{
	return 1;
}
int PowerModing::currentPowerMode()
{
	 return m_pwrState->currentPowerState() + 1;
}
PowerModing::PowerModing(PowerState *currentpower)
{
	m_pwrState = currentpower;
}
int main()
{
	PowerState *pwrState = new PowerState();
	PowerModing *pwrMode = new PowerModing(pwrState);
	
	int powermode = pwrMode->currentPowerMode();
	
	std::cout<< "Current power mode " << powermode << std::endl;
}
