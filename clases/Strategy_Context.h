//
// Created by mica on 25/06/2020.
//

#include "Score_Strategy.h"
#ifndef RAYLIBTEMPLATE_STRATEGY_CONTEXT_H
#define RAYLIBTEMPLATE_STRATEGY_CONTEXT_H
class Strategy_Context {

private:
    Score_Strategy *score_strategy;

public:
    void SetStrategy (Score_Strategy * score_s);

    int executeStrategy (int puntos);
};


#endif //RAYLIBTEMPLATE_STRATEGY_CONTEXT_H