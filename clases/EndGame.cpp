//
// Created by Camila on 23/6/2020.
//
#include "raylib.h"
#include "EndGame.h"
#include "Menu.h"



EndGame::~EndGame() {

}

void EndGame::loop() {

    Background = LoadTexture("resources/GameOver.png");
    if (IsKeyDown(KEY_M)) {
        ctx->cambiar_estado(new Menu);
    }
    BeginDrawing();
    ClearBackground(WHITE);
    DrawTexture(Background,0,0,WHITE);
    DrawText("Press M to restart",270,370,20,WHITE);
    EndDrawing();
}
