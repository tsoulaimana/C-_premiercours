#include "segment.h"



Segment::Segment(const double _longueur, const double _angle, const int vitesse):
    Element(vitesse),
    longueur(_longueur),
    angle(_angle),
    vecteur(Vecteur(0,0))
{

}

void Segment::Afficher()
{
    cout << "(" << numero << ")" << " SEGMENT L = " << setw(10) << left << longueur << "A = " << setw(10) << left << angle << " V = " << vitesse << endl;
    cout << "Vecteur en ";
    vecteur.Afficher();
}

double Segment::ObtenirLongueur()
{
    return longueur;
}

double Segment::ObtenirDuree()
{
    return longueur/vitesse;
}

Vecteur Segment::ObtenirVecteurArrivee()
{
    int x = 0;
    int y = 0;
    x = longueur*cos(angle);
    y = longueur*cos(angle);
    return vecteur +Vecteur(x,y);
}
