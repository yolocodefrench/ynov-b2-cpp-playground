#ifndef MONSTRE_H
#define MONSTRE_H
#include "entity.h"

class Monstre : public Entity
{
    public:
        Monstre();
        Monstre(string prenom, int pv, int taille, int force);
        virtual ~Monstre();



    protected:

    private:
};

#endif // MONSTRE_H
