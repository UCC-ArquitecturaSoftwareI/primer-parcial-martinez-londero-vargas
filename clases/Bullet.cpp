//
// Created by micav on 15/05/2020.
//

#include <string>
#include "Bullet.h"

#include <string>
#include "Bullet.h"


Bullet::Bullet(std::string text, const Vector2 &bulletPos) : bullet_pos(bulletPos) {
    bullet = LoadTexture(text.c_str());
}

void Bullet::draw() {

    DrawCircle(bullet_pos.x,bullet_pos.y,3,WHITE);
}

void Bullet::move_x(float d) {
    bullet_pos.x += d;
}
void Bullet::move_y(float d) {
    bullet_pos.y += d;
}

void Bullet::setBulletPos(const Vector2 &bulletPos) {
    bullet_pos = bulletPos;
}

/*const Vector2 &bullet::getBalaPos() const {
    return bala_pos;
}*/

