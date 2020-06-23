//
// Created by martin on 23/6/20.
//

#include "Context.h"

void Context::loop() {
    state->loop();
}

Context::Context(State *st) : state(nullptr) {
    cambiar_estado(st);
}

void Context::cambiar_estado(State *st) {
    if (state != nullptr) {
        delete state;
    }
    state = st;
    state->setCtx(this);
}
