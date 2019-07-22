#include "Systems/Interfaces/SteeringInterface.hpp"

class Steering : public SteeringInterface
{
    private:
        void InitServo(void);
        
    public:
        Steering();
        SteeringError Init() override;
};