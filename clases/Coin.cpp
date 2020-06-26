/**
* @file Coin.h
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
*/
#include "Coin.h"
#include <string>
#include <cmath>

Coin::Coin(std::string text, const Vector2 &coinPos) : coin_pos(coinPos) {

   anim = new Animator (text, 16,16,5,1);
    size = {16,16};
}

void Coin::draw() {
    anim->draw(coin_pos, mirar, 0);
}


Rectangle Coin::getRectangle() {
    return {
            coin_pos.x,
            coin_pos.y,
            size.x,
            size.y
    };
}

Coin::~Coin() {
    UnloadTexture(coin);
}
