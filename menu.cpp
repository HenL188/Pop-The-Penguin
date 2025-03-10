#include "menu.h"
#include "raylib/include/raylib.h"

Menu::Menu() {
  cusor = {345,100,200,50};
}

Menu::~Menu(){}


void Menu::menu() {
  Vector2 startw = {20, 20};
  Vector2 endw = {780, 20};
  Vector2 starth = {25, 20};
  Vector2 endh = {25, 430};

  ClearBackground(SKYBLUE);
  DrawText("Menu",345,25,50,BLACK);

  for(int i = 0; i < 2; i++){
   DrawLineEx(startw, endw, 10.0f, BLACK);
   DrawLineEx(starth, endh, 10.0f, BLACK);
   startw.y += 410;
   endw.y += 410;
   starth.x += 750;
   endh.x += 750; 
  }

  Color color = {255,255,255,100};
  DrawRectangleRec(cusor, color);

  if (cusor.y == 100 && IsKeyPressed(KEY_S) || cusor.y == 100 && IsKeyPressed(KEY_DOWN)){
    cusor.y = 175;
  }
  else if (cusor.y == 175 && IsKeyPressed(KEY_S) || cusor.y == 175 && IsKeyPressed(KEY_DOWN)){
    cusor.y = 250;
  }
  else if (cusor.y == 250 && IsKeyPressed(KEY_S) || cusor.y == 250 && IsKeyPressed(KEY_DOWN)){
    cusor.y = 100;
  }
  else {
    cusor.y = cusor.y;
  }
  
  if (cusor.y == 100 && IsKeyPressed(KEY_W) || cusor.y == 100 && IsKeyPressed(KEY_UP)){
    cusor.y = 250;
  }
  else if (cusor.y == 175 && IsKeyPressed(KEY_W) || cusor.y == 175 && IsKeyPressed(KEY_UP)){
    cusor.y = 100;
  }
  else if (cusor.y == 250 && IsKeyPressed(KEY_W) || cusor.y == 250 && IsKeyPressed(KEY_UP)){
    cusor.y = 175;
  }
  else {
    cusor.y = cusor.y;
  }

  DrawText("Easy", 345, 100, 50, BLACK);
  
}
