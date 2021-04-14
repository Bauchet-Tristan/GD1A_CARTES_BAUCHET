#include "Monstre.cpp"
#include "Mage.cpp"

#include <iostream>
#include <string>
#include <vector>


int main(){

    Mage Mage1 = Mage();
    Mage Mage2 = Mage();

    Monstre Didier1 = Monstre("Didier1");
    Monstre Didier2 = Monstre("Didier2");
    Monstre Didier3 = Monstre("Didier3");

    Monstre Jean1 = Monstre("Jean1");
    Monstre Jean2 = Monstre("Jean2");
    Monstre Jean3 = Monstre("Jean3");


    int vie = 0;
    std::string choisi ;
    

    Mage1.affiche();

    std::cout<<"Mage 1 voulez vous invoquer ?";
    
    std::cin>>choisi;



    if(choisi == "oui")
    {
        Mage1.invoque();  
    }

    std::cout<<"attaquer";


    Didier1.affiche();
    Jean1.affiche();
 

        if(Didier1.getFatigue()== true)
        {
            std::cout<<"peut pas attaquer car epuiser"<<std::endl;
        }
        else
        {
            vie = (Jean1.getVie() - Didier1.getAttaque());
            Jean1.resetVie(vie);

            vie = (Didier1.getVie() - Jean1.getAttaque());
            Didier1.resetVie(vie);
        }
        Didier1.resetFatigue();


        /////////////////////////////////////////////////

        
        if(Jean1.getFatigue()== true)
        {
            std::cout<<"peut pas attaquer car epuiser"<<std::endl;
        }
        else
        {
            vie = (Didier1.getVie() - Jean1.getAttaque());
            Didier1.resetVie(vie);

            vie = (Jean1.getVie() - Didier1.getAttaque());
            Jean1.resetVie(vie);
        }
        Jean1.resetFatigue();


        Didier1.affiche();
        Jean1.affiche();


    return 0;
}