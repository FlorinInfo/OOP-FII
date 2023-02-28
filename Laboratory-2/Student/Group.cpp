//
// Created by Bucataru Florin on 28.02.2023.
//

#include "Group.h"

void Group::sortGroup() {
    for(int i = 0; i < groupStudents-1;i++) {
        for(int j = i+1; j < groupStudents;j++){
            if(arr[i].getAverageGrade() > arr[j].getHistoryGrade()) {
                Student aux;
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}