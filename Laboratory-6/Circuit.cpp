//
// Created by Bucataru Florin on 26.03.2023.
//

#include "Circuit.h"
#include <iostream>

Circuit::Circuit() {
    this->length = 0;
    this->nrCars = 0;
}

Circuit::Circuit(int l) {
    this->length = l;
    this->nrCars = 0;
}

void Circuit::SetLength(int l) {
    this->length = l;
}

void Circuit::AddCar(Car *c) {
    this->cars[nrCars] = c;
    this->nrCars++;
}

void Circuit::SetWeather(Weather w) {
    this->weather = w;
}

void Circuit::printCircuitData() {
//    std::cout << length << '\n';
//    std::cout << weather << '\n';
//    std::cout << cars[0]->model << '\n';

//    for(int i = 0; i < nrCars;i++) {
//        std::cout << r[i].model <<  " " << r[i].time << " " << r[i].finished << '\n';
//    }
    for(int i = 0; i < nrCars;i++) {
        std::cout << cars[i]->model << '\n';
    }
}

void Circuit::Race() {
    for(int i = 0; i < nrCars;i++) {
        r[i].model = cars[i]->model;
        int speed;
        if(this->weather == 0) speed = cars[i]->speedRain;
        else if(this->weather == 1) speed = cars[i]->speedSunny;
        else if(this->weather == 2) speed = cars[i]->speedSnow;
        if(cars[i]->fuelCapacity - (this->length/100 * cars[i]->fuelConsumption) < 0) r[i].finished = r[i].time = 0;
        else {
            r[i].time = (float)this->length / (float)speed;
            r[i].finished = 1;
        }
    }
    for(int i = 1;i < nrCars - 1;i++)
        for(int j = i + 1; j < nrCars;j++) {
            if(r[i].time > r[j].time) {
                std::swap(r[i], r[j]);
            }
        }
}

void Circuit::ShowFinalRanks() {
    for(int i = 0;i < nrCars ;i++)
        if(r[i].finished)   std::cout << r[i].model <<  " " << r[i].time << '\n';
}

void Circuit::ShowWhoDidNotFinish() {
    for(int i = 0;i < nrCars ;i++)
        if(!r[i].finished)  std::cout << r[i].model << '\n';
}