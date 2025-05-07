#pragma once // Évite les inclusions multiples de ce fichier (équivalent à #ifndef/#define/#endif)
#include "raylib.h"
#include "Person.h"

class Bike {
public:
    float x, y; // Position du vélo sur l’écran
    float width, height; // dimension de velo
    float speed;
    Person person;

    Bike();
    ~Bike();

    void Update();
    void Draw();
    Rectangle GetRect();
};

