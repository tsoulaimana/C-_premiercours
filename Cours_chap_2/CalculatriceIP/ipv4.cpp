#include "ipv4.h"

IPv4::IPv4(const unsigned char *_adresse, const unsigned char _cidr)
{
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
    for(int i=0; i<4; i++){
        adresse[i]=_adresse[i];
        if(_cidr<=32){
            CalculerMasque(_cidr);
        }
    }
}

IPv4::IPv4(const unsigned char *_adresse, const unsigned char *_masque)
{
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
    for(int i=0; i<4; i++){
        adresse[i]=_adresse[i];
        masque[i]=_masque[i];
    }

}

IPv4::~IPv4()
{
    delete [] adresse;
    delete [] masque;
}

IPv4::IPv4()
{
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
}
IPv4::IPv4(const IPv4 &_ipv4)
{
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
    for(int indice = 0 ; indice < 4 ; indice++)
    {
        adresse[indice] = _ipv4.adresse[indice];
        masque[indice] = _ipv4.masque[indice];
    }
}

IPv4 &IPv4::operator=(const IPv4 &_ipv4)
{
    if(adresse != _ipv4.adresse || masque != _ipv4.masque)
    {
        if(adresse != nullptr && masque != nullptr)
        {
            delete [] adresse;
            delete [] masque ;
        }
        adresse = new unsigned char [4];
        masque = new unsigned char [4];
        for(int indice = 0 ; indice < 4 ; indice++)
        {
            masque[indice] = _ipv4.masque[indice];
            adresse[indice] = _ipv4.adresse[indice];
        }
    }
    return *this;
}

void IPv4::ObtenirMasque(unsigned char *_masque)
{
    for(int indice = 0 ; indice < 4 ; indice++)
        _masque[indice] = masque[indice];
}

void IPv4::ObtenirAdresseReseau(unsigned char *_reseau)
{
    for(int indice = 0 ; indice < 4 ; indice++)
        _reseau[indice] = adresse[indice] & masque[indice] ;
}

void IPv4::ObtenirAdresseDiffusion(unsigned char *_diffusion)
{
    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice = 0 ; indice < 4 ; indice++)
        _diffusion[indice] = adresseDuReseau[indice] | ~masque[indice] ;
}

void IPv4::ObtenirPremiereAdresse(unsigned char *_premiere)
{
    for(int indice = 0 ; indice < 3 ; indice++)
        _premiere[indice] = adresse[indice] & masque[indice];
    for(int indice = 3 ; indice < 4 ; indice++)
        _premiere[indice] = adresse[indice] & masque[indice]+1;

}

void IPv4::ObtenirDerniereAdresse(unsigned char *_derniere)
{
    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice = 0 ; indice < 3 ; indice++)
        _derniere[indice] = adresseDuReseau[indice] | ~masque[indice];
    for(int indice = 3 ; indice < 4 ; indice++)
        _derniere[indice] = adresseDuReseau[indice] | ~masque[indice] -1;
}

void IPv4::NombreHotes(unsigned char *_hotes)
{

}


void IPv4::CalculerMasque(unsigned char _cidr)
{
    int indice ;
    // Le masque est remis à 0 -> 0.0.0.0
    for(indice = 0 ; indice < 4 ; indice++)
        masque[indice] = 0 ;
    indice = 0;
    // tant que le cidr est un multiple de 8
    while(_cidr >= 8)
    {
        masque[indice++] = 255 ;
        _cidr -= 8 ;
    }
    // Complément pour la fin du cidr (<8)
    unsigned char puissance = 128 ;
    while(_cidr-- > 0) // Après le test la variable _cidr est décrémentée
    { // les puissances de 2 sont ajoutées à l'octet par valeur décroissante
        masque[indice] += puissance ;
        puissance /=2 ;
    }
}


void AfficherTableau(unsigned char *tab)
{
    for(int indice=0 ; indice < 4 ; indice ++)
    {
        cout << static_cast<int> (tab[indice]);
        if(indice < 3)
            cout << "." ;
    }
    cout << endl;
}

