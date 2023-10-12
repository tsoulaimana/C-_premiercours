#include "ipv4.h"
#include <iostream>

using namespace std;
void AfficherTableau(unsigned char *tab);

int main()
{
    unsigned char adresse[4]= {192,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];
    unsigned char premiere[4];
    unsigned char derniere[4];
    IPv4 *uneAdresse = new IPv4(adresse, 24); // instanciation de la classe IPv4
    cout << "Adresse IPv4 : ";
    AfficherTableau(adresse);
    uneAdresse->ObtenirMasque(masque); // appel d'une méthode
    cout << "Masque : ";
    AfficherTableau(masque);
    uneAdresse->ObtenirAdresseReseau(reseau);
    cout << "Réseau : ";
    AfficherTableau(reseau);
    uneAdresse->ObtenirAdresseDiffusion(diffusion);
    cout << "Diffusion : ";
    AfficherTableau(diffusion);
    uneAdresse->ObtenirPremiereAdresse(premiere);
    cout<< "Première adresse: ";
    AfficherTableau(premiere);
    uneAdresse->ObtenirDerniereAdresse(derniere);
    cout<< "Dernière adresse: ";
    AfficherTableau(derniere);
    cout << "Adresse réseau avant : ";

    IPv4 adresseCopie = *uneAdresse;
    adresseCopie.ObtenirAdresseReseau(reseau);
    AfficherTableau(reseau);
    delete uneAdresse;

    cout << "Adresse réseau après destruction : ";
    adresseCopie.ObtenirAdresseReseau(reseau);
    AfficherTableau(reseau);

    return 0;
}
