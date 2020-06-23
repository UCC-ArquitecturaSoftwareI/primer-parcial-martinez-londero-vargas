//
// Created by Camila on 23/6/2020.
//
#include "raylib.h"
#include "EndGame.h"
#include "Menu.h"


void EndGame::draw() {
    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawText(FormatText("END"), 200, 160, 40, BLUE);

    EndDrawing();

}

EndGame::~EndGame() {

}

void EndGame::loop() {

    if (IsKeyDown(KEY_M)) {
        ctx->cambiar_estado(new Menu);
    }
    BeginDrawing();
    ClearBackground(RED);
    DrawText("GAME OVER", 100, 100, 30, WHITE);
    EndDrawing();
}
