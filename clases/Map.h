/**
* @file Map.h
* @Autor Micaela Vargas
* @Autor Camila Londero
* @date 26/06/2020
* @brief implementacion del mapa
*/

#ifndef PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H
#define PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H

#include "raylib.h"
#include <string>
#include <list>
#include "../libreria/tileson.hpp"
#include "Enemy.h"
#include "Coin.h"
#include "Win.h"
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

/**
* @brief constructor de la clase
*/
    Map(std:: string file, std::list<Enemy*> &enemigos,std::list<Coin*> &monedas);
/**
* @return la posicion x
*/
    int getX();
/**
* @return la posicion y
*/

    int getY();
/**
* @brief dibuja el mapa
*/
    void dibujar ();





};
#endif //PRIMER_PARCIAL_MARTINEZ_LONDERO_VARGAS_MAP_H
