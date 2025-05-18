#include "mode.h"
#include "raylib/include/raylib.h"
#include "scene.h"
#include "timer.h"

Mode::Mode()
{
  draw = true;
  rand = 400;
  rand2 = 225;
  score = 0;
  lives = 5;
  start = true;
}

void Mode::easy(S *scene, Data *data)
{
  ClearBackground(WHITE);
  if (start) {
    StartTimer(&timer, 3);
    start = false;
  }
  DrawTexture(data->background, 0, 0, WHITE);
  DrawText(TextFormat("Score: %i", score), 250, 30, 30, BLACK);
  DrawText(TextFormat("Lives: %i", lives), 450, 30, 30, BLACK);
  Vector2 mouse = GetMousePosition();
  Rectangle hitbox = {float(rand), float(rand2), float(data->penguin.width), float(data->penguin.height)};
  Vector2 ex = {float(rand), float(rand2)};
  if (mouse.x >= hitbox.x && mouse.x <= hitbox.x + 50 && mouse.y >= hitbox.y && mouse.y <= hitbox.y + 50 && IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
  {
    PlaySound(data->pop);
    draw = false;
    score += 1;
    StartTimer(&timer, 3);
  }
  else if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
    lives -= 1;
  else
  {;}
  
  if (draw == true){
    DrawRectangleRec(hitbox, BLANK);
    DrawTextureEx(data->penguin, ex, 0, 2, WHITE);
  }
  if (draw == false)
  {
    rand = GetRandomValue(55, 755);
    rand2 = GetRandomValue(55, 355);
    draw = true;
  }
  if (lives == 0)
  {
    scene->scene = gameover;
  }
  if (TimerDone(timer))
  {
    draw = false;
    lives -= 1;
    StartTimer(&timer, 3);
  }
  else
  {
    draw = true;
  }
}
// void medium();
// void hard();
// void endless();
