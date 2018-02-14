#include "Carte.h"
#include <list>
#include <iostream>


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

void Carte::Play(){
    int i=1;
    for (Salle n : this->listSalle) {
        cout << i << " - " << n.Getnom() << endl;
        i++;
    }
}

