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
    int finished;
    char *model;
};

struct TeamRank {
    float time;
    Team *team[1001];
    int finished;
};

class Circuit {
private:
    int length;
    int nrCars;
    int nrTeams;
    Car *cars[1001];
    Team *teams[1001];
    Weather weather;
    Rank r[1001];
    TeamRank tr[1001];

public:
    Circuit();
    Circuit(int l);
    void SetLength(int l);
    void SetWeather(Weather w);
    void AddCar(Car *c);
    void AddTeam(Team *t);
    void Race();
    void RaceTeam();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
    void printCircuitData();
};


#endif //LABORATORY_6_CIRCUIT_H
