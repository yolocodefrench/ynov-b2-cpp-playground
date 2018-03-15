#include <iostream>
#include <string>
#include "Game.h"

using namespace std;
Game::Game()
{

}

Game::~Game()
{
    //dtor
}

void Game::AddCarteToTheList(Carte *carte)
{
    this->listeDeCarte.push_back(*carte);
}

void Game::Play(Personnage *personnage){
    for (Carte n : this->listeDeCarte) {
        n.Play(personnage);
    }
}

