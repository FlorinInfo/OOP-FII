//
// Created by Bucataru Florin on 26.03.2023.
//

#include "Seat.h"

Seat::Seat(){
    this->setFuelCapacity();
    this->setFuelConsumption();
    this->setModel();
    this->setSpeedRain();
    this->setSpeedSnow();
    this->setSpeedSunny();
}
void Seat::setModel() {
    this->model = "Seat";
}
void Seat::setFuelCapacity() {
    this->fuelCapacity = 80;
}
void Seat::setFuelConsumption() {
    this->fuelConsumption = 88;
}
void Seat::setSpeedSunny() {
    this->speedSunny=80;
}
void Seat::setSpeedRain(){
    this->speedRain = 30;
}
void Seat::setSpeedSnow(){
    this->speedSnow = 25;
}
