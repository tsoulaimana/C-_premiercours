#include "element.h"


Element::Element(const int _vitesse):
    numero(0),
    vitesse(_vitesse)
{

}

Element::~Element()
{

}

void Element::Afficher()
{

}

int Element::getNumero() const
{
    return numero;
}

void Element::setNumero(const int _numero)
{
    numero = _numero;
}
