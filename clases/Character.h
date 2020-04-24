
#include <raylib.h>
#include <string>
#ifndef RAYLIBTEMPLATE_CHARACTER_H
#define RAYLIBTEMPLATE_CHARACTER_H

class Character {
protected:
    Texture2D character{};
    Vector2 character_pos;
    int Life;

public:
    Character(std::string text, const Vector2 &characterPos);

    void draw();
    void move_x(float d);
    void move_y(float d);
    void shoot();


};
#endif //RAYLIBTEMPLATE_CHARACTER_H
