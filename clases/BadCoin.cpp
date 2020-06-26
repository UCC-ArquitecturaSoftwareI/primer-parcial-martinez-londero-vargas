
#include "BadCoin.h"
#include "Animator.h"

BadCoin::BadCoin(std::string text, const Vector2 &coinPos){
    anim = new Animator (text, 16,16,5,1);
    size = {16,16};

}
void BadCoin:: draw() {
    anim->draw_BadCoin(coin_pos, mirar, 0);
}

Rectangle BadCoin::getRectangle() {
    return {
            coin_pos.x,
            coin_pos.y,
            size.x,
            size.y
    };
}
BadCoin::~BadCoin() {
    UnloadTexture(coin);
}