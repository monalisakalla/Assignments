	#include <iostream> 
	using namespace std; 
	  
	enum VehicleType 
	{ 
	    VT_TwoWheeler,    VT_ThreeWheeler,    VT_FourWheeler 
	}; 
	  
	// Library classes 
	class Vehicle
	 { 
	    public: 
	    virtual void printVehicle() = 0; 
	    static Vehicle* Create(VehicleType type); 
	}; 
	
	class TwoWheeler : public Vehicle
	{ 
	    public: 
	    void printVehicle();
	}; 
	
	class ThreeWheeler : public Vehicle 
	{ 
	    public: 
	    void printVehicle() ;
	};
	
	class FourWheeler : public Vehicle 
	{ 
	    public: 
	    void printVehicle();
	}; 
	  
	// Client class 
	class Client { 
	public: 
	    Client() ; 
	    ~Client();
	    Vehicle* getVehicle();
	private: 
	    Vehicle *pVehicle; 
	}; 
	  
	
	
