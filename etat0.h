#ifndef ETAT0_H
#define ETAT0_H

#include "Etat.h"

class Etat0 : public Etat
{
public:
    Etat0();
    virtual ~Etat0();
    bool transition(Automate & automate, Symbole * s);
};

#endif // ETAT0_H
