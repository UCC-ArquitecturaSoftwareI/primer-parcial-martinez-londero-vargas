/**
* @file Coin.h
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
* @brief implementacion de la clase Coin
*/

#ifndef RAYLIBTEMPLATE_COIN_H
#define RAYLIBTEMPLATE_COIN_H

#include <raylib.h>
#include <string>
#include "Animator.h"
class Coin{

private:
    Texture2D coin;
    Vector2 coin_pos;
    int width;
    int height;
    Animator *anim;
    int mirar;
    Vector2 size;
public:
/**
* @brief Constructor de la clase coin
* @param recibe una textura y la posicion de la moneda
*/
    Coin(std::string text, const Vector2 &coinPos);
/**
* @brief funcion que coloca un rectangulo al rededor de la moneda
* @return Posicion del rectangulo
*
*/
    Rectangle getRectangle();
/**
* @brief funcion que dibuja la moneda
*/
   virtual void draw();
/**
* @brief Destructor de la clase
*/
    virtual ~Coin();

};
#endif //RAYLIBTEMPLATE_COIN_H
