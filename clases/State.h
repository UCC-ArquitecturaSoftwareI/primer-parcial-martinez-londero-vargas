/**
* @file State.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion del patron state
*/


#ifndef RAYLIBTEMPLATE_STATE_H
#define RAYLIBTEMPLATE_STATE_H

#include "Context.h"

class Context;

class State {
protected:

    Context *ctx;

public:
/**
* @brief Desstructor de la clase
*/
    virtual ~State();

/**
* @brief Funcion virtual q heredaran las subclases
*/
    virtual void loop() = 0;

/**
* @brief Seteamos el contexto
* @param Context pointer
*/
    void setCtx(Context *ctx);
};


#endif //RAYLIBTEMPLATE_STATE_H
