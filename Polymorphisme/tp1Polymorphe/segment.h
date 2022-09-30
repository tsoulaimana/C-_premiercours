#ifndef SEGMENT_H
#define SEGMENT_H

#include "element.h"

class Segment : public Element
{
public:
    Segment(const double _longueur, const double _angle, const int vitesse);
    void Afficher();
    double ObtenirLongueur();
    double ObtenirDuree();
    Vecteur ObtenirVecteurArrivee();
private:
    double longueur;
    double angle;
    Vecteur vecteur;
};

#endif // SEGMENT_H
