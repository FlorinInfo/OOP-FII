#include <iostream>
#include "Student.h"
#include <cstring>

int compareName(Student s1, Student s2) {
    if(strcmp(s1.getName(),s2.getName()) == 0) return 0;
    if(strcmp(s1.getName(),s2.getName()) < 0) return 1;
    return -1;
}

int compareMathGrade(Student s1, Student s2) {
    float grade1 = s1.getMathGrade();
    float grade2 = s2.getMathGrade();
    if(grade1==grade2) return 0;
    if(grade1 > grade2) return 1;
    return -1;
}

int compareEnglishGrade(Student s1, Student s2) {
    float grade1 = s1.getEnglishGrade();
    float grade2 = s2.getEnglishGrade();
    if(grade1==grade2) return 0;
    if(grade1 > grade2) return 1;
    return -1;
}

int compareHistoryGrade(Student s1, Student s2) {
    float grade1 = s1.getHistoryGrade();
    float grade2 = s2.getHistoryGrade();
    if(grade1==grade2) return 0;
    if(grade1 > grade2) return 1;
    return -1;
}

int compareAverageGrade(Student s1, Student s2) {
    float grade1 = s1.getEnglishGrade();
    float grade2 = s2.getEnglishGrade();
    if(grade1==grade2) return 0;
    if(grade1 > grade2) return 1;
    return -1;
}

int main() {
    Student instance;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
