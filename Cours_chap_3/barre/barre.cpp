#include "barre.h"

Barre::Barre(const string _ref, const int _longueur, const int _densite, const string _nom):
    ref(_ref), longueur(_longueur), densite(_densite), nom(_nom)
{
}

Barre::~Barre()
{

}

void Barre::AfficherCaracteristiques()
{
    cout << "la reference est : " << ref << endl;
    cout << "la longueur est de : " << longueur << endl;
    cout << "la densite est de : " << densite << endl;
    cout << "la nom est : " << nom << endl;
    cout << "+" << setfill('-') << setw(50) <<  setfill('-')  << "+" << endl;
}

