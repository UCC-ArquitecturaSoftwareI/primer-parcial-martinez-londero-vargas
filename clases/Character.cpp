
#include <string>
#include "Character.h"

Character::Character(std::string text, const Vector2 &characterPos) : character_pos(characterPos) {
    estado = QUIETO;
    mirar = 0;
    anim[0] = new Animator(text, 57, 64, 8);
    anim[2] = new Animator(text, 57, 64, 1);
    anim[1] = new Animator("resources/run-shoot-6.png", 64, 64, 1);
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
    estado = CORRIENDO;
}

void Character::shoot() {
    estado = DISPARANDO;
}

const Vector2 &Character::getCharacterPos() const {
    return character_pos;
}



