
#include "GoodCoin.h"
#include "Animator.h"

GoodCoin::GoodCoin(std::string text, const Vector2 &coinPos) {
    anim = new Animator(text, 16, 16, 5, 1);
    size = {16, 16};

}

void GoodCoin::draw() {
    anim->draw(coin_pos, mirar, 0);
}

Rectangle GoodCoin::getRectangle() {
    return {
            coin_pos.x,
            coin_pos.y,
            size.x,
            size.y
    };
}

GoodCoin::~GoodCoin() {
    UnloadTexture(coin);
}