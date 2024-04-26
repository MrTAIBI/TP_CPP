
#include <unistd.h>
#include "lecteurcarte.h"
#include <lcarte.h>
#include <iostream>


LecteurCarte::LecteurCarte()
{
        numero = 0;
        carte = 0;
}


int LecteurCarte::lire_carte()
{
        if(carte == 1){
            attente_insertion_carte();
            if(carte_inseree()){
                    numero = lecture_numero_carte();
                    std::cout<< "numero lu : " << numero<< std::endl;
                    attente_retrait_carte();
                    return numero;
            }
        }
        else{
            std::cout<<"rentrer le numero de la carte"<<std::endl;
            std::cin>>numero;
            std::cout<< "numero lu : " << numero<< std::endl;
        }
        return numero;
}


