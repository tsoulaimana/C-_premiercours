#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H

#include <string>
using namespace std;
#include "vanne.h"
#include "capteurhumidite.h"
class ZoneArrosage
{
private:
    Vanne *laVanne;
    CapteurHumidite *leCapteurHumidite;
    int numZone;
public:
    ZoneArrosage(int _numZone,
                 const gpio_num_t _commandeVanne,
                 const gpio_num_t _senseAVanne,
                 const gpio_num_t _senseBVanne,
                 const gpio_num_t _brocheHumidite);
    ZoneArrosage(const string _initialisationZone);
    ~ZoneArrosage();
    void Piloter();
};

#endif // ZONEARROSAGE_H
