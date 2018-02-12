#ifndef ENTITY_H
#define ENTITY_H
#include <string>

using namespace std;

class Entity
{
    public:
        Entity();
        virtual ~Entity();

        unsigned int Getpv() { return pv; }
        void Setpv(unsigned int val) { pv = val; }
        unsigned int Getforce() { return force; }
        void Setforce(unsigned int val) { force = val; }
        unsigned int Gettaille() { return taille; }
        void Settaille(unsigned int val) { taille = val; }
        string Getnom() { return nom; }
        void Setnom(string val) { nom = val; }
        void Crier();
        void Attaquer(Entity *entity);
        void RemovePV(Entity);

    protected:

    private:
        unsigned int pv;
        unsigned int force;
        unsigned int taille;
        string nom;
};

#endif // ENTITY_H
