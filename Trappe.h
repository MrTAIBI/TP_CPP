#ifndef TRAPPE_H
#define TRAPPE_H

#include "donnees_borne.h"
#include "Voyants.h"


class Trappe{
    int trappe_status;
    entrees *io;
    Voyants voyant;
public:
    Trappe();
    void Close();
    void Open();
};

#endif // TRAPPE_H
