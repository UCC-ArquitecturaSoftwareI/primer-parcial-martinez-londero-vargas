/**
* @file BadCoin.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion de la moneda mala
*/
#ifndef RAYLIBTEMPLATE_BADCOIN_H
#define RAYLIBTEMPLATE_BADCOIN_H

#include "Decorator_Coin.h"
#include "Animator.h"

#include "Animator.h"

class BadCoin : public Coin {

public:
/**
* @brief Constructor de la clase
*/
    BadCoin(std::string text, const Vector2 &coinPos);


/**
* @brief Llama al draw correspondiente del animator
*/
    void draw() override;

/**
* @brief Destructor de la clase
*/
    virtual ~BadCoin();

};

#endif //RAYLIBTEMPLATE_BADCOIN_H
