//
// Created by Bucataru Florin on 26.03.2023.
//

#include "Bmw.h"
Bmw::Bmw(){
    this->setFuelCapacity();
    this->setFuelConsumption();
    this->setModel();
    this->setSpeedRain();
    this->setSpeedSnow();
    this->setSpeedSunny();
}
void Bmw::setModel() {
    this->model = "Bmw";
}
void Bmw::setFuelCapacity() {
    this->fuelCapacity = 20;
}
void Bmw::setFuelConsumption() {
    this->fuelConsumption = 88;
}
void Bmw::setSpeedSunny() {
    this->speedSunny=80;
}
void Bmw::setSpeedRain(){
    this->speedRain = 30;
}
void Bmw::setSpeedSnow(){
    this->speedSnow = 25;
}