#include "Systems/Steering/Steering.hpp"
#include <iostream>

//TODO: Need testing parameters?
int main (int argc, char ** argv)
{
    std::cout << "Initializing steering test..." << std::endl;

    Steering* steeringSystem = new Steering();

    int16_t angle = steeringSystem->GetSteeringAngle();

    return 0;
}