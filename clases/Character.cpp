
#include <string>
#include "Character.h"

Character::Character(std::string text, const Vector2 &characterPos) : character_pos(characterPos) {
    anim = new Animator(text, 57, 57, 9);
}

void Character::draw() {
    anim->draw(character_pos);
}

void Character::move_x(float d) {
    character_pos.x += d;
}

void Character::move_y(float d) {
    character_pos.y += d;
}

void Character::shoot() {


}

const Vector2 &Character::getCharacterPos() const {
    return character_pos;
}



