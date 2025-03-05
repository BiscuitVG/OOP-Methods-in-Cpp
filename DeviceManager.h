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

	std::vector<Device*> mDevices; //mDevices stores a pointer that points to the releavant object created(ex: SmartSpeaker).

public:

    std::vector<Device*>& getDevice();
    /*
    * returns a reference to the vector.
    * Since it's a reference, can modify the contents of mDevices directly.
    * Allows DeviceManager to modify devices dynamically created using the pointer.
    */

	//below methods iterates through all the device stored in the vector and calls their relevant class methods

    void activateAll();

    void deactivateAll();

    void interactionEventAll();

    void viewInfoAll();

    void displayMenu();

    bool switchCaseInput(int choice);
    /*
    * Returns a bool value based on the user input.
    * Takes the user input an carry out the respective case which will carry out the releavnt class method for each device.
    * When the user selects to exit the program, will return true which will break out of the loop. Else will keep looping.
    */
	
};

#endif // !DEVICE_MANAGER