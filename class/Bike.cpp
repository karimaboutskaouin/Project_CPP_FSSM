#include "Bike.h"
#include <cmath>

Bike::Bike() {
    width = 80;
    height = 40;
    x = 100;
    y = 300;
    speed = 5;
    // initialise les diemnsions e velo et la position initial ainsi que la vitesse
}

Bike::~Bike() {
    // Rien de spécial ici car Person libère sa propre texture
}

void Bike::Update() {
    if (IsKeyDown(KEY_UP))    y -= speed;
    if (IsKeyDown(KEY_DOWN))  y += speed;
    if (IsKeyDown(KEY_LEFT))  x -= speed;
    if (IsKeyDown(KEY_RIGHT)) x += speed;// controler le joueur avec les toyches clavier de haut et de bas , de droite et de gauche

    if (x < 0) x = 0;//a position horizontale du vélo (x) est inférieure à 0, on la remet à 0.  Cela empêche le vélo de sortir par la gauche de l'écran.
    if (y < 0) y = 0;
    if (x + width > GetScreenWidth())   x = GetScreenWidth() - width;
    if (y + height > GetScreenHeight()) y = GetScreenHeight() - height;
}

void Bike::Draw() {
    Color color = DARKGRAY; // Définit la couleur pour dessiner les parties du vélo

    Vector2 rearWheel  = { x, y };
    Vector2 frontWheel = { x + width, y };
    float wheelRadius = 15;

    // Roues
    DrawCircleLinesV(rearWheel, wheelRadius, color);
    DrawCircleLinesV(frontWheel, wheelRadius, color);

    for (int i = 0; i < 12; i++) { // boucle pour dessiner 12 rayons espacés à 30° (360 / 12)
        float angle = (float)i * 360.0f / 12.0f;
        Vector2 spokeEndRear = {
            rearWheel.x + wheelRadius * cosf(angle * DEG2RAD),
            rearWheel.y + wheelRadius * sinf(angle * DEG2RAD)
        };
        Vector2 spokeEndFront = {
            frontWheel.x + wheelRadius * cosf(angle * DEG2RAD),//DEG2RAD est une constante Raylib 
            frontWheel.y + wheelRadius * sinf(angle * DEG2RAD)
        };
        DrawLineEx(rearWheel, spokeEndRear, 2, color);
        DrawLineEx(frontWheel, spokeEndFront, 2, color);
    }

    // Position de la personne sur la selle
    Vector2 seatPosition = { x + width * 0.5f, y - 20 };
    person.Draw(seatPosition);

    // Cadre arrière
    Vector2 pedal = { x + width * 0.5f, y };
    Vector2 saddle = { x + width * 0.4f, y - 60 };
    DrawLineEx(rearWheel, pedal, 2, color);
    DrawLineEx(pedal, saddle, 2, color);
    DrawLineEx(saddle, rearWheel, 2, color);

    // Cadre avant
    Vector2 topBar = { x + width * 0.8f, y - 25 };
    DrawLineEx(pedal, frontWheel, 2, color);
    DrawLineEx(pedal, topBar, 2, color);
    DrawLineEx(topBar, frontWheel, 2, color);

    // Barre horizontale et guidon
    DrawLineEx(saddle, topBar, 2, color);
    DrawLineEx(topBar, { topBar.x + 5, topBar.y - 10 }, 2, color);

    // Selle
    DrawLineEx(saddle, { saddle.x - 10, saddle.y - 5 }, 2, color);
}

Rectangle Bike::GetRect() {
    return Rectangle{ x, y, width, height };
}

