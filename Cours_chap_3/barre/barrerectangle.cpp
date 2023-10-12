#include "barrerectangle.h"

BarreRectangle::BarreRectangle(const string _ref, const int _longueur, const int _densite, const string _nom, const int _largeur, const int _long):
    Barre(_ref,_longueur,_densite,_nom),
    largeur(_largeur), longe(_long)
{

}

BarreRectangle::~BarreRectangle()
{

}

float BarreRectangle::CalculerSection()
{
    int section;
    section = longe * largeur;
    cout << "la section du rectangle est de : " << section << endl;
    return section;
}

void BarreRectangle::CalculerMasse()
{
    int masse, section;
    section = CalculerSection();
    masse = longueur * section * densite;
    cout << "la masse du rectangle est de : " << masse << endl;
    cout << "+" << setfill('-') << setw(50) <<  setfill('-')  << "+" << endl;
}
