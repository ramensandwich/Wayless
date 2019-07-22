#include "Systems/Sensors/IMU/BNO055IMU.hpp"

BNO055IMU::BNO055IMU()
{
    return;
}


/*
    Return false until calibration is complete
 */
bool BNO055IMU::Calibrate()
{
    return true;
}

double BNO055IMU::GetYaw()
{
    return 0;
}

double BNO055IMU::GetPitch()
{
    return 0;
}

double BNO055IMU::GetRoll()
{
    return 0;
}