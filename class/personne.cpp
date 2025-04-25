#include "Personne.hpp"

// Constructeur
Personne::Personne(string n, int a, int pv, int e) {
    nom = n;
    age = a;
    pointsDeVie = pv;
    energie = e;
}

// Getters
string Personne::getNom() const {
    return nom;
}

int Personne::getAge() const {
    return age;
}

int Personne::getPointsDeVie() const {
    return pointsDeVie;
}

int Personne::getEnergie() const {
    return energie;
}

// Setters
void Personne::setNom(string n) {
    nom = n;
}

void Personne::setAge(int a) {
    age = a;
}

void Personne::setPointsDeVie(int pv) {
    pointsDeVie = pv;
}

void Personne::setEnergie(int e) {
    energie = e;
}

// Méthode pour afficher les informations de la personne
void Personne::afficherPersonne() const {
    cout << "Nom: " << nom << endl;
    cout << "Âge: " << age << " ans" << endl;
    cout << "Points de vie: " << pointsDeVie << endl;
    cout << "Énergie: " << energie << endl;
}
