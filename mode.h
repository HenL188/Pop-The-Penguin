#pragma once

#include "raylib/include/raylib.h"
#include "timer.h"

struct S;


class Mode
{
public:
  int score;
  void easy(S *scene);
  void medium();
  void hard();
  void endless();
  Mode();

private:
  bool draw;
  int rand;
  int rand2;
  int lives;
  Timer timer;
};
