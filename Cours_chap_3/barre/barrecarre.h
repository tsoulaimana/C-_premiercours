#ifndef BARRECARRE_H
#define BARRECARRE_H

#include "barre.h"

class BarreCarre : public Barre
{
public:
    BarreCarre(const string _ref, const int _longueur, const int _densite, const string _nom, const int _cote);
    ~BarreCarre();
    float CalculerSection();
    void CalculerMasse();
private:
    int cote;
};

#endif // BARRECARRE_H
