#include "vecteur.h"

Vecteur::Vecteur(const int _x, const int _y):
    x(_x),y(_y)
{
    // autre méthode
    // x = _x;
    // y = _y;


}

/*Vecteur::Vecteur():
    x(0),y(0)
{

}*/

int Vecteur::getX() const
{
    return x;
}

void Vecteur::setX(int _newX)
{
    x = _newX;
}

Vecteur Vecteur::operator+(const Vecteur &_autre)
{
    return Vecteur(x +_autre.x, y + _autre.y);
}

bool Vecteur::operator==(const Vecteur &_autre)
{
    bool retour = false;
    if(x == _autre.x && y == _autre.y)
    retour = true;
    return retour;
}

Vecteur Vecteur::operator+=(const Vecteur &_autre)
{
    return Vecteur(x +=_autre.x, y += _autre.y);
}

Vecteur Vecteur::operator-(const Vecteur &_autre)
{
    return Vecteur(x -_autre.x, y - _autre.y);
}

Vecteur Vecteur::operator-=(const Vecteur &_autre)
{
    return Vecteur(x -=_autre.x, y -= _autre.y);
}

int Vecteur::operator*(const Vecteur &_autre)
{

}

int Vecteur::operator*=(const Vecteur &_autre)
{

}

void Vecteur::Afficher()
{
    cout << "(" << x << "," << y << ")" << endl;
}

int Vecteur::getY() const
{
    return y;
}

void Vecteur::setY(int newY)
{
    y = newY;
}
