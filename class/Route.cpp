#include "Route.hpp"

// Constructeur
Route::Route(string n, double l) 
    : nom(n), distance(l) {}

// Getter pour le nom
string Route::getNom() const {
    return nom;
}

// Getter pour la distance
double Route::getDistance() const {
    return distance;
}

// Getter pour les obstacles
vector<string> Route::getObstacles() const {
    return obstacles;
}

// Ajouter un obstacle à la route
void Route::ajouterObstacle(const string& obstacle) {
    obstacles.push_back(obstacle);
}

// Vérifier si un obstacle spécifique est sur la route
bool Route::aObstacle(const string& obstacle) const {
    for (const string& o : obstacles) {
        if (o == obstacle) {
            return true;
        }
    }
    return false;
}
