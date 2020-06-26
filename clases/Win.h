/**
* @file Win.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion de un estado del juego
*/

#ifndef RAYLIBTEMPLATE_WIN_H
#define RAYLIBTEMPLATE_WIN_H

#include "State.h"

class Win : public State {
private:

    Texture2D Background;

public:
/**
* @brief Destructor de la clase
*/
    ~Win() override;

/**
* @brief Dibuja la textura definida y llama a otro estado
*/
    void loop() override;
};

#endif //RAYLIBTEMPLATE_WIN_H
