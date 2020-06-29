/**
* @file Animator.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion del animador del juego
*/
#ifndef RAYLIBTEMPLATE_ANIMATOR_H
#define RAYLIBTEMPLATE_ANIMATOR_H

#include <raylib.h>

class Animator {
private:
    Texture2D textura;
    int columna, fila;
    int columna_act;
    float alto, ancho;
    int tiempo;
public:
/**
* @brief Constructor de la clase
* @param alto,ancho,columna,fila,tex_file
* @return Objeto del tipo Animator
*/
    Animator(const std::string tex_file, float alto, float ancho, int columna, int fila);

/**
* @brief Dibuja la textura pasada por parametro y la recorre para crear el efecto de animacion
* @param fila,character_pos,mirar
*/
    void draw(Vector2 pos, int mirar, int fila);

/**
* @brief Dibuja la textura pasada por parametro de color rojo y la recorre para crear el efecto de animacion
* @param fila,character_pos,mirar
*/
    void draw_BadCoin(Vector2 pos, int mirar, int fila);

};

#endif //RAYLIBTEMPLATE_ANIMATOR_H
