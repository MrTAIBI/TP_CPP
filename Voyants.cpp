
#include <iostream>
#include "Voyants.h"
#include <unistd.h>
int shmid;


Voyants::Voyants(){
	io = acces_memoire(&shmid);
	/* associe la zone de memoire partageeau pointeur */
        if (io==NULL) std::cout<<"Erreur pas de mem sh"<<std::endl;
}

void Voyants::set_voyant_charge(led couleur){
	io->led_charge = couleur;
}

void Voyants::set_voyant_dispo(led couleur){
	io->led_dispo = couleur;
}

void Voyants::set_voyant_prise(led couleur){
	io->led_prise = couleur;
}

void Voyants::set_voyant_defaut(led couleur){
	io->led_defaut = couleur;
}
/**
 * @brief méthode qui permet de changer la couleur du voyant trappe
 * 
 * @param couleur 
 */
void Voyants::set_voyant_trappe(led couleur){
	io->led_trappe = couleur;
}


void Voyants::blink_charge(led couleur){
	timer.initialiser();
	while(timer.get_value() < 8){
		io->led_charge = couleur;
		sleep(1);
		io->led_charge = OFF;
		sleep(1);
	}
}



void Voyants::blink_defaut(led couleur){

	timer.initialiser();
	while(timer.get_value() < 8){
		io->led_charge = couleur;
		sleep(1);
		io->led_charge = OFF;
		sleep(1);
	}
}
