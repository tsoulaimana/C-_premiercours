#include "barrerectangle.h"


/**
 * @brief BarreRectangle::BarreRectangle
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _largeur
 */
BarreRectangle::BarreRectangle(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _largeur):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    largeur(_largeur)
{
}

/**
 * @brief BarreRectangle::AfficherCaracteristiques
 */
void BarreRectangle::AfficherCaracteristiques()
{
    Barre::AfficherCaracteristiques();
    cout << "La largeur est de: " << largeur << " m" << endl;
}

/**
 * @brief BarreRectangle::CalculerSection
 * @return
 */
int BarreRectangle::CalculerSection()
{
    return longueur*largeur;
}

/**
 * @brief BarreRectangle::CalculerMasse
 * @return
 */
float BarreRectangle::CalculerMasse()
{
    return longueur*CalculerSection()*densite;
}
