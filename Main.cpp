#include <iostream>
#include <string>
#include "Device.h"
#include "SecurityCamera.h"
#include "SmartLight.h"
#include "WarmCold.h"
#include "RGBColor.h"
#include "Thermostat.h"
#include "SmartSpeaker.h"

int main() {
    //// Test SecurityCamera class
    //std::cout << "Test SecurityCamera class" << std::endl;
    //SecurityCamera camera(2, "Cam1", "CamManufacturer", false, "1080p", "battery");
    //camera.viewInfo();
    //camera.activate();
    //camera.interactionEvent();
    //camera.deactivate();
    //camera.viewInfo();
    //std::cout << " " << std::endl;

    // Test SmartLight class
    std::cout << "Test SmartLight class" << std::endl;
    SmartLight light(3, "Light1", "LightManufacturer", false, 50);
    light.viewInfo();
    light.activate();
    light.interactionEvent();
    light.setBrightness(75);
    light.interactionEvent();
    light.setBrightness(150); // Invalid input test
    light.viewInfo();
    light.deactivate();
    light.viewInfo();
    std::cout << " " << std::endl;

    //// Test WarmCold class
    //std::cout << "Test WarmCold class" << std::endl;
    //WarmCold warmLight(4, "WarmLight1", "LightManufacturer", false, 60, "Warm");
    //warmLight.viewInfo();
    //warmLight.activate();
    //warmLight.interactionEvent();
    //warmLight.setColorType("Cold");
    //warmLight.interactionEvent();
    //warmLight.setColorType("Neutral"); // Invalid input test
    //warmLight.viewInfo();
    //warmLight.deactivate();
    //warmLight.viewInfo();
    //std::cout << " " << std::endl;

    ////Test RGBColor class
    //std::cout << "Test RGBColor Class" << std::endl;
    //RGBColor rgbLight(6, "RGBLight1", "LightManufacturer", false, 80, 255, 100, 50);
    //rgbLight.viewInfo();

    ////Activate the device and test interaction
    //rgbLight.activate();
    //rgbLight.interactionEvent();

    ////Change RGB values and test interaction
    //rgbLight.setRedColor(150);
    //rgbLight.setGreenColor(200);
    //rgbLight.setBlueColor(255);
    //rgbLight.interactionEvent();

    ////Test invalid RGB value
    //rgbLight.setRedColor(300); // Invalid input test
    //rgbLight.interactionEvent();

    ////Deactivate the device
    //rgbLight.deactivate();
    //rgbLight.viewInfo();
    //std::cout << " " << std::endl;

    //// Test Thermostat class
    //std::cout << "Test Thermostat Class" << std::endl;
    //Thermostat thermostat(5, "Thermostat1", "ThermostatManufacturer", false, 22);
    //thermostat.viewInfo();
    //thermostat.activate();
    //thermostat.interactionEvent();
    //thermostat.setTargetTemp(35); // Invalid input test
    //thermostat.interactionEvent();
    //thermostat.viewInfo();
    //thermostat.deactivate();
    //thermostat.viewInfo();
    //std::cout << " " << std::endl;

    //// Test SmartSpeaker class
    //std::cout << "Test SmartSpeaker Class" << std::endl;
    //SmartSpeaker speaker(6, "Speaker1", "SpeakerManufacturer", false, 70);
    //speaker.viewInfo();
    //speaker.activate();
    //speaker.interactionEvent();
    //speaker.setVolume(120); // Invalid input test
    //speaker.interactionEvent();
    //speaker.viewInfo();
    //speaker.deactivate();
    //speaker.viewInfo();

    return 0;
}