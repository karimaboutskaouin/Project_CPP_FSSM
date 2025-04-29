#pragma once
#include "raylib.h"

class Person {
public:
    float width, height;

    Person();
    void Draw(Vector2 seatPosition);
};

