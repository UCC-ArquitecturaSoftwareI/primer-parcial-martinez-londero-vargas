/**
* @file Game.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion de un estado del juego
*/

#ifndef RAYLIBTEMPLATE_GAME_H
#define RAYLIBTEMPLATE_GAME_H

#include "State.h"

class Game : public State {
public:
/**
* @brief Constructor de la clase
* @return Objeto del tipo Game
*/
    Game();

public:
/**
* @brief Se realiza toda la logica del juego
*/
    void loop() override;

};

#endif //RAYLIBTEMPLATE_GAME_H
