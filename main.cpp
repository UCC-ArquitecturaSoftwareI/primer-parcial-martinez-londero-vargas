#include <raylib.h>
#include "clases/Singleton.h"
#include "clases/GameState.h"
#include "clases/Context.h"
#include "clases/Menu.h"

#if defined(PLATFORM_WEB) // Para crear HTML5
#include <emscripten/emscripten.h>
#endif


int main() {
    InitWindow(Singleton::screenWidth, Singleton::screenHeight, "CityScape");

    Context ctx(new Menu());

    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    while (!WindowShouldClose()) {
        ctx.loop();
    }

    CloseWindow();
    return 0;
}


