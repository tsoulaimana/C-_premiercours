#include "barrecarree.h"

/**
 * @brief BarreCarree::BarreCarree
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _cote
 */
BarreCarree::BarreCarree(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _cote):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    cote(_cote)
{
}

/**
 * @brief BarreCarree::CalculerSection
 * @return
 */
int BarreCarree::CalculerSection()
{
    return cote*cote;
}

/**
 * @brief BarreCarree::AfficherCaracteristiques
 */
void BarreCarree::AfficherCaracteristiques()
{
    Barre::AfficherCaracteristiques();
    cout << "La taille du côté est de: " << cote << " m" << endl;
}

/**
 * @brief BarreCarree::CalculerMasse
 * @return
 */
float BarreCarree::CalculerMasse()
{
    return longueur*CalculerSection()*densite;

}
