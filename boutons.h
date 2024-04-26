#ifndef BOUTONS_H
#define BOUTONS_H
#include <donnees_borne.h>
#include "Timer.h"
#include "Voyants.h"



typedef enum{
	CHARGE = 0, /*!< Bouton charge */
	STP			/*!< Bouton stop */

}button;



typedef enum{
        TIMEOUT = 0, 	/*!< Bouton charge n'est pas appuié avant le temps défini */
        SUCCESS			/*!< Bouton charge est appuié avec success avant le temps défini */

}status;


class Boutons{
	entrees *io;
	int shmid;
	Timer timer;
	Voyants voyant;
	public:
	Boutons();
	int get_bouton(button but);
	status attente_boutons(int temps);
};

#endif
