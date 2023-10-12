#include "vecteur.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "ruru la best" << endl << endl;
    Vecteur va(4,4);
    Vecteur vb(4,1);
    Vecteur resultat;
    cout << "Vecteur a : ";
    va.Afficher();
    cout << "Vecteur b : ";
    vb.Afficher();

    resultat = va + vb;
    cout << "Vecteur resultat : ";
    resultat.Afficher();

    if(va == vb)
    cout << "les vecteurs sont identiques" << endl;
    else
    cout << "va est différent de vb" << endl;
    return 0;
}
