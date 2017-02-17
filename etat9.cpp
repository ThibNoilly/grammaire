#include "etat9.h"

Etat9::Etat9(string name) : Etat(name)
{
   return;
}

Etat9::print()
{}

Etat9::transition(Automate & automate, Symbole * s)
{
    switch(*s)
    {
    case ENTIER:
    case PLUS:
        automate.reduction(3, s);
        break;
    case MULT:
        automate.reduction(3, s);
        break;
    case OUVRE:
    case FERME:
        automate.reduction(3, s);
        break;
    case EXPR:
    }
    automate.reduction(3, s);
    return false;
}
