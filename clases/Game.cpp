
#include "Game.h"
#include "Singleton.h"
#include "GameOver.h"
#include "Coin_Strategy.h"
#include "BadCoin_Strategy.h"
#include "Strategy_Context.h"

Camera2D camera = {0};
Strategy_Context context;
int puntaje = 0;

void Game::loop() {

    Singleton &Global = Singleton::get();

    if (IsKeyDown(KEY_RIGHT)) {
        Global.player->move_x(2.0f);
        if (Global.player->getCharacterPos().x > camera.target.x + 200)
            camera.target.x = Global.player->getCharacterPos().x - 200;
    }
    if (IsKeyDown(KEY_LEFT)) {
        Global.player->move_x(-2.0f);
        if (Global.player->getCharacterPos().x > camera.target.x - 200)
            camera.target.x = Global.player->getCharacterPos().x + 200;

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
            ctx->cambiar_estado(new GameOver);
        }
    }

    Coin *aBorrar = nullptr;
    for (Coin *goodCoin: Global.monedas) {
        if (CheckCollisionRecs(Global.player->getRectangle(), goodCoin->getRectangle())) {
            Coin *temp = goodCoin;

            if (goodCoin->isBad()) {
                context.SetStrategy(new BadCoin_Strategy);
            } else {
                context.SetStrategy(new Coin_Strategy);
            }
            puntaje = context.executeStrategy(puntaje);

            aBorrar = goodCoin;


        }
    }
    if (aBorrar != nullptr) {
        Global.monedas.remove(aBorrar);
        delete aBorrar;
    }


    camera.target = {Global.player->getCharacterPos().x, Global.player->getCharacterPos().y};
    camera.offset = (Vector2) {0, static_cast<float>(Global.screenHeight / 2)};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;


    BeginDrawing();


    ClearBackground(WHITE);
    DrawTexture(Global.background, 0, 0, WHITE);
    DrawText(FormatText("Score: %08i", puntaje), 20, 20, 20, WHITE);

    BeginMode2D(camera);
    {

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

    EndDrawing();
}

Game::Game() {

    Singleton &Global = Singleton::get();

    Global.player->setCharacterPos({20, 20});
}