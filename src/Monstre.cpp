#include "Monstre.h"

Monstre::Monstre()
{
    //ctor
}
Monstre::Monstre(string prenom, int pv, int taille, int force)
{
    this->Setnom(prenom);
    this->Setpv(pv);
    this->Settaille(taille);
    this->Setforce(force);
}

Monstre::~Monstre()
{
    //dtor
}
