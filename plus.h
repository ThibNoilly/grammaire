#include "symbole.h"

class Plus: public Symbole
{
public:
    Plus() : Symbole(PLUS) {}
    virtual ~Plus() {}
};
