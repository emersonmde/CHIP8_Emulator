//
// Created by Matthew Emerson on 10/15/19.
//

#ifndef CHIP8_PROCESSOR_H
#define CHIP8_PROCESSOR_H


#include <cstdint>
#include <ostream>
#include "Memory.h"
#include "Display.h"

class Processor {
    static const size_t STACK_SIZE = 16;

    uint8_t v0;
    uint8_t v1;
    uint8_t v2;
    uint8_t v3;
    uint8_t v4;
    uint8_t v5;
    uint8_t v6;
    uint8_t v7;
    uint8_t v8;
    uint8_t v9;
    uint8_t va;
    uint8_t vb;
    uint8_t vc;
    uint8_t vd;
    uint8_t ve;
    uint8_t vf;

    uint16_t index;
    uint16_t pc;
    uint16_t sp;

    uint8_t delay_timer;
    uint8_t sound_timer;

    uint8_t stack[STACK_SIZE] = {0};

    // TODO: Implement opcode lookup
public:
    Memory memory;
    Display display;

    void initialize();
    void cycle();

    friend std::ostream &operator<<(std::ostream &os, const Processor &processor);
};


#endif //CHIP8_PROCESSOR_H
