#include <iostream>
#include <string>
#include "Device.h"
#include "SecurityCamera.h"
#include "SmartLight.h"

int main() {
    // Test SecurityCamera class
    SecurityCamera camera(2, "Cam1", "CamManufacturer", false, "1080p", "battery");
    camera.viewInfo();
    camera.activate();
    camera.interactionEvent();
    camera.deactivate();
    camera.viewInfo();

    // Test SmartLight class
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

    return 0;
}