//
// Created by Bucataru Florin on 28.02.2023.
//
#include <iostream>
#include "Student.h"
#include <cstring>
void Student::setName(char* nameParam){
    strcpy(name,nameParam);
}

char* Student::getName(){
    return name;
}

void Student::setMathGrade(float grade) {
    if(grade > 10 || grade < 1) {std::cout << "Grade is not valid";}
    else
    mathGrade = grade;
}

float Student::getMathGrade() {
    return mathGrade;
}

void Student::setEnglishGrade(float grade) {
    if(grade > 10 || grade < 1) {std::cout << "Grade is not valid";}
    else
    englishGrade = grade;
}

float Student::getEnglishGrade() {
    return englishGrade;
}

void Student::setHistoryGrade(float grade) {
    if(grade > 10 || grade < 1) {std::cout << "Grade is not valid";}
    else
    historyGrade = grade;
}

float Student::getHistoryGrade() {
    return historyGrade;
}

float Student::getAverageGrade() {
    return (historyGrade+englishGrade+mathGrade)/3;
}