#ifndef ELEMENT_H
#define ELEMENT_H
#include "vecteur.h"
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Element
{
public:
    Element(const int _vitesse=1);
    virtual ~Element();
    virtual void Afficher()=0;
    int getNumero() const;
    void setNumero(const int _numero);
    virtual double ObtenirLongueur()=0;
    virtual double ObtenirDuree()=0;
    virtual Vecteur ObtenirVecteurArrivee()=0;
protected:
    int numero;
    double vitesse;
};

#endif // ELEMENT_H
