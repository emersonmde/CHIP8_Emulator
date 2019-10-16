//
// Created by Matthew Emerson on 10/15/19.
//

#include "Processor.h"

std::ostream &operator<<(std::ostream &os, const Processor &processor) {
    os << "v0: " << +processor.v0 << " v1: " << +processor.v1 << " v2: " << +processor.v2 << " v3: " << +processor.v3
       << " v4: " << +processor.v4 << " v5: " << +processor.v5 << " v6: " << +processor.v6 << " v7: " << +processor.v7
       << " v8: " << +processor.v8 << " v9: " << +processor.v9 << " va: " << +processor.va << " vb: " << +processor.vb
       << " vc: " << +processor.vc << " vd: " << +processor.vd << " ve: " << +processor.ve << " vf: " << +processor.vf
       << " i: " << +processor.i << " pc: " << +processor.pc << " sp: " << +processor.sp;
    return os;
}

// Equivalent to a reboot; reset everything
void Processor::initialize() {
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    va = 0;
    vb = 0;
    vc = 0;
    vd = 0;
    ve = 0;
    vf = 0;

    i = 0;
    pc = 0;
    sp = 0;

    delay_timer = 0;
    sound_timer = 0;

    for (uint8_t &i : stack) {
        i = 0;
    }

    memory.initialize();
}

void Processor::cycle() {
    // TODO: read opcode at pc
    // TODO: decode opcode
    // TODO: update timers
    // TODO: increment pc
}
