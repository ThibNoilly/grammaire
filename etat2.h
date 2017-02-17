#ifndef ETAT2_H
#define ETAT2_H

#include "Etat.h"

class Etat2
{
public:
    Etat2(string name);
    virtual ~Etat2();
    bool transition(Automate & automate, Symbole * s);
};

#endif // ETAT2_H
