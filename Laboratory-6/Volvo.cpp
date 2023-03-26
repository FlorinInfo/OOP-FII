//
// Created by Bucataru Florin on 26.03.2023.
//

#include "Volvo.h"
#include <iostream>
Volvo::Volvo(){
    this->setFuelCapacity();
    this->setFuelConsumption();
    this->setModel();
    this->setSpeedRain();
    this->setSpeedSnow();
    this->setSpeedSunny();
}
    void Volvo::setModel() {
        this->model = "Volvo";
    }
    void Volvo::setFuelCapacity() {
        this->fuelCapacity = 180;
    }
    void Volvo::setFuelConsumption() {
        this->fuelConsumption = 38;
    }
    void Volvo::setSpeedSunny() {
        this->speedSunny=80;
    }
    void Volvo::setSpeedRain(){
        this->speedRain = 30;
    }
    void Volvo::setSpeedSnow(){
        this->speedSnow = 25;
    }
