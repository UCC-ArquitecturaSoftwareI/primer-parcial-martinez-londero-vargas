//
// Created by Camila on 23/6/2020.
//
#include "raylib.h"
#include "EndGame.h"


void EndGame:: draw(){
    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawText(FormatText("END"), 200, 160, 40, BLUE);

    EndDrawing();

}