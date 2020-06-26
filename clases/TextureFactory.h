//
// Created by Camila on 25/6/2020.
//
/*
#ifndef RAYLIBTEMPLATE_TEXTUREFACTORY_H
#define RAYLIBTEMPLATE_TEXTUREFACTORY_H

#include <iostream>
#include <unordered_map>
#include <string>
#include "Animator.h"


class TextureFactory {
public:

    TextureFactory() {};

    std::unordered_map <std::string, Texture2D> pool;

    Texture2D getTexture(std::string file) {
        auto textura = pool.find(file);

        if (textura != std::unordered_map::end()  ) {
            return textura->second;
        }

        pool.emplace(file, Texture2D(file));
        return getTexture(file);
    }
};

#endif //RAYLIBTEMPLATE_TEXTUREFACTORY_H
*/
