#include "scene.h"
#include "menu.h"
#include "misc.h"
#include "raylib/include/raylib.h"

#include <stdlib.h>

void scene_manager(Data *data, Mode *mode, Assets *assests)
{
   switch (data->scene)
   {
   case menu:
      Menu(data);
      break;
   case easy:
      mode->easy(data, assests);
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
   case gameover:
      ClearBackground(WHITE);
      Gameover(data, mode);
      break;
   case credits:
      break;
   case quit:
      WindowShouldClose();
      UnloadTexture(assests->background);
      UnloadTexture(assests->penguin);
      UnloadSound(assests->pop);
      CloseWindow();
      exit(0);
      break;
   }
}
