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
    system("cls"):
}
int Menu::AskCarte(){
    int a=0;
    while(a!=1 && a!=2){
        cout << "Veuillez rentrer la carte que vous choisissez pour jouer" << endl;
        cin >> a;
    }
    return a-1;
}
void Menu::AskPrenom(){
    string a="";
    cout << "Veuillez rentrer la carte que vous choisissez pour jouer" << endl;
    cin >> a;
    return a;
}
void Menu::AskPrenom(){
    string a="";
    cout << "Veuillez rentrer la carte que vous choisissez pour jouer" << endl;
    cin >> a;
    return a;
}



