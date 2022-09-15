#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"

class BarreRonde : public Barre
{
public:
    BarreRonde(string _reference, const int _longueur, const int _densite, string _nomAlliage, const double _diametre);
    void CalculerSection();
private:
    double diametre;
};

#endif // BARRERONDE_H
