#ifndef DEVICE_MANAGER
#define DEVICE_MANAGER
#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Device.h"
#include "SecurityCamera.h"
#include "SmartLight.h"
#include "WarmCold.h"
#include "RGBColor.h"
#include "Thermostat.h"
#include "SmartSpeaker.h"

class DeviceManager {
private:

	std::vector<Device*> mDevices;

public:

    std::vector<Device*>& getDevice();

	//methods access all derived class methods using the vector
    void activateAll();
    void deactivateAll();
    void interactionEventAll();
    void viewInfoAll();
    void displayMenu();
    bool switchCaseInput(int choice); //return type set to bool condition to break out of the loop
	
};

#endif // !DEVICE_MANAGER