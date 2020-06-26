
#include "raylib.h"
#include "Win.h"
#include "Menu.h"


Win::~Win() {

}

void Win::loop() {

    Background = LoadTexture("resources/Win.png");
    if (IsKeyDown(KEY_M)) {
        ctx->cambiar_estado(new Menu);
    }
    BeginDrawing();
    ClearBackground(WHITE);
    DrawTexture(Background, 0, 0, WHITE);
    DrawText("Press M to restart", 270, 370, 20, PURPLE);
    EndDrawing();
}
