#include <raylib.h>

#include "clases/Character.h"
#include "clases/Map.h"
#include "clases/Map.h"
#include "clases/Enemy.h"
#include "clases/Coin.h"
#include "clases/Singleton.h"

#if defined(PLATFORM_WEB) // Para crear HTML5

#include <emscripten/emscripten.h>
#endif


const int screenWidth = 800;
const int screenHeight = 450;

static void UpdateDrawFrame(void);          // Función dedicada a operar cada frame

int main() {



    // Inicialización de la
    int screenWidth = 800;
    int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "CaMica");
    InitAudioDevice();              // Initialize audio device
    float background_x = 0;
    float background_y = 0;


#if defined(PLATFORM_WEB)  // Para versión Web.
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    // Main loop
    while (!WindowShouldClose()) {
        UpdateDrawFrame();
    }
#endif

    Singleton &Global = Singleton::get();
    // Descargar todos los resources cargados

    UnloadMusicStream(Global.music);   // Descargo la musica de RAM
    CloseWindow();
    CloseAudioDevice();         // Cierro el dispositivo de Audio
    return 0;
}


/**
 *  Función dedicada a dibujar cada frame. Acá adentro se debe poner la logica necesaria para representar un nuevo frame
 *  del juego.
 */


static void UpdateDrawFrame(void) {
    Singleton &Global = Singleton::get();

    // siempre hay que reproducir la musica que esta actualmente
    //UpdateMusicStream(music);
    UpdateMusicStream(Global.music);

    // Verifico Entradas de eventos.

    if (IsKeyDown(KEY_RIGHT)) {
        //if (player->getCharacterPos().x > 600)
        //  map->setX(-3);
        Global.player->move_x(2.0f);

    }
    if (IsKeyDown(KEY_LEFT)) {
        //if (player->getCharacterPos().x < 400)
        //map->setX(3);
        Global.player->move_x(-2.0f);

    }
    if (IsKeyDown(KEY_UP)) {
        Global.player->jump(1.0f);
    }
    if (IsKeyDown(KEY_DOWN)) {
        Global.player->move_y(2.0f);
    }



    // Comienzo a dibujar
    BeginDrawing();

    ClearBackground(RAYWHITE); // Limpio la pantalla con blanco
    DrawTexture(Global.background, 0, 0, WHITE);

    Global.map->dibujar();

    // Dibujo todos los elementos del juego.



    DrawText("Life:", 20, 20, 40, LIGHTGRAY);

    Global.player->draw();
    //enemigo->draw();

    //coins->draw();
    // Finalizo el dibujado
    EndDrawing();
}