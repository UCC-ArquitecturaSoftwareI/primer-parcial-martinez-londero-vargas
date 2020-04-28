//
// Created by martin on 28/4/20.
//

#include <string>
#include <iostream>
#include "Animator.h"

Animator::Animator(const std::string tex_file, float alto, float ancho, int cant) : textura(textura), alto(alto),
                                                                                    ancho(ancho), cant(cant) {
    textura = LoadTexture(tex_file.c_str());
    tiempo = 4;
}

void Animator::draw(Vector2 character_pos, int mirar) {
    Rectangle rec = {(float) img_act * ancho, 0, ancho, alto};

    DrawTextureRec(textura, rec, character_pos, WHITE);

    if (tiempo-- <= 0) {
        tiempo = 4;
        img_act++;
        if (img_act >= cant) {
            img_act = 0;
        }
    }
}
