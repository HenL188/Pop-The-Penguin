#pragma once

#include "raylib/include/raylib.h"

enum Scene
{
  menu,
  easy,
  medium,
  hard,
  endless,
  end,
};

struct S
{
  Scene scene;
};

void scene_manager(S *scene, Rectangle *cusor);
