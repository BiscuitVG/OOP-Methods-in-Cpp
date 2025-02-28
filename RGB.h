#ifndef RGB_COLOR
#define RGB_COLOR
#pragma once

#include <iostream>
#include <string>
#include "Device.h"
#include "SmartLight.h"

class RGBColor : public SmartLight {
private:

	//0-255
	int m_red;
	int m_green;
	int m_blue;

public:

	//setter and getter declaration for m_red hex value
	void setRedColor(int rValue);
	int getRedColor() const;

	//setter and getter declaration for m_green hex value
	void setGreenColor(int gValue);
	int getGreenColor() const;

	//setter and getter declaration for b_blue hex value
	void setBlueColor(int bValue);
	int getBlueColor() const;

	RGBColor(int id, const std::string& deviceName, const std::string& deviceManufacturer, bool status = false, int brightness, int rValue, int gValue, int bValue);

	virtual void interactionEvent();
	virtual void viewInfo();
};

#endif // !RGB_COLOR