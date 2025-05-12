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
  Mode mode;

  InitWindow(screenW, screenH, "Pop the Penguin");

  while (!WindowShouldClose())
  {
    BeginDrawing();
    scene_manager(&scene, &cusor, &mode);
    EndDrawing();
  }
}
