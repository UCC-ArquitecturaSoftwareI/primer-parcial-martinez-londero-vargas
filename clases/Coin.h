//
// Created by micav on 26/05/2020.
//

#ifndef RAYLIBTEMPLATE_COIN_H
#define RAYLIBTEMPLATE_COIN_H

#include <raylib.h>
#include <string>
#include "Animator.h"
class Coin{

protected:
    Texture2D coin;
    Vector2 coin_pos;
    int width;
    int height;
    Animator *anim;
    int mirar;
    Vector2 size;
public:
    Coin(std::string text, const Vector2 &coinPos);
    Coin();

    Rectangle getRectangle();
    virtual void draw();
    virtual ~Coin();

};
#endif //RAYLIBTEMPLATE_COIN_H
