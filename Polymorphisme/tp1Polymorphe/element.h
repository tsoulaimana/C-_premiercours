#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>
#include <iomanip>
using namespace std;

class Element
{
public:
    Element(const int _vitesse);
    virtual ~Element();
    virtual void Afficher()=0;
    int getNumero() const;
    void setNumero(int newNumero);

protected:
    int numero;
    double vitesse;
};

#endif // ELEMENT_H
