#include <vector>
#ifndef MONSTRE
#define MONSTRE
#include "Monstre.h"
#endif

class Mage
{
    private:
    int _zoneJeu = 0;
    std::string _nom;
    int _pointVie;

        

    public : 
    void affiche();
    int getVie();
    Mage();   
};

