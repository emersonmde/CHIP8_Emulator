//
// Created by Matthew Emerson on 10/15/19.
//

#include <fstream>
#include <iostream>
#include "Platform.h"

void Platform::initialize() {
    processor.initialize();
}

void Platform::load_program(std::string filename) {
    const uint16_t bufsize = Memory::RAM_SIZE - Memory::PROGRAM_OFFSET;
    uint8_t buffer[bufsize];
    std::ifstream file;
    file.open(filename, std::ios::in | std::ios::binary);
    file.read(reinterpret_cast<char *>(buffer), bufsize);
    if (file.gcount() <= 0) {
        throw ProgramReadError(filename);
    }

    for (size_t i = 0; i < bufsize; i++) {
        // TODO: Use setter to update RAM
        processor.memory.ram[i + Memory::PROGRAM_OFFSET] = buffer[i];
    }
    file.close();
}

std::ostream &operator<<(std::ostream &os, const Platform &platform) {
    os << "stack: " << platform.stack << " processor: " << platform.processor;
    return os;
}
