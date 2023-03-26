//
// Created by Bucataru Florin on 26.03.2023.
//

#ifndef LABORATORY_6_VOLVO_H
#define LABORATORY_6_VOLVO_H
#include "Car.h"


class Volvo: public Car{
public:
    Volvo();
    void setModel();
    void setFuelCapacity();
    void setFuelConsumption();
    void setSpeedSunny();
    void setSpeedRain();
    void setSpeedSnow();
};


#endif //LABORATORY_6_VOLVO_H
