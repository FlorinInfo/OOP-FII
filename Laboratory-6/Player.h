//
// Created by Bucataru Florin on 28.03.2023.
//

#ifndef LABORATORY_6_PLAYER_H
#define LABORATORY_6_PLAYER_H
#include "Skills.h"

class Player {
private:
    char *name;
public:
    char* getName();
    Skills s;

public:
    Player();
    Player( char *n);
    Player( char *n, Skills s);
};


#endif //LABORATORY_6_PLAYER_H
