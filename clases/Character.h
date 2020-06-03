#include <raylib.h>
#include <string>
#include "Animator.h"
#include <vector>


#ifndef RAYLIBTEMPLATE_CHARACTER_H
#define RAYLIBTEMPLATE_CHARACTER_H

enum char_estado {
    QUIETO,
    CORRIENDO,
    DISPARANDO,
    SALTANDO,
    CALLENDO
};

class Character {
protected:
    Animator *anim;
    Vector2 character_pos;
    Vector2 character_vel;
    Vector2 size;
    char_estado estado;
    int mirar;
    bool canJump;
    int Life;

public:
    Character(std::string text, const Vector2 &characterPos);

    const Vector2 &getCharacterVel() const;

    void setCharacterVel(const Vector2 &characterVel);

    const Vector2 &getCharacterPos() const;

    const Vector2 &getVel();

    void draw();

    void move_x(float d);

    void move_y(float d);

    void jump(float d);

    Rectangle getRectangle(){
        return {
                character_pos.x,
                character_pos.y,
                size.x,
                size.y
        };
    }

};

#endif //RAYLIBTEMPLATE_CHARACTER_H
