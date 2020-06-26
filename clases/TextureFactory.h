
/**
* @file TextureFactory.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion del patron flyweight
*/
#ifndef RAYLIBTEMPLATE_TEXTUREFACTORY_H
#define RAYLIBTEMPLATE_TEXTUREFACTORY_H

#include <iostream>
#include <unordered_map>
#include <string>
#include "Animator.h"


class TextureFactory {

public:
    std::unordered_map<std::string, Texture2D> pool;
/**
* @brief Constructor de la clase
* @return Objeto del tipo TextureFactory
*/
    TextureFactory() {};

/**
* @brief Carga y busca las texturas en una tabla hash ordenada
* @param string file
* @return Textura2D
*/
    Texture2D getTexture(std::string file) {
        auto textura = pool.find(file);

        if (textura != pool.end()) {
            return pool[file];
        }

        pool[file] = LoadTexture(file.c_str());
        return getTexture(file);}

};

#endif //RAYLIBTEMPLATE_TEXTUREFACTORY_H
