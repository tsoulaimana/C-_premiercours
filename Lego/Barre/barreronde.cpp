#include "barreronde.h"


BarreRonde::BarreRonde(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _diametre):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    diametre(_diametre)

{
}

int BarreRonde::CalculerSection()
{
    return M_PI*(diametre^2)/4;
}

int BarreRonde::CalculerMasse()
{
    return longueur*CalculerSection()*densite;
}
