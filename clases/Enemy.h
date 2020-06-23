//
// Created by micav on 26/05/2020.
//

#include <raylib.h>
#include <string>
#include "Animator.h"
#include <vector>

//#include "Character.h"
#ifndef RAYLIBTEMPLATE_ENEMY_H
#define RAYLIBTEMPLATE_ENEMY_H
enum estado{
    STOP,
    ADELANTE
};

class Enemy{
private:

    Animator *anim;
    Vector2 Enemy_pos;
    estado Estado;
    int mirar;

public:
    const Vector2 &getEnemyPos() const;

    Enemy(std::string text, const Vector2 &EnemyPos);

    //Enemy *clone();


    void draw();
    void moveEnemy();
   // void removeEnemy (const Vector2 &EnemyPos);
   // void move_x(float d);
   // void move_y(float d);



};
#endif //RAYLIBTEMPLATE_ENEMY_H
