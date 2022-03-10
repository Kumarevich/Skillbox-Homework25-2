#include "gpu.h"
#include <iostream>

void display() {
    int* pTemp;
    pTemp = read();
    for (int i = 0; i < 8; ++i) {
        std::cout << *(pTemp + i) << " ";
    }
}