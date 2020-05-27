//
// Created by micav on 26/05/2020.
//

#include <string>
#include "Enemy.h"

Enemy::Enemy(std::string text, const Vector2 &EnemyPos) : Enemy_pos(EnemyPos) {
    anim[0]= new Animator(text, 53, 54, 8);

}

void Enemy::draw() {

    anim[0]->draw(Enemy_pos, mirar);
}

const Vector2 &Enemy::getEnemyPos() const {
    return Enemy_pos;
}
