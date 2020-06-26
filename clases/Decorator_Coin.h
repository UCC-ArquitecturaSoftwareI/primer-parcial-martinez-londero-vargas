
#include "Coin.h"
#ifndef RAYLIBTEMPLATE_DECORATOR_COIN_H
#define RAYLIBTEMPLATE_DECORATOR_COIN_H
class Decorator_Coin : public Coin{

protected:
    Coin *coin; /** puntero a la moneda */
public:
    Decorator_Coin();
    Decorator_Coin (Coin &coin1);

    void draw() override;

};
#endif //RAYLIBTEMPLATE_DECORATOR_COIN_H
