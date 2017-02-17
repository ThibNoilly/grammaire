#ifndef ETAT1_H
#define ETAT1_H

#include "Etat.h"

class Etat1
{
public:
    Etat1(string name);
    virtual ~Etat1();
    bool transition(Automate & automate, Symbole * s);
};

#endif // ETAT1_H
