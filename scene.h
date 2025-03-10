#pragma once

#include "raylib/include/raylib.h"
#include "menu.h"

class SceneManager {
  public:
    SceneManager();
    ~SceneManager();
    void scene_manager();
  private:
    enum Scene {
      menu,
      easy,
      medium,
      hard,
      endless,
      end,
    };
    Scene scene;
    Menu m;
};



void SceneMangaer();

