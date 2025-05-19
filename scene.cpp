#include "scene.h"
#include "menu.h"
#include "misc.h"
#include "raylib/include/raylib.h"

#include <stdlib.h>

void scene_manager(Data *data, Mode *mode, Assets *assets)
{
   switch (data->scene)
   {
   case menu:
      Menu(data);
      break;
   case easy:
      mode->easy(data, assets);
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
      mode->endless(data, assets);
      break;
   case gameover:
      ClearBackground(WHITE);
      Gameover(data, mode);
      break;
   case credits:
      ClearBackground(SKYBLUE);
      DrawText("Credits", 400, 225, 50, BLACK);
      break;
   case quit:
      WindowShouldClose();
      UnloadTexture(assets->background);
      UnloadTexture(assets->penguin);
      UnloadSound(assets->pop);
      CloseWindow();
      exit(0);
      break;
   }
}
