
#include <raylib.h>
#include <string>
#include "Animator.h"

#ifndef RAYLIBTEMPLATE_CHARACTER_H
#define RAYLIBTEMPLATE_CHARACTER_H

enum char_estado{
        QUIETO,
        CORRIENDO,
        DISPARANDO
} ;

class Character {
protected:
    Animator *anim[4];
    Vector2 character_pos;
    char_estado estado;
    int mirar;
public:
    const Vector2 &getCharacterPos() const;

protected:
    int Life;

public:
    Character(std::string text, const Vector2 &characterPos);

    void draw();
    void move_x(float d);
    void move_y(float d);
    void shoot();


};
#endif //RAYLIBTEMPLATE_CHARACTER_H
