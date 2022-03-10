#include "kbd.h"
#include <iostream>

void input() {
    std::cout << "Input 8 numbers: ";
    int temp[8];
    for (int i = 0; i < 8; ++i) {
        std::cin >> temp[i];
    }
    write(temp);
}