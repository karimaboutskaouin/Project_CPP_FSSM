#include "Exit.hpp"

// Constructeur
Exit::Exit(string n, int posX, int posY)
    : nom(n), x(posX), y(posY), ouvert(false) {}

// Getter pour le nom
string Exit::getNom() const {
    return nom;
}

// Getter pour la position X
int Exit::getX() const {
    return x;
}

// Getter pour la position Y
int Exit::getY() const {
    return y;
}

// Ouvrir l'Exit
void Exit::ouvrirExit() {
    ouvert = true;
}

// Fermer l'Exit
void Exit::fermerExit() {
    ouvert = false;
}

// Vérifier si l'Exit est ouvert
bool Exit::estOuvert() const {
    return ouvert;
}
