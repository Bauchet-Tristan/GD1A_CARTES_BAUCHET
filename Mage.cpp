// Implemente (implementer = accolade {}) la classe de Escargot, ecrire le code des methodes (ecrire ce qu'elle font avec les "variables")
#include <iostream> // Include de base presente partous
#include <vector>
#ifndef MONSTRE
#define MONSTRE
#include "Monstre.h"
#endif
#include "Mage.h"


    Mage::Mage()
    {

    }

    int Mage::getVie(){
        return _pointVie;
    }

    void Mage::affiche(){
        std::cout<<_nom<<"\npoint de vie"<<_pointVie<<"\nzone de jeu "<<_zoneJeu<<"\n\n"<<std::endl;
    }

