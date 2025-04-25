#include "velo.hpp"
#include <iostream>
using namespace std;

//** 1) - constructeur par defaut */
Velo::Velo()
{
    vitesse = 0;
    acceleration = 0;
    distance = 0;
    temps = 0;
}

//** 2) - constructeur avec des paramètres */
Velo::Velo(double v, double a, double d, double t)
{
    vitesse = v;
    acceleration = a;
    distance = d;
    temps = t;
}

//** 3) - Mutateur set pour vitesse */
void Velo::setVitesse(double v)
{
    vitesse = v;
}

//** 4) - Mutateur set pour accélération */
void Velo::setAcceleration(double a)
{
    acceleration = a;
}

//** 5) - Mutateur set pour distance */
void Velo::setDistance(double d)
{
    distance = d;
}

//** 6) - Mutateur set pour temps */
void Velo::setTemps(double t)
{
    temps = t;
}

//** 7) - Accesseur get pour vitesse */
double Velo::getVitesse()
{
    return vitesse;
}

//** 8) - Accesseur get pour accélération */
double Velo::getAcceleration()
{
    return acceleration;
}

//** 9) - Accesseur get pour distance */
double Velo::getDistance()
{
    return distance;
}

//** 10) - Accesseur get pour temps */
double Velo::getTemps()
{
    return temps;
}

//** 11) - Méthode afficher */
void Velo::afficher()
{
    cout << "Vitesse: " << vitesse << endl;
    cout << "Acceleration: " << acceleration << endl;
    cout << "Distance: " << distance << endl;
    cout << "Temps: " << temps << endl;
}

//** 12) - Méthode calculerVitesse */
double Velo::calculerVitesse()
{
    return distance / temps;
}

//** 13) - Méthode calculerAcceleration */
double Velo::calculerAcceleration()
{
    return (vitesse - 0) / temps;
}

//** 14) - Méthode calculerDistance */
double Velo::calculerDistance()
{
    return vitesse * temps + 0.5 * acceleration * temps * temps;
}

//** 15) - Méthode pour calculer le temps */
double Velo::calculerTemps()
{
    return distance / vitesse;
}

//** 16) - Méthode calculerVitesse avec paramètre */
double Velo::calculerVitesse(double d, double t)
{
    return d / t;
}

//** 17) - Méthode calculerAcceleration avec paramètre */
double Velo::calculerAcceleration(double v, double t)
{
    return (v - 0) / t;
}

//** 18) - Méthode calculerTemps avec paramètre */
double Velo::calculerTemps(double d, double v)
{
    return d / v;
}
