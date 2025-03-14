#include "scene.h"


SceneManager::SceneManager() {}
SceneManager::~SceneManager(){}

void SceneManager::scene_manager(Scene scene) {
  switch (scene) {
  case menu:
     m.menu(&scene);
      break;
  case easy:
     ClearBackground(SKYBLUE);
     DrawText("easy",400,225,50,BLACK);
     break;
  case medium:
     ClearBackground(SKYBLUE);
     DrawText("menu",400,225,50,BLACK);
     break;
  case hard:
     ClearBackground(SKYBLUE);
     DrawText("menu",400,225,50,BLACK);
     break;
  case endless:
     ClearBackground(SKYBLUE);
     DrawText("menu",400,225,50,BLACK);
     break;
  case end:
     ClearBackground(SKYBLUE);
     DrawText("menu", 400,225,50,BLACK);
     break; 
  }
}
