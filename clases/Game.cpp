//
// Created by Camila on 23/6/2020.
//

#include "Game.h"
#include "Singleton.h"
#include "GameOver.h"
#include "Coin_Strategy.h"
#include "Strategy_Context.h"

Camera2D camera = {0};
Strategy_Context context;
int puntaje = 0;
void Game::loop() {

    Singleton &Global = Singleton::get();
    camera.target = {Global.player->getCharacterPos().x, Global.player->getCharacterPos().y };
    camera.offset = (Vector2){0, static_cast<float>(Global.screenHeight/2)};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;

    if (IsKeyDown(KEY_RIGHT)) {
        Global.player->move_x(2.0f);
        if (Global.player->getCharacterPos().x > camera.target.x+200)
            camera.target.x = Global.player->getCharacterPos().x -200;
    }
    if (IsKeyDown(KEY_LEFT)) {
        Global.player->move_x(-2.0f);
        if (Global.player->getCharacterPos().x > camera.target.x-200)
            camera.target.x = Global.player->getCharacterPos().x +200;

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

    for (Rectangle llegada: Global.map->llegada) {
        if (CheckCollisionRecs(Global.player->getRectangle(), llegada)) {
            ctx->cambiar_estado(new Win);
        }
    }

    for (Enemy *enemy: Global.enemigos) {
        if (CheckCollisionRecs(Global.player->getRectangle(), enemy->getRectangle())) {
            //ctx->cambiar_estado(new GameOver);
        }
    }

    for (Coin *coin: Global.monedas) {
        if (CheckCollisionRecs(Global.player->getRectangle(), coin->getRectangle())) {

            context.SetStrategy(new Coin_Strategy);
            puntaje = context.executeStrategy(puntaje);

           // Global.map->removeCoin(Global.monedas); como remover

        }
    }

    // Comienzo a dibujar
    BeginDrawing();
     // Limpio la pantalla con blanco

    DrawTexture(Global.background, 0, 0, WHITE);
    //DrawText(FormatText("Score: %08i", puntaje), 20, 20, 20, WHITE);

    BeginMode2D(camera); {
        ClearBackground(WHITE);
        DrawText(FormatText("Score: %08i", puntaje), 20, 20, 20, WHITE);

        Global.map->dibujar();
        Global.player->draw();
        for (Enemy *enemy: Global.enemigos) {
            enemy->draw();
        }

        for (Coin *coins: Global.monedas) {
            coins->draw();
        }
    }

    EndMode2D();

    // Dibujo todos los elementos del juego.


    // Finalizo el dibujado
    EndDrawing();
}

Game::Game() {

    Singleton &Global = Singleton::get();

    Global.player->setCharacterPos({20, 20});
}