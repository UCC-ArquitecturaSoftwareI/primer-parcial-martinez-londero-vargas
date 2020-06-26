/**
* @file Decorator_Coin.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion del patron decorator
*/
#include "Coin.h"

#ifndef RAYLIBTEMPLATE_DECORATOR_COIN_H
#define RAYLIBTEMPLATE_DECORATOR_COIN_H

class Decorator_Coin : public Coin {

    Coin &coin; /** referencia a la moneda */
public:
/**
* @brief Constructor de la clase
*/
    Decorator_Coin(Coin &coin) : coin(coin) {}

/**
* @brief Llamar a la funcion draw del coin
*/
    void draw() override {
        coin.draw();
    };

};

#endif //RAYLIBTEMPLATE_DECORATOR_COIN_H
