#ifndef SALLE_H
#define SALLE_H

#include <Lieu.h>
#include <list>
#include "Monstre.h"
#include <Personnage.h>

using namespace std;

class Salle : public Lieu
{
    public:
        Salle();
        Salle(string nom);
        virtual ~Salle();
        void addMonstreToTheList(Monstre *monstre);
        int CombattreMonstre(Personnage *personnage, Monstre *monstre);
        list<Monstre> listMonstre;

    protected:

    private:

};

#endif // SALLE_H
