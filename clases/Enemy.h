//
// Created by RIBEIRO on 24/4/2020.
//

#ifndef RAYLIBTEMPLATE_ENEMY_H
#define RAYLIBTEMPLATE_ENEMY_H

#include "Character.h"

class Enemy: public Character {

protected:

    int Level; (nivel de daño que produce)

public

    Enemy(std::string text, const Vector2 &EnemyPos):{};


};
#endif //RAYLIBTEMPLATE_ENEMY_H
