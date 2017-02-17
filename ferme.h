#ifndef FERME_H
#define FERME_H

#include "Symbole.h"

class Ferme : public Symbole
{
public:
    Ferme():Symbole(FERME) {}
    virtual ~Ferme() {}
};

#endif // FERME_H
