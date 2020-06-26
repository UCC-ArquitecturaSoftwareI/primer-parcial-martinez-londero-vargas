/**
* @file Character.h
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
*  @brief implementacion de la clase Character
*/

#include <raylib.h>
#include <string>
#include "Animator.h"
#include <vector>


#ifndef RAYLIBTEMPLATE_CHARACTER_H
#define RAYLIBTEMPLATE_CHARACTER_H

enum char_estado {
    QUIETO,
    CORRIENDO,
    SALTANDO,
    CALLENDO
};

class Character {
protected:
    Animator *anim;
    Vector2 character_pos;
    Vector2 character_vel;
    Vector2 size;
    char_estado estado;
    int mirar;

public:

    void setCharacterPos(const Vector2 &characterPos);
/**
* @brief Constructor de la clase
* @param recibe una textura y la posicion del personaje
*/
    Character(std::string text, const Vector2 &characterPos);

/**
* @brief funcion que devuelve el valor de la posicion del personaje
* @return posicion del personaje
*/
    const Vector2 &getCharacterPos() const;
/**
* @brief funcion que dibuja al personaje
*/
    void draw();
/**
* @brief funcion que cambia la posicion en x del personaje
* @param recibe un float que representa la velocidad del personaje
*/
    void move_x(float d);
/**
* @brief funcion que cambia la posicion en y del personaje
* @param recibe un float que representa la velocidad del personaje
*/
    void move_y(float d);
/**
* @brief funcion que dibuja al personaje
*/
    void jump(float d);
/**
* @brief funcion que coloca un rectangulo alrededor del personaje
* @return la posicion del rectangulo
*/
    Rectangle getRectangle(){
        return {
                character_pos.x,
                character_pos.y,
                size.x,
                size.y
        };
    }

};

#endif //RAYLIBTEMPLATE_CHARACTER_H
