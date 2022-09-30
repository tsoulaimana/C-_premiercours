#ifndef VECTEUR_H
#define VECTEUR_H
#include <iostream>
#include <iomanip>
using namespace std;

class Vecteur
{
public:
    Vecteur(const double _x, const double _y);
    Vecteur operator +(const Vecteur &_autre);
    Vecteur operator -(const Vecteur &_autre);
    void Afficher();   
    double getX() const;
    void setX(double _x);
    double getY() const;
    void setY(double _y);
protected:
    double x;
    double y;
};

#endif // VECTEUR_H
