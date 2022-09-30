#include "vecteur.h"


Vecteur::Vecteur(const double _x, const double _y):
    x(_x),
    y(_y)
{

}

Vecteur Vecteur::operator +(const Vecteur &_autre)
{
    return Vecteur(this->x + _autre.x, this->y + _autre.y);
}

Vecteur Vecteur::operator -(const Vecteur &_autre)
{
    return Vecteur(this->x - _autre.x, this->y - _autre.y);
}

void Vecteur::Afficher()
{
    cout << "(" << this->x << ")" << ", " << "(" << this->y << ")" << endl;
}

double Vecteur::getX() const
{
    return x;
}

void Vecteur::setX(double _x)
{
    x = _x;
}

double Vecteur::getY() const
{
    return y;
}

void Vecteur::setY(double _x)
{
    y = _x;
}
