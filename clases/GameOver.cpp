//
// Created by Camila on 23/6/2020.
//
#include "raylib.h"
#include "GameOver.h"
#include "Menu.h"



GameOver::~GameOver() {

}

void GameOver::loop() {

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
