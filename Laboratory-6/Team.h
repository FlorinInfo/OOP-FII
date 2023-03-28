//
// Created by Bucataru Florin on 28.03.2023.
//

#ifndef LABORATORY_6_TEAM_H
#define LABORATORY_6_TEAM_H
#include "Car.h"
#include "Player.h"

class Team {
private:
    Player *player_1;
    Player *player_2;
    Car *car;

public:
    Team(Car *c, char *name_1, char *name_2);
    void printData();
};


#endif //LABORATORY_6_TEAM_H
