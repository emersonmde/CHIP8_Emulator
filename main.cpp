#include <iostream>
#include "Platform.h"

int main() {
    Platform chip8 = Platform();

    chip8.initialize();

    chip8.load_program("assets/pong.rom");
    chip8.processor.memory.dump();
    return 0;
}