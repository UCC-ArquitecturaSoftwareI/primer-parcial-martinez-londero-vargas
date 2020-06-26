//
// Created by martin on 23/6/20.
//

#ifndef RAYLIBTEMPLATE_CONTEXT_H
#define RAYLIBTEMPLATE_CONTEXT_H

class State;

#include "State.h"

class Context {
private:
    State *state;
public:
    Context(State *state);
    void cambiar_estado(State *st);
    void loop();
};


#endif //RAYLIBTEMPLATE_CONTEXT_H
