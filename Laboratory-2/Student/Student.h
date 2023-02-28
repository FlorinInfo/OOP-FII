//
// Created by Bucataru Florin on 28.02.2023.
//

#ifndef STUDENT_STUDENT_H
#define STUDENT_STUDENT_H


class Student {
private:
    char name[101];
    float mathGrade;
    float englishGrade;
    float historyGrade;
public:
    void setName(char nameParam);
    char* getName();
    void setMathGrade(float grade);
    float getMathGrade();
    void setEnglishGrade(float grade);
    float getEnglishGrade();
    void setHistoryGrade(float grade);
    float getHistoryGrade();
    float getAverageGrade();
};


#endif //STUDENT_STUDENT_H
