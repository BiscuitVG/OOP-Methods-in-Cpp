#include <iostream>
#include <string>
#include "Device.h"
#include "SmartLight.h"
#include "RGBColor.h"

RGBColor::RGBColor(int id, std::string deviceName, std::string deviceManufacturer, bool status, int brightness, int red, int green, int blue)
	: SmartLight(id, deviceName, deviceManufacturer, status, brightness) {
	setRedColor(red);
	setGreenColor(green);
	setBlueColor(blue);
}

//setter and getter definition for mColorRed
void RGBColor::setRedColor(int red) {
	if (red >= 0 && red <= 255) {
		mColorRed = red;
	}
	else {
		std::cout << "Invalid input! RGB color range is 0 - 255" << std::endl;
	}
}
int RGBColor::getRedColor() {
	return mColorRed;
}

//setter and getter definition for mColorGreen
void RGBColor::setGreenColor(int green) {
	if (green >= 0 && green <= 255) {
		mColorGreen = green;
	}
	else {
		std::cout << "Invalid input! RGB color range is 0 - 255" << std::endl;
	}
}
int RGBColor::getGreenColor() {
	return mColorGreen;
}

//setter and getter definition for mColorBlue
void RGBColor::setBlueColor(int blue) {
	if (blue >= 0 && blue <= 255) {
		mColorBlue = blue;
	}
	else {
		std::cout << "Invalid input! RGB color range is 0 - 255" << std::endl;
	}
}
int RGBColor::getBlueColor() {
	return mColorBlue;
}

void RGBColor::interactionEvent() {
	if (getStatus() == true) {
		std::cout << getDeviceName() << " is set to RGB value: " << getRedColor() << " " << getGreenColor() << " " << getBlueColor() << std::endl;
	}
	else {
		std::cout << getDeviceName() << " is NOT active!" << std::endl;
	}
}
void RGBColor::viewInfo() {
	SmartLight::viewInfo();
	std::cout << "RGB Value: " << getRedColor() << " " << getGreenColor() << " " << getBlueColor() << std::endl;
}