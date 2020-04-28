//
// Created by micav on 17/04/2020.
//

#include <string>
#include "Character.h"

Character::Character(std::string text, const Vector2 &characterPos) : character_pos(characterPos) {

    character = LoadTexture(text.c_str());
}

void Character::draw() {

    DrawTexture(character, character_pos.x - character.width/2, character_pos.y- character.height/2, WHITE);
}

void Character::move_x(float d) {
    character_pos.x += d;
}
void Character::move_y(float d) {
    character_pos.y += d;
}

const Vector2 &Character::getCharacterPos() const {
    return character_pos;
}



