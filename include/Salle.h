#ifndef SALLE_H
#define SALLE_H

#include <Lieu.h>
#include <list>
#include "Monstre.h"

using namespace std;

class Salle : public Lieu
{
    public:
        Salle();
        Salle(string nom);
        virtual ~Salle();
        void addMonstreToTheList(Monstre *monstre);

    protected:

    private:
        list<Monstre> listMonstre;
};

#endif // SALLE_H
