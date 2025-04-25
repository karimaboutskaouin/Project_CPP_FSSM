#ifndef ROUTE_HPP
#define ROUTE_HPP

#include <string>
#include <vector>

using namespace std;

class Route {
private:
    string nom;  // Nom de la route
    double distance;  // Distance de la route
    vector<string> obstacles;  // Liste d'obstacles sur la route

public:
    // Constructeur
    Route(string n, double l);

    // Getters
    string getNom() const;
    double getDistance() const;
    vector<string> getObstacles() const;

    // Méthode pour ajouter un obstacle
    void ajouterObstacle(const string& obstacle);

    // Vérifier si un obstacle spécifique est sur la route
    bool aObstacle(const string& obstacle) const;
};

#endif // ROUTE_HPP
