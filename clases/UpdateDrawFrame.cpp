//
// Created by Camila on 23/6/2020.
//

#include "Singleton.h"

static void UpdateDrawFrame(void) {

    Singleton &Global = Singleton::get();

    if (IsKeyDown(KEY_RIGHT)) {
        if (Global.player->getCharacterPos().x > 600)
            Global.map->setX(-3);
        Global.player->move_x(2.0f);

    }
    if (IsKeyDown(KEY_LEFT)) {
        if (Global.player->getCharacterPos().x < 400)
            Global.map->setX(3);
        Global.player->move_x(-2.0f);

    }
    if (IsKeyDown(KEY_UP)) {
        Global.player->jump(-5.0f);
    }
    if (IsKeyDown(KEY_DOWN)) {
    }
    Global.player->move_y(0);


    for (Rectangle piso: Global.map->pisos) {
        if (CheckCollisionRecs(Global.player->getRectangle(), piso)) {
            Global.player->jump(0);
        }

    }


    // Comienzo a dibujar
      BeginDrawing();


    ClearBackground(RAYWHITE); // Limpio la pantalla con blanco
    DrawTexture(Global.background, 0, 0, WHITE);

     Global.map->dibujar();

    // Dibujo todos los elementos del juego.

     Global.player->draw();
    //enemigo->draw();

    //coins->draw();
    // Finalizo el dibujado
    EndDrawing();
}