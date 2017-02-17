#include "Symbole.h"

class Expr : public Symbole
{
public:
    Expr() : Symbole(EXPR) {}
    virtual ~Expr() {}
    virtual int eval() = 0;
};
