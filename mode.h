#pragma once

#include "raylib/include/raylib.h"
#include "timer.h"

struct Data;
struct Assets;

class Mode
{
public:
  int score;
  void easy(Data *data, Assets *assets);
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
