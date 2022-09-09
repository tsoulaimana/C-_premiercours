#include "menu.h"
#include <iostream>

using namespace std;




int main()
{
    int choix;
    try{
        Menu leMenu("../menu/texjt.txt");
        do
        {
            choix = leMenu.Afficher();
            switch (choix)
            {
            case OPTION_1:
                cout << "Vous avez choisi l'option n°1" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_2:
                cout << "Vous avez choisi l'option n°2" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_3:
                cout << "Vous avez choisi l'option n°3" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_4:
                cout << "Vous avez choisi l'option n°4" << endl;
                Menu::AttendreAppuiTouche();
                break;
            }

        } while(choix != QUITTER);
    }
    catch(std::runtime_error e){
        cout << e.what() << endl;
        exit(EXIT_FAILURE);
    }

    return 0;
}



















/*
int main()
{
    int choix;
    Menu leMenu("text.txt");
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case OPTION_1:
                    cout << "Vous avez choisi l'option n°1" << endl;
                    Menu::AttendreAppuiTouche();
                    break;
                case OPTION_2:
                    cout << "Vous avez choisi l'option n°2" << endl;
                    Menu::AttendreAppuiTouche();
                    break;
                case OPTION_3:
                    cout << "Vous avez choisi l'option n°3" << endl;
                    Menu::AttendreAppuiTouche();
                    break;
                case OPTION_4:
                    cout << "Vous avez choisi l'option n°4" << endl;
                    Menu::AttendreAppuiTouche();
                    break;
                }
    } while(choix != QUITTER);
    return 0;
}
*/
