#include <iostream>
#include <string>
#include "Device.h"
#include "SmartSpeaker.h"

SmartSpeaker::SmartSpeaker(int id, std::string deviceName, std::string deviceManufacturer, bool status, int volume)
	: Device(id, deviceName, deviceManufacturer, status){
	setVolume(volume);
}

//setter and getter definition for mVolumeLevel
void SmartSpeaker::setVolume(int volume) {
	if (volume >= 0 && volume <= 100) {
		mVolumeLevel = volume;
	}
	else {
		std::cout << "Invalid volume level! Volume must be between 0 and 100." << std::endl;
	}
}
int SmartSpeaker::getVolume() {
	return mVolumeLevel;
}

void SmartSpeaker::interactionEvent() {
	if (getStatus() == true) {
		std::cout << getDeviceName() << " volume is set to: " << getVolume() << std::endl;
	}
	else {
		std::cout << getDeviceName() << " is NOT active!" << std::endl;
	}
}
void SmartSpeaker::viewInfo() {
	std::cout << "Device ID: " << getId() << std::endl;
	std::cout << "Device Name: " << getDeviceName() << std::endl;
	std::cout << "Manufacturer: " << getManufacturer() << std::endl;
	std::cout << "Volume Level: " << getVolume() << std::endl;
	if (getStatus() == true) {
		std::cout << "Status: Activated" << std::endl;
	}
	else {
		std::cout << "Status: Deactivated" << std::endl;
	}
}