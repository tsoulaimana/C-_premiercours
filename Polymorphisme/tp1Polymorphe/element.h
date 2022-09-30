#ifndef ELEMENT_H
#define ELEMENT_H
#include "vecteur.h"
#include <iostream>
#include <iomanip>
using namespace std;

class Element
{
public:
    Element(const int _vitesse=1);
    virtual ~Element();
    virtual void Afficher()=0;
    int getNumero() const;
    void setNumero(const int _numero);
    double ObtenirLongueur();
    double ObtenirDuree();
    Vecteur ObtenirVecteurArrivee();
protected:
    int numero;
    double vitesse;
};

#endif // ELEMENT_H
