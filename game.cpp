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
  
    Scene scene;
  
    InitWindow(screenW, screenH, "raylib [core] example - basic window");

    SceneManager manager;
    scene = menu;
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        manager.scene_manager(scene);
        EndDrawing();
    }
}
