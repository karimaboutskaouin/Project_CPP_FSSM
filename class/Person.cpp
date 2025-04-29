#include "Person.h"

Person::Person() {
    width = 40;
    height = 30;
}

void Person::Draw(Vector2 seatPosition) {
    // Dessine la tête
    Vector2 headCenter = { seatPosition.x, seatPosition.y - height };
    float headRadius = 10;
    DrawCircleV(headCenter, headRadius, BEIGE);

    // Dessine le corps
    Vector2 bodyStart = { seatPosition.x, seatPosition.y - headRadius };
    Vector2 bodyEnd   = { seatPosition.x, seatPosition.y };
    DrawLineEx(bodyStart, bodyEnd, 4.0f, BLACK);

    // Bras
    DrawLineEx({bodyStart.x, bodyStart.y + 5}, {bodyStart.x - 10, bodyStart.y + 15}, 2.0f, BLACK);
    DrawLineEx({bodyStart.x, bodyStart.y + 5}, {bodyStart.x + 10, bodyStart.y + 15}, 2.0f, BLACK);

    // Jambes
    DrawLineEx(bodyEnd, {bodyEnd.x - 10, bodyEnd.y + 20}, 2.0f, BLACK);
    DrawLineEx(bodyEnd, {bodyEnd.x + 10, bodyEnd.y + 20}, 2.0f, BLACK);
}

