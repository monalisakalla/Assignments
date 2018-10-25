
#include"../inc/factorymethod.h"

void TwoWheeler::printVehicle()
{
	std::cout<<"Two wheeler vehicle created" << endl;
}
void ThreeWheeler::printVehicle()
{
	std::cout<<"Three wheeler vehicle created" << endl;
}
void FourWheeler::printVehicle()
{
	std::cout<<"Four wheeler vehicle created" << endl;
}


// Factory method to create objects of different types. 
// Change is required only in this function to create a new object type 
Vehicle* Vehicle::Create(VehicleType type) { 
    if (type == VT_TwoWheeler) 
        return new TwoWheeler(); 
    else if (type == VT_ThreeWheeler) 
        return new ThreeWheeler(); 
    else if (type == VT_FourWheeler) 
        return new FourWheeler(); 
    else return NULL; 
} 

 Client::Client() 
{ 
     VehicleType type = VT_ThreeWheeler; 
     pVehicle = Vehicle::Create(type); 
} 
Client::~Client() 
{ 
   if (pVehicle)
    { 
        delete[] pVehicle; 
        pVehicle = NULL; 
    } 
} 
Vehicle*Client::getVehicle()
{ 
    return pVehicle; 
}


// Driver program 
int main() { 
    Client *pClient = new Client(); 
    Vehicle * pVehicle = pClient->getVehicle(); 
    pVehicle->printVehicle(); 
    return 0; 
} 
