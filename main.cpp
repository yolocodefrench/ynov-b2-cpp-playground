#include <iostream>
#include <string>
#include "Personnage.h"
#include "Monstre.h"
#include "Game.h"
#include "Salle.h"
#include "Menu.h"

using namespace std;


int main()
{
    Carte[2] carteTab;
    Carte *carte1 = new Carte("Super Partie !!!");
    Carte *carte2 = new Carte("Partie deux!");

    carteTab[0]=carte1;
    carteTab[1]=carte2;

    Salle *salle1 = new Salle("Salle de la peur");
    Salle *salle2 = new Salle("Salle de la terreur");
    Salle *salle3 = new Salle("Salle top ouf");
    Salle *salle4 = new Salle("Salle des moinstres");
    Salle *salle5= new Salle("Avant dernière salle");
    Salle *salle6 = new Salle("Derniere salle");

    carte1->addSalleToTheList(salle1);
    carte1->addSalleToTheList(salle2);
    carte1->addSalleToTheList(salle5);
    carte1->addSalleToTheList(salle6);

    carte2->addSalleToTheList(salle3);
    carte2->addSalleToTheList(salle4);
    carte2->addSalleToTheList(salle5);
    carte2->addSalleToTheList(salle6);

    Monstre *monstre1 = new Monstre("sacrebleu", 20, 3, 40);
    Monstre *monstre2 = new Monstre("diantre", 15, 2, 50);
    Monstre *monstre3 = new Monstre("Corentin", 100, 2, 20);
    Monstre *monstre4 = new Monstre("Dany", 150, 2, 15);
    Monstre *monstre5 = new Monstre("Charles", 50, 2, 45);
    Monstre *monstre6 = new Monstre("Alexis", 60, 2, 60);
    Monstre *monstre6 = new Monstre("Thomas", 50, 2, 50);
    Monstre *monstre7 = new Monstre("Nathan", 100, 2, 100);
    Monstre *monstre8 = new Monstre("guillaume", 200, 2, 50);
    Monstre *monstre9 = new Monstre("Doucet", 3, 1, 2);

    salle1->addMonstreToTheList(monstre1);
    salle1->addMonstreToTheList(monstre2);

    salle2->addMonstreToTheList(monstre9);

    salle3->addMonstreToTheList(monstre9);
    salle3->addMonstreToTheList(monstre5);

    salle4->addMonstreToTheList(monstre7);
    salle4->addMonstreToTheList(monstre3);

    salle5->addMonstreToTheList(monstre4);
    salle6->addMonstreToTheList(monstre8);

    Menu::AskCarte();





}
