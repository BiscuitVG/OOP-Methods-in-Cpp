#include <iostream>
#include <string>
#include "Device.h"
#include "SmartLight.h"

SmartLight::SmartLight(int id, std::string deviceName, std::string deviceManufacturer, bool status, int brightness)
	: Device(id, deviceName, deviceManufacturer, status) {
	/*setId(id);
	setDeviceName(deviceName);
	setManufacturer(deviceManufacturer);
	setStatus(status);*/
	//set by base class

	//additional attributes
	setBrightness(brightness);
}

//setter and getter definitions for mBrightness
void SmartLight::setBrightness(int level) {
	//mBrightness = level;
	if (level >= 0 && level <= 100) { //input validation
		mBrightness = level;
	}
	else {
		std::cout << "Invalid input! - Brightness level must be between 0 and 100." << std::endl;
	}
}
int SmartLight::getBrightness() {
	return mBrightness;
}

void SmartLight::interactionEvent() {
	if (getStatus() == true) {
		int userBrightness;
		std::cout << "Enter brightness level (0 - 100): ";
		std::cin >> userBrightness;
		setBrightness(userBrightness);
		std::cout << getDeviceName() << " is set to brightness level: " << getBrightness() << std::endl;
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