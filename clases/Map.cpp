//
// Created by micav on 25/04/2020.
//

#include "Map.h"
#include <string>

Map::Map (std::string img)
{
    dibujo =LoadTexture(img.c_str());
    x=0;
    y=0;
}

int Map::getX() {
    return x;
}

void Map::setX(int x) {
    Map::x += x;
}

int Map::getY() {
    return y;
}

void Map::setY(int y) {
    Map::y += y;
}

void Map::dibujar() {
    DrawTexture(dibujo,x,y,WHITE);
}

