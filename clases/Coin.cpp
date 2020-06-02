//
// Created by micav on 26/05/2020.
//

#include "Coin.h"
#include <string>
#include <cmath>

Coin::Coin(std::string text, const Vector2 &coinPos) : coin_pos(coinPos) {

   anim[0] = new Animator (text, 32,32,5);
}

void Coin::draw() {
    anim[0]->draw(coin_pos,mirar);
}
