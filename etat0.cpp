#include "etat0.h"

Etat0::Etat0() : Etat("Etat 0")
{
   return;
}

Etat0::print()
{}

Etat0::transition(Automate & automate, Symbole * s)
{
    switch(*s)
    {
    case ENTIER:
        automate.decalage(s, new Etat3);
        break;
    case PLUS:
    case MULT:
    case OUVRE:
        automate.decalage(s, new Etat2);
        break;
    case FERME:
    case EXPR:
        automate.decalage(s, new Etat1);
        break;
    }
    return false;
}
