#include "zonearrosage.h"



/*ZoneArrosage::ZoneArrosage(int _numZone, const int _commandeVanne, const int _senseAVanne, const int _senseBVanne, const int _brocheHumidite):
    laVanne(_commandeVanne,_senseAVanne,_senseBVanne),
    leCapteurHumidite(_brocheHumidite),
    numZone(_numZone)
{

}

sous forme instance automatique
*/


ZoneArrosage::ZoneArrosage(const string _initialisationZone)
{
    int parametres[5];
    size_t prec = 0;
    size_t pos = 0;
    for (int indice = 0;indice < 5;indice++)
    {
    pos = _initialisationZone.find(' ',prec);
    parametres[indice] = atoi(_initialisationZone.substr(prec,pos).c_str());
    prec = pos + 1; // on incrémente pos pour le tour d'après.
    }
    numZone = parametres[0];
    laVanne = new Vanne(parametres[1],parametres[2],parametres[3]);  //veris
    leCapteurHumidite = new CapteurHumidite(parametres[4]);
}

ZoneArrosage::~ZoneArrosage()
{
    delete laVanne;
    delete leCapteurHumidite;
}

void ZoneArrosage::Piloter()
{

}
