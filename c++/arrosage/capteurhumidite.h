#ifndef CAPTEURHUMIDITE_H
#define CAPTEURHUMIDITE_H

#define gpio_num_t int

class CapteurHumidite
{
public:
    CapteurHumidite(const gpio_num_t _brocheCapteur = 10);
    int MesureHumiditeDuSol();
private:
    gpio_num_t Capteur;
};

#endif // CAPTEURHUMIDITE_H
