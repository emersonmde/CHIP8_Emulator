//
// Created by Matthew Emerson on 10/15/19.
//

#ifndef CHIP8_PLATFORM_H
#define CHIP8_PLATFORM_H

#include <cstddef>
#include <cstdint>
#include <ostream>
#include "Processor.h"
#include "Display.h"
#include "Memory.h"

// TODO: maybe move all of this under Processor?
class Platform {
public:

    friend std::ostream &operator<<(std::ostream &os, const Platform &platform);

    Processor processor;

    void initialize();
    void load_program(std::string filename);
};

class ProgramReadError: public std::exception
{
    std::string file;
public:
    explicit ProgramReadError(const std::string &f) : file(std::string("Error opening file: ") + f) {}

    [[nodiscard]] const char* what() const noexcept override
    {
        return "Unable";
    }
};

#endif //CHIP8_PLATFORM_H
