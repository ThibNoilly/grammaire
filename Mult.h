#include "symbole.h"

class Mult: public Symbole
{
public:
    Mult() : Symbole(MULT) {}
    virtual ~Mult() {}
};
