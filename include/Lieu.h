#ifndef LIEU_H
#define LIEU_H
#include <string>

using namespace std;

class Lieu
{
    public:
        Lieu();
        virtual ~Lieu();

        string Getnom() { return nom; }
        void Setnom(string val) { nom = val; }

    protected:

    private:
        string nom;
};

#endif // LIEU_H
