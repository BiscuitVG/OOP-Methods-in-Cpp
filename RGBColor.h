#ifndef RGB_COLOR
#define RGB_COLOR
#pragma once

#include <iostream>
#include <string>
#include "Device.h"
#include "SmartLight.h"

class RGBColor : public SmartLight {
private:
	//RGB code 0-255
	int mColorRed;
	int mColorGreen;
	int mColorBlue;

public:

	//setter and getter declaration for m_colorRed
	void setRedColor(int rValue);
	int getRedColor();

	//setter and getter declaration for m_colorGreen
	void setGreenColor(int gValue);
	int getGreenColor();

	//setter and getter declaration for m_colorBlue
	void setBlueColor(int bValue);
	int getBlueColor();

	RGBColor(int id, std::string deviceName, std::string deviceManufacturer, bool status, int brightness, int red, int green, int blue);

	virtual void interactionEvent();
	virtual void viewInfo();

};

#endif // !RGB_COLOR
