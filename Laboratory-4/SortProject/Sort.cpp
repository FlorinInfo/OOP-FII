//
// Created by Bucataru Florin on 14.03.2023.
//
#include <iostream>
#include "Sort.h"



Sort::Sort(int min, int max, int l){
    v = new int[l];
    int i = 0;
    while(i!=l) {
        v[i] = rand()%(max-min + 1) + min;
        i++;
    }
    len = i;
}

Sort::Sort(int *x, int l) {
    v = new int[l];
    for(int i = 0;i < l;i++)
        v[i] = x[i];
    len = l;
}

Sort::Sort(int n, ...) {
    v = new int[n];
    int i,val;
    va_list vl;
    va_start(vl,n);
    for (i=0;i<n;i++)
    {
        val=va_arg(vl,int);
        v[i]=val;
    }
    va_end(vl);
    len=n;
}

Sort::Sort(char *list) {
    int findLen = 0;
    int i = 0;
    int numberLen = 0;
    char number[101] = {'\n'};
    while(list[i]) {
        if(list[i]==',') findLen++;
        i++;
    }
    v = new int[findLen+1];
    i=0;
    while(list[i]) {
        if(list[i]!=',') {
            number[numberLen] = list[i];
            numberLen++;

        }
        else {
            int nrInt = 0;
            for(int j = 0;  j < numberLen;j++) {
                nrInt = nrInt*10+((int)number[j]-48);
            }
            v[len] = nrInt;
            len++;
            number[0] = NULL;
            numberLen = 0;
        }
        i++;
    }
    int nrInt = 0;
    for(int j = 0;  j < numberLen;j++) {
        nrInt = nrInt*10+((int)number[j]-48);
    }
    v[len] = nrInt;
    len++;
    number[0] = NULL;
    numberLen = 0;
}

Sort::~Sort(){
    delete this->v;
}

void Sort::Print(){
    for(int i = 0; i < len;i++) std::cout << v[i] << ' ';
}

void Sort::InsertSort(bool ascendent) {
    int i, key, j;
    for (i = 1; i < len; i++) {
        key = v[i];
        j = i - 1;
        if(ascendent) {
            while (j >= 0 && v[j] > key) {
                v[j + 1] = v[j];
                j = j - 1;
            }
        }
        else {
            while (j >= 0 && v[j] < key) {
                v[j + 1] = v[j];
                j = j - 1;
            }
        }
        v[j + 1] = key;
    }
}

void Sort::BubbleSort(bool ascendent) {
    int i, j;
    for (i = 0; i < len - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < len - i - 1; j++)
        if ((ascendent&&v[j] > v[j + 1]) || (!ascendent&&v[j] < v[j + 1]))
        {
            int aux = v[j];
            v[j] = v[j+1];
            v[j+1]=aux;
        }

}

void Sort::StalinSort (bool ascendent) {
    int l = 1;
    for (int i = 1; i < len; i++) {
        if ((ascendent&&v[l - 1] < v[i]) || (!ascendent&&v[l - 1] > v[i] )) {
            v[l] = v[i];
            l++;
        }
    }
    len = l;
}

void Sort::BogoSort(bool ascendent) {
    int ok = 1;
    for(int i = 0; i < len-1;i++){
        for(int j = i+1;j < len;j++)
        {
            if((ascendent&&v[i] > v[j]) || (!ascendent && v[i]< v[j])) ok = 0;
        }
    }
    while(ok==0) {
        int x = rand()%(len);
        int y = rand()%(len);
        int aux = v[x];
        v[x] = v[y];
        v[y] = aux;
        ok=1;
        for(int i = 0; i < len-1;i++){
            for(int j = i+1;j < len;j++)
            {
                if((ascendent&&v[i] > v[j]) || (!ascendent && v[i]< v[j])) {ok = 0;break;}
            }
            if(ok==0) break;
        }
    }
}

void Sort::quantumBogoSort(bool ascendent) {
    int ok = 1;
    for(int i = 0; i < len-1;i++){
        for(int j = i+1;j < len;j++)
        {
            if((ascendent&&v[i] > v[j]) || (!ascendent && v[i]< v[j])) ok = 0;
        }
    }
    if(ok==0) {
       throw 42;
    }
}

int  Sort::GetElementFromIndex(int index) {
    if(index >= len) return -1;
    else return v[index];
}