#ifndef OBJET_COLLECTION_HPP
#define OBJET_COLLECTION_HPP

#include <string>
using namespace std;

class collectables {
private:
    std::string name;  // Le nom de l'objet collecté
    int valeur;        // La valeur de l'objet

public:
    // Constructeur par défaut
    collectables();

    // Constructeur avec paramètres
    collectables(const string &n, int v);

    // Getters
    string getName() const;
    int getValeur() const;

    // Setters
    void setName(const string &n);
    void setValeur(int v);

    // Méthode d'affichage
    void afficher() const;
};

#endif
