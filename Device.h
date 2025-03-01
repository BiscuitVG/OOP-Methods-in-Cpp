#ifndef BASE_DEVICE
#define BASE_DEVICE
#pragma once

#include <iostream>
#include <string>

class Device {
private:

	int m_id;
	std::string m_deviceName;
	std::string m_manufacturer;
	bool m_status;

public:

	//setters and getter for m_id
	void setId(int id);
	int getId();

	//setter and getter for m_deviceName
	void setDeviceName(std::string deviceName); //pass by reference: no additional copies
	std::string getDeviceName();

	//setter and getter for m_manufacturer
	void setManufacturer(std::string manufacturer);

	std::string getManufacturer();

	//setter and getter for m_status (bool value!)
	void setStatus(bool status);
	bool getStatus();

	Device(int id, std::string deviceName, std::string deviceManufacturer, bool status); //constructor declaration
	//class methods
	void activate();
	void deactivate();

	//pure vr
	virtual void interactionEvent() = 0;
	virtual void viewInfo() = 0;

};
#endif // !BASE_DEVICE