#include "../include/Compte.h"
#include <iostream>
#include <string>

using namespace std;

int Compte::numeroAttribue = 0;

Compte::Compte()
{
    numeroCompte = numeroAttribue;
    numeroAttribue++;
}

Compte::~Compte()
{

}

Compte::Compte(string nomCompte, float montant, float decouvertMax) {
    this->nomCompte = nomCompte;
    soldeCompte = montant;
    this->decouvertMax = decouvertMax;
    numeroCompte = numeroAttribue;
    numeroAttribue++;
}

Compte::Compte(const Compte& compte) {
    nomCompte = compte.nomCompte;
    soldeCompte = 0;
    decouvertMax = 0;
    numeroCompte = numeroAttribue;
    numeroAttribue++;
}


void Compte::debiter(float mont)
{
    float soldeDebit = soldeCompte - mont;
    if(soldeDebit < -decouvertMax){
        cout << "Operation impossible" << endl;
    }else{
        soldeCompte = soldeDebit;
    }

}

void Compte::crediter(float mont)
{
    soldeCompte = soldeCompte + mont;
}

void Compte::afficher()
{
    cout << "Le compte " << numeroCompte << " a pour nom " << nomCompte << ", son solde est de " << soldeCompte << " et son decouvert maximum est de " << decouvertMax << endl;
}
