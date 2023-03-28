//
// Created by Bucataru Florin on 26.03.2023.
//

#ifndef LABORATORY_6_CIRCUIT_H
#define LABORATORY_6_CIRCUIT_H
#include "Weather.h"
#include "Car.h"
#include "Team.h"

struct Rank{
    float time;
    Car *cm[1001];
    Team *t[1001];
    int finished;
    char *model;
};

class Circuit {
private:
    int length;
    int nrCars;
    Car *cars[1001];
    Weather weather;
    Rank r[1001];

public:
    Circuit();
    Circuit(int l);
    void SetLength(int l);
    void SetWeather(Weather w);
    void AddCar(Car *c);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
    void RaceTeams();
    void printCircuitData();
};


#endif //LABORATORY_6_CIRCUIT_H
