//
// Created by Camila on 23/6/2020.
//
#include "GameState.h"
#include "Singleton.h"
#include "EndGame.h"

void GameState::loop() {

    Singleton &Global = Singleton::get();

    if (IsKeyDown(KEY_RIGHT)) {
        if (Global.player->getCharacterPos().x > 600)
        { Global.map->setX(Global.map->getX()-3);}
        Global.player->move_x(2.0f);

    }
    if (IsKeyDown(KEY_LEFT)) {
        if (Global.player->getCharacterPos().x < 400)
        { Global.map->setX(Global.map->getX()+3);}
        Global.player->move_x(-2.0f);

    }
    if (IsKeyDown(KEY_UP)) {
        Global.player->jump(-5.0f);
    }

    Global.player->move_y(0);


    for (Rectangle piso: Global.map->pisos) {
        if (CheckCollisionRecs(Global.player->getRectangle(), piso)) {
            Global.player->jump(0);
        }
    }

    for (Enemy *enemy: Global.enemigos) {
        if (CheckCollisionRecs(Global.player->getRectangle(), enemy->getRectangle())) {
            ctx->cambiar_estado(new EndGame);
        }
    }



    // Comienzo a dibujar
    BeginDrawing();


    ClearBackground(RAYWHITE); // Limpio la pantalla con blanco
    DrawTexture(Global.background, 0, 0, WHITE);

    Global.map->dibujar();

    // Dibujo todos los elementos del juego.

    for (Enemy *enemy: Global.enemigos) {
        enemy->draw();
    }

    Global.player->draw();
    //enemigo->draw();

    //coins->draw();
    // Finalizo el dibujado
    EndDrawing();
}

GameState::GameState() {

    Singleton &Global = Singleton::get();

    Global.player->setCharacterPos({20, 20});
}
