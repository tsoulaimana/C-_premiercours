#ifndef TABLEAU_H
#define TABLEAU_H
#include <string>

using namespace std;

enum erreurs
{
CREATION,
INDICE
};

class Tableau
{

public:
    Tableau(const int _taille);
    ~Tableau();
    void Affecter(const int _indice, int _valeur);
    int &operator[](const int _indice);
private:
    int *ptr;
    int taille;
};

class ErreurCreation
{
private:
    int codeErreur;
    string message;
public:
    ErreurCreation(const int _codeErreur, string _message);
    int ObtenirCodeErreur() const;
    string ObtenirDescription() const;
};

class ErreurIndice
{
private:
    int codeErreur;
    string message;
public:
    ErreurIndice(const int _codeErreur, string _message);
    int ObtenirCodeErreur() const;
    string ObtenirDescription() const;
};

#endif // TABLEAU_H
