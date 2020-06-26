/**
* @file Menu.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion del menu del juego
*/

#ifndef RAYLIBTEMPLATE_MENU_H
#define RAYLIBTEMPLATE_MENU_H

#include <raylib.h>
#include "State.h"


class Menu : public State {
private:
    Texture2D Button;
    Texture2D Background;
    Rectangle btnBounds;
    Vector2 mousePoint;
public:
/**
* @brief Constructor de la clase
* @return Objeto del tipo Menu
*/
    Menu();
/**
* @brief Destructor de la clase
*/
    ~Menu() override;
/**
* @brief Dibuja la textura definida y llama a otro estado
*/
    void loop() override;
};


#endif //RAYLIBTEMPLATE_MENU_H

