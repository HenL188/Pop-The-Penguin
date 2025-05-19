#include "menu.h"
#include "raylib/include/raylib.h"
#include "scene.h"


void Menu(Data *data) {
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
  DrawRectangleRec(*data->cusor, color);

  DrawCircleV(mouse, 1, BLANK);

  if (mouse.y >= 100 && mouse.y <= 150 && mouse.x >= 200 && mouse.x <= 450){
    data->cusor->x = 200;
    data->cusor->y = 100;
  }
  else if (mouse.y >= 175 && mouse.y <= 250 && mouse.x >= 200 && mouse.x <= 450) {
    data->cusor->x = 200;
    data->cusor->y = 175;
  }
  else if (mouse.y >= 250 && mouse.y <= 325 && mouse.x >= 200 && mouse.x <= 450){
    data->cusor->x = 200;
    data->cusor->y = 250;
  }
  else if (mouse.y >= 100 && mouse.y <= 150 && mouse.x >= 450 && mouse.x <= 700){
    data->cusor->x = 450;
    data->cusor->y = 100;
  }
  else if (mouse.y >= 175 && mouse.y <= 250 && mouse.x >= 450 && mouse.x <= 700){
    data->cusor->x = 450;
    data->cusor->y = 175;
  }
  else if (mouse.y >= 250 && mouse.y <= 325 && mouse.x >= 450 && mouse.x <= 700){
    data->cusor->x = 450;
    data->cusor->y = 250;
  }
  else {;}

  data->collision = CheckCollisionCircleRec(mouse, 1, *data->cusor);
  if (data->collision && data->cusor->y == 100 && data->cusor->x == 200 && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
    data->scene = easy;
  }
  else if (data->collision && data->cusor->y == 175 && data->cusor->x == 200 && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
    data->scene = medium;
  }
  else if (data->collision && data->cusor->y == 250 && data->cusor->x == 200 && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
    data->scene = hard;
  }
  else if (data->collision && data->cusor->y == 100 && data->cusor->x == 450 && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
    data->scene = endless;
  }
  else if (data->collision && data->cusor->y == 175 && data->cusor->x == 450 && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
    data->scene = credits;
  }
  else if (data->collision && data->cusor->y == 250 && data->cusor->x == 450 && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
    data->scene = quit;
  }
  else {;}

  if (data->cusor->y == 100 && IsKeyPressed(KEY_S) || data->cusor->y == 100 && IsKeyPressed(KEY_DOWN)){
    data->cusor->y = 175;  
  }
  else if (data->cusor->y == 175 && IsKeyPressed(KEY_S) || data->cusor->y == 175 && IsKeyPressed(KEY_DOWN)){
    data->cusor->y = 250;
  }
  else if (data->cusor->y == 250 && IsKeyPressed(KEY_S) || data->cusor->y == 250 && IsKeyPressed(KEY_DOWN)){
    data->cusor->y = 100;
  }
  else if (data->cusor->y == 100 && IsKeyPressed(KEY_W) || data->cusor->y == 100 && IsKeyPressed(KEY_UP)){
    data->cusor->y = 250;
  }
  else if (data->cusor->y == 175 && IsKeyPressed(KEY_W) || data->cusor->y == 175 && IsKeyPressed(KEY_UP)){
    data->cusor->y = 100;
  }
  else if (data->cusor->y == 250 && IsKeyPressed(KEY_W) || data->cusor->y == 250 && IsKeyPressed(KEY_UP)){
    data->cusor->y = 175;
  }
  else {
    data->cusor->y = data->cusor->y;
  }
  
  if (data->cusor->x == 200 && IsKeyPressed(KEY_D) || data->cusor->x == 200 && IsKeyPressed(KEY_RIGHT)){
    data->cusor->x = 450;
  }
  else if (data->cusor->x == 450 && IsKeyPressed(KEY_A) || data->cusor->x == 450 && IsKeyPressed(KEY_LEFT)){
    data->cusor->x = 200;
  }
  else {
    data->cusor->x = data->cusor->x;
  }

  if (data->cusor->y == 100 && data->cusor->x == 200 && IsKeyPressed(KEY_ENTER)) data->scene = easy; 
  else if (data->cusor->y == 175 && data->cusor->x == 200 && IsKeyPressed(KEY_ENTER)) data->scene = medium;
  else if (data->cusor->y == 250 && data->cusor->x == 200 && IsKeyPressed(KEY_ENTER)) data->scene = hard;
  else if (data->cusor->y == 100 && data->cusor->x == 450 && IsKeyPressed(KEY_ENTER)) data->scene = endless; 
  else if (data->cusor->y == 175 && data->cusor->x == 450 && IsKeyPressed(KEY_ENTER)) data->scene = credits;
  else if (data->cusor->y == 250 && data->cusor->x == 450 && IsKeyPressed(KEY_ENTER)) data->scene = quit;
  else {;}        
}
