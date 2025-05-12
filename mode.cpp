#include "mode.h"
#include "raylib/include/raylib.h"


Mode::Mode() {
  draw = true;
}


void Mode::easy(){
  ClearBackground(WHITE);
  Vector2 mouse = GetMousePosition(); 
  if (mouse.x >= 400 && mouse.x <= 450 && mouse.y >= 225 && mouse.y <= 275 &&  IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
    draw = false;
  }
  if (draw == true){
    DrawRectangle(400, 225, 50,50, RED);
  }  
}
// void medium();
// void hard();
// void endless();
// void credits();
