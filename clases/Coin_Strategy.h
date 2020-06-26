/**
* @file Coin_Strategy.h
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
* @brief implementacion de la estrategia de una moneda que suma puntos
*/

#include "Score_Strategy.h"
#ifndef RAYLIBTEMPLATE_COIN_STRATEGY_H
#define RAYLIBTEMPLATE_COIN_STRATEGY_H


class Coin_Strategy : public Score_Strategy{
public:
/**
* @brief funcion que sumará los puntos de las monedas
*/
    int score (int puntos);

};
#endif //RAYLIBTEMPLATE_COIN_STRATEGY_H