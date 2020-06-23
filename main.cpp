#include <raylib.h>
#include "clases/Singleton.h"
#include "clases/GameState.h"

#if defined(PLATFORM_WEB) // Para crear HTML5

#include <emscripten/emscripten.h>
#endif

GameState *Game;

int main() {

    InitWindow(Singleton::screenWidth, Singleton::screenHeight, "CaMica");
    Game = new GameState();
#if defined(PLATFORM_WEB)  // Para versión Web.
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second

    while (!WindowShouldClose()) {
        Game->StartGame();
    }
#endif

    CloseWindow();
    return 0;
}


