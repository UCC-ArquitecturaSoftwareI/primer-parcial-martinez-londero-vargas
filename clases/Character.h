#include <raylib.h>
#include <string>
#include "Animator.h"
#include <vector>
#include "Bullet.h"

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
    char_estado estado;
    int mirar;
    bool canJump;
    int Life;
public:
    const Vector2 &getCharacterPos() const;
   // std::vector<Bullet*> bullet;

    Character(std::string text, const Vector2 &characterPos);

    void draw();
    void move_x(float d);
    void move_y(float d);
    void shoot();
    Bullet *bullet;


};
#endif //RAYLIBTEMPLATE_CHARACTER_H