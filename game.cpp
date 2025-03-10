#include "game.h"
#include "scene.h"

Game::Game(){
  screenW = 800;
  screenH = 450;
}

Game::~Game(){
  CloseWindow();
}

void Game::run() {
    InitWindow(screenW, screenH, "raylib [core] example - basic window");

    SceneManager scene;
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        scene.scene_manager();
        EndDrawing();
    }
}
