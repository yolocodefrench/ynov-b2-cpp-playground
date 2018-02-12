#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <iostream>
#include <string>
#include "entity.h"

using namespace std;
class Personnage : public Entity
{
    public:
        Personnage();
        Personnage(string prenom, string nom, float taille);
        virtual ~Personnage();

    protected:

    private:
};

#endif // PERSONNAGE_H
