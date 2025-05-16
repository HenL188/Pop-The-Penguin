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

struct S
{
  Scene scene;
};

struct Data{
  Texture2D background;
  Texture2D penguin;
  Sound pop;
};

void scene_manager(S *scene, Rectangle *cusor, Mode *mode, Data *data);
