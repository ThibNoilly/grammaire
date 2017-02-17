#ifndef ENTIER_H
#define ENTIER_H

#include "Symbole.h"

class Entier : public Symbole
{
public:
    Entier():Expr(ENTIER) {}
    virtual ~Entier() {}
};

#endif // ENTIER_H
