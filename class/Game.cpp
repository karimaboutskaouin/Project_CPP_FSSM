#include "Game.h"
#include "raylib.h"

Game::Game() : obstacle(800), menu() {
    gameOver = false;
    win = false;
    timer = 20;
    framesCounter = 0;

    moneyPos = {600, 300};  // Position fixe de la photo d'argent
    moneyWidth = 50;
    moneyHeight = 50;
}

void Game::Update() {
    if (!menu.IsPlaying() && !menu.ShouldQuit()) {
        menu.Update();
    } else if (!gameOver) {
        bike.Update();
        obstacle.Update();

        if (CheckCollisionRecs(bike.GetRect(), obstacle.GetRect())) {
            gameOver = true;
        }

        // La photo d'argent devient active uniquement après 15 secondes (donc timer <= 5)
        if (timer <= 5) {
            Rectangle moneyRect = {moneyPos.x, moneyPos.y, (float)moneyWidth, (float)moneyHeight};
            if (CheckCollisionRecs(bike.GetRect(), moneyRect)) {
                win = true;
                gameOver = true;
            }
        }

        if ((framesCounter++ % 60) == 0 && timer > 0)
            timer--;

        if (timer == 0)
            gameOver = true;
    } else {
        if (IsKeyPressed(KEY_ENTER))
            Reset();
    }
}

void Game::Draw() {
    if (!menu.IsPlaying() && !menu.ShouldQuit()) {
        menu.Draw();
    } else {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        if (!gameOver) {
            bike.Draw();
            obstacle.Draw();

            // Afficher la photo d'argent uniquement après 15 secondes
            if (timer <= 5) {
                DrawRectangle(moneyPos.x, moneyPos.y, moneyWidth, moneyHeight, GOLD);
            }

            DrawText(TextFormat("Temps restant: %d", timer), 10, 10, 20, DARKGRAY);
        } else {
            if (win) {
                DrawText("🎉 YOU WIN!", 200, 200, 40, GREEN);
            } else {
                DrawText("💥 Game over!", 200, 200, 40, RED);
            }
        }

        EndDrawing();
    }
}

void Game::Reset() {
    bike = Bike();
    obstacle = Obstacle(800);
    gameOver = false;
    win = false;
    timer = 20;
    framesCounter = 0;

    moneyPos = {600, 300}; // Réinitialiser la position si besoin
}

