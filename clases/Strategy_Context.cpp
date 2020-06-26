
#include "Strategy_Context.h"

void Strategy_Context::SetStrategy (Score_Strategy * score_s)
{
    if(this->score_strategy != nullptr)
        delete  this->score_strategy;
    this->score_strategy = score_s;
}

int Strategy_Context::executeStrategy (int puntos){

    return score_strategy->score(puntos);
}

Strategy_Context::Strategy_Context() : score_strategy(nullptr) {}
