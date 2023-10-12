#include "tableau.h"


Tableau::Tableau(const int _taille):
    taille(_taille)
{
    if(taille <= 0)
    {
        ptr = nullptr;
        ErreurCreation excep(CREATION,"taille incorrecte lors de la création du tableau");
        throw (excep);
    }
    ptr = new int[taille];
}

Tableau::~Tableau()
{
    if(ptr != nullptr){
        delete[] ptr;
    }
}

void Tableau::Affecter(const int _indice, int _valeur)
{
    if(_indice < 0 || _indice > taille)
    {
        ErreurIndice excep(INDICE,"L'indice du tableau n'est pas correct lors de l’affectation");
        throw (excep);
    }
    ptr[_indice] = _valeur;
}

int &Tableau::operator[](const int _indice)
{
    if(_indice < 0 || _indice > taille)
    {
        ErreurIndice excep(INDICE,"L'indice du tableau n'est pas correct pour l’opérateur []");
        throw (excep);
    }
    return ptr[_indice];
}

ErreurCreation::ErreurCreation(const int _codeErreur, string _message):
    codeErreur(_codeErreur),
    message(_message)
{

}

int ErreurCreation::ObtenirCodeErreur() const
{
    return codeErreur;
}

string ErreurCreation::ObtenirDescription() const
{
    return message;
}

ErreurIndice::ErreurIndice(const int _codeErreur, string _message):
    codeErreur(_codeErreur),
    message(_message)
{

}

int ErreurIndice::ObtenirCodeErreur() const
{
    return codeErreur;
}

string ErreurIndice::ObtenirDescription() const
{
    return message;
}
