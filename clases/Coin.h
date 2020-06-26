/**
* @file Coin.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion de la clase abstracta moneda
*/
#ifndef RAYLIBTEMPLATE_COIN_H
#define RAYLIBTEMPLATE_COIN_H

#include <raylib.h>
#include <string>
#include "Animator.h"

class Coin {

protected:

    Texture2D coin;
    Vector2 coin_pos;
    bool bad;
    int width;
    int height;
public:
    bool isBad() const {
        return bad;
    }

protected:
    int mirar;
    Animator *anim;
    Vector2 size;

public:
/**
* @brief Funcion virtual pura q heredaran las subclases
*/
    virtual void draw() = 0;
    /**
* @brief Genera el rectangulo de colision
*/

    Rectangle getRectangle(){
        return {
                coin_pos.x,
                coin_pos.y,
                size.x,
                size.y
        };
    }

};

#endif //RAYLIBTEMPLATE_COIN_H
