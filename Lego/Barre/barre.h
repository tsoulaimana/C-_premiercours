#ifndef BARRE_H
#define BARRE_H

#include <math.h>
#include <iostream>
using namespace std;

class Barre
{
public:
    Barre(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage);
    void AfficherCaracteristiques();
protected:
    string reference;
    unsigned int longueur;
    double densite;
    string nomAlliage;
};

#endif // BARRE_H
