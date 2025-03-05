#ifndef BASE_DEVICE
#define BASE_DEVICE
#pragma once

#include <iostream>
#include <string>

class Device {
private:

	int mDeviceId;
	std::string mDeviceName;
	std::string mManufacturer;
	bool mStatus;

public:

	//setters and getter for mDeviceId
	void setId(int id);
	int getId();

	//setter and getter for mDeviceName
	void setDeviceName(std::string deviceName);
	std::string getDeviceName();

	//setter and getter for mManufacturer
	void setManufacturer(std::string manufacturer);

	std::string getManufacturer();

	//setter and getter for mStatus (bool value!)
	void setStatus(bool status);
	bool getStatus();

	Device(int id, std::string deviceName, std::string deviceManufacturer, bool status); //constructor declaration
	//class methods
	void activate(); //sets the status to true(active)
	void deactivate(); //sets the staus to false(inactive)

	//pure virtual function
	virtual void interactionEvent() = 0; //method must be overridden by derived classes to define specific interaction behavior
	virtual void viewInfo() = 0; // method must be overridden by derived classes to display device-specific information

};
#endif // !BASE_DEVICE