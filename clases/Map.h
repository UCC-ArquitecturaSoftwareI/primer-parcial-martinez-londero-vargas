#ifndef PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H
#define PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H

#include "raylib.h"
#include <string>
class Map
{
private:

    Texture2D dibujo;
    int x=0;
    int y=0;

public:

    Map (std::string img);
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
    void dibujar ();



};
#endif //PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H