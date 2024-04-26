#ifndef TIMER_H
#define TIMER_H
#include <donnees_borne.h>



class Timer{
	entrees *io;
	int depart_timer, end_timer;
	int shmid;
	public :
	void initialiser();
	int get_value();
};


#endif
