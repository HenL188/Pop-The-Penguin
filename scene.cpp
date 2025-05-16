#include "scene.h"
#include "menu.h"
#include "misc.h"
#include "raylib/include/raylib.h"

#include <stdlib.h>

void scene_manager(S *scene, Rectangle *cusor, Mode *mode, Data *data)
{
   switch (scene->scene)
   {
   case menu:
      Menu(scene, cusor);
      break;
   case easy:
      mode->easy(scene, data);
      break;
   case medium:
      ClearBackground(SKYBLUE);
      DrawText("medium", 400, 225, 50, BLACK);
      break;
   case hard:
      ClearBackground(SKYBLUE);
      DrawText("hard", 400, 225, 50, BLACK);
      break;
   case endless:
      ClearBackground(SKYBLUE);
      DrawText("endless", 400, 225, 50, BLACK);
      break;
   case credits:
      ClearBackground(SKYBLUE);
      DrawText("credits", 400, 225, 50, BLACK);
      break;
   case gameover:
      Gameover(scene, mode);
      break;
   case quit:
      WindowShouldClose();
      UnloadTexture(data->background);
      UnloadTexture(data->penguin);
      UnloadSound(data->pop);
      CloseWindow();
      exit(0);
      break;
   }
}
