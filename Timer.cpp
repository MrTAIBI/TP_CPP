
#include <iostream>
#include "Timer.h"
#include <memoire_borne.h>


void Timer::initialiser(){
	io = acces_memoire(&shmid);
	/* associe la zone de memoire partageeau pointeur */
	if (io==NULL) std::cout<<"Erreur pas de mem sh"<<std::endl;
	depart_timer=io->timer_sec;
}

int Timer::get_value(){
	end_timer = io->timer_sec;
	return (end_timer - depart_timer);

}
