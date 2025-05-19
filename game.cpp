#include <thread>

#include "game.h"
#include "raylib/include/raylib.h"
#include "scene.h"

Game::Game()
{
  screenW = 800;
  screenH = 450;
}

Game::~Game()
{
}

void Game::run()
{

  SetTargetFPS(60);

  Rectangle cusor = {200, 100, 200, 50};

  S scene = {menu};
  Mode mode;
  Data *data = new Data;

  InitWindow(screenW, screenH, "Pop the Penguin");
  BeginDrawing();
  ClearBackground(WHITE);
  DrawText("Loading...", 300, 125, 50, BLACK);
  EndDrawing();

  InitAudioDevice();

  data->pop = LoadSound("assets/pop.mp3");
  data->background = LoadTexture("assets/background.png");
  data->penguin = LoadTexture("assets/peguin.png");

  while (!WindowShouldClose())
  {
    BeginDrawing();
    scene_manager(&scene, &cusor, &mode, data);
    EndDrawing();
  }

  UnloadSound(data->pop);
  UnloadTexture(data->background);
  UnloadTexture(data->penguin);
  CloseAudioDevice();
  CloseWindow();
  delete data;
}
