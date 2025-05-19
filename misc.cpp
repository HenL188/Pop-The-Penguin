#include "misc.h"
#include "raylib/include/raylib.h"

void Gameover(Data *data, Mode *m){
   ClearBackground(WHITE);
   DrawText("Game Over", 300, 150, 50, BLACK);
   DrawText(TextFormat("Score: %i", m->score),300,225,50,BLACK);
   if (IsKeyPressed(KEY_ENTER) || IsKeyPressed(KEY_SPACE) || IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) data->scene = menu;
}

