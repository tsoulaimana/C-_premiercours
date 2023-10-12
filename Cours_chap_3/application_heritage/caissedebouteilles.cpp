#include "caissedebouteilles.h"

CaisseDeBouteilles::CaisseDeBouteilles(int _largeur, int _hauteur, int _profondeur):
   Contenant(_largeur,_hauteur,_profondeur)
{

}

CaisseDeBouteilles::~CaisseDeBouteilles()
{
    cout << "destructeur de la classe CaisseDeBouteille" << endl ;
}

int CaisseDeBouteilles::CalculerVolume()
{

}
