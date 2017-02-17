#ifndef ETAT6_H
#define ETAT6_H

#include "Etat.h"

class Etat6
{
public:
    Etat6(string name);
    virtual ~Etat6();
    bool transition(Automate & automate, Symbole * s);
};

#endif // ETAT6_H
