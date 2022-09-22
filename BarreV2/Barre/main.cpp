#include <iostream>
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"
#include "menu.h"
#include "catalogue.h"

using namespace std;

int main()
{
    Catalogue catalogue(4);
    Barre uneBarre("Barre", 5, 12, "Acier");
    BarreRectangle rectangle("Barre rectangle", 5, 13, "Cuivre", 4);
    BarreRonde rond("Barre rond", 12, 25, "Plastique", 25);
    BarreCarree carre("Barre carre", 15, 23, "Alluminium", 8);
    catalogue.AjouterBarre(&uneBarre);
    catalogue.AjouterBarre(&rectangle);
    catalogue.AjouterBarre(&rond);
    catalogue.AjouterBarre(&carre);
    int choix;
    try{
        Menu leMenu("/home/USERS/ELEVES/SNIR2021/tsoulaimana/Qt/BarreV2/Barre/text.txt");
        do
        {
            choix = leMenu.Afficher();
            switch (choix)
            {
            case OPTION_1:
                system("clear");
                cout << "___________________________________" << endl;
                cout << "________________BARRE______________" << endl;
                uneBarre.AfficherCaracteristiques();
                cout << "___________________________________" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_2:
                system("clear");
                cout << "___________________________________" << endl;
                cout << "_____________RECTANGLE_____________" << endl;
                rectangle.AfficherCaracteristiques();
                cout << "Le section du rectangle est de " << rectangle.CalculerSection() << endl;
                cout << "La masse du rectangle est de " << rectangle.CalculerMasse() << endl;
                cout << "___________________________________" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_3:
                system("clear");
                cout << "___________________________________" << endl;
                cout << "_________________ROND______________" << endl;
                rond.AfficherCaracteristiques();
                cout << "Le section du rond est de " << rond.CalculerSection() << endl;
                cout << "La masse du rond est de " << rond.CalculerMasse() << endl;
                cout << "___________________________________" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_4:
                system("clear");
                cout << "___________________________________" << endl;
                cout << "________________CARRE______________" << endl;
                carre.AfficherCaracteristiques();
                cout << "Le section du carre est de " << carre.CalculerSection() << endl;
                cout << "La masse du carre est de " << carre.CalculerMasse() << endl;
                cout << "___________________________________" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_5:
                system("clear");
                catalogue.AfficherCatalogue();
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
