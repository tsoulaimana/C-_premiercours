#include "barrerectangle.h"



BarreRectangle::BarreRectangle(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _largeur):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    largeur(_largeur)
{
}

int BarreRectangle::CalculerSection()
{
    return longueur*largeur;
}

int BarreRectangle::CalculerMasse()
{
    return longueur*CalculerSection()*densite;
}
