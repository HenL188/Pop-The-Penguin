#pragma once

#include "raylib/include/raylib.h"
#include "timer.h"

struct S;
struct Data;

class Mode
{
public:
  int score;
  void easy(S *scene, Data *data);
  void medium();
  void hard();
  void endless();
  Mode();

private:
  bool draw;
  bool start;
  int rand;
  int rand2;
  int lives;
  Timer timer;
};
