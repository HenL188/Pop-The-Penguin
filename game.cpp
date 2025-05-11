#include "game.h"
#include "scene.h"

Game::Game()
{
  screenW = 800;
  screenH = 450;
}

Game::~Game()
{
  CloseWindow();
}

void Game::run()
{

  Rectangle cusor = {200, 100, 200, 50};

  S scene = {menu};

  InitWindow(screenW, screenH, "raylib [core] example - basic window");

  while (!WindowShouldClose())
  {
    BeginDrawing();
    scene_manager(&scene, &cusor);
    EndDrawing();
  }
}
