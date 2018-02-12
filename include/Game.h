#ifndef GAME_H
#define GAME_H
#include <list>
#include "Carte.h"

using namespace std;

class Game
{
    public:
        Game();
        virtual ~Game();
        void AddCarteToTheList(Carte *carte);

    protected:

    private:
        std::list<Carte> listeDeCarte;

};

#endif // GAME_H
