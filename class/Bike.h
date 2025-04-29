#pragma once
#include "raylib.h"
#include "Person.h"

class Bike {
public:
    float x, y;
    float width, height;
    float speed;
    Person person; // On ajoute une personne

    Bike();
    void Update();
    void Draw();
    Rectangle GetRect();
};

