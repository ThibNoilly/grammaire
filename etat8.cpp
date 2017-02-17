#include "etat8.h"

Etat8::Etat8(string name) : Etat(name)
{
   return;
}

Etat8::print()
{}

Etat8::transition(Automate & automate, Symbole * s)
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
