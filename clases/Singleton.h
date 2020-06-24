//
// Created by Cami on 28/5/2020.
//
#include <list>
#include "Character.h"
#include "Coin.h"
#include "Map.h"
#include "Enemy.h"
#include "Win.h"

#ifndef RAYLIBTEMPLATE_SINGLETON_H
#define RAYLIBTEMPLATE_SINGLETON_H

class Singleton {
private:
    Singleton() {

       // music = LoadMusicStream("resources/Cyberpunk Moonlight Sonata.mp3");
        player = new Character("resources/Character.png", Vector2{static_cast<float>(screenWidth / 2.0), static_cast<float>(screenHeight - 80)});
        map = new Map("tiles.json", enemigos,monedas);
        //enemigo = new Enemy("resources/Enemy.png", Vector2{static_cast<float>(screenWidth / 2.0), static_cast<float>(screenHeight - 180)});
        //coins = new Coin("coin.png",Vector2{screenWidth / 2, screenHeight - 10});
        background = LoadTexture("resources/54147.png");

    }

public:
    Singleton(Singleton const &) = delete;

    void operator=(Singleton const &) = delete;

    Music music;
    Character *player;
    Map *map;
    Texture2D background;
    std::list<Enemy*> enemigos;
    std::list<Coin*> monedas;
    Win winner;

    static const int screenWidth = 800;
    static const int screenHeight = 450;

    static Singleton &get() {
        static Singleton Global;
        return Global;
    }

};

#endif //RAYLIBTEMPLATE_SINGLETON_H
