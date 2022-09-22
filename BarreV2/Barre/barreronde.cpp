#include "barreronde.h"

/**
 * @brief BarreRonde::BarreRonde
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _diametre
 */
BarreRonde::BarreRonde(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _diametre):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    diametre(_diametre)

{
}

/**
 * @brief BarreRonde::CalculerSection
 * @return
 */
int BarreRonde::CalculerSection()
{
    return M_PI*(diametre^2)/4;
}

/**
 * @brief BarreRonde::AfficherCaracteristiques
 */
void BarreRonde::AfficherCaracteristiques()
{
    Barre::AfficherCaracteristiques();
    cout << "Le diametre est de " << diametre << " m" << endl;
}

/**
 * @brief BarreRonde::CalculerMasse
 * @return
 */
float BarreRonde::CalculerMasse()
{
    return longueur*CalculerSection()*densite;
}
