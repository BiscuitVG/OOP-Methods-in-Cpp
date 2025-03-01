#include <iostream>
#include <string>
#include "Device.h"
#include "SmartLight.h"
#include "WarmCold.h"

WarmCold::WarmCold(int id, std::string deviceName, std::string deviceManufacturer, bool status, int brightness, std::string colorType)
	: SmartLight(id, deviceName, deviceManufacturer, status, brightness){
	setColorType(colorType);
}
void WarmCold::setColorType(std::string colorType) {
	if (colorType == "Warm" || colorType == "Cold") {
		m_colorType = colorType;
	}
	else {
		std::cout << "Color type must be either 'Warm' or 'Cold'" << std::endl;
	}
}
std::string WarmCold::getColorType() {
	return m_colorType;
}
void WarmCold::interactionEvent() {
	if (getStatus() == true) {
		std::cout << getDeviceName() << " is set to " << getColorType() << " - with a brightness level: " << getBrightness() << std::endl;
	}
	else {
		std::cout << getDeviceName() << " is NOT active!" << std::endl;
	}
}
void WarmCold::viewInfo() {
	SmartLight::viewInfo(); //common attributes
	std::cout << "Color Type: " << getColorType() << std::endl;
}