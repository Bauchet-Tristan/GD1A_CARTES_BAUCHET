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


    void Monstre::resetVie(int vie){
        _pointVie = vie;
    }


    void Monstre::resetFatigue(){
        if(_epuiser == false)
        {
            _epuiser = true;
        }
        else
        {
            _epuiser = false;
        }
    }

    void Monstre::affiche(){
        std::cout<<_nom<<"\npoint de vie"<<_pointVie<<"\nattaque"<<_attaque<<"\ndisponible"<<_epuiser<<"\n\n"<<std::endl;
    }

    bool Monstre::mort(){
        if(_pointVie <= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


#endif