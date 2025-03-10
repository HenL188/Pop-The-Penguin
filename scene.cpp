#include "scene.h"


SceneManager::SceneManager() {
  scene = menu;
}
SceneManager::~SceneManager(){
  
}

void SceneManager::scene_manager() {
  switch (scene) {
  case menu:
     m.menu();
      break;
  case easy:
     ClearBackground(SKYBLUE);
     DrawText("menu",400,225,50,BLACK);
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
