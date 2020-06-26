/**
* @file Singleton.h
* @Author Camila Londero
* @Author Micaela Vargas
* @date 26/06/2020
* @brief Implementacion del patron singleton
*/

#include <list>
#include "Character.h"
#include "Coin.h"
#include "Map.h"
#include "Enemy.h"
#include "Win.h"
#include "BadCoin.h"
#include "TextureFactory.h"
#include "GoodCoin.h"
#ifndef RAYLIBTEMPLATE_SINGLETON_H
#define RAYLIBTEMPLATE_SINGLETON_H

class Singleton {
private:
    Singleton() {

        player = new Character("resources/Character.png",Vector2{static_cast<float>(screenWidth / 2.0), static_cast<float>(screenHeight - 80)});
        map = new Map("tiles.json", enemigos, monedas, badcoins);
        background = LoadTexture("resources/54147.png");

    }

public:
/**
* @brief Declaramos el constructor por copia y lo borramos
*/
    Singleton(Singleton const &) = delete;

/**
* @brief Borramos el operador igual, para evitar copias
*/
    void operator=(Singleton const &) = delete;

/**
* @brief Declaracion de variables globales
*/
    Music music;
    Character *player;
    Map *map;
    Texture2D background;
    std::list<Enemy *> enemigos;
    std::list<GoodCoin*> monedas;
 std::list<BadCoin *> badcoins;
    Win winner;


    static const int screenWidth = 800;
    static const int screenHeight = 450;

/**
* @brief Metodo estatico que nos devuelve una referencia al singleton
*/
    static Singleton &get() {
        static Singleton Global;
        return Global;
    }

};

#endif //RAYLIBTEMPLATE_SINGLETON_H
