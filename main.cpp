#include "Monstre.cpp"

#include <iostream>
#include <string>


int main(){

    Monstre myMonstre = Monstre("Didier");
    Monstre myMonstre2 = Monstre("Jean");

    std::string attaquer = "0";
    

    myMonstre.affiche();

    myMonstre.getVie();
    


    

    return 0;
}