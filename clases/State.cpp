//
// Created by martin on 23/6/20.
//

#include "State.h"

State::~State() {

}

void State::setCtx(Context *ctx) {
    State::ctx = ctx;
}
