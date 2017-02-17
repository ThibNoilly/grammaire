#include "etat3.h"

Etat3::Etat3(string name) : Etat(name)
{
   return;
}

Etat3::print()
{}

Etat3::transition(Automate & automate, Symbole * s)
{
    switch(*s)
    {
    case ENTIER:
    case PLUS:
        automate.reduction(1, s);
        break;
    case MULT:
        automate.reduction(1, s);
        break;
    case OUVRE:
    case FERME:
        automate.reduction(1, s);
        break;
    case EXPR:
    }
    automate.reduction(1, s);
    return false;
}
