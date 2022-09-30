#include "segment.h"



Segment::Segment(const double _longueur, const double _angle, const int vitesse):
    Element(vitesse),
    longueur(_longueur),
    angle(_angle)
{

}

void Segment::Afficher()
{
    cout << "(" << numero << ")" << "SEGEMENT L = " << longueur << setw(12) << "A = " << angle << setw(15) << "V = " << vitesse << endl;

}
