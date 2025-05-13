#include "mode.h"
#include "raylib/include/raylib.h"
#include "scene.h"

Mode::Mode() {
  draw = true;
  rand = GetRandomValue(55, 755);
  rand2 = GetRandomValue(55, 355);
  score = 0;
  lives = 5;
}

void Mode::easy(S *scene){
  ClearBackground(WHITE);
  DrawText(TextFormat("Score: %i", score), 250, 30 , 30, BLACK);
  DrawText(TextFormat("Lives: %i", lives), 450, 30, 30, BLACK);
  Vector2 mouse = GetMousePosition();
  Rectangle pop = {float(rand),float(rand2),50 ,50};
  if (mouse.x >= pop.x && mouse.x <= pop.x + 50 && mouse.y >= pop.y && mouse.y <= pop.y + 50 &&  IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
    draw = false;
    score += 1;
  }
  else if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) lives -= 1;
  else {;}
  if (draw == true) DrawRectangleRec(pop, RED);
  if (draw == false){
    rand = GetRandomValue(55, 755);
    rand2 = GetRandomValue(55, 355);
    draw = true;  
  }
  if (lives == 0){
    scene->scene = gameover;
  }
}
// void medium();
// void hard();
// void endless();

