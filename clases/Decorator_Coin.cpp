
#include "Decorator_Coin.h"

Decorator_Coin::Decorator_Coin(Coin *coin1){

    coin1 = new Coin;
}

void Decorator_Coin::draw ()
{    coin.draw();
    return this->coin->draw();
}