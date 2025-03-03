#include <iostream>
#include <string>
#include <vector>
#include "DeviceManager.h"


void DeviceManager::addDevice(Device* device) {
    mDevices.push_back(device);
}

void DeviceManager::activateAll() {
    for (int i = 0; i < mDevices.size(); i++) {
        mDevices[i]->activate();
    }
}

void DeviceManager::deactivateAll() {
    for (int i = 0; i < mDevices.size(); i++) {
        mDevices[i]->deactivate();
    }
}

void DeviceManager::interactionEventAll() {
    for (int i = 0; i < mDevices.size(); i++) {
        mDevices[i]->interactionEvent();
        std::cout << "------------------------" << std::endl;
    }
}

void DeviceManager::viewInfoAll() {
    for (int i = 0; i < mDevices.size(); i++) {
        mDevices[i]->viewInfo();
        std::cout << "------------------------" << std::endl;
    }
}

void DeviceManager::displayMenu() {
    std::cout << "Device Manager Menu:" << std::endl;
    std::cout << "1. Activate All Devices" << std::endl;
    std::cout << "2. Deactivate All Devices" << std::endl;
    std::cout << "3. Interact with All Devices" << std::endl;
    std::cout << "4. View Info of All Devices" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

bool DeviceManager::switchCaseInput(int choice) {
    switch (choice) {
    case 1:
        activateAll();
        break;
    case 2:
        deactivateAll();
        break;
    case 3:
        interactionEventAll();
        break;
    case 4:
        viewInfoAll();
        break;
    case 5:
        std::cout << "Exiting..." << std::endl;
        return true; // Exit the program
    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
        return false;
    }
    return false;
}