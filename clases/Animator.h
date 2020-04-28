//
// Created by martin on 28/4/20.
//

#ifndef RAYLIBTEMPLATE_ANIMATOR_H
#define RAYLIBTEMPLATE_ANIMATOR_H


#include <raylib.h>

class Animator {
private:
    Texture2D textura{};
    int cant;
    int img_act;

    int alto, ancho;

    int tiempo;
public:
    Animator(const std::string tex_file, int alto, int ancho, int cant);

    void draw(Vector2 character_pos);
};


#endif //RAYLIBTEMPLATE_ANIMATOR_H
