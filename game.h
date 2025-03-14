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
 
class Game {
  public:
    void run();
    Game();
    ~Game();
  private:
    int screenW;
    int screenH;
};
