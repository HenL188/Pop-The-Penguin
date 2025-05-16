#include "menu.h"
#include "raylib/include/raylib.h"
#include "scene.h"

void Menu(S *scene, Rectangle *cusor) {
  Vector2 startw = {20, 20};
  Vector2 endw = {780, 20};
  Vector2 starth = {25, 20};
  Vector2 endh = {25, 430};
  Vector2 mouse = GetMousePosition();

  ClearBackground(SKYBLUE);
  
  DrawText("Menu",345,25,50,BLACK);
  DrawText("Easy", 200, 100, 50, BLACK);
  DrawText("Medium", 200, 175, 50, BLACK);
  DrawText("Hard", 200, 250, 50, BLACK);
  DrawText("Endless", 450, 100, 50, BLACK);
  DrawText("Credits", 450, 175, 50, BLACK);
  DrawText("Quit", 450, 250, 50, BLACK);
  

  for(int i = 0; i < 2; i++){
   DrawLineEx(startw, endw, 10.0f, BLACK);
   DrawLineEx(starth, endh, 10.0f, BLACK);
   startw.y += 410;
   endw.y += 410;
   starth.x += 750;
   endh.x += 750; 
  }

  Color color = {255,255,255,100};
  DrawRectangleRec(*cusor, color);

  if (cusor->y == 100 && IsKeyPressed(KEY_S) || cusor->y == 100 && IsKeyPressed(KEY_DOWN)){
    cusor->y = 175;  
  }
  else if (cusor->y == 175 && IsKeyPressed(KEY_S) || cusor->y == 175 && IsKeyPressed(KEY_DOWN)){
    cusor->y = 250;
  }
  else if (cusor->y == 250 && IsKeyPressed(KEY_S) || cusor->y == 250 && IsKeyPressed(KEY_DOWN)){
    cusor->y = 100;
  }
  else if (cusor->y == 100 && IsKeyPressed(KEY_W) || cusor->y == 100 && IsKeyPressed(KEY_UP)){
    cusor->y = 250;
  }
  else if (cusor->y == 175 && IsKeyPressed(KEY_W) || cusor->y == 175 && IsKeyPressed(KEY_UP)){
    cusor->y = 100;
  }
  else if (cusor->y == 250 && IsKeyPressed(KEY_W) || cusor->y == 250 && IsKeyPressed(KEY_UP)){
    cusor->y = 175;
  }
  else {
    cusor->y = cusor->y;
  }
  
  if (cusor->x == 200 && IsKeyPressed(KEY_D) || cusor->x == 200 && IsKeyPressed(KEY_RIGHT)){
    cusor->x = 450;
  }
  else if (cusor->x == 450 && IsKeyPressed(KEY_A) || cusor->x == 450 && IsKeyPressed(KEY_LEFT)){
    cusor->x = 200;
  }
  else {
    cusor->x = cusor->x;
  }

  if (cusor->y == 100 && cusor->x == 200 && IsKeyPressed(KEY_ENTER)) scene->scene = easy; 
  else if (cusor->y == 175 && cusor->x == 200 && IsKeyPressed(KEY_ENTER)) scene->scene = medium;
  else if (cusor->y == 250 && cusor->x == 200 && IsKeyPressed(KEY_ENTER)) scene->scene = hard;
  else if (cusor->y == 100 && cusor->x == 450 && IsKeyPressed(KEY_ENTER)) scene->scene = endless; 
  else if (cusor->y == 175 && cusor->x == 450 && IsKeyPressed(KEY_ENTER)) scene->scene = credits;
  else if (cusor->y == 250 && cusor->x == 450 && IsKeyPressed(KEY_ENTER)) scene->scene = quit;
  else {;}        
}
