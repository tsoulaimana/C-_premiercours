#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Element
{
public:
    Element();
    virtual ~Element();
    virtual void Afficher();
};

#endif // ELEMENT_H
