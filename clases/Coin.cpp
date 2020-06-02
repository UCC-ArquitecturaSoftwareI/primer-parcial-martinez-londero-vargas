//
// Created by micav on 26/05/2020.
//

#include "Coin.h"
#include <string>
#include <cmath>

Coin::Coin(std::string text, const Vector2 &coinPos) : coin_pos(coinPos) {

   anim = new Animator (text, 32,32,5,1);
}

void Coin::draw() {
    anim->draw(coin_pos, mirar, 0);
}
