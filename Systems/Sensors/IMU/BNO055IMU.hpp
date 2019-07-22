#include "Systems/Interfaces/IMUInterface.hpp"

class BNO055IMU : public IMUInterface
{
    private:
        void InitIMU();
    public:
        BNO055IMU();

        bool Calibrate();
        double GetTemperature();
        double GetYaw() override;
        double GetPitch() override;
        double GetRoll() override;
};