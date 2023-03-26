//
// Created by Bucataru Florin on 26.03.2023.
//

#ifndef LABORATORY_6_CAR_H
#define LABORATORY_6_CAR_H
#include <iostream>

class Car {
public:
    char *model;
    int fuelCapacity;
    int fuelConsumption;
    int speedSunny;
    int speedRain;
    int speedSnow;
public:
    virtual void setModel(){
        std::cout << "Car";
    };
    virtual void setFuelCapacity(){std::cout << "Car";};
    virtual void setFuelConsumption(){};
    virtual void setSpeedSunny(){};
    virtual void setSpeedRain(){};
    virtual void setSpeedSnow(){};

//    Car& operator = (Car *c)
//    {
//        this->fuelCapacity = c->fuelCapacity;
//        this->fuelConsumption = c->fuelConsumption;
//        this->model = c->model;
//        this->speedRain = c->speedRain;
//        this->speedSnow = c->speedSnow;
//        this->speedSunny=c->speedSunny;
//        return (*this);
//    }
//    Car(Car &c);
//    Car(Car &&c);
};


#endif //LABORATORY_6_CAR_H
