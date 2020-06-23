//
// Created by micav on 30/05/2020.
//
#include "Enemy.h"
#include "raylib.h"
#ifndef RAYLIBTEMPLATE_DRONE_H
#define RAYLIBTEMPLATE_DRONE_H

class Drone : public Enemy {

public:


    Drone(std::string text, const Vector2 &EnemyPos ) : Enemy (Enemy_pos) {
        anim = new Animator(text, 53, 54, 8, 1);
        Setdamage(20);

    }


};


class Megadrone : public Drone {

public:


    Megadrone(std::string text, const Vector2 &enemyPos, Drone d) : Drone(text, enemyPos) {
        anim = new Animator(text, 53, 54, 8, 1);
        Setdamage(Getdamage() + 50);
    }


};
#endif //RAYLIBTEMPLATE_DRONE_H
