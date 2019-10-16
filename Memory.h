//
// Created by Matthew Emerson on 10/15/19.
//

#ifndef CHIP8_MEMORY_H
#define CHIP8_MEMORY_H


#include <cstdint>
#include <cstddef>

class Memory {
public:
    static const size_t RAM_SIZE = 4096;
    static const uint16_t PROGRAM_OFFSET = 0x200;

    uint8_t ram[RAM_SIZE] = {0};

    void initialize();
    void dump();
};


#endif //CHIP8_MEMORY_H
