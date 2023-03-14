//
// Created by Bucataru Florin on 14.03.2023.
//

#ifndef SORTPROJECT_SORT_H
#define SORTPROJECT_SORT_H


class Sort

{
    int *v;
    int len = 0;

public:

    Sort(int min, int max, int l);

    Sort():v(new int[1] {2}) {
       len = 1;
    }

    Sort(int *x, int l);

    Sort(int n, ...);

    Sort(char *list);

    ~Sort();

    void InsertSort(bool ascendent=false);

    void QuickSort(bool ascendent=false);

    void BubbleSort(bool ascendent=false);

    void StalinSort(bool ascendent=false);

    void BogoSort(bool ascendent=false);

    void quantumBogoSort(bool ascendent=false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};


#endif //SORTPROJECT_SORT_H
