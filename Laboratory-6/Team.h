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

public:
    Car *car;
    Team();
    Team(Car *c, char *name_1, char *name_2);
    Player *getPlayer1();
    Player *getPlayer2();
    void printData();
};


#endif //LABORATORY_6_TEAM_H
