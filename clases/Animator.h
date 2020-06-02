#ifndef RAYLIBTEMPLATE_ANIMATOR_H
#define RAYLIBTEMPLATE_ANIMATOR_H


#include <raylib.h>

#define RAYLIBTEMPLATE_ANIMATOR_H


#include <raylib.h>

class Animator {
private:
    Texture2D textura{};
    int cant;
    int img_act;

    float alto, ancho;

    int tiempo;
public:
    Animator(const std::string tex_file, float alto, float ancho, int cant);

    void draw(Vector2 character_pos, int mirar);
};

#endif //RAYLIBTEMPLATE_ANIMATOR_H
