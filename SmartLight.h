#ifndef SMART_LIGHT
#define SMART_LIGHT
#pragma once

#include <iostream>
#include <string>
#include "Device.h"

class SmartLight : public Device {
	//father class
private:

	int m_brightness; // 0-100 level

public:

	//setter and getter declaration for m_brightness
	void setBrightness(int level);
	int getBrightness() const;

	SmartLight(int id, const std::string& deviceName, const std::string& deviceManufacturer, bool status = false, int brightness);

	virtual void interactionEvent();
	virtual void viewInfo();

};
#endif // !SMART_LIGHT