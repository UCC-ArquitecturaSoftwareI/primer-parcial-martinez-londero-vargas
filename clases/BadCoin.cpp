
#include "BadCoin.h"
#include "Animator.h"

BadCoin::BadCoin(std::string text, const Vector2 &coinPos){
    coin_pos=coinPos;
    anim = new Animator (text, 16,16,5,1);
    size = {16,16};
    bad= true;

}
void BadCoin:: draw() {
    anim->draw_BadCoin(coin_pos, mirar, 0);
}

BadCoin::~BadCoin() {
    UnloadTexture(coin);
}