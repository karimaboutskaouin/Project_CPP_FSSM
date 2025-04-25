#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
using namespace std;

class Personne {
private:
    string nom;       // Nom du personnage
    int age;          // Âge ou niveau du personnage
    int pointsDeVie;  // Points de vie du personnage
    int energie;      // Niveau d'énergie du personnage

public:
    // Constructeur par défaut
    Personne(string n, int a, int pv, int e);

    // Getters
    string getNom() const;
    int getAge() const;
    int getPointsDeVie() const;
    int getEnergie() const;

    // Setters
    void setNom(string n);
    void setAge(int a);
    void setPointsDeVie(int pv);
    void setEnergie(int e);

    // Méthode pour afficher les informations de la personne
    void afficherPersonne() const;
};

#endif
