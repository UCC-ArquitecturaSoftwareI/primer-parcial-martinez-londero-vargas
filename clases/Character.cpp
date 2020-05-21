//
// Created by micav on 17/04/2020.
//
#include <string>
#include "Character.h"


Character::Character(std::string text, const Vector2 &characterPos) : character_pos(characterPos) {
    estado = QUIETO;
    mirar = 0;
    character_vel.x=0;
    character_vel.y=0;
    anim[0] = new Animator(text, 57, 50, 7);
    anim[2] = new Animator("resources/idle.png", 50, 50, 1);
   // anim[1] = new Animator("resources/shoot2.png", 57, 64, 7);
    anim[3] = new Animator("resources/jump2.png", 57, 50, 3);
}

void Character::draw() {
    switch (estado) {
        case CORRIENDO:
            anim[0]->draw(character_pos, mirar);
            break;
        case DISPARANDO:
            anim[1]->draw(character_pos, mirar);
            break;
        case QUIETO:
            anim[2]->draw(character_pos, mirar);
            break;
        case SALTANDO:
            anim[3]->draw(character_pos,mirar);

    }
}

void Character::move_x(float d) {
    if (d < 0) {
        mirar = 1;
    } else if (d > 0) {
        mirar = 0;
    }
    character_pos.x += d;
    estado = CORRIENDO;
}

void Character::move_y(float d) {
    character_pos.y += d;

}


const Vector2 &Character::getCharacterPos() const {
    return character_pos;
}

void Character::jump(float d) {
    character_pos.y -= d;
    character_vel.y += d;
    estado = SALTANDO;
}

const Vector2 &Character::getCharacterVel() const {
    return character_vel;
}

void Character::setCharacterVel(const Vector2 &characterVel) {
    character_vel = characterVel;
}

