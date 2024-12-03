#include <iostream>

using namespace std;

enum class Device {
    Light,
    DoorLock,
    SurveillanceCameras,
    RobotVacuumCleaners
};

enum class Command {
    TurnOn,
    TurnOff
};

void controlDevice(Command command, Device device) {
    string deviceName;
    switch (device) {
    case Device::Light:deviceName = "Лампочка"; break;
    case Device::DoorLock:deviceName = "Дверной замок"; break;
    case Device::SurveillanceCameras:deviceName = "Камера наблюдения"; break;
    case Device::RobotVacuumCleaners:deviceName = "Робот-пылесос"; break;
    default:deviceName = "Неизвестное устройство"; break;
    }

    if (command == Command::TurnOn) {
        cout << "Включение устройства: " << deviceName << endl;
    }
    else if (command == Command::TurnOff) {
        cout << "Выключение устройства: " << deviceName << endl;
    }
    else {
        cout << "Неизвестная команда для устройства: " << deviceName << endl;
    }
}

int main() {
    controlDevice(Command::TurnOn, Device::Light);
    controlDevice(Command::TurnOff, Device::DoorLock);
    controlDevice(Command::TurnOn, Device::RobotVacuumCleaners);

    return 0;
}
