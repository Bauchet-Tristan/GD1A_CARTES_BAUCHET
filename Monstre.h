#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>
#include <vector>

class Monstre{

    private:
        std::string _nom ; 
        int _attaque = 10;
        int _pointVie = 30;
        bool _epuiser = false;
        
    public:

        bool getFatigue();

        int getVie(); 

        int getAttaque();

       


        void affiche();


        void mort();
        
        Monstre();

        Monstre(std::string nom);
};

#endif