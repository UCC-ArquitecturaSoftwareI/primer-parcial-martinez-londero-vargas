/**
* @file Strategy_Context.cpp
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
*/
#include "Strategy_Context.h"

void Strategy_Context::SetStrategy (Score_Strategy * score_s)
{
    this->score_strategy = score_s;
}

int Strategy_Context::executeStrategy (int puntos){

    return score_strategy->score(puntos);
}