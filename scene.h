#pragma once

#include "raylib/include/raylib.h"


enum Scene {
      menu,
      easy,
      medium,
      hard,
      endless,
      end,
    };


void scene_manager(Scene scene,Rectangle *cusor );

