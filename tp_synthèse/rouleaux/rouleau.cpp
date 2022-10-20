#include "rouleau.h"

Rouleau::Rouleau(){}

Rouleau::Rouleau(const string _reference, const int _diametre):
    reference(_reference),
    diametre(_diametre)
{

}

void Rouleau::AffecterAlveole(const int _rangee, const int _colonne)

{
    rangee=_rangee;
    colonne=_colonne;
}

void Rouleau::ObtenirLocalisation(int &_rangee, int &_colonne) const
{
    _rangee = rangee;
    _colonne = colonne;
}

bool Rouleau::operator<(const Rouleau _autreRouleau) const
{
   bool rouleau= false;
   if(diametre > _autreRouleau.diametre){
       rouleau = true;
   }
   return rouleau;
}

int Rouleau::operator-(const Rouleau _autreRouleau) const
{
    int diff = 0;
    diff = diametre-_autreRouleau.diametre;
    return diff;
}

void Rouleau::Visualiser() const
{
    cout<<"Rouleau référence : "<< reference << " Diametre : "<<diametre<<endl;
    cout<<"Dans magasin en "<< rangee << " - "<< colonne <<endl;
}
