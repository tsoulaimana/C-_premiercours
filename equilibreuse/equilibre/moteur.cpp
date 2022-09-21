#include "moteur.h"
#include "mcculdaq.h"

Moteur::Moteur(const MccUldaq &_laCarte, const int _numCanal, const double _tensionMaxCommande):
    numCanal(_numCanal),
    tensionMaxCommande(_tensionMaxCommande),
    laCarte(_laCarte)
{
    laCarte.ulAOut(numCanal,0);
}
