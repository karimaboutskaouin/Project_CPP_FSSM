#include "Bike.h"

Bike::Bike() {
    width = 80;
    height = 40;
    x = 100;
    y = 300;
    speed = 5;
}

void Bike::Update() {
    if (IsKeyDown(KEY_UP))    y -= speed;
    if (IsKeyDown(KEY_DOWN))  y += speed;
    if (IsKeyDown(KEY_LEFT))  x -= speed;
    if (IsKeyDown(KEY_RIGHT)) x += speed;

    if (x < 0) x = 0;
    if (y < 0) y = 0;
    if (x + width > GetScreenWidth())   x = GetScreenWidth() - width;
    if (y + height > GetScreenHeight()) y = GetScreenHeight() - height;
}

void Bike::Draw() {
    float r = height/2;
    Vector2 rearCenter  = { x + r,       y + height };
    Vector2 frontCenter = { x + width - r, y + height };

    DrawCircleV(rearCenter,  r, DARKGRAY);
    DrawCircleV(frontCenter, r, DARKGRAY);

    Vector2 seatPivot = { x + width*0.5f, y + height*0.5f };
    DrawLineEx(rearCenter, seatPivot, 5.0f, BLUE);
    DrawLineEx(seatPivot, frontCenter, 5.0f, BLUE);

    Vector2 seatTop = { seatPivot.x - 10, seatPivot.y - 20 };
    DrawLineEx(seatPivot, seatTop, 5.0f, BLUE);

    Vector2 handlePivot = frontCenter;
    Vector2 handleTop   = { handlePivot.x + 20, handlePivot.y - 10 };
    DrawLineEx(handlePivot, handleTop, 5.0f, BLUE);

    // ✨ Dessiner la personne assise sur le vélo
    person.Draw(seatTop);
}

Rectangle Bike::GetRect() {
    return { x, y, width, height };
}

