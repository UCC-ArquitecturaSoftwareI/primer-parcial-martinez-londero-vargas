#include <string>
#include "Enemy.h"

Enemy::Enemy(std::string text, const Vector2 &EnemyPos) : Enemy_pos(EnemyPos) {
    Estado = STOP;
    mirar = 0;
    anim[0] = new Animator("resources/Enemy.png", 512, 512, 8);

}

void Enemy::draw() {
    Estado = ADELANTE;
    anim[0]->draw(Enemy_pos,mirar);
}

void Enemy::move_x(float d) {
    if (d < 0) {
        mirar = 1;
    } else if (d > 0) {
        mirar = 0;
    }
    Enemy_pos.x += d;
    Estado = STOP;
}

void Enemy::move_y(float d) {
    Enemy_pos.y += d;
    Estado = STOP;
}


const Vector2 &Enemy::getEnemyPos() const {
    return Enemy_pos;
}