#ifndef SEC_CAM
#define SEC_CAM
#pragma once

#include <iostream>
#include <string>
#include "Device.h"

class SecurityCamera : public Device {
private:

	std::string m_quality; //cam quality
	std::string m_power; //power mode

public:

	//setter and getter declaration for m_quality
	void setQuality(std::string quality);
	std::string getQuality();

	//setter and getter declaration for m_power
	void setPower(std::string power);
	std::string getPower();

	SecurityCamera(int id, std::string deviceName, std::string deviceManufacturer, bool status, std::string quality, std::string power);

	/*virtual void interactionEvent() override { //you dont define them in header in the child class
		if (getStatus() == true) {
			std::cout << "Now viewing camera: " << getDeviceName() << std::endl;
		}
		else {
			std::cout << getDeviceName() << " is not active!" << std::endl;
		}
	}*/

	//virtual void interactionEvent() override; //only declare in child class header
	virtual void interactionEvent();
	//virtual void viewInfo() override;
	virtual void viewInfo();

};
#endif // !SEC_CAM