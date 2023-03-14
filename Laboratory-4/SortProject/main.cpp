#include <iostream>
#include "Sort.h"

int main() {
    int v[10] = {1,2,3};
    Sort x = "2,1,3,4";
//    Sort x(2,10,5);
//    Sort x(v,3);
//    Sort x(7,702,422,631,834,892,104,772);
    x.quantumBogoSort(true);
    x.Print();
//    delete x;
    return 0;
}
