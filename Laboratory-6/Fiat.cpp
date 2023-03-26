//
// Created by Bucataru Florin on 26.03.2023.
//

#include "Fiat.h"
Fiat::Fiat(){
    this->setFuelCapacity();
    this->setFuelConsumption();
    this->setModel();
    this->setSpeedRain();
    this->setSpeedSnow();
    this->setSpeedSunny();
}
void Fiat::setModel() {
    this->model = "Fiat";
}
void Fiat::setFuelCapacity() {
    this->fuelCapacity = 10;
}
void Fiat::setFuelConsumption() {
    this->fuelConsumption = 88;
}
void Fiat::setSpeedSunny() {
    this->speedSunny=80;
}
void Fiat::setSpeedRain(){
    this->speedRain = 30;
}
void Fiat::setSpeedSnow(){
    this->speedSnow = 25;
}
