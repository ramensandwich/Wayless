#include "Systems/Sensors/IMU/BNO055IMU.hpp"
#include <iostream>

//TODO: Need testing parameters?
int main (int argc, char ** argv)
{
    std::cout << "Testing IMU...\n";

    BNO055IMU* imu = new BNO055IMU();

    std::cout << "Calibrating the IMU...\n";

    while (!imu->Calibrate()) {}

    std::cout << "Yaw: " << imu->GetYaw() << std::endl;
    
    std::cout << "Pitch: " << imu->GetPitch() << std::endl;

    std::cout << "Roll: " << imu->GetRoll() << std::endl;

    return 0;
}