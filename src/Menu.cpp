#include "Menu.h"

Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}

static int Menu::AskCarte(){
    int a=0;
    while(a!=1 || a!=2){
        cout << "Veuillez rentrer la carte que vous choisissez pour jouer" << endl
        cin >> a;
    }
    return a-1;
}


