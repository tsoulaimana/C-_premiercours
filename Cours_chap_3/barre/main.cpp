#include <iostream>
#include "barre.h"
#include "barrecarre.h"
#include "barrerectangle.h"
#include "barreronde.h"

using namespace std;

int main()
{
    Barre uneBarre("Barre",4,4,"platinium");
    BarreRonde unRond("Rond",4,7,"platinium",5);
    BarreRectangle unRectangle("Rectangle",6,3,"platinium",1,8);
    BarreCarre unCarre("Barre",7,14,"platinium",5);
    uneBarre.AfficherCaracteristiques();
    unRond.CalculerMasse();
    unRectangle.CalculerMasse();
    unCarre.CalculerMasse();
    return 0;
}
