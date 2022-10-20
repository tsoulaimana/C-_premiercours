#ifndef MAGASIN_H
#define MAGASIN_H

#include "rouleau.h"
#include "alveoleslibres.h"
#include "chariot.h"
#include "stock.h"

#define NB_RANGEE 2
#define NB_COLONNES 5

class Magasin
{
public:
    Magasin();
    void EntrerRouleau();
    void SortirRouleau();
    void Visualise();
private:
    AlveolesLibres lesAlveolesLibres;
    Chariot leChariot;
    Stock leStock;
};

#endif // MAGASIN_H
