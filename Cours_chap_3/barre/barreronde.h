#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"
#include <cmath>

class BarreRonde : public Barre
{
public:
    BarreRonde(const string _ref, const int _longueur, const int _densite, const string _nom, const int _diametre);
    ~BarreRonde();
    float CalculerSection();
    void CalculerMasse();
private:
    int diametre;
};

#endif // BARRERONDE_H
