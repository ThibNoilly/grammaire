#ifndef OUVRE_H
#define OUVRE_H

#include "Symbole.h"

class Ouvre : public Symbole
{
public:
    Ouvre() : Symbole(OUVRE) {}
    virtual ~Ouvre() {}
};

#endif // OUVRE_H
