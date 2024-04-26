#ifndef LECTEURCARTE_H
#define LECTEURCARTE_H
#include <lcarte.h>
#include "Base_client.h"
#include "Voyants.h"
#include "boutons.h"



class LecteurCarte
{
	int numero;
        int carte;
        int current_num;
  public : 
        int lire_carte();
	LecteurCarte();
        int get_num();
};

#endif // LECTEURCARTE_H
