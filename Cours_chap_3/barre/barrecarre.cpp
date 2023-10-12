#include "barrecarre.h"


BarreCarre::BarreCarre(const string _ref, const int _longueur, const int _densite, const string _nom, const int _cote):
    Barre(_ref,_longueur,_densite,_nom),
    cote(_cote)
{

}

BarreCarre::~BarreCarre()
{

}

float BarreCarre::CalculerSection()
{
    int section;
    section = cote * cote;
    cout << "la section du carré est de : " << section << endl;
    return section;
}

void BarreCarre::CalculerMasse()
{
    int masse, section;
    section = CalculerSection();
    masse = longueur * section * densite;
    cout << "la masse du carré est de : " << masse << endl;
    cout << "+" << setfill('-') << setw(50) <<  setfill('-')  << "+" << endl;
}
