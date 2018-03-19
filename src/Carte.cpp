#include "Carte.h"
#include <list>
#include <iostream>
#include <Menu.h>
#include <Salle.h>


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

void Carte::Play(Personnage *personnage){
    int i=1;
    for (Salle n : this->listSalle) {
        Menu::Clear();
        cout << "Vous venez de rentrez dans la salle : \n";
        cout << n.Getnom() << "\n";
        cout << n.toString();

        for(Monstre m : n.getListMonstre()){
            n.CombattreMonstre(personnage, &m);
        }


        if(Menu::Continuer() != 1){
            cout << "Vous venez de perdre";
            break;
        }
        i++;
    }
}

