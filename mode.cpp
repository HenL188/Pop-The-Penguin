#include "mode.h"
#include "raylib/include/raylib.h"


Mode::Mode() {
  draw = true;
  rand = GetRandomValue(100, 600);
  rand2 = GetRandomValue(55, 355);
}


void Mode::easy(){
  ClearBackground(WHITE);
  Vector2 mouse = GetMousePosition();
  Vector2 pop = {float(rand),float(rand2)};
  if (mouse.x >= pop.x && mouse.x <= pop.x + 50 && mouse.y >= pop.y && mouse.y <= pop.y + 50 &&  IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
    draw = false;
  }
  if (draw == true){
    DrawRectangleV(pop,Vector2{50,50}, RED);
  }
  if (draw == false){
    rand = GetRandomValue(100, 600);
    rand2 = GetRandomValue(55, 355);
    draw = true;  
  }  
}
// void medium();
// void hard();
// void endless();
// void credits();
