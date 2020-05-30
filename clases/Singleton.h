//
// Created by Cami on 28/5/2020.
//
#include "Character.h"
#include "Coin.h"
#include "Map.h"
#include "Enemy.h"

#ifndef RAYLIBTEMPLATE_SINGLETON_H
#define RAYLIBTEMPLATE_SINGLETON_H

class Singleton {
private:
    Singleton() {

        music = LoadMusicStream("resources/Cyberpunk Moonlight Sonata.mp3");
        player = new Character("resources/Run.png", Vector2{screenWidth / 2, screenHeight - 80});
        map = new Map("tiles.json");
        enemigo = new Enemy("resources/Enemy.png", Vector2{screenWidth / 2, screenHeight - 180});
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
    Enemy *enemigo;
    Coin *coins;
    int screenWidth = 800;
    int screenHeight = 450;

    static Singleton &get() {
        static Singleton Global;
        return Global;
    }

};

#endif //RAYLIBTEMPLATE_SINGLETON_H
