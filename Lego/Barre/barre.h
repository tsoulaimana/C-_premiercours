#ifndef BARRE_H
#define BARRE_H

#include <iostream>
using namespace std;

class Barre
{
public:
    Barre(string _reference, const int _longueur, const int _densite, string _nomAlliage);
    void AfficherCaractéristiques();
    ~Barre();
private:
    string reference;
    int longueur;
    int densite;
    string nomAlliage;
};

#endif // BARRE_H
