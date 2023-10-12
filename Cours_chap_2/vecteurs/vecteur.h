#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
using namespace std;

class Vecteur
{
public:
    Vecteur(const int _x=0,const int _y=0); // ce premier constructeur initialise x et y avec les paramètres
    //Vecteur(); // celui-ci initialise x et y à 0
    int getX() const; // accesseur pour l'attribut x
    void setX(int _newX); // mutateur pour l'attribut x
    Vecteur operator+ (const Vecteur &_autre);
    bool operator==(const Vecteur &_autre);
    Vecteur operator+=(const Vecteur &_autre);
    Vecteur operator-(const Vecteur &_autre);
    Vecteur operator-=(const Vecteur &_autre);
    int operator*(const Vecteur &_autre);
    int operator*=(const Vecteur &_autre);
    void Afficher();
    int getY() const;
    void setY(int newY);

private:
    int x;
    int y;
};

#endif // VECTEUR_H
