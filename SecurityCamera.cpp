#include <iostream>
#include <string>
#include "Device.h"
#include "SecurityCamera.h"

SecurityCamera::SecurityCamera(int id, const std::string& deviceName, const std::string& deviceManufacturer, bool status = false, const std::string& quality, const std::string& power)
	: Device(id, deviceName, deviceManufacturer, status) {
	setId(id);
	setDeviceName(deviceName);
	setManufacturer(deviceManufacturer);
	setStatus(status);

	//additional attributes
	setQuality(quality);
	setPower(power);
}

//setter and getter definitions for m_quality
void SecurityCamera::setQuality(const std::string& quality) {
	m_quality = quality;
}
std::string SecurityCamera::getQuality() const {
	return m_quality;
}

//setter and getter definition for m_power
void SecurityCamera::setPower(const std::string& power) {
	m_power = power;
}
std::string SecurityCamera::getPower() const {
	return m_power;
}

void SecurityCamera::interactionEvent() { //override
	if (getStatus() == true) {
		std::cout << "Now viewing camera: " << getDeviceName() << std::endl;
	}
	else {
		std::cout << getDeviceName() << " is not activated!" << std::endl;
	}
}
void SecurityCamera::viewInfo() {
	std::cout << "Device ID: " << getId() << std::endl;
	std::cout << "Device Name: " << getDeviceName() << std::endl;
	std::cout << "Manufacturer: " << getManufacturer() << std::endl;
	std::cout << "Camera Quality: " << getQuality() << std::endl;
	std::cout << "Power Source: " << getPower() << std::endl;
	if (getStatus() == true) {
		std::cout << "Status: Activated" << std::endl;
	}
	else {
		std::cout << "Status: Deactivated" << std::endl;
	}
}