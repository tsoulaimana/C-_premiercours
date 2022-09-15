#include "barrecarree.h"


BarreCarree::BarreCarree(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _cote):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    cote(_cote)
{
}

int BarreCarree::CalculerSection()
{
    return cote*cote;
}

int BarreCarree::CalculerMasse()
{
    return longueur*CalculerSection()*densite;

}
