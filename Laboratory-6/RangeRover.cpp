//
// Created by Bucataru Florin on 26.03.2023.
//

#include "RangeRover.h"
RangeRover::RangeRover(){
    this->setFuelCapacity();
    this->setFuelConsumption();
    this->setModel();
    this->setSpeedRain();
    this->setSpeedSnow();
    this->setSpeedSunny();
}

void RangeRover::setModel() {
    this->model = "RangeRover";
}
void RangeRover::setFuelCapacity() {
    this->fuelCapacity = 80;
}
void RangeRover::setFuelConsumption() {
    this->fuelConsumption = 88;
}
void RangeRover::setSpeedSunny() {
    this->speedSunny=80;
}
void RangeRover::setSpeedRain(){
    this->speedRain = 30;
}
void RangeRover::setSpeedSnow(){
    this->speedSnow = 25;
}