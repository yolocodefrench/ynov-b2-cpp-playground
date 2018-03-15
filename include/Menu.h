#ifndef MENU_H
#define MENU_H
#include <string>
#include <Personnage.h>

using namespace std;

class Menu
{
    public:
        Menu();
        virtual ~Menu();
        static int AskCarte();
        static void Clear();
        static string AskPrenom();
        static float AskTaille();
        static string AskNom();
        static Personnage AskPersonnage();
        static int Continuer();


    protected:

    private:
};

#endif // MENU_H
