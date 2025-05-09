#include <iostream>
#include <string>
#include "Device.h"
#include "SmartLight.h"

SmartLight::SmartLight(int id, const std::string& deviceName, const std::string& deviceManufacturer, bool status = false, int brightness)
	: Device(id, deviceName, deviceManufacturer, status) {
	setId(id);
	setDeviceName(deviceName);
	setManufacturer(deviceManufacturer);
	setStatus(status);
	//additional attributes
	setBrightness(brightness);
}

//setter and getter definitions for m_brightness
void SmartLight::setBrightness(int level) {
	//m_brightness = level;
	if (level >= 0 && level <= 100) { //input validation
		m_brightness = level;
	}
	else {
		std::cout << "Invalid input! - Brightness level must be between 0 and 100." << std::endl;
	}
}
int SmartLight::getBrightness() const {
	return m_brightness;
}

void SmartLight::interactionEvent() {
	if (getStatus() == true) { 
		std::cout << getDeviceName() << " is set to level: " << getBrightness() << std::endl;
	}
	else {
		std::cout << getDeviceName() << " is NOT active!" << std::endl;
	}
}
void SmartLight::viewInfo() {
	std::cout << "Device ID: " << getId() << std::endl;
	std::cout << "Device Name: " << getDeviceName() << std::endl;
	std::cout << "Manufacturer: " << getManufacturer() << std::endl;
	std::cout << "Brightness Level: " << getBrightness() << std::endl;
	if (getStatus() == true) {
		std::cout << "Status: Activated" << std::endl;
	}
	else {
		std::cout << "Status: Deactivated" << std::endl;
	}
}