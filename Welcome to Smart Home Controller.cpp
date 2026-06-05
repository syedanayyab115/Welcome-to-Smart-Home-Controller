#include <iostream>
#include <string>
using namespace std;
bool lightStatus = false;
int lightIntensity = 0;
bool acStatus = false;
double acTemperature = 26.0;
bool doorLockStatus = false;
int securityCode = 1234;
void controlDevice(string message) {
    cout << endl << "[STATUS]: " << message << endl;
}
void controlDevice(string device, int intensity, bool status) {
    if (device == "Light") {
        if (status) {
            lightStatus = true;
            lightIntensity = intensity;
        } else {
            lightStatus = false;
            lightIntensity = 0;
        }
        controlDevice("Light status and Intensity Has Been Updated!");
    }
}
void controlDevice(string device, double temperature, bool status) {
    if (device == "Air Conditioner") {
        if (status) {
            acStatus = true;
            acTemperature = temperature;
        } else {
            acStatus = false;
            acTemperature = 26.0;
        }
        controlDevice("Temperature and Status has been updated!");
    }
}
void controlDevice(bool change) {
    if (change) {
        int newCode, confirmCode;
        cout << "Enter New Security Code: ";
        cin >> newCode;
        cout << "Re-enter Security Code: ";
        cin >> confirmCode;

        if (newCode == confirmCode) {
            securityCode = newCode;
            controlDevice("Security Device Code Has Been Updated!");
        } else {
            cout << "Codes do not match. Try again." << endl;
        }
    }
}
void controlDevice(string device, bool status, int code) {
    if (code == securityCode) {
        doorLockStatus = status;
        if (status)
            controlDevice("Door’s Security has been Activated!");
        else
            controlDevice("Door’s Security has been Deactivated!");

        char choice;
        cout << "Do you want to change the security code? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            controlDevice(true);
        }
    } else {
        cout << "Incorrect Security Code!" << endl;
    }
}
void showDeviceStatus() {
    cout << "\n------ DEVICE STATUS ------" << endl;
    cout << "Light: " << (lightStatus ? "ON" : "OFF") 
         << ", Intensity: " << lightIntensity << "%" << endl;
    cout << "Air Conditioner: " << (acStatus ? "ON" : "OFF")
         << ", Temperature: " << acTemperature << "°C" << endl;
    cout << "Smart Door Lock Security: " 
         << (doorLockStatus ? "Activated!" : "Deactivated!") << endl;
    cout << "---------------------------" << endl << endl;
}
int main() {
    int choice;
    do {
        cout << endl << "Welcome to Smart Home Controller" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "Control Light (Enter 1)" << endl;
        cout << "Control Air Conditioner (Enter 2)" << endl;
        cout << "Control Smart Door Lock (Enter 3)" << endl;
        cout << "Full Status of All Devices (Enter 4)" << endl;
        cout << "Exit (Enter 0)" << endl;
        cout << "Your Choice: ";
        cin >> choice;
        switch (choice) {
        case 1: 
		{
            int intensity;
            bool status;
            cout << "Enter Light Intensity (1-100): ";
            cin >> intensity;
            cout << "Turn ON Light? (1/0): ";
            cin >> status;
            controlDevice("Light", intensity, status);
            break;
        }
        case 2: 
		{
            double temp;
            bool status;
            cout << "Enter Desired Temperature: ";
            cin >> temp;
            cout << "Turn ON Air Conditioner? (1/0): ";
            cin >> status;
            controlDevice("Air Conditioner", temp, status);
            break;
        }
        case 3: 
		{
            bool status;
            int code;
            cout << "Turn ON Door Lock? (1/0): ";
            cin >> status;
            cout << "Enter Security Code: ";
            cin >> code;
            controlDevice("Smart Door Lock", status, code);
            break;
        }
        case 4:
            showDeviceStatus();
            break;
        case 0:
            cout << "Exiting... Thank you!" << endl;
            break;
        default:
            cout << "Invalid Choice. Try Again." << endl;
        }
    } while (choice != 0);
    showDeviceStatus();
    return 0;
}

