//
// Created by Camila on 22/6/2020.
//

#include "Menu.h"
#include "Singleton.h"
#include "Game.h"


Menu::Menu() {
    mousePoint = {0.0f, 0.0f};
    Background = LoadTexture("resources/fondo.png");
    Button = LoadTexture("resources/button.png"); // Load button texture
    // Define button bounds on screen
    btnBounds = {static_cast<float>(Singleton::screenWidth / 2 - Button.width / 2),
                 static_cast<float>(Singleton::screenHeight / 2 - Button.height+300 / 2),
                 static_cast<float>(Button.width), static_cast<float>(Button.height)};
}

void Menu::loop() {
    mousePoint = {0.0f, 0.0f};
    mousePoint = GetMousePosition();
    if (CheckCollisionPointRec(mousePoint, btnBounds) &&
        IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {

        ctx->cambiar_estado(new Game);
        return;
    }
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawTexture(Background,0,0,WHITE);
    DrawTexture(Button, btnBounds.x, btnBounds.y, WHITE);
    EndDrawing();
}


Menu::~Menu() {
    UnloadTexture(Button);
}

