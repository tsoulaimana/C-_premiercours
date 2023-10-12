#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"

class BarreRectangle : public Barre
{
public:
    BarreRectangle(const string _ref, const int _longueur, const int _densite, const string _nom, const int _largeur, const int _long);
    ~BarreRectangle();
    float CalculerSection();
    void CalculerMasse();
private:
    int largeur;
    int longe;
};

#endif // BARRERECTANGLE_H
