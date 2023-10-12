#include "vanne.h"

Vanne::Vanne(const int _brocheImpulsion, const int _sensA, const int _sensB):
    impulsion(_brocheImpulsion), sensA(_sensA), sensB(_sensB)
{
    cout << "Afficher dans la Vanne, l'impulsion : "<< impulsion << endl;
    cout << "Afficher dans la Vanne, le senseA : "<< sensA << endl;
    cout << "Afficher dans la Vanne, le sensB : "<< sensB <<endl;
}

void Vanne::Ouvrir()
{

}

void Vanne::Fermer()
{

}
