#ifndef CONTENANT_H
#define CONTENANT_H
#include <iomanip>
#include <iostream>

using namespace std;

class Contenant
{
public:
    Contenant(const int _largeur, const int _hauteur, const int _profondeur);
    int CalculerVolume();
    ~Contenant();
protected:
    int largeur;
    int hauteur;
    int profondeur;
};

#endif // CONTENANT_H
