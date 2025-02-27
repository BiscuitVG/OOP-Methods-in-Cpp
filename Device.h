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
	int getId() const; //getters are const: will not modify data accidentally

	//setter and getter for m_deviceName
	void setDeviceName(const std::string& deviceName); //pass by reference: no additional copies
	std::string getDeviceName() const;

	//setter and getter for m_manufacturer
	void setManufacturer(const std::string& manufacturer);

	std::string getManufacturer() const;

	//setter and getter for m_status (bool value!)
	void setStatus(bool status);
	bool getStatus() const;

	Device(int id, const std::string& deviceName, const std::string& deviceManufacturer, bool status = false); //constructor declaration
	//class methods
	void activate();
	void deactivate();

	//pure vr
	virtual void interactionEvent() = 0;
	virtual void viewInfo() = 0;

};
#endif // !BASE_DEVICE