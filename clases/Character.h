//
// Created by micav on 17/04/2020.
//
#include <raylib.h>
#include <string>
#ifndef RAYLIBTEMPLATE_CHARACTER_H
#define RAYLIBTEMPLATE_CHARACTER_H

class Character {
    Texture2D character{};
    Vector2 character_pos;
public:
    Character(std::string text, const Vector2 &characterPos);

    void draw();
    void move_x(float d);
    void move_y(float d);
};
#endif //RAYLIBTEMPLATE_CHARACTER_H
