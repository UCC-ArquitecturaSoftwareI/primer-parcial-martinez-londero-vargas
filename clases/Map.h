#include "raylib.h"
#include <string>
#include "../Libreria/tileson.hpp"
#include <list>

#ifndef PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H
#define PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H

class Map
{
    tson::Map map;
    Texture2D map_text;
    int x=0;
    int y=0;
    tson::Tileset *map_tileset;
public:
    Vector2 player_init_pos;
    Map(std:: string file);
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
    void dibujar ();




};
#endif //PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H