//
// Created by Bucataru Florin on 28.03.2023.
//

#include "Team.h"
Team::Team(Car *car, char *name_1, char *name_2) {
    this->player_1 = new Player(name_1);
    this->player_2 = new Player(name_2);
    this->car = car;
}

void Team::printData() {
    std::cout << this->car->model;
    std::cout << this->player_1->getName();
    std::cout << this->player_2->getName();
}