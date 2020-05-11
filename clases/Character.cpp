//
// Created by micav on 17/04/2020.
//
#include <string>
#include "Character.h"

Character::Character(std::string text, const Vector2 &characterPos) : character_pos(characterPos) {
    estado = QUIETO;
    mirar = 0;
    anim[0] = new Animator(text, 57, 64, 8);
    anim[2] = new Animator("resources/walk-5.png", 57, 64, 1);
    anim[1] = new Animator("resources/shoot2.png", 57, 64, 7);
    anim[3] = new Animator("resources/jump.png", 57, 64, 5);
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
    estado = SALTANDO;
}

void Character::shoot() {
    estado = DISPARANDO;
}

const Vector2 &Character::getCharacterPos() const {
    return character_pos;
}
