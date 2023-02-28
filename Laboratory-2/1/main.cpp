#include <iostream>
#include "NumberList.h"

int main() {
    NumberList instance;
    instance.Init();
    instance.Add(1);
    instance.Add(3);
    instance.Add(4);
    instance.Sort();
    instance.Print();
    return 0;
}
