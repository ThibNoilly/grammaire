#ifndef ETAT9_H
#define ETAT9_H

#include "Etat.h"

class Etat9
{
public:
    Etat9(string name);
    virtual ~Etat9();
    bool transition(Automate & automate, Symbole * s);
};

#endif // ETAT9_H
