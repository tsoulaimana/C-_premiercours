#include "alveoleslibres.h"
#include "magasin.h"
#include "menu.h"
#include "rouleau.h"
#include "stock.h"
#include <iostream>

using namespace std;

int main()
{
    Magasin leMagasin;
    int choix;

        try{
            Menu leMenu("../rouleaux/magasin.txt");
            do
            {
                choix = leMenu.Afficher();
                switch (choix)
                {
                case OPTION_1:
                    system("clear");
                    leMagasin.EntrerRouleau();
                    Menu::AttendreAppuiTouche();
                    break;
                case OPTION_2:
                    system("clear");
                    leMagasin.SortirRouleau();
                    Menu::AttendreAppuiTouche();
                    break;
                case OPTION_3:
                    system("clear");
                    cout << endl << "Affichage des rouleaux" << endl;
                    leMagasin.Visualise();
                    Menu::AttendreAppuiTouche();
                    break;
                }

            } while(choix != QUITTER);
        }
        catch(std::runtime_error &e){
            cout << e.what() << endl;
            exit(EXIT_FAILURE);
        }
    return 0;
}




/*

teste stock

int main()
{
    Stock stock;
    string reference;
    Rouleau *nouveauRouleau;
    int choix;
    int diametre;
    char rep;
    int nbRouleaux = 0;
    POSITION_STOCK posDebut;
    POSITION_STOCK memoDebut;

        try{
            Menu leMenu("../rouleaux/stock.txt");
            do
            {
                choix = leMenu.Afficher();
                switch (choix)
                {
                case OPTION_1:
                    system("clear");
                    cout << "Indiquer les caractéristiques du rouleau à ajouter " << endl;
                    cout << "Référence: ";
                    cin >> reference;
                    cout << "Diamètre du rouleau: ";
                    cin >> diametre;
                    nouveauRouleau = new Rouleau(reference,diametre);
                    stock.AjouterRouleau(*nouveauRouleau);
                    Menu::AttendreAppuiTouche();
                    break;
                case OPTION_2:
                    system("clear");
                    nbRouleaux = stock.RechercherSerie(posDebut);
                    memoDebut = posDebut;
                    cout << "Nombre de rouleaux retenu: " << nbRouleaux << endl;
                    for(int indice = 0; indice< nbRouleaux; indice++){
                        posDebut->Visualiser();
                        posDebut++;
                    }
                    if(nbRouleaux >0){
                        cout << "Voulez-vous sortir la série de rouleaux du stock O(o)/N(n)? " << endl;
                        cin>> rep;
                        if(rep == 'O' || rep == 'o'){
                             for(int indice = 0; indice < nbRouleaux && memoDebut != stock.end(); indice++){
                                 stock.SortirRouleau(memoDebut++);
                             }
                        }
                    }
                    Menu::AttendreAppuiTouche();
                    break;
                case OPTION_3:
                    system("clear");
                    cout << endl << "Affichage des rouleaux" << endl;
                    stock.Visualiser();
                    Menu::AttendreAppuiTouche();
                    break;
                }

            } while(choix != QUITTER);
        }
        catch(std::runtime_error &e){
            cout << e.what() << endl;
            exit(EXIT_FAILURE);
        }
    return 0;
}


*/



/*

  teste rouleaux

int main()
{
    int diff=0, rangee=0, colonne=0;
        Rouleau r1("A-320", 200);
        Rouleau r2("B-747", 150);
        r1.AffecterAlveole(4,5);
        r2.AffecterAlveole(2,3);
        r1.Visualiser();
        r2.Visualiser();
        cout<<endl;
        r1.ObtenirLocalisation(rangee,colonne);
        cout <<"r1 est en " << rangee << " - " << colonne <<endl;
        r2.ObtenirLocalisation(rangee,colonne);
        cout <<"r2 est en " << rangee << " - " << colonne <<endl;
        if(r1<r2){
            cout <<"r1 est supérieur ou égal a r2"<<endl;
        }else{
            cout <<"r2 est supérieur ou égal a r1"<<endl;
        }
        cout<<endl;
        if(r1<r2){
            diff=r1-r2;
            cout<<"La différence entre les diamètres est de : "<< diff <<endl;
        }else{
            diff=r2-r1;
            cout<<"La différence entre les diamètres est de : "<< diff <<endl;
        }
        return 0;
}
*/


/*
 *
 * alveoleslibre test
 *
int main()
{
    AlveolesLibres alveole(2,5);
    int choix;
    int val;
    int val2;
        try{
            Menu leMenu("../rouleaux/menu.txt");
            do
            {
                choix = leMenu.Afficher();
                switch (choix)
                {
                case OPTION_1:
                    system("clear");
                    cout << "Selectionner la valeur de la rangee ";
                    scanf("%d",&val);
                    cout << "Selectionner la valeur de la colonne ";
                    scanf("%d",&val2);
                    alveole.Reserver(val,val2);
                    Menu::AttendreAppuiTouche();
                    break;
                case OPTION_2:
                    system("clear");
                    cout << "Selectionner la valeur de la rangee: ";
                    scanf("%d",&val);
                    cout << "Selectionner la valeur de la colonne: ";
                    scanf("%d",&val2);
                    alveole.Liberer(val,val2);
                    Menu::AttendreAppuiTouche();
                    break;
                case OPTION_3:
                    system("clear");
                    alveole.Visualiser();
                    break;
                }

            } while(choix != QUITTER);
        }
        catch(std::runtime_error &e){
            cout << e.what() << endl;
            exit(EXIT_FAILURE);
        }
    return 0;
}
*/
