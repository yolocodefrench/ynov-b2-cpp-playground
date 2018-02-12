#include <iostream>
#include <string>
#include "Game.h"

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

Game::Play(){
    for (int n : l) {
        std::cout << n << '\n';
    }
}

