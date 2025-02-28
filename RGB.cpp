#include <iostream>
#include <string>
#include "Device.h"
#include "SmartLight.h"
#include "RGB.h"

RGBColor::RGBColor(int id, const std::string& deviceName, const std::string& deviceManufacturer, bool status = false, int brightness, int rValue, int gValue, int bBlue)
	: SmartLight(id, deviceName, deviceManufacturer, status, brightness) {

}