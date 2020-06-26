/**
* @file BadCoin_Strategy.h
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
* @brief implementacion de la estrategia de una moneda que resta puntos
*/

#include "Score_Strategy.h"
#ifndef RAYLIBTEMPLATE_BADCOIN_STRATEGY_H
#define RAYLIBTEMPLATE_BADCOIN_STRATEGY_H

class BadCoin_Strategy : public Score_Strategy{
public:

/**
* @brief funcion que restará los puntos de las monedas
* @return los puntos que sumó por recolectar una moneda
*/
    int score (int puntos);

};
#endif //RAYLIBTEMPLATE_BADCOIN_STRATEGY_H
