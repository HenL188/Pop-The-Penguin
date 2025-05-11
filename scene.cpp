#include "scene.h"
#include "menu.h"


void scene_manager(Scene scene,Rectangle *cusor ) {
  switch (scene) {
  case menu:
     Menu(scene,cusor);
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
