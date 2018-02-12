#ifndef CARTE_H
#define CARTE_H
#include <Lieu.h>
#include <Salle.h>
#include <list>
using namespace std;

class Carte : public Lieu
{
    public:
        Carte();
        Carte(string nom);
        virtual ~Carte();
        void addSalleToTheList(Salle *salle);

    protected:

    private:
        list<Salle> listSalle;
};

#endif // CARTE_H
