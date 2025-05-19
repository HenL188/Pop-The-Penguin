#pragma once

#include "raylib/include/raylib.h"
#include "mode.h"

enum Scene
{
  menu,
  easy,
  medium,
  hard,
  endless,
  quit,
  credits,
  gameover,
};

struct Data
{
  Scene scene;
  Rectangle *cusor;
  bool collision;
};

struct Assets{
  Texture2D background;
  Texture2D penguin;
  Sound pop;
};

void scene_manager(Data *data, Mode *mode, Assets *assets);
