#ifndef ETAT4_H
#define ETAT4_H

#include "Etat.h"

class Etat4
{
public:
    Etat4(string name);
    virtual ~Etat4();
    bool transition(Automate & automate, Symbole * s);
};

#endif // ETAT4_H
