/**
* @file Context.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion del patron state
*/

#ifndef RAYLIBTEMPLATE_CONTEXT_H
#define RAYLIBTEMPLATE_CONTEXT_H

class State;

#include "State.h"

class Context {
private:

    State *state;
public:
/**
* @brief Constructor de la clase
* @param State pointer
*/
    Context(State *state);

/**
* @brief Cambia el estado del juego dependiendo del state pasado por param
* @param State pointer
*/
    void cambiar_estado(State *st);

/**
* @brief Llama a la funcion loop de la clase state
*/
    void loop();
};


#endif //RAYLIBTEMPLATE_CONTEXT_H
