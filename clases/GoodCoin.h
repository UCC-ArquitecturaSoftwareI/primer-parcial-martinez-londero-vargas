/**
* @file GoodCoin.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion de la moneda buena
*/

#ifndef RAYLIBTEMPLATE_GOODCOIN_H
#define RAYLIBTEMPLATE_GOODCOIN_H
#include <raylib.h>
#include <string>
#include "Animator.h"
class GoodCoin: public Coin{

public:
/**
* @brief Constructor de la clase
*/
    GoodCoin(std::string text, const Vector2 &coinPos);
/**
* @brief Genera el rectangulo de colision
*/
    Rectangle getRectangle();

/**
* @brief Llama al draw del animator
*/
    void draw() override ;
/**
* @brief Destructor de la clase
*/
    virtual ~GoodCoin();

};

#endif //RAYLIBTEMPLATE_GOODCOIN_H
