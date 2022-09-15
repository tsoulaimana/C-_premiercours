#include "barre.h"


Barre::Barre(string _reference, const int _longueur, const int _densite, string _nomAlliage):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nomAlliage(_nomAlliage)
{

}



void Barre::AfficherCaractéristiques()
{
    cout << "la reference est de: " << reference << endl;
    cout << "la longueur est de: " << longueur << endl;
    cout << "la densite est de: " << densite<< endl;
    cout << "le nom de l'alliage est: " << nomAlliage << endl;
}

Barre::~Barre()
{
    cout << "Destructeur barre" << endl;
}
