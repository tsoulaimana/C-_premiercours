#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    string nomDuFichier;
    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;
    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*
    if (!leFichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        // A compléter, affichage de la première ligne du tableau
        cout << "+" << setfill('-') << setw(18) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" << setfill(' ') << endl;
        do
        {
            //récupération des valeurs
            leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
            if (leFichier.good())//Si les valeurs ont bien été lues
            {
                // A compléter, affichage de chaque ligne du tableau
                cout << "|" << setw(17) << left << pays << "|" << setw(5) << nbOr << "|" << setw(5) << nbArgent << "|" << setw(5) << nbBronze << "|" << endl;
            }
        } while (!leFichier.eof());
        // A compléter, affichage de la dernière ligne du tableau.
        cout << right << "+" << setfill('-') << setw(18) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << right << "+" << setfill(' ') << endl;
    }

    return 0;
}


/*

//ouverture fichier

int main(){
    string nomDuFichierOuvrir;
    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichierOuvrir;
    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichierOuvrir.c_str()); // c_str() transforme string en char*
    if (!leFichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string nomFichierEcriture("louves.txt");
        ofstream monFlux(nomFichierEcriture.c_str());

        if(monFlux)
        {
            string pays;
            int nbOr;
            int nbArgent;
            int nbBronze;
            // A compléter, affichage de la première ligne du tableau
            monFlux << "+" << setfill('-') << setw(18) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" << setfill(' ') << endl;
            do
            {
                //récupération des valeurs
                leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
                if (leFichier.good())//Si les valeurs ont bien été lues
                {
                    // A compléter, affichage de chaque ligne du tableau
                    monFlux << "|" << setw(17) << left << pays << "|" << setw(5) << nbOr << "|" << setw(5) << nbArgent << "|" << setw(5) << nbBronze << "|" << endl;
                }
            } while (!leFichier.eof());
            // A compléter, affichage de la dernière ligne du tableau.
            monFlux << right << "+" << setfill('-') << setw(18) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << right << "+" << setfill(' ') << endl;

        }
        else
        {
            cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
        }
        return 0;
    }
}

*/
