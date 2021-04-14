#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <iostream>

    Monstre::Monstre(){ 
    }
    
    Monstre::Monstre(std::string nom) : _nom(nom){

    }


    bool Monstre::getFatigue(){
        return _epuiser;
    } 

    int Monstre::getVie(){
        return _pointVie;
    }

    int Monstre::getAttaque(){
        return _attaque;
    }
        




    void Monstre::affiche(){
        std::cout<<_nom<<"\npoint de vie"<<_pointVie<<"\nattaque"<<_attaque<<"\ndisponible"<<_epuiser<<std::endl;
    }

    void Monstre::mort(){

    }


#endif