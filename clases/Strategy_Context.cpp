//
// Created by mateo on 25/06/2020.
//

#include "Strategy_Context.h"

void Strategy_Context::setStrategy (score_strategy * score_s)
{
    this.score_strategy = score_s;
}

int Strategy_Context::executeStrategy (int puntos){

    return score_strategy.score(int puntos);
}