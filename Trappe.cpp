
#include "Trappe.h"
#include <iostream>


Trappe::Trappe(){
    trappe_status = 0;
    io = acces_memoire(&shmid);
    /* associe la zone de memoire partageeau pointeur */
    if (io==NULL) std::cout<<"Erreur pas de mem sh"<<std::endl;
}

void Trappe::Open(){
    voyant.set_voyant_trappe(VERT);
}


void Trappe::Close(){
    voyant.set_voyant_trappe(ROUGE);
}
