#include "Menu.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std ;

Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}
void Menu::Clear(){
    system("cls");
}
int Menu::AskCarte(){
    int a=0;
    while(a!=1 && a!=2){
        cout << "Veuillez rentrer la carte que vous choisissez pour jouer\n - 1\n - 2" << endl;
        cin >> a;
    }
    Clear();
    return a-1;
}

string Menu::AskPrenom(){
    string prenom="";
    cout << "Veuillez rentrer votre prenom\n";
    cin >> prenom;
    return prenom;
}

string Menu::AskNom(){
    string nom="";
    cout << "Veuillez rentrer votre nom\n";
    cin >> nom;
    return nom;
}

float Menu::AskTaille(){
    float taille=0;
    cout << "Veuillez rentrez votre taille\n";
    cout << "ex : 1.78\n";
    cin >> taille;
    return taille;
}

Personnage Menu::AskPersonnage(){
    string prenom = Menu::AskPrenom();
    string nom = Menu::AskNom();
    float taille = Menu::AskTaille();

    Personnage *personnage = new Personnage(prenom, nom, taille);

    return *personnage;
}

int Menu::Continuer(){
    int continuer = 0;
    cout << "Voulez-vous continuer?\n";
    cout << "1 - OUI\n2 - NON";
    cin >> continuer;
    return continuer;
}
