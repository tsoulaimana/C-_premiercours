#ifndef MOTEUR_H
#define MOTEUR_H

class MccUldaq;
class Moteur
{
private:
    int numCanal;
    int consigneVitesse;
    double tensionMaxCommande ;
    const MccUldaq & laCarte; // Pour la relation d’agrégation,
                              // l’attribut est ici constant pour être en accord avec le passage de
        // paramètres. Il n’est pas modifié dans la classe Moteur.
public:
    Moteur(const MccUldaq & _laCarte);
    ~Moteur();
    void Demarrer();
    void Arreter();
    void FixerConsigne(const int _laConsigne);
};

#endif // MOTEUR_H
