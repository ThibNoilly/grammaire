#ifndef ETAT8_H
#define ETAT8_H

#include "Etat.h"

class Etat8
{
public:
    Etat8(string name);
    virtual ~Etat8();
    bool transition(Automate & automate, Symbole * s);
};

#endif // ETAT8_H
