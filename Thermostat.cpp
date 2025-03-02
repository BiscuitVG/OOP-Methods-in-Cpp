#include <iostream>
#include <string>
#include "Device.h"
#include "Thermostat.h"

Thermostat::Thermostat(int id, std::string deviceName, std::string deviceManufacturer, bool status, int temp)
	: Device(id, deviceName, deviceManufacturer, status) {
	setTargetTemp(temp);
}

//setter and getter definition for targetTemp
void Thermostat::setTargetTemp(int temp) {
	if (temp >= 10 && temp <= 32) { //averege thermostat range
		mTargetTemp = temp;
	}
	else {
		std::cout << "Invalid temperature! Temperature must be between 10 and 32 degrees Celsius." << std::endl;
	}
}
int Thermostat::getTargetTemp() {
	return mTargetTemp;
}

void Thermostat::interactionEvent() {
	if (getStatus() == true) {
		int userTemp; //temp var for user input
		std::cout << "Enter target temperature: ";
		std::cin >> userTemp;
		setTargetTemp(userTemp);
		std::cout << getDeviceName() << " is set to target temperature: " << getTargetTemp() << " degrees Celsius." << std::endl;
	}
	else {
		std::cout << getDeviceName() << " is NOT active!" << std::endl;
	}
}
void Thermostat::viewInfo() {
	std::cout << "Device ID: " << getId() << std::endl;
	std::cout << "Device Name: " << getDeviceName() << std::endl;
	std::cout << "Manufacturer: " << getManufacturer() << std::endl;
	std::cout << "Target Temperature: " << getTargetTemp() << " degrees Celsius" << std::endl;
	if (getStatus() == true) {
		std::cout << "Status: Activated" << std::endl;
	}
	else {
		std::cout << "Status: Deactivated" << std::endl;
	}
}