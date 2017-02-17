#include "etat7.h"

Etat7::Etat7(string name) : Etat(name)
{
   return;
}

Etat7::print()
{}

Etat7::transition(Automate & automate, Symbole * s)
{
    switch(*s)
    {
    case ENTIER:
    case PLUS:
        automate.reduction(3, s);
        break;
    case MULT:
        automate.decalage(s, new Etat5);
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
