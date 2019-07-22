#include <cstdint>

class SteeringInterface
{
    protected:
        int16_t _steeringAngle;

        

    public:
        enum SteeringError {
            SUCCESS, ENCODER_FAIL, MOTOR_FAIL
        };
        
        SteeringInterface(void)
        {
            _steeringAngle = 0;
        }

        int16_t GetSteeringAngle(void) { return _steeringAngle; }

        virtual SteeringError Init(void) = 0;

        virtual void SetSteeringLimit(uint16_t) = 0;
};