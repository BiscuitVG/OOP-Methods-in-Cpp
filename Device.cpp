#include <iostream>
#include <string>
#include "Device.h"

Device::Device(int id, std::string deviceName, std::string deviceManufacturer, bool status) {
	setId(id);
	setDeviceName(deviceName);
	setManufacturer(deviceManufacturer);
	setStatus(status);
}

//setter and getter definition for mId
void Device::setId(int id) {
	mDeviceId = id;
}
int Device::getId(){
	return mDeviceId;
}

//setter and getter definition for mDeviceName
void Device::setDeviceName(std::string deviceName) {
	mDeviceName = deviceName;
}
std::string Device::getDeviceName(){
	return mDeviceName;
}

//setter and getter definition for mManufacturer
void Device::setManufacturer(std::string manufacturer) {
	mManufacturer = manufacturer;
}
std::string Device::getManufacturer(){
	return mManufacturer;
}

//setter and getter definition for m_status (bool)
void Device::setStatus(bool status) {
	mStatus = status;
}
bool Device::getStatus(){
	return mStatus;
}

void Device::activate() {
	if (mStatus == false) { //device is not active
		mStatus = true;
		std::cout << mDeviceName << " has been activated!" << std::endl;
	}
	else {
		std::cout << mDeviceName << "  is already active!" << std::endl;
	}
}
void Device::deactivate() {
	if (mStatus == true) { //device is active
		mStatus = false;
		std::cout << mDeviceName << " has been deactivated!" << std::endl;
	}
	else {
		std::cout << mDeviceName << " is already deactivated!" << std::endl;
	}
}