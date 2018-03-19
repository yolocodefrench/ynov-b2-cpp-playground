#include "Salle.h"
#include <string>
#include <sstream>

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

int Salle::CombattreMonstre(Personnage *personnage, Monstre *monstre){
    while(personnage->Getpv()>0 || monstre->Getpv()>0){
        cout << personnage->Getnom() << " vous jouez contre " << monstre->Getnom() << endl << endl;
    }


    return 15;
}

list<Monstre> Salle::getListMonstre(){
    return listMonstre;
}

string Salle::toString(){
    string result;          // string which will contain the result

    ostringstream convert;   // stream used for the conversion

    convert << this->getListMonstre().size();      // insert the textual representation of 'Number' in the characters in the stream

    result = convert.str();
    string texte ="Il y a "+ result+" monstres dans cette salle\n";
    return texte;
}



