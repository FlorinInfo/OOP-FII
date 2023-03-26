//
// Created by Bucataru Florin on 26.03.2023.
//

#ifndef LABORATORY_6_RANGEROVER_H
#define LABORATORY_6_RANGEROVER_H
#include "Car.h"

class RangeRover: public Car{
public:
    RangeRover();
    void setModel();
    void setFuelCapacity();
    void setFuelConsumption();
    void setSpeedSunny();
    void setSpeedRain();
    void setSpeedSnow();
};


#endif //LABORATORY_6_RANGEROVER_H
