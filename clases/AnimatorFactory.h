//
// Created by Camila on 25/6/2020.
//

#ifndef RAYLIBTEMPLATE_ANIMATORFACTORY_H
#define RAYLIBTEMPLATE_ANIMATORFACTORY_H

#include <unordered_map>
#include "Animator.h"

class TextureFactory {
public:
    TextureFactory() {};

public:
    std::unordered_map <string, Texture2D> pool;

    Texture2D getTexture(string file) {
        auto textura = pool.find(id_textura);
        if (textura != std::unordered_map::end) {
            return &textura->second;
        }

        pool.emplace(file, Texture2D(file));
        return getTexture(file);
    }
};

#endif //RAYLIBTEMPLATE_ANIMATORFACTORY_H
