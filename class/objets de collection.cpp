#include "objets_de_collection.hpp"
#include <iostream>
using namespace std;

// Constructeur par défaut
collectables::collectables() {
    name = "Haname";  // Initialisation du nom par défaut à "Haname"
    valeur = 0;       // Valeur initiale à 0
}

// Constructeur avec paramètres
collectables::collectables(const string &n, int v) {
    name = n;         // Initialisation du nom avec le paramètre passé
    valeur = v;       // Initialisation de la valeur avec le paramètre passé
}

// Getter pour le nom
string collectables::getName() const {
    return name;
}

// Getter pour la valeur
int collectables::getValeur() const {
    return valeur;
}

// Setter pour le nom
void collectables::setName(const string &n) {
    name = n;         // Modifie le nom
}

// Setter pour la valeur
void collectables::setValeur(int v) {
    valeur = v;       // Modifie la valeur
}

// Méthode d'affichage
void collectables::afficher() const {
    cout << "Nom de l'objet : " << name << endl;
    cout << "Valeur de l'objet : " << valeur << endl;
}
