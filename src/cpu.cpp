#include "cpu.h"
#include <iostream>

void compute() {
    int* pTemp;
    pTemp = read();
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += *(pTemp + i);
    }
    std::cout << "Sum: " << sum << std::endl;
}