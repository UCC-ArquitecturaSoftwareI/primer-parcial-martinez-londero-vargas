

#ifndef RAYLIBTEMPLATE_MAIN_CHARACTER_H
#define RAYLIBTEMPLATE_MAIN_CHARACTER_H

#include "Character.h"

class Main_Character: public Character {
protected:

public:
    Character(std::string text, const Vector2 &characterPos);

    void jump();
    void Crouch();

};

#endif //RAYLIBTEMPLATE_MAIN_CHARACTER_H
