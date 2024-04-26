
#include "Charge.h"
#include <memoire_borne.h>
#include <iostream>


Charge::Charge(){
    io = acces_memoire(&shmid);
    /* associe la zone de memoire partageeau pointeur */
    if (io==NULL) std::cout<<"Erreur pas de mem sh"<<std::endl;
}


int Charge::get_tension(){
    return(io->gene_u);
}


void Charge::set_pwm(pwm PWM){
    io->gene_pwm = PWM;
}


pwm Charge::get_pwm(){
    return io->gene_pwm;
}


void Charge::open_AC(){
    io->contacteur_AC = 0;
}


void Charge::close_AC(){
    io->contacteur_AC = 1;
}

