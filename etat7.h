#ifndef ETAT7_H
#define ETAT7_H

#include "Etat.h"

class Etat7
{
public:
    Etat7(string name);
    virtual ~Etat7();
    bool transition(Automate & automate, Symbole * s);
};

#endif // ETAT7_H
