#pragma once

#include "raylib/include/raylib.h"

class Game {
  public:
    void run();
    Game();
    ~Game();
  private:
    int screenW;
    int screenH;
};
