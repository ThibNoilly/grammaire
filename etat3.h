#ifndef ETAT3_H
#define ETAT3_H

#include "Etat.h"

class Etat3
{
public:
    Etat3(string name);
    virtual ~Etat3();
    bool transition(Automate & automate, Symbole * s);
};

#endif // ETAT3_H
