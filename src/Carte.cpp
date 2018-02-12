#include "Carte.h"
#include <list>

using namespace std;
Carte::Carte()
{
    //ctor
}
Carte::Carte(string nom)
{
    this->Setnom(nom);
}
Carte::~Carte()
{
    //dtor
}

void Carte::addSalleToTheList(Salle *salle)
{
    this->listSalle.push_back(*salle);
}
