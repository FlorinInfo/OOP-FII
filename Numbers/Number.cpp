//
// Created by Bucataru Florin on 19.03.2023.
//

#include "Number.h"
#include <iostream>
#include <string>

int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

Number::Number(char *value, int base) {
    this->charValue = value;
    this->base = base;
    this->setNumberValue(value);
}

Number::Number(int value) {
    this->base = 10;
    this->numberValue = value;
    this->SwitchBase(this->base);
}



Number& Number::operator = (int val)
{
    if(this->base < 2) this->base = 10;
    this->numberValue = val;
    this->SwitchBase(this->base);
    return (*this);
}

Number& Number::operator = (char *val)
{
    this->base = 10;
    this->charValue = val;
    this->setNumberValue(val);
    return (*this);
}

char Number::operator[](int index) {
    return this->charValue[index];
}

int Number::operator+(Number n) {

    return numberValue+n.numberValue;
}

bool Number::operator>(Number n) {
    return this->numberValue > n.numberValue;
}

int Number::GetBase() {
    return this->base;
}

int Number::GetDigitsCount() {
    int counter = 0;
    while(this->charValue[counter] != '\0') counter++;
    return counter;
}




void Number::Print() {
    std::cout << this->charValue << "\n";
    std::cout << this->numberValue << "\n";
}

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}


// Utility function to reverse a string
void strev(char *str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

void Number::fromDeci()
{
    int index = 0;  // Initialize index of result
    char *newChar = new char[index];
    int copyNumber = this->numberValue;


    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder
    while (copyNumber > 0)
    {   char *copyNewChar = new char[index+1];
        for(int i = 0; i <=index;i++) copyNewChar[i]=newChar[i];
        copyNewChar[index++] = reVal(copyNumber % this->base);
        delete newChar;
        newChar = new char[index];
        for(int i = 0; i <=index;i++) newChar[i]=copyNewChar[i];
        delete copyNewChar;
        copyNumber /= this->base;
    }
    newChar[index] = '\0';
//
//     Reverse the result
    strev(newChar);
    this->charValue = newChar;
}

void Number::SwitchBase(int newBase) {
    this->base = newBase;
    fromDeci();
}

bool Number::operator-- ()
{
    int maxLength = 0;
    while(this->charValue[maxLength]) maxLength++;
    char *copyValue = new char[maxLength-1];
    for(int i = 1; i < maxLength;i++) copyValue[i-1]=this->charValue[i];
    this->charValue = copyValue;
    this->setNumberValue(copyValue);
    return true;
}
bool Number::operator-- (int val)
{
    int maxLength = 0;
    while(this->charValue[maxLength]) maxLength++;
    char *copyValue = new char[maxLength-1];
    for(int i = 0; i < maxLength-1;i++) copyValue[i]=this->charValue[i];
    this->charValue = copyValue;
    this->setNumberValue(copyValue);
    return false;
}

void Number::setNumberValue(char *value) {
    int len = strlen(value);
    int power = 1; // Initialize power of base
    int num = 0;  // Initialize result
    int i;

    for (i = len - 1; i >= 0; i--)
    {
        if (val(value[i]) >= base)
        {
            printf("Invalid Number");
        }

        num += val(value[i]) * power;
        power = power * base;
    }
    this->numberValue=num;
}

bool operator += (Number &i, Number y)
{
    i.numberValue = i.numberValue + y.numberValue;
    if(y.base > i.base) i.base = y.base;
    i.SwitchBase(i.base);
    return true;
}