//
// Created by Matthew Emerson on 10/15/19.
//

#include <iostream>
#include <iomanip>
#include "Memory.h"


void Memory::initialize() {
    for (uint8_t & i : ram) {
        i = 0;
    }
}

void Memory::dump() {
    std::cout << "BEGIN RAM" << std::endl;
    for (size_t i = 0; i < RAM_SIZE; i++) {
        if (i % 32 == 0) {
            std::cout << std::setfill('0') << std::setw(3) << i << ": ";
        }
        std::cout << std::setw(2) << std::hex << +ram[i] << " ";
        if ((i + 1) % 32 == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl << "END RAM" << std::endl;
}