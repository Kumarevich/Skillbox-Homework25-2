#include "ram.h"

int ram[8];

void write(int* temp) {
    for (int i = 0; i < 8; ++i) {
        ram[i] = *(temp + i);
    }
}

int* read() {
    return ram;
}