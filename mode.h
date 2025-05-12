#pragma once

#include "raylib/include/raylib.h"


class Mode {
  public:
    void easy();
    void medium();
    void hard();
    void endless();
    void credits();
    Mode();
  private:    
    bool draw;
    int rand;
    int rand2;
};
