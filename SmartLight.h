#ifndef SMART_LIGHT
#define SMART_LIGHT
#pragma once

#include <iostream>
#include <string>
#include "Device.h"

class SmartLight : public Device {
private:

	int mBrightness; // 0-100 level

public:

	//setter and getter declaration for mBrightness
	void setBrightness(int level);
	int getBrightness();

	SmartLight(int id, std::string deviceName, std::string deviceManufacturer, bool status, int brightness);

	virtual void interactionEvent();
	virtual void viewInfo();

};
#endif // !SMART_LIGHT