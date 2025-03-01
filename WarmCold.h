#ifndef WARM_COLD
#define WARM_COLD
#pragma once

#include <iostream>
#include <string>
#include "Device.h"
#include "SmartLight.h"

class WarmCold : public SmartLight {
private:

	std::string mColorType; //warm or cold

public:

	//setter and getter declaration for mColorType
	void setColorType(std::string colorType);
	std::string getColorType();

	WarmCold(int id, std::string deviceName, std::string deviceManufacturer, bool status, int brightness, std::string colorType);

	virtual void interactionEvent();
	virtual void viewInfo();
};

#endif // !WARM_COLD