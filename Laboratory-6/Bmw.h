//
// Created by Bucataru Florin on 26.03.2023.
//

#ifndef LABORATORY_6_BMW_H
#define LABORATORY_6_BMW_H
#include "Car.h"

class Bmw: public Car{
public:
        Bmw();
     void setModel();
     void setFuelCapacity();
     void setFuelConsumption();
     void setSpeedSunny();
     void setSpeedRain();
     void setSpeedSnow();
};


#endif //LABORATORY_6_BMW_H
