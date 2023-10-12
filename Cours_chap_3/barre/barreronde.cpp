#include "barreronde.h"



BarreRonde::BarreRonde(const string _ref, const int _longueur, const int _densite, const string _nom, const int _diametre):
    Barre(_ref,_longueur,_densite,_nom),
    diametre(_diametre)
{

}

BarreRonde::~BarreRonde()
{

}

float BarreRonde::CalculerSection()
{
    int section;
    section = M_PI * (diametre*diametre)/4;
    cout << "la section du cercle est de : " << section << endl;
    return section;
}

void BarreRonde::CalculerMasse()
{
    int masse, section;
    section = CalculerSection();
    masse = longueur * section * densite;
    cout << "la masse du cercle est de : " << masse << endl;
    cout << "+" << setfill('-') << setw(50) <<  setfill('-')  << "+" << endl;
}
