//
// Created by martin on 23/6/20.
//

#ifndef RAYLIBTEMPLATE_STATE_H
#define RAYLIBTEMPLATE_STATE_H

class Context;

#include "Context.h"

class State {
protected:
    Context *ctx;
public:
    virtual ~State();

    virtual void loop() = 0;

    void setCtx(Context *ctx);
};


#endif //RAYLIBTEMPLATE_STATE_H
