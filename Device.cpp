#include <iostream>
#include <string>
#include "Device.h"

Device::Device(int id, const std::string& deviceName, const std::string& deviceManufacturer, bool status = false) {
	setId(id);
	setDeviceName(deviceName);
	setManufacturer(deviceManufacturer);
	setStatus(status);
}

//setter and getter definition for m_id
void Device::setId(int id) {
	m_id = id;
}
int Device::getId() const {
	return m_id;
}

//setter and getter definition for m_device
void Device::setDeviceName(const std::string& deviceName) {
	m_deviceName = deviceName;
}
std::string Device::getDeviceName() const {
	return m_deviceName;
}

//setter and getter definition for m_manufacturer
void Device::setManufacturer(const std::string& manufacturer) {
	m_manufacturer = manufacturer;
}
std::string Device::getManufacturer() const {
	return m_manufacturer;
}

//setter and getter definition for m_status (bool)
void Device::setStatus(bool status) {
	m_status = status;
}
bool Device::getStatus() const {
	return m_status;
}

void Device::activate() {
	if (m_status == false) { //device is not active
		m_status = true;
		std::cout << m_deviceName << " has been activated!" << std::endl;
	}
	else {
		std::cout << m_deviceName << "  is already active!" << std::endl;
	}
}
void Device::deactivate() {
	if (m_status == true) { //device is active
		m_status = false;
		std::cout << m_deviceName << " has been deactivated!" << std::endl;
	}
	else {
		std::cout << m_deviceName << " is already deactivated!" << std::endl;
	}
}