#include "Menu.h"
#include "raylib.h"

Menu::Menu() {
    isPlaying = false;
    shouldQuit = false;
}

void Menu::Update() {
    // Si on appuie sur "Jouer", le jeu commence
    if (IsKeyPressed(KEY_ENTER)) {
        isPlaying = true;
    }

    // Si on appuie sur "Quitter", le jeu se ferme
    if (IsKeyPressed(KEY_ESCAPE) || IsKeyPressed(KEY_SPACE)) {
        shouldQuit = true;
    }
}

void Menu::Draw() {
    // Commence à dessiner
    BeginDrawing();
    
    // Fond rouge
    ClearBackground(RED);

    // Texte "Bienvenue" en blanc
    DrawText("Bienvenue dans le Jeu!", GetScreenWidth()/2 - MeasureText("Bienvenue dans le Jeu!", 40)/2, 100, 40, WHITE);

    // Texte pour "Jouer"
    const char* jouerText = "Jouer";
    const char* jouerHint = "(Appuyez sur ENTREE)";
    
    int jouerTextWidth = MeasureText(jouerText, 30);
    int jouerHintWidth = MeasureText(jouerHint, 30);
    
    DrawText(jouerText, GetScreenWidth() / 2 - (jouerTextWidth + jouerHintWidth) / 2, GetScreenHeight() / 2 - 20, 30, WHITE);
    DrawText(jouerHint, GetScreenWidth() / 2 + jouerTextWidth / 2, GetScreenHeight() / 2 - 20, 30, WHITE);

    // Texte pour "Quitter"
    const char* quitterText = "Quitter";
    const char* quitterHint = "(Appuyez sur ECHAP ou ESPACE)";
    
    int quitterTextWidth = MeasureText(quitterText, 30);
    int quitterHintWidth = MeasureText(quitterHint, 30);
    
    DrawText(quitterText, GetScreenWidth() / 2 - (quitterTextWidth + quitterHintWidth) / 2, GetScreenHeight() / 2 + 20, 30, WHITE);
    DrawText(quitterHint, GetScreenWidth() / 2 + quitterTextWidth / 2, GetScreenHeight() / 2 + 20, 30, WHITE);

    EndDrawing();
}

bool Menu::IsPlaying() const {
    return isPlaying;
}

bool Menu::ShouldQuit() const {
    return shouldQuit;
}

