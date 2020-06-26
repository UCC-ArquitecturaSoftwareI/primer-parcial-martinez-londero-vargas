//
// Created by micav on 25/04/2020.
//

#ifndef PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H
#define PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H

#include "raylib.h"
#include <string>
#include <list>
#include "../libreria/tileson.hpp"
#include "Enemy.h"
#include "Coin.h"
#include "GoodCoin.h"
#include "Win.h"
#include "BadCoin.h"
#include <vector>
class Map
{
    tson::Map map;
    Texture2D map_text;
    int x=0;
    int y=0;
    tson::Tileset *map_tileset;

public:
    std::vector<Rectangle> pisos;
    std::vector<Rectangle> llegada;
    Vector2 player_init_pos;
    Map(std:: string file, std::list<Enemy*> &enemigos,std::list<Coin*> &monedas);
    int getX();
    int getY();
    void dibujar ();





};
#endif //PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H
