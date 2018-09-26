#include "../include/Banque.h"
#include <string>

using namespace std;

Banque::Banque()
{
    //ctor
}

Banque::~Banque()
{
    //dtor
}

Banque::Banque(int nbct){
    this->nbct = nbct;
    nbc = 0;
}

Banque::Banque(const Banque& banque){
    nbct = banque.nbct;
    nbc = banque.nbc;
}

void Banque::ajouteCompte(string cpt, float soldeCpt, float decouvMax)
{
    comptes[nbc] = Compte(cpt, soldeCpt, decouvMax);
}

void Banque::supprimeCompte(string nomCompte){
    for (int i = 0; i < nbc; i++){
      if (nomCompte == comptes[i].getNomCompte()){
        for (int j = i; j < nbc; j++){
          comptes[j] = comptes[j+1];
        }
      }
    }
}

void Banque::supprimeCompte(int numCompte){
    for (int i = 0; i < nbc; i++){
      if (numCompte == comptes[i].getNumeroCompte()){
        for (int j = i; j < nbc; j++){
          comptes[j] = comptes[j+1];
        }
      }
    }
}

void Banque::redimensionneTableauComptes(int nouvelleTaille){
    Compte* newcomptes = new Compte[nouvelleTaille];
    if (nouvelleTaille < nbc){
      for (int i = 0; i < nouvelleTaille; i++){
        newcomptes[i] = comptes[i];
      }
    }else{
      for (int i = 0; i < nbc; i++){
        newcomptes[i] = comptes[i];
      }
    }
    delete [] comptes;
    comptes = newcomptes;
}
