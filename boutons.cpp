
#include <iostream>
#include "boutons.h"
#include <memoire_borne.h>



Boutons::Boutons(){
	io = acces_memoire(&shmid);
	/* associe la zone de memoire partageeau pointeur */
	if (io==NULL) std::cout<<"Erreur pas de mem sh"<<std::endl;
}


int Boutons::get_bouton(button but){
	switch(but){
		case CHARGE:
			return io->bouton_charge;
			break;
		default:
			return io->bouton_stop;
			break;
	}
}


status Boutons::attente_boutons(int temps){
	timer.initialiser();
        while(!io->bouton_charge && (timer.get_value() <= temps)){
            std::cout<<"il vous reste "<<temps - timer.get_value()<<" s"<<std::endl;
        }
        if(timer.get_value() >= temps){
                std::cout<<"temps ecoule"<<std::endl;
                voyant.blink_defaut(ROUGE);
                return TIMEOUT;
        }
        else if(io->bouton_charge == 1){
                std::cout<<"bouton charge est appuie"<<std::endl;
                io->bouton_charge = 0;
                io->bouton_stop = 0;
                return SUCCESS;
	}
        return SUCCESS;
}


