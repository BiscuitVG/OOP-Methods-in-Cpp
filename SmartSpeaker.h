#ifndef SMART_SPEAKER
#define SMART_SPEAKER
#pragma once

#include <iostream>
#include <string>
#include "Device.h"

class SmartSpeaker : public Device {
private:

	int mVolumeLevel;

public:

	//setter and getter declaration for mVolumeLevel
	void setVolume(int volume);
	int getVolume();

	SmartSpeaker(int id, std::string deviceName, std::string deviceManufacturer, bool status, int volume);

	virtual void interactionEvent();
	virtual void viewInfo();
};


#endif // !SMART_SPEAKER
