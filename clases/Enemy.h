/**
* @file Enemy.h
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
* @brief implementacion de la clase Enemy
*/

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
    Vector2 size;
    estado Estado;
    int mirar;

public:
/**
* @brief Vector que devuelve la posicion del enemigo
* @return posicion del enemigo
*/
    const Vector2 &getEnemyPos() const;
/**
* @brief Constructor de la clase
* @param recibe una textura y la posicion
*/
    Enemy(std::string text, const Vector2 &EnemyPos);
/**
* @brief funcion que dibuja al enemigo
*/
    void draw();
/**
* @param
*/
    void moveEnemy();
/**
* @brief funcion que encierra al enemigo en un rectangulo
* @return posicion del rectangulo
*/
    Rectangle getRectangle();
};
#endif //RAYLIBTEMPLATE_ENEMY_H
