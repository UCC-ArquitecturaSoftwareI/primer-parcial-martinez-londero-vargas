
#include "GoodCoin.h"
#include "Animator.h"

GoodCoin::GoodCoin(std::string text, const Vector2 &coinPos) {
     coin_pos=coinPos;
    anim = new Animator(text, 16, 16, 5, 1);
    size = {16, 16};
    bad = false;

}

void GoodCoin::draw() {
    anim->draw(coin_pos, mirar, 0);
}


GoodCoin::~GoodCoin() {
    UnloadTexture(coin);
}

