#include "segment.h"
#include "trajectoire.h"
#include <iostream>
#include "math.h"

using namespace std;

int main()
{


    Trajectoire letraject(3);
    letraject.Ajouter(new Segment(9,0,3));
    letraject.Ajouter(new Segment(5,0.92795));
    letraject.Ajouter(new Segment(6,M_PI/2));
    letraject.Afficher();

    return 0;
}
