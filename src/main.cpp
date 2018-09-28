#include <iostream>
#include "../include/Banque.h"
#include "../include/Compte.h"
#include <string>


using namespace std;

int main()
{
    int answer, num, choix, nbc;
    Banque bnp(10);
    Banque creditagricole(bnp);
    string nom;
    float montant, solde, max;
    Compte* comptes;

    do{
      cout << "Banques : bnp(1) creditagricole(2)" << endl;
      cout << "======================================" << endl;
      cout << "Choix : " << endl;
      cout << "1. Création d'un compte" << endl;
      cout << "2. Créditer/débiter un compte" << endl;
      cout << "3. Supprimer un compte" << endl;
      cout << "4. Afficher un compte" << endl;
      cout << "5. Afficher tous les comptes" << endl;
      cout << "6. Quitter" << endl;

      cout << "Choisissez un numéro : ";

      cin >> answer;
        switch (answer)
        {
            case 1:
                cout << "Entrez le nom :" << endl;
                cin >> nom;
                cout << "Entrez le solde :" << endl;
                cin >> solde;
                cout << "Entrez le découvert max :" << endl;
                cin >> max;
                bnp.ajouteCompte(nom, solde, max);
                break;

            case 2:
                cout << "Créditer(1) / Débiter(2)" << endl;
                cin >> choix;
                if (choix == 1){
                  cout << "Choisir numéro compte : " << endl;
                  cin >> num;
                  cout << "Choisir montant crédit :" << endl;
                  cin >> montant;
                  comptes = bnp.getComptes();
                  for (int i = 0; i < nbc; i++){
                    if (comptes[i].getNumeroCompte() == num){
                      comptes[i].crediter(montant);
                      break;
                    }
                  }
                }
                else if (choix == 2){
                  cout << "Choisir numéro compte : " << endl;
                  cin >> num;
                  cout << "Choisir montant débit :" << endl;
                  cin >> montant;
                  comptes = bnp.getComptes();
                  for (int i = 0; i < nbc; i++){
                    if (comptes[i].getNumeroCompte() == num){
                      comptes[i].debiter(montant);
                      break;
                    }
                  }
                }
                else{
                  cout << "Choix invalide" << endl;
                }
                break;

            case 3:
                cout << "Choisir numéro compte à supprimer :" << endl;
                cin >> num;
                bnp.supprimeCompte(num);
                break;

            case 4:
                cout << "Choisir numéro compte à afficher :" << endl;
                cin >> num;
                comptes = bnp.getComptes();
                for (int i = 0; i < nbc; i++){
                  if (comptes[i].getNumeroCompte() == num){
                    comptes[i].afficher();
                    break;
                  }
                }
                break;

            case 5:
                bnp.afficherTabCompte();
                break;

            case 6:
                cout << "Exit(0)";
                return 0;

            default:
                cout << "Choix invalide" << endl;
                break;
        }
    } while (answer > 0 || answer < 5);
}
