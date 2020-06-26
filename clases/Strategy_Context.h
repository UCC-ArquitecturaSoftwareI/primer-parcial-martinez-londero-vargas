

#include "Score_Strategy.h"
#ifndef RAYLIBTEMPLATE_STRATEGY_CONTEXT_H
#define RAYLIBTEMPLATE_STRATEGY_CONTEXT_H
class Strategy_Context {

private:
    Score_Strategy *score_strategy;
public:
    Strategy_Context();

    void SetStrategy (Score_Strategy * score_s);

    int executeStrategy (int puntos);
};


#endif //RAYLIBTEMPLATE_STRATEGY_CONTEXT_H