//
// Created by Bucataru Florin on 26.03.2023.
//

#ifndef LABORATORY_6_SEAT_H
#define LABORATORY_6_SEAT_H
#include "Car.h"

class Seat: public Car{
public:
    Seat();
    void setModel();
    void setFuelCapacity();
    void setFuelConsumption();
    void setSpeedSunny();
    void setSpeedRain();
    void setSpeedSnow();
};


#endif //LABORATORY_6_SEAT_H
