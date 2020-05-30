//
// Created by Cami on 21/5/2020.
//

#include "Coin.h"
#include <string>


Coin::Coin(std::string text, const Vector2 &coinPos) : coin_pos(coinPos) {

   coin = LoadTexture(text.c_str());

}

void Coin::draw() {
    // Rectantulo con tamaño de la textura
    Rectangle sourceRec = { 0.0f, 0.0f, coin.width, coin.height };

    // rectangulo ubicado donde estará en la pantalla
    Rectangle destRec = { coin_pos.x, coin_pos.y, coin.width, coin.height };

    Vector2 origin = {coin.width/2, coin.height/2}; // Centro de la textura

    DrawTextureRec(coin, sourceRec, origin, WHITE);
}
