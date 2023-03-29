//
// Created by Bucataru Florin on 28.03.2023.
//

#include "Player.h"

Player::Player() {
    this->s = slow;
}

Player::Player(char *n) {
    this->s = slow;
    this->name = n;
}

Player::Player(char *n, Skills s) {
    this->s = s;
    this->name = n;
}

char* Player::getName() {
    return this->name;
}

int Player::getSkill() {
    return this->s;
}