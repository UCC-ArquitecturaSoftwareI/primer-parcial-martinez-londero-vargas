//
// Created by Camila on 25/6/2020.
//
/*
#ifndef RAYLIBTEMPLATE_ANIMATORFACTORY_H
#define RAYLIBTEMPLATE_ANIMATORFACTORY_H
#include <map>
#include "Animator.h"
class AnimatorFactory{
public:
    AnimatorFactory() {};

public:
    map<int, std::string> pool;

    Animator getAnimator(int id_textura,float alto, float ancho,int columna, int fila){
        auto textura = pool.find(id_textura);
        return Animator( &textura->second , alto, ancho,columna, fila );
    }

    void addTexture(int id, std::string tx){
        pool.insert((id,tx));
    }
};
#endif //RAYLIBTEMPLATE_ANIMATORFACTORY_H
*/