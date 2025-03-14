#pragma once

#include "raylib/include/raylib.h"
#include "menu.h"
#include "game.h"

class SceneManager {
  public:
    SceneManager();
    ~SceneManager();
    void scene_manager(Scene scene);
  private:
    Menu m;
};



void SceneMangaer();

