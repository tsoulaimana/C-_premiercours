#include "contenant.h"



Contenant::Contenant(const int _largeur, const int _hauteur, const int _profondeur):
    largeur(_largeur), hauteur(_hauteur), profondeur(_profondeur)
{
    cout << "constructeur de la classe Contenant" << endl ;
}

int Contenant::CalculerVolume()
{
    return largeur*hauteur*profondeur;
}

Contenant::~Contenant()
{
    cout << "destructeur de la classe Contenant" << endl ;
}
