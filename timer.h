#pragma once

struct Timer {
    double startTime;   
    double lifeTime; 
};

void StartTimer(Timer *timer, double lifetime);
bool TimerDone(Timer timer);

