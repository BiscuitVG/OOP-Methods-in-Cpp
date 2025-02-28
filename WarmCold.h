#ifndef WARM_COLD
#define WARM_COLD
#pragma once

#include <iostream>
#include <string>
#include "Device.h"
#include "SmartLight.h"

class WarmCold : public SmartLight {
	//son class
private:
	std::string m_colorType; //warm or cold
public:

	//setter and getter declaration
	void setColorType(const std::string& colorType); //if else
	std::string getColorType() const;

	WarmCold(int id, const std::string& deviceName, const std::string& deviceManufacturer, bool status = false, int brightness, std::string colorType = "White"); //by default set to white

	virtual void interactionEvent();
	virtual void viewInfo();

};

#endif // !WARM_COLD