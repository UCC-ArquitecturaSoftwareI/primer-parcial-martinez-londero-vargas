//
// Created by martin on 28/4/20.
//

#include <string>
#include "Animator.h"

Animator::Animator(const std::string tex_file, int alto, int ancho, int cant) : textura(textura), alto(alto),
                                                                                ancho(ancho), cant(cant) {
    textura = LoadTexture(tex_file.c_str());
}

void Animator::draw(Vector2 character_pos) {
    Rectangle rec = {0, img_act* ancho, 570.0, 57.0};

    DrawTextureRec(textura,rec, character_pos, WHITE);
    //
    //DrawTexture(textura, character_pos.x - textura.width/2, character_pos.y- textura.height/2, WHITE);
}
