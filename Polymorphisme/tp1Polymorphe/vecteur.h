#ifndef VECTEUR_H
#define VECTEUR_H


class Vecteur
{
public:
    Vecteur(const double x, const double y);
    //operator
    //operator
    void Afficher();
    void setX(const double _x);
    double getX();
    void setY(const double _x);
    double getY();
private:
    double x;
    double y;
};

#endif // VECTEUR_H
