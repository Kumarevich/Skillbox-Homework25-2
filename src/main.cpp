#include <iostream>
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"

int main() {
    std::string command;
    while (command != "exit") {
        std::cout << "Input your command (sum, save, load, input, display, exit): ";
        std::cin >> command;
        if (command == "sum") compute();
        else if (command == "save") save();
        else if (command == "load") load();
        else if (command == "input") input();
        else if (command == "display") display();
        else if (command != "exit") std::cout << "Wrong input. Try again." << std::endl;
    }
    return 0;
}
