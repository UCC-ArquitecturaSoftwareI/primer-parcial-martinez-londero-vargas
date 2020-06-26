
#ifndef RAYLIBTEMPLATE_BADCOIN_H
#define RAYLIBTEMPLATE_BADCOIN_H
#include "Decorator_Coin.h"
#include "Animator.h"

class BadCoin : public Decorator_Coin{
public:
    BadCoin (Coin *coin) : Decorator_Coin(*coin)
    {

    }

   BadCoin(std::string text, const Vector2 &coinPos) : Decorator_Coin(){

    }

    void draw()
    {
        anim->draw_BadCoin(coin_pos, mirar, 0);

    }

};
#endif //RAYLIBTEMPLATE_BADCOIN_H
