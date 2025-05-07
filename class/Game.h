#pragma once
#include "Bike.h"
#include "Obstacle.h"
#include "Menu.h"
#include "raylib.h"

class Game {
private:
    Bike bike;
    Obstacle obstacle;
    Menu menu;

    bool gameOver;
    bool win;             // Ajout : le joueur a gagné ?
    int timer;
    int framesCounter;

    // Photo d'argent
    Vector2 moneyPos;
    int moneyWidth;
    int moneyHeight;

public:
    Game();
    void Update();
    void Draw();
    void Reset();
};

