#include "capteurhumidite.h"

CapteurHumidite::CapteurHumidite(const int _brocheCapteur):
    brocheCapteur(_brocheCapteur)
{
    cout<<"Afficher la broche du capteur d'humidite : " << brocheCapteur<< endl;
}

int CapteurHumidite::MesureHumiditeDuSol()
{

}
