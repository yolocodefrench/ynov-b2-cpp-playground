#include "Salle.h"
#include <string>

using namespace std;

Salle::Salle()
{
    //ctor
}

Salle::Salle(string nom)
{
    this->Setnom(nom);
}

Salle::~Salle()
{
    //dtor
}

void Salle::addMonstreToTheList(Monstre *monstre)
{
    this->listMonstre.push_back(*monstre);
}

