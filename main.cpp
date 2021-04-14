#include "Monstre.cpp"

#include <iostream>
#include <string>


int main(){

    Monstre myMonstre = Monstre("Didier");
    Monstre myMonstre2 = Monstre("Jean");

    int vie = 0;
    

    myMonstre.affiche();
    myMonstre2.affiche();
 
    while(myMonstre.mort() ==false && myMonstre2.mort() ==false)
    {

        if(myMonstre.getFatigue()== true)
        {
            std::cout<<"peut pas attaquer car epuiser"<<std::endl;
        }
        else
        {
            vie = (myMonstre2.getVie() - myMonstre.getAttaque());
            myMonstre2.resetVie(vie);

            vie = (myMonstre.getVie() - myMonstre2.getAttaque());
            myMonstre.resetVie(vie);
        }
        myMonstre.resetFatigue();


        /////////////////////////////////////////////////

        
        if(myMonstre2.getFatigue()== true)
        {
            std::cout<<"peut pas attaquer car epuiser"<<std::endl;
        }
        else
        {
            vie = (myMonstre.getVie() - myMonstre2.getAttaque());
            myMonstre.resetVie(vie);

            vie = (myMonstre2.getVie() - myMonstre.getAttaque());
            myMonstre2.resetVie(vie);
        }
        myMonstre2.resetFatigue();


        myMonstre.affiche();
        myMonstre2.affiche();
    }

    std::cout<<"un des monstre est mort";

    return 0;
}