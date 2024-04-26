#ifndef VOYANTS_H
#define VOYANTS_H

#include <donnees_borne.h>
#include <memoire_borne.h>
#include "Timer.h"



class Voyants{	
	entrees *io ;
	Timer timer;
	public:
	Voyants();
	void set_voyant_charge(led couleur);
	void set_voyant_dispo(led couleur);
	void set_voyant_prise(led couleur);
	void set_voyant_defaut(led couleur);
	void set_voyant_trappe(led couleur);
	void blink_charge(led couleur);
	void blink_defaut(led couleur);	
};


#endif
