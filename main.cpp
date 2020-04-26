#include <raylib.h>

#include "clases/Character.h"
#include "clases/Map.h"

#if defined(PLATFORM_WEB) // Para crear HTML5
#include <emscripten/emscripten.h>
#endif

const int screenWidth = 800;
const int screenHeight = 450;

// Variables Globales
Music music;
Character*player;
Map *map;
Texture2D background;
Texture2D midground;
Texture2D foreground;

static void UpdateDrawFrame(void);          // Función dedicada a operar cada frame

int main() {
    // Inicialización de la ventana
    InitWindow(screenWidth, screenHeight, "raylib template - advance game");
    InitAudioDevice();              // Initialize audio device

    /// Ejemplo de utilización de audio.
    music = LoadMusicStream("resources/Cyberpunk Moonlight Sonata.mp3");

    //PlayMusicStream(music);
    player = new Character("resources/run-shoot-6.png", Vector2{screenWidth / 2, screenHeight-50});
    map= new Map("resources/tilesfinal.png");


   background=LoadTexture("resources/fondo.png");
    float background_x=0;
    float background_y=0;
    midground=LoadTexture("resources/pixel.png");
    float midground_x=0;
    float midground_y=0;

   /*PUEBA
    Texture2D background = LoadTexture("resources/fondo.png");
    Texture2D midground = LoadTexture("resources/pixel.png");
    Texture2D foreground = LoadTexture("resources/tilesfinal.png");

    float scrollingBack = 0.0f;
    float scrollingMid = 0.0f;
    float scrollingFore = 0.0f;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        scrollingBack -= 0.1f;
        scrollingMid -= 0.5f;
        scrollingFore -= 1.0f;

        // NOTE: Texture is scaled twice its size, so it sould be considered on scrolling
        if (scrollingBack <= -background.width*2) scrollingBack = 0;
        if (scrollingMid <= -midground.width*2) scrollingMid = 0;
        if (scrollingFore <= -foreground.width*2) scrollingFore = 0;
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(GetColor(0x052c46ff));

        // Draw background image twice
        // NOTE: Texture is scaled twice its size
        DrawTextureEx(background, (Vector2){ scrollingBack, 20 }, 0.0f, 1.0f, WHITE);
        DrawTextureEx(background, (Vector2){ background.width*2 + scrollingBack, 20 }, 0.0f, 1.0f, WHITE);

        // Draw midground image twice
        DrawTextureEx(midground, (Vector2){ scrollingMid, 0 }, 0.0f, 1.0f, WHITE);
        DrawTextureEx(midground, (Vector2){ midground.width*2 + scrollingMid, 20 }, 0.0f, 1.0f, WHITE);

        // Draw foreground image twice
        DrawTextureEx(foreground, (Vector2){ scrollingFore, 0 }, 0.0f, 1.0f, WHITE);
        DrawTextureEx(foreground, (Vector2){ foreground.width*2 + scrollingFore, 70 }, 0.0f, 1.0f, WHITE);


        EndDrawing();
        //----------------------------------------------------------------------------------
    }*/





#if defined(PLATFORM_WEB)  // Para versión Web.
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    // Main loop
    while (!WindowShouldClose()) {
        UpdateDrawFrame();
    }
#endif


    // Descargar todos los resources cargados

    UnloadMusicStream(music);   // Descargo la musica de RAM
    CloseAudioDevice();         // Cierro el dispositivo de Audio
    CloseWindow();              // Cierro la ventana
    return 0;
}


/**
 *  Función dedicada a dibujar cada frame. Acá adentro se debe poner la logica necesaria para representar un nuevo frame
 *  del juego.
 */


static void UpdateDrawFrame(void) {

    // siempre hay que reproducir la musica que esta actualmente
    UpdateMusicStream(music);

    // Verifico Entradas de eventos.
   if (IsKeyDown(KEY_RIGHT)) {
        if (player->getCharacterPos().x>600)
            map->setX(-3);
        else player->move_x(2.0f);
    }
    if (IsKeyDown(KEY_LEFT)){
        if (player->getCharacterPos().x<400)
            map->setX(3);
        else player->move_x(-2.0f);
    }
    /*   if (IsKeyDown(KEY_UP)){
           player->move_y(-2.0f);
       }
       if (IsKeyDown(KEY_DOWN)) {
           player->move_y(2.0f);
       }
   */


    // Comienzo a dibujar
    BeginDrawing();

    ClearBackground(RAYWHITE); // Limpio la pantalla con blanco
    DrawTexture(background,0,0,WHITE);

    ClearBackground(RAYWHITE); // Limpio la pantalla con blanco
    DrawTexture(midground,0,170,WHITE);

    map->dibujar();

    // Dibujo todos los elementos del juego.

    player->draw();

    DrawText("Life:", 20, 20, 40, LIGHTGRAY);


    // Finalizo el dibujado
    EndDrawing();
}