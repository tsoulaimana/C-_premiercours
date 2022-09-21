#include "zonearrosage.h"



ZoneArrosage::ZoneArrosage(int _numZone, const int _commandeVanne, const int _senseAVanne, const int _senseBVanne, const int _brocheHumidite):
    laVanne(_commandeVanne,_senseAVanne,_senseBVanne),
    leCapteurHumidite(_brocheHumidite),
    numZone(_numZone)
{

}

void ZoneArrosage::Piloter()
{

}
