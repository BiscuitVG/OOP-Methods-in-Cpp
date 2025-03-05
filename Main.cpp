#include <iostream>
#include "DeviceManager.h"
#include "SecurityCamera.h"
#include "SmartLight.h"
#include "WarmCold.h"
#include "RGBColor.h"
#include "Thermostat.h"
#include "SmartSpeaker.h"

int main() {
   
	DeviceManager device; //instance of the DeviceManager to manage the objects

    device.getDevice().push_back(new SecurityCamera(1, "DSLR Camera", "Cannon", false, "1080p", "battery"));
    device.getDevice().push_back(new SmartLight(2, "Philips Hue", "Philips", false, 50));
    device.getDevice().push_back(new WarmCold(2, "WarmCold Mode", "Philips", false, 60, "Warm"));
    device.getDevice().push_back(new RGBColor(2, "RGB Mode", "Philips", false, 70, 255, 255, 255));
    device.getDevice().push_back(new Thermostat(3, "Nest Thermostat", "Google", false, 22));
    device.getDevice().push_back(new SmartSpeaker(4, "JBL PartyBox", "HARMAN", false, 70));
    /*
    * Dynamically create instances of various device types using 'new' to allocate memory on the heap.
    * Each device is initialized with both base class parameters and additional.
    * Each push_back() dynamically allocates memory per object and adds it to mDevices,
        this will add the pointer to the vector.
    */

    int choice;
    bool exitProgram = false; //menu will be looping till false

    while (!exitProgram) {
        device.displayMenu();
        std::cin >> choice;
        exitProgram = device.switchCaseInput(choice);
    }

    return 0;

}