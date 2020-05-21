#include <raylib.h>
#include <string>
#include "Animator.h"
#include <vector>


#ifndef RAYLIBTEMPLATE_CHARACTER_H
#define RAYLIBTEMPLATE_CHARACTER_H

enum char_estado{
    QUIETO,
    CORRIENDO,
    DISPARANDO,
    SALTANDO
} ;

class Character {
protected:
    Animator *anim[4];
    Vector2 character_pos;
    Vector2 character_vel;
public:
    const Vector2 &getCharacterVel() const;

    void setCharacterVel(const Vector2 &characterVel);

protected:
    char_estado estado;
    int mirar;
    bool canJump;
    int Life;
public:
    const Vector2 &getCharacterPos() const;
    const Vector2 &getVel();


    Character(std::string text, const Vector2 &characterPos);

    void draw();
    void move_x(float d);
    void move_y(float d);
    void jump(float d);

};
#endif //RAYLIBTEMPLATE_CHARACTER_H
