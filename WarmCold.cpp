#include <iostream>
#include <string>
#include "Device.h"
#include "SmartLight.h"
#include "WarmCold.h"

WarmCold::WarmCold(int id, const std::string& deviceName, const std::string& deviceManufacturer, bool status = false, int brightness, std::string colorType = "White") //default to white which is between warm and cold
	: SmartLight(id, deviceName, deviceManufacturer, status, brightness) {
	setColorType(colorType);
}

//setter and getter definition for m_colorTemp
void WarmCold::setColorType(const std::string& colorTemp) {
	if (colorTemp == "Warm" || colorTemp == "Cold") {
		m_colorType = colorTemp;
	}
	else {
		std::cout << "Invalid color type! - Color type should be either 'Warm' or 'Cold'" << std::endl;
	}
}
std::string WarmCold::getColorType() const {
	return m_colorType;
}

void WarmCold::interactionEvent() {
	if (getStatus() == true) {
		std::cout << getDeviceName() << " set to color type: " << getColorType() << " with brightness level: " << getBrightness() << std::endl;
	}
	else {
		std::cout << getDeviceName() << "is NOT active!" << std::endl;
	}
}
void WarmCold::viewInfo() {
	SmartLight::viewInfo(); //base class(father class) viewInfo
	std::cout << "Color Type: " << getColorType() << std::endl;
}