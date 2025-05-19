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

  Data data = {
    menu,
    &cusor,
    false,
  };
  
  Mode mode;
  Assets *assets = new Assets;

  InitWindow(screenW, screenH, "Pop the Penguin");
  BeginDrawing();
  ClearBackground(WHITE);
  DrawText("Loading...", 300, 125, 50, BLACK);
  EndDrawing();

  InitAudioDevice();

  assets->pop = LoadSound("assets/pop.mp3");
  assets->background = LoadTexture("assets/background.png");
  assets->penguin = LoadTexture("assets/peguin.png");

  while (!WindowShouldClose())
  {
    BeginDrawing();
    scene_manager(&data, &mode, assets);
    EndDrawing();
  }

  UnloadSound(assets->pop);
  UnloadTexture(assets->background);
  UnloadTexture(assets->penguin);
  CloseAudioDevice();
  CloseWindow();
  delete assets;
}
