//
// Created by Camila on 22/6/2020.
//
/*
#include "Menu.h"
#include <iostream>
#include "Singleton.h"

#define NUM_FRAMES  3

Menu::Menu() {

    Singleton &Global = Singleton::get();

    Button = LoadTexture("resources/button.jpg"); // Load button texture

    // Define frame rectangle for drawing
     frameHeight = Button.height/NUM_FRAMES;
     sourceRec = { 0, 0, static_cast<float>(Button.width), static_cast<float>(frameHeight) };

    // Define button bounds on screen
    btnBounds = { static_cast<float>(Singleton::screenWidth/2 - Button.width/2), static_cast<float>(Singleton::screenHeight/2 - Button.height/NUM_FRAMES/2), static_cast<float>(Button.width), static_cast<float>(frameHeight) };

    btnState = 0;               // Button state: 0-NORMAL, 1-MOUSE_HOVER, 2-PRESSED
    btnAction = false;         // Button action should be activated

    mousePoint = { 0.0f, 0.0f };



}
void Menu::Draw() {

    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawTextureRec(Button, sourceRec, (Vector2){ btnBounds.x, btnBounds.y }, WHITE);
    EndDrawing();
}

void Menu::Update() {

    mousePoint = GetMousePosition();
    btnAction = false;

    // Check button state
    if (CheckCollisionPointRec(mousePoint, btnBounds))
    {
        if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) btnState = 2;
        else btnState = 1;

        if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) btnAction = true;
    }
    else btnState = 0;

    // Calculate button frame rectangle to draw depending on button state
    sourceRec.y = btnState*frameHeight;

}
*/