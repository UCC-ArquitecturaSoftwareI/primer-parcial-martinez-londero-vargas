/**
* @file Enemy.cpp
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
*/

#include <string>
#include "Enemy.h"

Enemy::Enemy(std::string text, const Vector2 &EnemyPos) : Enemy_pos(EnemyPos) {
    anim= new Animator(text, 53, 54, 8, 1);
    size = {53,54};
}

void Enemy::draw() {

    anim->draw(Enemy_pos, mirar, 0);
}


const Vector2 &Enemy::getEnemyPos() const {
    return Enemy_pos;
}

void Enemy::moveEnemy(){
    Enemy_pos.x=Enemy_pos.x - 1;

}

Rectangle Enemy::getRectangle() {
    return {
            Enemy_pos.x,
            Enemy_pos.y,
            size.x,
            size.y
    };
}
