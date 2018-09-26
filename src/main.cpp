#include <iostream>
#include "../include/Banque.h"
#include "../include/Compte.h"

using namespace std;

int main(){
    Banque bnp(12);
    bnp.ajouteCompte("MatthieuCourant", 50, 200);

    //Compte cpt1("MatthieuCourant", 50, 200);
    //Compte cpt2("PLCourant", 700, 400);

    //cpt1.afficher();
    //cpt2.afficher();

    bnp.afficherTabCompte();

    //bnp.supprimeCompte(0);

}
