#ifndef THERMO_STAT
#define THERMO_STAT
#pragma once

#include <iostream>
#include <string>
#include "Device.h"

class Thermostat : public Device {
private:

	int mTargetTemp;

public:

	//setter and getter for targetTemp
	void setTargetTemp(int temp);
	int getTargetTemp();

	Thermostat(int id, std::string deviceName, std::string deviceManufacturer, bool status, int temp);

	virtual void interactionEvent();
	virtual void viewInfo();
};

#endif // !THERMO_STAT
