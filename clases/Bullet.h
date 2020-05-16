//
// Created by micav on 15/05/2020.
//

#include <raylib.h>
#include <string>
#include <iostream>

#ifndef RAYLIBTEMPLATE_BULLET_H
#define RAYLIBTEMPLATE_BULLET_H


class Bullet {
    Texture2D bullet;
    Vector2 bullet_pos;

public:
    Bullet(std::string text,  const Vector2 &bulletPos) ;

    void draw();
    void move_x(float d);
    void move_y(float d);
    void setBulletPos(const Vector2 &bulletPos);
};


#endif //RAYLIBTEMPLATE_BULLET_H
