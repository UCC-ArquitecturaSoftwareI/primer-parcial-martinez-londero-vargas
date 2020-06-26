#include <string>
#include <iostream>
#include "Animator.h"
#include "Singleton.h"

Singleton &Global = Singleton::get();
Animator::Animator(const std::string tex_file, float alto, float ancho, int columna, int fila)
        : textura(textura),
          alto(alto),
          ancho(ancho),
          columna(columna),
          fila(fila) {
    textura = Global.af->getTexture(tex_file);
    tiempo = 4;
    columna_act = 0;
}

void Animator::draw(Vector2 character_pos, int mirar, int fila) {
    Rectangle rec = {(float) columna_act * ancho,
                     (float) fila * alto, ancho, alto};

    DrawTextureRec(textura, rec, character_pos, WHITE);
    if (tiempo-- <= 0) {
        tiempo = 4;
        columna_act++;
        if (columna_act >= columna) {
            columna_act = 0;
        }
    }
}

const Texture2D &Animator::getTextura() const {
    return textura;
}
