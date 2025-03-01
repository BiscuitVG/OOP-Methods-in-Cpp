#include <iostream>
#include <string>
#include "Device.h"
#include "SecurityCamera.h"
#include "SmartLight.h"
#include "WarmCold.h"

int main() {
    // Test SecurityCamera class
    std::cout << "Test SecurityCamera class" << std::endl;
    SecurityCamera camera(2, "Cam1", "CamManufacturer", false, "1080p", "battery");
    camera.viewInfo();
    camera.activate();
    camera.interactionEvent();
    camera.deactivate();
    camera.viewInfo();
    std::cout << " " << std::endl;

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

    // Test WarmCold class
    std::cout << "Test WarmCold class" << std::endl;
    WarmCold warmLight(4, "WarmLight1", "LightManufacturer", false, 60, "Warm");
    warmLight.viewInfo();
    warmLight.activate();
    warmLight.interactionEvent();
    warmLight.setColorType("Cold");
    warmLight.interactionEvent();
    warmLight.setColorType("Neutral"); // Invalid input test
    warmLight.viewInfo();
    warmLight.deactivate();
    warmLight.viewInfo();
    std::cout << " " << std::endl;

    return 0;
}