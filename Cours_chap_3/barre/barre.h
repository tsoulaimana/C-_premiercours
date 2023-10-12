#ifndef BARRE_H
#define BARRE_H

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Barre
{
public:
    Barre(const string _ref, const int _longueur, const int _densite, const string _nom);
    ~Barre();
    void AfficherCaracteristiques();
    int getLongueur() const;
    void setLongueur(int _longueur);
protected:
    string ref;
    int longueur;
    int densite;
    string nom;
};

#endif // BARRE_H
