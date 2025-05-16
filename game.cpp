#include "game.h"
#include "scene.h"

Game::Game()
{
  screenW = 800;
  screenH = 450;
}

Game::~Game()
{
  UnloadTexture(background);
  UnloadTexture(penguin);
  CloseWindow();
}

void Game::run()
{

  SetTargetFPS(60);

  Rectangle cusor = {200, 100, 200, 50};

  S scene = {menu};
  Mode mode;

  InitWindow(screenW, screenH, "Pop the Penguin");
  background = LoadTexture("assets/background.png");
  penguin = LoadTexture("assets/peguin.png");

  while (!WindowShouldClose())
  {
    BeginDrawing();
    scene_manager(&scene, &cusor, &mode, background, penguin);
    EndDrawing();
  }
}
