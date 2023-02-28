//
// Created by Bucataru Florin on 28.02.2023.
//
#include <iostream>
#include "NumberList.h"
void NumberList::Init() {
    count = 0;
}

bool NumberList::Add(int x) {
    if(x == 10) std::cout << "Array is full";
    else {
        numbers[x] = x;
        count++;
    }
}

void NumberList::Sort() {
    for(int i = 0; i < count-1;i++) {
        for(int j = i+1; j<count;j++)
            if(numbers[i]> numbers[j]) {
                int aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }
    }
}

void NumberList::Print() {
    for(int i = 0; i < count;i++) std::cout << numbers[i] << " ";
}