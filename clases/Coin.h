//
// Created by Cami on 21/5/2020.
//
#include "Animator.h"
#ifndef RAYLIBTEMPLATE_COIN_H
#define RAYLIBTEMPLATE_COIN_H

class Coin{

private:
    Texture2D coin;
    Vector2 coin_pos;
public:
    Coin(std::string text, const Vector2 &coinPos);

    void draw();

};
#endif //RAYLIBTEMPLATE_COIN_H
