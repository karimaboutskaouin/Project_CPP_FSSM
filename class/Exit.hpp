
#ifndef EXIT_HPP
#define EXIT_HPP

#include <string>

using namespace std;

class Exit {
private:
    string nom;  // Nom de l'Exit
    int x, y;    // Position de l'Exit sur la carte

public:
    // Constructeur
    Exit(string n, int posX, int posY);

    // Getters
    string getNom() const;
    int getX() const;
    int getY() const;

    // Méthode pour ouvrir l'Exit
    void ouvrirExit();

    // Méthode pour fermer l'Exit
    void fermerExit();

    // Vérifier si l'Exit est ouvert
    bool estOuvert() const;

private:
    bool ouvert;  // État de l'Exit (ouvert ou fermé)
};

#endif // EXIT_HPP
