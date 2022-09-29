#include "segment.h"
#include "trajectoire.h"
#include <iostream>

using namespace std;

int main()
{
    Segment taille(9,0);
    Segment taille2(5,0.927295);
    Trajectoire traj(1);
    traj.Afficher();
    taille.Afficher();
    taille2.Afficher();
    return 0;
}
