#include "disk.h"
#include <fstream>

void save() {
    std::ofstream data ("..\\data.txt", std::ofstream::trunc);
    int* pTemp;
    pTemp = read();
    for (int i = 0; i < 8; ++i) {
        data << *(pTemp + i);
    }
    data.close();
}

void load() {
    std::ifstream data ("..\\data.txt");
    int temp[8];
    for (int i = 0; i < 8; ++i) {
        data >> temp[i];
    }
    data.close();
    write(temp);
}