//
// Created by Bucataru Florin on 19.03.2023.
//

#ifndef NUMBERS_NUMBER_H
#define NUMBERS_NUMBER_H


class Number {
    // add data members
    int base = -1 ;
    int numberValue;
    char * charValue;
public:

    Number(char * value, int base); // where base is between 2 and 16
    Number(int value);
//    Number(Number &a);
//    Number(Number &&a);

//    ~Number();

    // add operators and copy/move constructor

    char operator [](int index);
    bool operator >(Number n);
    Number& operator = (int val);
    Number& operator = (char *val);
    friend bool operator += (Number & i, Number y);
    friend Number operator+(Number n1, Number n2);
    friend Number operator-(Number n1, Number n2);


    bool operator-- ();
    bool operator-- (int value);


    void SwitchBase(int newBase);

    void Print();

    int  GetDigitsCount(); // returns the number of digits for the current number

    int  GetBase(); // returns the current base

    void fromDeci();

    void setNumberValue(char *value);
};


#endif //NUMBERS_NUMBER_H
