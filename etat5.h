#ifndef ETAT5_H
#define ETAT5_H

#include "Etat.h"

class Etat5
{
public:
    Etat5(string name);
    virtual ~Etat5();
    bool transition(Automate & automate, Symbole * s);
};

#endif // ETAT5_H
