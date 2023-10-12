#include "menu.h"



Menu::Menu(const string &_nom):
    nom(_nom), longueurMax(0)
{
    ifstream fichier(nom.c_str());
    // Si il y a une erreur
    if (!fichier.is_open()){
        // alors Afficher un message indiquant une erreur de lecture et mettre nbOptions à 0
        cerr << "Erreur lors de l'ouverture du fichier runil" << endl;
        nbOptions = 0;
    }
    else
    {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichier),istreambuf_iterator<char>(),'\n'));
        option = new string[nbOptions];
        fichier.seekg(0,ios::beg);
        for(int i = 0; i<nbOptions; i++){
            getline(fichier,option[i]);
            if(option[i].length()>longueurMax){
                longueurMax = option[i].length();
            }
        }

    }

}

Menu::~Menu()
{
    delete [] option;
}

int Menu::Afficher()
{
    int choix = 0;
    // A compléter, affichage de la première ligne du tableau
    cout << "+" <<setw(nbOptions)<< setfill('-') <<  "+"  << setw(longueurMax) << setfill('-') << "+" << endl;
    for(int indice = 0; indice < nbOptions; indice++){
        cout << "|" << indice+1 << "|"  << setfill(' ') << setw(longueurMax) << option[indice] << "|" << endl;
    }
    cout << "+" << setfill('-') << setw(nbOptions)<< "+" << setfill('-') << setw(longueurMax)<< "+" << endl;
    cout << "Entrer un nombre entre 1 et 5 : " ;
    if(!(cin>>choix))
    {
        cin.clear ();
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        choix = -1;
    }
    system("clear");
    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");
}


