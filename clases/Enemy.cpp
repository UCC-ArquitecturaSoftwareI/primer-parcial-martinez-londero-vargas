//
// Created by micav on 26/05/2020.
//

#include <string>
#include "Enemy.h"

Enemy::Enemy(std::string text, const Vector2 &EnemyPos) : Enemy_pos(EnemyPos) {
    anim= new Animator(text, 53, 54, 8, 1);

}

void Enemy::draw() {

    anim->draw(Enemy_pos, mirar, 0);
}


const Vector2 &Enemy::getEnemyPos() const {
    return Enemy_pos;
}

/*
void Enemy::removeEnemy(Vector2 &EnemyPos) {
    if (Enemy_pos.x < 2) {
        draw()

    }


}*/

void Enemy::moveEnemy(){
    Enemy_pos.x=Enemy_pos.x - 1;

}
/*
Enemy *Enemy::clone() {
    return new Enemy();
}*/
