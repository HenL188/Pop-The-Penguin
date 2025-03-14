#pragma once

#include "raylib/include/raylib.h"
#include "game.h"

class Menu {
  public:
    Menu();
    ~Menu();
    void menu(Scene *scene);
  private:
    Rectangle cusor;
};

