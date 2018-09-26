#include <iostream>
#include "../include/Banque.h"
#include "../include/Compte.h"

using namespace std;

int main(){
    Banque bnp(12);
    bnp.ajouteCompte("MatthieuCourant", 50, 200);
    bnp.ajouteCompte("PLCourant", 450, 200);
    bnp.ajouteCompte("DavCourant", 35, 50);

    bnp.afficherTabCompte();
    cout << "==============================" << endl;
    bnp.supprimeCompte(0);

    bnp.afficherTabCompte();

}
