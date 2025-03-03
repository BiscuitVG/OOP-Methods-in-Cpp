#include <iostream>
#include "DeviceManager.h"
#include "SecurityCamera.h"
#include "SmartLight.h"
#include "WarmCold.h"
#include "RGBColor.h"
#include "Thermostat.h"
#include "SmartSpeaker.h"

int main() {
   
	DeviceManager manager;

    // Create devices dynamically
    manager.addDevice(new SecurityCamera(1, "Cam1", "CamManufacturer", false, "1080p", "battery"));
    manager.addDevice(new SmartLight(2, "Light1", "LightManufacturer", false, 50));
    manager.addDevice(new WarmCold(3, "WarmLight1", "LightManufacturer", false, 60, "Warm"));
    manager.addDevice(new RGBColor(4, "RGBLight1", "LightManufacturer", false, 70, 255, 0, 0));
    manager.addDevice(new Thermostat(5, "Thermostat1", "ThermostatManufacturer", false, 22));
    manager.addDevice(new SmartSpeaker(6, "Speaker1", "SpeakerManufacturer", false, 70));

    int choice;
    bool exitProgram = false; //menu will be looping till false

    while (!exitProgram) {
        manager.displayMenu();
        std::cin >> choice;
        exitProgram = manager.switchCaseInput(choice);
    }

    return 0;

}