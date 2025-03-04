#include <iostream>
#include "DeviceManager.h"
#include "SecurityCamera.h"
#include "SmartLight.h"
#include "WarmCold.h"
#include "RGBColor.h"
#include "Thermostat.h"
#include "SmartSpeaker.h"

int main() {
   
	DeviceManager device;

    // Create devices dynamically
    device.getDevice().push_back(new SecurityCamera(1, "DSLR Camera", "CamManufacturer", false, "1080p", "battery"));
    device.getDevice().push_back(new SmartLight(2, "Light1", "LightManufacturer", false, 50));
    device.getDevice().push_back(new WarmCold(2, "WarmLight1", "LightManufacturer", false, 60, "Warm"));
    device.getDevice().push_back(new RGBColor(2, "RGBLight1", "LightManufacturer", false, 70, 255, 255, 255));
    device.getDevice().push_back(new Thermostat(3, "Thermostat1", "ThermostatManufacturer", false, 22));
    device.getDevice().push_back(new SmartSpeaker(4, "Speaker1", "SpeakerManufacturer", false, 70));

    int choice;
    bool exitProgram = false; //menu will be looping till false

    while (!exitProgram) {
        device.displayMenu();
        std::cin >> choice;
        exitProgram = device.switchCaseInput(choice);
    }

    return 0;

}