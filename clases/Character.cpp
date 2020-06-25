//
// Created by micav on 17/04/2020.
//
#include <string>
#include "Character.h"
#include "Singleton.h"
#include <iostream>

Character::Character(std::string text, const Vector2 &characterPos) : character_pos(characterPos) {
    estado = QUIETO;
    mirar = 0;
    character_vel.x = 0;
    character_vel.y = 0;
    anim = new Animator(text, 57, 50, 9, 2);
    size.x = 50;
    size.y = 57;

}

void Character::draw() {
    switch (estado) {
        case CORRIENDO:
            anim->draw(character_pos, mirar, 0);
            break;
        case DISPARANDO:
            anim->draw(character_pos, mirar, 0);
            break;
        case QUIETO:
            anim->draw(character_pos, mirar, 0);
            break;
        case SALTANDO:
            anim->draw(character_pos, mirar, 1);

    }
}

void Character::move_x(float d) {
    if (d < 0) {
        mirar = 1;
    } else if (d > 0) {
        mirar = 0;
    }
    character_pos.x += d;
    if (d == 0)
        estado = QUIETO;
    else
        estado = CORRIENDO;
}

void Character::move_y(float d) {
    //character_pos.y += d;

    character_pos.y += character_vel.y; // mover el player

    character_vel.y += 1;               // gravedad

    if (character_pos.y < 450 - 57) {
    } else {
        character_pos.y = 450 - 57;
    }


    estado = SALTANDO;
}


const Vector2 &Character::getCharacterPos() const {
    return character_pos;
}

void Character::jump(float d) {
    character_vel.y = d;
    estado = SALTANDO;
}

const Vector2 &Character::getCharacterVel() const {
    return character_vel;
}

void Character::setCharacterVel(const Vector2 &characterVel) {
    character_vel = characterVel;
}

void Character::setCharacterPos(const Vector2 &characterPos) {
    character_pos = characterPos;
}

