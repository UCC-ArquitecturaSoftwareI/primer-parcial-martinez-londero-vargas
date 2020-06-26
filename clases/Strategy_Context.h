/**
* @file Strategy_Contex.h
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
* @brief implementacion del contexto para Strategy
*/

#include "Score_Strategy.h"
#ifndef RAYLIBTEMPLATE_STRATEGY_CONTEXT_H
#define RAYLIBTEMPLATE_STRATEGY_CONTEXT_H
class Strategy_Context {

private:
/**
* @brief puntero que apunta a un strategy
*/
    Score_Strategy *score_strategy;

public:
/**
* @brief setea el strategy correcto
*/

    void SetStrategy (Score_Strategy * score_s)
/**
* @brief ejecuta la funcion correspondiente a cada strategy
*/

    int executeStrategy (int puntos);
};


#endif //RAYLIBTEMPLATE_STRATEGY_CONTEXT_H